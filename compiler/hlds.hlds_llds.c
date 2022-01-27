/*
** Automatically generated from `hlds_llds.m'
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


/* :- module hlds.hlds_llds. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_llds__init
ENDINIT
*/

#include "hlds.hlds_llds.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 142 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

#line 145 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3];

#line 148 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3];

#line 151 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0;

#line 154 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1];

#line 157 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1];

#line 160 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1];

#line 163 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1];

#line 166 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0;

#line 169 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2];

#line 172 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1;

#line 175 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2];

#line 178 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2;

#line 181 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2];

#line 184 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3;

#line 187 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1];

#line 190 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4;

#line 193 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1];

#line 196 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1];

#line 199 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1];

#line 202 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2];

#line 205 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4];

#line 208 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5];

#line 211 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5];

#line 214 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 217 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

#line 220 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8];

#line 223 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8];

#line 226 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0;

#line 229 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1];

#line 232 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1];

#line 235 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1];

#line 238 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1];

#line 241 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0;

#line 244 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1];

#line 247 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1;

#line 250 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1];

#line 253 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2;

#line 256 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1];

#line 259 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3;

#line 262 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1];

#line 265 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1];

#line 268 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1];

#line 271 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1];

#line 274 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4];

#line 277 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4];

#line 280 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4];

#line 283 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3];

#line 286 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3];

#line 289 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0;

#line 292 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1];

#line 295 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1];

#line 298 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1];

#line 301 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1];

#line 304 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1];

#line 307 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 310 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0;

#line 313 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1];

#line 316 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0;

#line 319 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3];

#line 322 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3];

#line 325 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0;

#line 328 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1];

#line 331 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1];

#line 334 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1];

#line 337 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1];

#line 340 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0;

#line 343 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1;

#line 346 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2];

#line 349 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2];

#line 352 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2];

#line 355 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0;

#line 358 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1;

#line 361 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2;

#line 364 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3;

#line 367 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4];

#line 370 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4];

#line 373 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4];

#line 376 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2];

#line 379 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0;

#line 382 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1;

#line 385 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1];

#line 388 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1];

#line 391 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2];

#line 394 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2];

#line 397 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2];

#line 400 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2];

#line 403 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0;

#line 406 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2];

#line 409 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1;

#line 412 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1];

#line 415 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2;

#line 418 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1];

#line 421 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1];

#line 424 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1];

#line 427 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3];

#line 430 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3];

#line 433 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3];

#line 436 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0;

#line 439 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1;

#line 442 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2];

#line 445 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2];

#line 448 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2];

#line 451 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 454 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 457 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 459 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 462 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 465 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 467 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 469 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 472 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 475 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 477 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 480 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 483 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 485 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 487 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 490 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 493 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 495 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 498 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 501 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 503 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 505 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 508 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 511 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 513 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 516 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 519 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 521 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 523 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 526 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 529 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 531 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 534 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 537 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 539 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 541 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 544 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 547 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 549 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 552 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 555 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 557 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 559 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 562 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 565 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 567 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 570 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 573 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 575 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 577 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 580 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 583 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 585 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 588 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 591 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 593 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 595 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 598 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 601 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 603 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 606 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 609 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 611 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 613 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 616 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 619 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 621 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 624 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 627 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 629 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 631 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 634 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 637 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 639 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 642 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 645 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 647 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 649 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 652 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 655 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 657 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 660 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 663 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 665 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 667 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 670 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 673 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 675 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 678 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 681 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 683 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 685 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 688 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 691 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 693 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 696 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 699 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 701 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 703 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 706 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 709 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 711 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 714 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 717 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 719 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 721 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 724 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 727 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 729 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 732 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 735 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 737 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 739 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 357 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
#line 357 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3);

#line 357 "hlds_llds.m"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2);

#line 779 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3,
#line 779 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__4_4);

#line 693 "hlds_llds.m"
static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
#line 693 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1);

#line 323 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
#line 323 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 323 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_2,
#line 323 "hlds_llds.m"
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
#line 323 "hlds_llds.m"
  MR_String * hlds__hlds_llds__STATE_VARIABLE_Explanation_4);


static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__hlds_llds_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_llds_scalar_common_1[0])),
    ((MR_Box) (&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0))
  },
};

static /* final */ const MR_Box hlds__hlds_llds_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "(double width)"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 854 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 862 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

#line 871 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 878 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3] = {
  (MR_String) "afv_map",
  (MR_String) "afv_next_non_res_reg_r",
  (MR_String) "afv_next_non_res_reg_f"
};

#line 885 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0 = {
  (MR_String) "abs_follow_vars",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0,
  NULL,
  NULL
};

#line 900 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 905 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0
  }
};

#line 914 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 919 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1] = {
  (MR_Integer) 0
};

#line 924 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0
};

#line 941 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 958 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0 = {
  (MR_String) "any_reg",
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

#line 973 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 979 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1 = {
  (MR_String) "abs_reg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1,
  NULL,
  NULL,
  NULL
};

#line 994 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1000 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2 = {
  (MR_String) "abs_stackvar",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2,
  NULL,
  NULL,
  NULL
};

#line 1015 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1021 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3 = {
  (MR_String) "abs_parent_stackvar",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3,
  NULL,
  NULL,
  NULL
};

#line 1036 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1041 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4 = {
  (MR_String) "abs_framevar",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4,
  NULL,
  NULL,
  NULL
};

#line 1056 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1061 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1
};

#line 1066 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2
};

#line 1071 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4
};

#line 1077 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3
  }
};

#line 1101 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1110 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1119 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_locn_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_locn",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0
};

#line 1136 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_store_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_store_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_store_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1153 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1161 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0
  }
};

#line 1169 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0
};

#line 1181 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8] = {
  (MR_String) "pre_births",
  (MR_String) "post_births",
  (MR_String) "pre_deaths",
  (MR_String) "post_deaths",
  (MR_String) "follow_vars",
  (MR_String) "store_map",
  (MR_String) "resume_point",
  (MR_String) "maybe_need"
};

#line 1193 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0 = {
  (MR_String) "llds_code_gen_details",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0,
  NULL,
  NULL
};

#line 1208 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1213 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0
  }
};

#line 1222 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1227 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1] = {
  (MR_Integer) 0
};

#line 1232 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "llds_code_gen_details",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0
};

#line 1249 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0 = {
  (MR_String) "no_need",
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

#line 1264 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0
};

#line 1269 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1 = {
  (MR_String) "need_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1,
  NULL,
  NULL,
  NULL
};

#line 1284 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0
};

#line 1289 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2 = {
  (MR_String) "need_resume",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2,
  NULL,
  NULL,
  NULL
};

#line 1304 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0
};

#line 1309 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3 = {
  (MR_String) "need_par_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3,
  NULL,
  NULL,
  NULL
};

#line 1324 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1329 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1
};

#line 1334 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2
};

#line 1339 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3
};

#line 1344 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3
  }
};

#line 1368 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1376 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1384 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____maybe_need_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____maybe_need_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "maybe_need",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0
};

#line 1401 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1408 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3] = {
  (MR_String) "call_forward_vars",
  (MR_String) "call_resume_vars",
  (MR_String) "call_nondet_vars"
};

#line 1415 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0 = {
  (MR_String) "need_across_call",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0,
  NULL,
  NULL
};

#line 1430 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1435 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0
  }
};

#line 1444 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1449 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1] = {
  (MR_Integer) 0
};

#line 1454 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_across_call_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_across_call_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_across_call",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0
};

#line 1471 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1] = {
  (MR_Integer) 0
};

#line 1476 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1484 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 = {
  (MR_String) "need_for_loop_control",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "loop_control_distinct_stackvars"
};

#line 1491 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_for_loop_control",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0
};

#line 1508 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1] = {
  (MR_Integer) 0
};

#line 1513 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
  (MR_String) "need_in_par_conj",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_engine_vars"
};

#line 1520 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_par_conj",
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  {     &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0
};

#line 1537 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1544 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3] = {
  (MR_String) "resume_vars_on_stack",
  (MR_String) "resume_resume_vars",
  (MR_String) "resume_nondet_vars"
};

#line 1551 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0 = {
  (MR_String) "need_in_resume",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0,
  hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0,
  NULL,
  NULL
};

#line 1566 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1571 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0
  }
};

#line 1580 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1585 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1] = {
  (MR_Integer) 0
};

#line 1590 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_resume_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_resume_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_resume",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0
};

#line 1607 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0 = {
  (MR_String) "reg_r",
  (MR_Integer) 0
};

#line 1613 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1 = {
  (MR_String) "reg_f",
  (MR_Integer) 1
};

#line 1619 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1
};

#line 1625 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0
};

#line 1631 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1637 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____reg_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____reg_type_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "reg_type",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0
};

#line 1654 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
  (MR_String) "resume_locs_orig_only",
  (MR_Integer) 0
};

#line 1660 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
  (MR_String) "resume_locs_stack_only",
  (MR_Integer) 1
};

#line 1666 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
  (MR_String) "resume_locs_orig_and_stack",
  (MR_Integer) 2
};

#line 1672 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
  (MR_String) "resume_locs_stack_and_orig",
  (MR_Integer) 3
};

#line 1678 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

#line 1686 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1
};

#line 1694 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1702 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_locs_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_locs_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_locs",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0
};

#line 1719 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0
};

#line 1725 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0 = {
  (MR_String) "resume_point",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0,
  NULL,
  NULL,
  NULL
};

#line 1740 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1 = {
  (MR_String) "no_resume_point",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1755 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1
};

#line 1760 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1765 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1
  }
};

#line 1779 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1785 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1791 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_point_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_point_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_point",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0
};

#line 1808 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1814 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0 = {
  (MR_String) "det_slot",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0,
  NULL,
  NULL,
  NULL
};

#line 1829 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1835 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1 = {
  (MR_String) "parent_det_slot",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1,
  NULL,
  NULL,
  NULL
};

#line 1850 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1855 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2 = {
  (MR_String) "nondet_slot",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2,
  NULL,
  NULL,
  NULL
};

#line 1870 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0
};

#line 1875 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1880 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2
};

#line 1885 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2
  }
};

#line 1904 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1911 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1918 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot",
  {     hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0
};

#line 1935 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0 = {
  (MR_String) "single_width",
  (MR_Integer) 0
};

#line 1941 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1 = {
  (MR_String) "double_width",
  (MR_Integer) 1
};

#line 1947 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1
};

#line 1953 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0
};

#line 1959 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1965 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_width_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_width_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot_width",
  {     hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0 },
  {     hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0
};

#line 1982 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 1991 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slots_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slots_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slots",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2008 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 2011 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2013 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2015 "hlds.hlds_llds.c"
{
#line 2017 "hlds.hlds_llds.c"
  {
#line 2019 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2022 "hlds.hlds_llds.c"
    {
#line 2024 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2027 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2029 "hlds.hlds_llds.c"
  }
#line 2031 "hlds.hlds_llds.c"
}

#line 2034 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 2037 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2039 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2041 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2043 "hlds.hlds_llds.c"
{
#line 2045 "hlds.hlds_llds.c"
  {
#line 2047 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2050 "hlds.hlds_llds.c"
    {
#line 2052 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2055 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2057 "hlds.hlds_llds.c"
  }
#line 2059 "hlds.hlds_llds.c"
}

#line 2062 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 2065 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2067 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2069 "hlds.hlds_llds.c"
{
#line 2071 "hlds.hlds_llds.c"
  {
#line 2073 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2076 "hlds.hlds_llds.c"
    {
#line 2078 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2081 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2083 "hlds.hlds_llds.c"
  }
#line 2085 "hlds.hlds_llds.c"
}

#line 2088 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 2091 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2093 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2095 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2097 "hlds.hlds_llds.c"
{
#line 2099 "hlds.hlds_llds.c"
  {
#line 2101 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2104 "hlds.hlds_llds.c"
    {
#line 2106 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2109 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2111 "hlds.hlds_llds.c"
  }
#line 2113 "hlds.hlds_llds.c"
}

#line 2116 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 2119 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2121 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2123 "hlds.hlds_llds.c"
{
#line 2125 "hlds.hlds_llds.c"
  {
#line 2127 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2130 "hlds.hlds_llds.c"
    {
#line 2132 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_locn_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2135 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2137 "hlds.hlds_llds.c"
  }
#line 2139 "hlds.hlds_llds.c"
}

#line 2142 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 2145 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2147 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2149 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2151 "hlds.hlds_llds.c"
{
#line 2153 "hlds.hlds_llds.c"
  {
#line 2155 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2158 "hlds.hlds_llds.c"
    {
#line 2160 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_locn_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2163 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2165 "hlds.hlds_llds.c"
  }
#line 2167 "hlds.hlds_llds.c"
}

#line 2170 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 2173 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2175 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2177 "hlds.hlds_llds.c"
{
#line 2179 "hlds.hlds_llds.c"
  {
#line 2181 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2184 "hlds.hlds_llds.c"
    {
#line 2186 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_store_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2189 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2191 "hlds.hlds_llds.c"
  }
#line 2193 "hlds.hlds_llds.c"
}

#line 2196 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 2199 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2201 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2203 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2205 "hlds.hlds_llds.c"
{
#line 2207 "hlds.hlds_llds.c"
  {
#line 2209 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2212 "hlds.hlds_llds.c"
    {
#line 2214 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_store_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2217 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2219 "hlds.hlds_llds.c"
  }
#line 2221 "hlds.hlds_llds.c"
}

#line 2224 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 2227 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2229 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2231 "hlds.hlds_llds.c"
{
#line 2233 "hlds.hlds_llds.c"
  {
#line 2235 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2238 "hlds.hlds_llds.c"
    {
#line 2240 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____llds_code_gen_details_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2243 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2245 "hlds.hlds_llds.c"
  }
#line 2247 "hlds.hlds_llds.c"
}

#line 2250 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 2253 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2255 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2257 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2259 "hlds.hlds_llds.c"
{
#line 2261 "hlds.hlds_llds.c"
  {
#line 2263 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2266 "hlds.hlds_llds.c"
    {
#line 2268 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____llds_code_gen_details_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2271 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2273 "hlds.hlds_llds.c"
  }
#line 2275 "hlds.hlds_llds.c"
}

#line 2278 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 2281 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2283 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2285 "hlds.hlds_llds.c"
{
#line 2287 "hlds.hlds_llds.c"
  {
#line 2289 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2292 "hlds.hlds_llds.c"
    {
#line 2294 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____maybe_need_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2297 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2299 "hlds.hlds_llds.c"
  }
#line 2301 "hlds.hlds_llds.c"
}

#line 2304 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 2307 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2309 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2311 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2313 "hlds.hlds_llds.c"
{
#line 2315 "hlds.hlds_llds.c"
  {
#line 2317 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2320 "hlds.hlds_llds.c"
    {
#line 2322 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____maybe_need_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2325 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2327 "hlds.hlds_llds.c"
  }
#line 2329 "hlds.hlds_llds.c"
}

#line 2332 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 2335 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2337 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2339 "hlds.hlds_llds.c"
{
#line 2341 "hlds.hlds_llds.c"
  {
#line 2343 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2346 "hlds.hlds_llds.c"
    {
#line 2348 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2351 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2353 "hlds.hlds_llds.c"
  }
#line 2355 "hlds.hlds_llds.c"
}

#line 2358 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 2361 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2363 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2365 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2367 "hlds.hlds_llds.c"
{
#line 2369 "hlds.hlds_llds.c"
  {
#line 2371 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2374 "hlds.hlds_llds.c"
    {
#line 2376 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_across_call_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2379 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2381 "hlds.hlds_llds.c"
  }
#line 2383 "hlds.hlds_llds.c"
}

#line 2386 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 2389 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2391 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2393 "hlds.hlds_llds.c"
{
#line 2395 "hlds.hlds_llds.c"
  {
#line 2397 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2400 "hlds.hlds_llds.c"
    {
#line 2402 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_for_loop_control_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2405 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2407 "hlds.hlds_llds.c"
  }
#line 2409 "hlds.hlds_llds.c"
}

#line 2412 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 2415 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2417 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2419 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2421 "hlds.hlds_llds.c"
{
#line 2423 "hlds.hlds_llds.c"
  {
#line 2425 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2428 "hlds.hlds_llds.c"
    {
#line 2430 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_for_loop_control_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2433 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2435 "hlds.hlds_llds.c"
  }
#line 2437 "hlds.hlds_llds.c"
}

#line 2440 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 2443 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2445 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2447 "hlds.hlds_llds.c"
{
#line 2449 "hlds.hlds_llds.c"
  {
#line 2451 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2454 "hlds.hlds_llds.c"
    {
#line 2456 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2459 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2461 "hlds.hlds_llds.c"
  }
#line 2463 "hlds.hlds_llds.c"
}

#line 2466 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 2469 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2471 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2473 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2475 "hlds.hlds_llds.c"
{
#line 2477 "hlds.hlds_llds.c"
  {
#line 2479 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2482 "hlds.hlds_llds.c"
    {
#line 2484 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_par_conj_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2487 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2489 "hlds.hlds_llds.c"
  }
#line 2491 "hlds.hlds_llds.c"
}

#line 2494 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 2497 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2499 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2501 "hlds.hlds_llds.c"
{
#line 2503 "hlds.hlds_llds.c"
  {
#line 2505 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2508 "hlds.hlds_llds.c"
    {
#line 2510 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2513 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2515 "hlds.hlds_llds.c"
  }
#line 2517 "hlds.hlds_llds.c"
}

#line 2520 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 2523 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2525 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2527 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2529 "hlds.hlds_llds.c"
{
#line 2531 "hlds.hlds_llds.c"
  {
#line 2533 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2536 "hlds.hlds_llds.c"
    {
#line 2538 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_resume_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2541 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2543 "hlds.hlds_llds.c"
  }
#line 2545 "hlds.hlds_llds.c"
}

#line 2548 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 2551 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2553 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2555 "hlds.hlds_llds.c"
{
#line 2557 "hlds.hlds_llds.c"
  {
#line 2559 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2562 "hlds.hlds_llds.c"
    {
#line 2564 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____reg_type_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2567 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2569 "hlds.hlds_llds.c"
  }
#line 2571 "hlds.hlds_llds.c"
}

#line 2574 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 2577 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2579 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2581 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2583 "hlds.hlds_llds.c"
{
#line 2585 "hlds.hlds_llds.c"
  {
#line 2587 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2590 "hlds.hlds_llds.c"
    {
#line 2592 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____reg_type_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2595 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2597 "hlds.hlds_llds.c"
  }
#line 2599 "hlds.hlds_llds.c"
}

#line 2602 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 2605 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2607 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2609 "hlds.hlds_llds.c"
{
#line 2611 "hlds.hlds_llds.c"
  {
#line 2613 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2616 "hlds.hlds_llds.c"
    {
#line 2618 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_locs_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2621 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2623 "hlds.hlds_llds.c"
  }
#line 2625 "hlds.hlds_llds.c"
}

#line 2628 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 2631 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2633 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2635 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2637 "hlds.hlds_llds.c"
{
#line 2639 "hlds.hlds_llds.c"
  {
#line 2641 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2644 "hlds.hlds_llds.c"
    {
#line 2646 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_locs_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2649 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2651 "hlds.hlds_llds.c"
  }
#line 2653 "hlds.hlds_llds.c"
}

#line 2656 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 2659 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2661 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2663 "hlds.hlds_llds.c"
{
#line 2665 "hlds.hlds_llds.c"
  {
#line 2667 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2670 "hlds.hlds_llds.c"
    {
#line 2672 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2675 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2677 "hlds.hlds_llds.c"
  }
#line 2679 "hlds.hlds_llds.c"
}

#line 2682 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 2685 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2687 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2689 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2691 "hlds.hlds_llds.c"
{
#line 2693 "hlds.hlds_llds.c"
  {
#line 2695 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2698 "hlds.hlds_llds.c"
    {
#line 2700 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2703 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2705 "hlds.hlds_llds.c"
  }
#line 2707 "hlds.hlds_llds.c"
}

#line 2710 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 2713 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2715 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2717 "hlds.hlds_llds.c"
{
#line 2719 "hlds.hlds_llds.c"
  {
#line 2721 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2724 "hlds.hlds_llds.c"
    {
#line 2726 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2729 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2731 "hlds.hlds_llds.c"
  }
#line 2733 "hlds.hlds_llds.c"
}

#line 2736 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 2739 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2741 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2743 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2745 "hlds.hlds_llds.c"
{
#line 2747 "hlds.hlds_llds.c"
  {
#line 2749 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2752 "hlds.hlds_llds.c"
    {
#line 2754 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2757 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2759 "hlds.hlds_llds.c"
  }
#line 2761 "hlds.hlds_llds.c"
}

#line 2764 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 2767 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2769 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2771 "hlds.hlds_llds.c"
{
#line 2773 "hlds.hlds_llds.c"
  {
#line 2775 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2778 "hlds.hlds_llds.c"
    {
#line 2780 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_width_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2783 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2785 "hlds.hlds_llds.c"
  }
#line 2787 "hlds.hlds_llds.c"
}

#line 2790 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 2793 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2795 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2797 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2799 "hlds.hlds_llds.c"
{
#line 2801 "hlds.hlds_llds.c"
  {
#line 2803 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2806 "hlds.hlds_llds.c"
    {
#line 2808 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_width_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2811 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2813 "hlds.hlds_llds.c"
  }
#line 2815 "hlds.hlds_llds.c"
}

#line 2818 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 2821 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2823 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2825 "hlds.hlds_llds.c"
{
#line 2827 "hlds.hlds_llds.c"
  {
#line 2829 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2832 "hlds.hlds_llds.c"
    {
#line 2834 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slots_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2837 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2839 "hlds.hlds_llds.c"
  }
#line 2841 "hlds.hlds_llds.c"
}

#line 2844 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 2847 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2849 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2851 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2853 "hlds.hlds_llds.c"
{
#line 2855 "hlds.hlds_llds.c"
  {
#line 2857 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2860 "hlds.hlds_llds.c"
    {
#line 2862 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slots_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2865 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2867 "hlds.hlds_llds.c"
  }
#line 2869 "hlds.hlds_llds.c"
}

#line 300 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(
#line 300 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 300 "hlds_llds.m"
{
#line 810 "hlds_llds.m"
  {
#line 810 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 810 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__3_3;

#line 810 "hlds_llds.m"
#line 810 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_5)) {
#line 810 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 810 "hlds_llds.m"
      case (MR_Integer) 0:
#line 810 "hlds_llds.m"
        {
#line 810 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
#line 810 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

#line 811 "hlds_llds.m"
          {
#line 811 "hlds_llds.m"
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "hlds_llds.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_llds__N_9));
#line 811 "hlds_llds.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__Width_10));
#line 811 "hlds_llds.m"
          }
#line 810 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
      case (MR_Integer) 1:
#line 813 "hlds_llds.m"
        {
#line 813 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
#line 813 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

#line 814 "hlds_llds.m"
          {
#line 814 "hlds_llds.m"
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_11));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_llds__Width_12));
#line 814 "hlds_llds.m"
          }
#line 813 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
      case (MR_Integer) 2:
#line 816 "hlds_llds.m"
        {
#line 816 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));

#line 817 "hlds_llds.m"
          {
#line 817 "hlds_llds.m"
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 817 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_13));
#line 817 "hlds_llds.m"
          }
#line 816 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
    }
#line 810 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__3_3;
#line 810 "hlds_llds.m"
  }
#line 300 "hlds_llds.m"
}

#line 52 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0(
#line 52 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 52 "hlds_llds.m"
{
#line 52 "hlds_llds.m"
  {
#line 52 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 52 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 52 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 52 "hlds_llds.m"
    {
#line 52 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
    }
#line 52 "hlds_llds.m"
  }
#line 52 "hlds_llds.m"
}

#line 52 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0(
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 52 "hlds_llds.m"
{
#line 52 "hlds_llds.m"
  {
#line 52 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 52 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 52 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 52 "hlds_llds.m"
    {
#line 52 "hlds_llds.m"
      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 52 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 52 "hlds_llds.m"
  }
#line 52 "hlds_llds.m"
}

#line 46 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0(
#line 46 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 46 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 46 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 46 "hlds_llds.m"
{
#line 46 "hlds_llds.m"
  {
#line 46 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 46 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 46 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 46 "hlds_llds.m"
    {
#line 46 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
    }
#line 46 "hlds_llds.m"
  }
#line 46 "hlds_llds.m"
}

#line 46 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0(
#line 46 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 46 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 46 "hlds_llds.m"
{
#line 3068 "hlds.hlds_llds.c"
  {
#line 3070 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3073 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3075 "hlds.hlds_llds.c"
  }
#line 46 "hlds_llds.m"
}

#line 41 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0(
#line 41 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 41 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 41 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 41 "hlds_llds.m"
{
#line 41 "hlds_llds.m"
  {
#line 41 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 41 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_36 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 41 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_37 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 41 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_36 == hlds__hlds_llds__CastY_37);
#line 41 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3104 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "hlds_llds.m"
    else
#line 41 "hlds_llds.m"
#line 41 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 41 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "hlds_llds.m"
        case (MR_Integer) 0:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "hlds_llds.m"
#line 41 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 41 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "hlds_llds.m"
              case (MR_Integer) 0:
#line 41 "hlds_llds.m"
                {
#line 41 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_8_8;

#line 41 "hlds_llds.m"
                  {
#line 41 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_8_8, hlds__hlds_llds__V_44_44, hlds__hlds_llds__V_6_6);
                  }
#line 3143 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 41 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 41 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 41 "hlds_llds.m"
                  else
#line 41 "hlds_llds.m"
                    {
#line 41 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_48_48 = (MR_Integer) hlds__hlds_llds__V_43_43;
#line 41 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_49_49 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 41 "hlds_llds.m"
                      {
#line 41 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_48_48, hlds__hlds_llds__V_49_49);
                      }
#line 41 "hlds_llds.m"
                    }
#line 41 "hlds_llds.m"
                }
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 1:
#line 3173 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 2:
#line 3179 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
            }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
        case (MR_Integer) 1:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "hlds_llds.m"
#line 41 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 41 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "hlds_llds.m"
              case (MR_Integer) 0:
#line 3205 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 1:
#line 41 "hlds_llds.m"
                {
#line 41 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_24_24;

#line 41 "hlds_llds.m"
                  {
#line 41 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_24_24, hlds__hlds_llds__V_47_47, hlds__hlds_llds__V_22_22);
                  }
#line 3225 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_24_24 == (MR_Integer) 0);
#line 41 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 41 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_24_24;
#line 41 "hlds_llds.m"
                  else
#line 41 "hlds_llds.m"
                    {
#line 41 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_50_50 = (MR_Integer) hlds__hlds_llds__V_46_46;
#line 41 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_51_51 = (MR_Integer) hlds__hlds_llds__V_23_23;

#line 41 "hlds_llds.m"
                      {
#line 41 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_50_50, hlds__hlds_llds__V_51_51);
                      }
#line 41 "hlds_llds.m"
                    }
#line 41 "hlds_llds.m"
                }
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 2:
#line 3255 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
            }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
        case (MR_Integer) 2:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "hlds_llds.m"
#line 41 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 41 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "hlds_llds.m"
              case (MR_Integer) 0:
#line 3279 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 1:
#line 3285 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
              case (MR_Integer) 2:
#line 41 "hlds_llds.m"
                {
#line 41 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

#line 41 "hlds_llds.m"
                  {
#line 41 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_45_45, hlds__hlds_llds__V_35_35);
                  }
#line 41 "hlds_llds.m"
                }
#line 41 "hlds_llds.m"
                break;
#line 41 "hlds_llds.m"
            }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
      }
#line 41 "hlds_llds.m"
  }
#line 41 "hlds_llds.m"
}

#line 41 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0(
#line 41 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 41 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 41 "hlds_llds.m"
{
#line 41 "hlds_llds.m"
  {
#line 41 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 41 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 41 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 41 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 41 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 41 "hlds_llds.m"
    else
#line 41 "hlds_llds.m"
#line 41 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 41 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "hlds_llds.m"
        case (MR_Integer) 0:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_5_5;
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6;

#line 41 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 41 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
              {
#line 41 "hlds_llds.m"
                hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
                hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3372 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_5_5);
#line 41 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 3376 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 41 "hlds_llds.m"
              }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
        case (MR_Integer) 1:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_9_9;
#line 41 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10;

#line 41 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 41 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
              {
#line 41 "hlds_llds.m"
                hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3407 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_7_7 == hlds__hlds_llds__V_9_9);
#line 41 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 3411 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == hlds__hlds_llds__V_10_10);
#line 41 "hlds_llds.m"
              }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
        case (MR_Integer) 2:
#line 41 "hlds_llds.m"
          {
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_12_12;

#line 41 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 41 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 41 "hlds_llds.m"
              {
#line 41 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 3436 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == hlds__hlds_llds__V_12_12);
#line 41 "hlds_llds.m"
              }
#line 41 "hlds_llds.m"
          }
#line 41 "hlds_llds.m"
          break;
#line 41 "hlds_llds.m"
      }
#line 41 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 41 "hlds_llds.m"
  }
#line 41 "hlds_llds.m"
}

#line 89 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0(
#line 89 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 89 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 89 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 89 "hlds_llds.m"
{
#line 89 "hlds_llds.m"
  {
#line 89 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 89 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 89 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 89 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 89 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3477 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "hlds_llds.m"
    else
#line 89 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "hlds_llds.m"
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "hlds_llds.m"
      else
#line 3489 "hlds.hlds_llds.c"
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "hlds_llds.m"
    else
#line 89 "hlds_llds.m"
      {
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 89 "hlds_llds.m"
        if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3502 "hlds.hlds_llds.c"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "hlds_llds.m"
        else
#line 89 "hlds_llds.m"
          {
#line 89 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8;

#line 89 "hlds_llds.m"
            {
#line 89 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_8_8, ((MR_Box) (hlds__hlds_llds__V_18_18)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
            }
#line 3520 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 89 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 89 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 89 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 89 "hlds_llds.m"
            else
#line 89 "hlds_llds.m"
              {
#line 89 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_19_19 = (MR_Integer) hlds__hlds_llds__V_17_17;
#line 89 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_20_20 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 89 "hlds_llds.m"
                {
#line 89 "hlds_llds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_19_19, hlds__hlds_llds__V_20_20);
                }
#line 89 "hlds_llds.m"
              }
#line 89 "hlds_llds.m"
          }
#line 89 "hlds_llds.m"
      }
#line 89 "hlds_llds.m"
  }
#line 89 "hlds_llds.m"
}

#line 89 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0(
#line 89 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 89 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 89 "hlds_llds.m"
{
#line 89 "hlds_llds.m"
  {
#line 89 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 89 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 89 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 89 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 89 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 89 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 89 "hlds_llds.m"
    else
#line 89 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "hlds_llds.m"
      {
#line 89 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastX_7 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 89 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastY_8 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 89 "hlds_llds.m"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_8 == hlds__hlds_llds__CastX_7);
#line 89 "hlds_llds.m"
      }
#line 89 "hlds_llds.m"
    else
#line 89 "hlds_llds.m"
      {
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5;
#line 89 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6;

#line 89 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 89 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 89 "hlds_llds.m"
          {
#line 89 "hlds_llds.m"
            hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "hlds_llds.m"
            hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3617 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3619 "hlds.hlds_llds.c"
            {
#line 3621 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
            }
#line 89 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 3626 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 89 "hlds_llds.m"
          }
#line 89 "hlds_llds.m"
      }
#line 89 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 89 "hlds_llds.m"
  }
#line 89 "hlds_llds.m"
}

#line 93 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0(
#line 93 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 93 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 93 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 93 "hlds_llds.m"
{
#line 93 "hlds_llds.m"
  {
#line 93 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 93 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 93 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 93 "hlds_llds.m"
    {
#line 93 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
    }
#line 93 "hlds_llds.m"
  }
#line 93 "hlds_llds.m"
}

#line 93 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0(
#line 93 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 93 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 93 "hlds_llds.m"
{
#line 3678 "hlds.hlds_llds.c"
  {
#line 3680 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3683 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3685 "hlds.hlds_llds.c"
  }
#line 93 "hlds_llds.m"
}

#line 37 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0(
#line 37 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 37 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 37 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 37 "hlds_llds.m"
{
#line 37 "hlds_llds.m"
  {
#line 37 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 37 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 37 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 37 "hlds_llds.m"
    {
#line 37 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
    }
#line 37 "hlds_llds.m"
  }
#line 37 "hlds_llds.m"
}

#line 37 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0(
#line 37 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 37 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 37 "hlds_llds.m"
{
#line 3729 "hlds.hlds_llds.c"
  {
#line 3731 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3734 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3736 "hlds.hlds_llds.c"
  }
#line 37 "hlds_llds.m"
}

#line 130 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0(
#line 130 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 130 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 130 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 130 "hlds_llds.m"
{
#line 130 "hlds_llds.m"
  {
#line 130 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 130 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 130 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 130 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 130 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3765 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "hlds_llds.m"
    else
#line 130 "hlds_llds.m"
      {
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;
#line 130 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_17_17 = (MR_Integer) hlds__hlds_llds__V_4_4;
#line 130 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_18_18 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 130 "hlds_llds.m"
        {
#line 130 "hlds_llds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_10_10, hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_18_18);
        }
#line 3795 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 130 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 130 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 130 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 130 "hlds_llds.m"
        else
#line 130 "hlds_llds.m"
          {
#line 130 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 130 "hlds_llds.m"
            {
#line 130 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 3815 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 130 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 130 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 130 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 130 "hlds_llds.m"
            else
#line 130 "hlds_llds.m"
              {
#line 130 "hlds_llds.m"
                {
#line 130 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
                }
#line 130 "hlds_llds.m"
              }
#line 130 "hlds_llds.m"
          }
#line 130 "hlds_llds.m"
      }
#line 130 "hlds_llds.m"
  }
#line 130 "hlds_llds.m"
}

#line 130 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0(
#line 130 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 130 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 130 "hlds_llds.m"
{
#line 130 "hlds_llds.m"
  {
#line 130 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 130 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 130 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 130 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 130 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 130 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 130 "hlds_llds.m"
    else
#line 130 "hlds_llds.m"
      {
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 3888 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_6_6);
#line 130 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 130 "hlds_llds.m"
          {
#line 3894 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3896 "hlds.hlds_llds.c"
            {
#line 3898 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 130 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 130 "hlds_llds.m"
              {
#line 3905 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3907 "hlds.hlds_llds.c"
                {
#line 3909 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 130 "hlds_llds.m"
              }
#line 130 "hlds_llds.m"
          }
#line 130 "hlds_llds.m"
      }
#line 130 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 130 "hlds_llds.m"
  }
#line 130 "hlds_llds.m"
}

#line 141 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0(
#line 141 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 141 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 141 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 141 "hlds_llds.m"
{
#line 141 "hlds_llds.m"
  {
#line 141 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 141 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 141 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 141 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 141 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3949 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 141 "hlds_llds.m"
    else
#line 141 "hlds_llds.m"
      {
#line 141 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 141 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 141 "hlds_llds.m"
        {
#line 141 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
        }
#line 141 "hlds_llds.m"
      }
#line 141 "hlds_llds.m"
  }
#line 141 "hlds_llds.m"
}

#line 141 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0(
#line 141 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 141 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 141 "hlds_llds.m"
{
#line 141 "hlds_llds.m"
  {
#line 141 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 141 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 141 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 141 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 141 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 141 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 141 "hlds_llds.m"
    else
#line 141 "hlds_llds.m"
      {
#line 141 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 141 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4005 "hlds.hlds_llds.c"
        {
#line 4007 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 141 "hlds_llds.m"
      }
#line 141 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 141 "hlds_llds.m"
  }
#line 141 "hlds_llds.m"
}

#line 150 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0(
#line 150 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 150 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 150 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 150 "hlds_llds.m"
{
#line 150 "hlds_llds.m"
  {
#line 150 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 150 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 150 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 150 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 150 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4043 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "hlds_llds.m"
    else
#line 150 "hlds_llds.m"
      {
#line 150 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 150 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 150 "hlds_llds.m"
        {
#line 150 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
        }
#line 150 "hlds_llds.m"
      }
#line 150 "hlds_llds.m"
  }
#line 150 "hlds_llds.m"
}

#line 150 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0(
#line 150 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 150 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 150 "hlds_llds.m"
{
#line 150 "hlds_llds.m"
  {
#line 150 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 150 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 150 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 150 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 150 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 150 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 150 "hlds_llds.m"
    else
#line 150 "hlds_llds.m"
      {
#line 150 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 150 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4099 "hlds.hlds_llds.c"
        {
#line 4101 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 150 "hlds_llds.m"
      }
#line 150 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 150 "hlds_llds.m"
  }
#line 150 "hlds_llds.m"
}

#line 115 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0(
#line 115 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 115 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 115 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 115 "hlds_llds.m"
{
#line 115 "hlds_llds.m"
  {
#line 115 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 115 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 115 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 115 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 115 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4137 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "hlds_llds.m"
    else
#line 115 "hlds_llds.m"
      {
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 115 "hlds_llds.m"
        {
#line 115 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 4163 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 115 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 115 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 115 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 115 "hlds_llds.m"
        else
#line 115 "hlds_llds.m"
          {
#line 115 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 115 "hlds_llds.m"
            {
#line 115 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 4183 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 115 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 115 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 115 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 115 "hlds_llds.m"
            else
#line 115 "hlds_llds.m"
              {
#line 115 "hlds_llds.m"
                {
#line 115 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
                }
#line 115 "hlds_llds.m"
              }
#line 115 "hlds_llds.m"
          }
#line 115 "hlds_llds.m"
      }
#line 115 "hlds_llds.m"
  }
#line 115 "hlds_llds.m"
}

#line 115 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0(
#line 115 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 115 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 115 "hlds_llds.m"
{
#line 115 "hlds_llds.m"
  {
#line 115 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 115 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 115 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 115 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 115 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 115 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 115 "hlds_llds.m"
    else
#line 115 "hlds_llds.m"
      {
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_13_13;
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 4256 "hlds.hlds_llds.c"
        {
#line 4258 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 115 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 115 "hlds_llds.m"
          {
#line 4265 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4267 "hlds.hlds_llds.c"
            {
#line 4269 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 115 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 115 "hlds_llds.m"
              {
#line 4276 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_13_13 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4278 "hlds.hlds_llds.c"
                {
#line 4280 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_13_13, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 115 "hlds_llds.m"
              }
#line 115 "hlds_llds.m"
          }
#line 115 "hlds_llds.m"
      }
#line 115 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 115 "hlds_llds.m"
  }
#line 115 "hlds_llds.m"
}

#line 357 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
#line 357 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 357 "hlds_llds.m"
{
#line 357 "hlds_llds.m"
  {
#line 357 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 357 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_28 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 357 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_29 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 357 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_28 == hlds__hlds_llds__CastY_29);
#line 357 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4320 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "hlds_llds.m"
    else
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 357 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
        case (MR_Integer) 0:
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 357 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
            case (MR_Integer) 0:
#line 357 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "hlds_llds.m"
              break;
#line 357 "hlds_llds.m"
            case (MR_Integer) 1:
#line 4344 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
              break;
#line 357 "hlds_llds.m"
            case (MR_Integer) 2:
#line 4350 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
              break;
#line 357 "hlds_llds.m"
            case (MR_Integer) 3:
#line 4356 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
              break;
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 1:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_33_33 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 357 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4378 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 1:
#line 357 "hlds_llds.m"
                {
#line 357 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_9_9 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 1);

#line 357 "hlds_llds.m"
                  {
#line 357 "hlds_llds.m"
                    hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_33_33, hlds__hlds_llds__V_9_9);
                  }
#line 357 "hlds_llds.m"
                }
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 2:
#line 4400 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 3:
#line 4406 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
            }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 2:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_35_35 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 357 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4430 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 1:
#line 4436 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 2:
#line 357 "hlds_llds.m"
                {
#line 357 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_18_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 2);

#line 357 "hlds_llds.m"
                  {
#line 357 "hlds_llds.m"
                    hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_35_35, hlds__hlds_llds__V_18_18);
                  }
#line 357 "hlds_llds.m"
                }
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 3:
#line 4458 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
            }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 3:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 357 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4482 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 1:
#line 4488 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 2:
#line 4494 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
              case (MR_Integer) 3:
#line 357 "hlds_llds.m"
                {
#line 357 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

#line 357 "hlds_llds.m"
                  {
#line 357 "hlds_llds.m"
                    hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_34_34, hlds__hlds_llds__V_27_27);
                  }
#line 357 "hlds_llds.m"
                }
#line 357 "hlds_llds.m"
                break;
#line 357 "hlds_llds.m"
            }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
      }
#line 357 "hlds_llds.m"
  }
#line 357 "hlds_llds.m"
}

#line 357 "hlds_llds.m"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 357 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 357 "hlds_llds.m"
{
#line 357 "hlds_llds.m"
  {
#line 357 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 357 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_11 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 357 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 357 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_11 == hlds__hlds_llds__CastY_12);
#line 357 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 357 "hlds_llds.m"
    else
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 357 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
        case (MR_Integer) 0:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 357 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 357 "hlds_llds.m"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 1:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 1);
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6;

#line 357 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 357 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
              {
#line 357 "hlds_llds.m"
                hlds__hlds_llds__V_6_6 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);
#line 4590 "hlds.hlds_llds.c"
                {
#line 4592 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_6_6);
                }
#line 357 "hlds_llds.m"
              }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 2:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 2);
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8;

#line 357 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 357 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
              {
#line 357 "hlds_llds.m"
                hlds__hlds_llds__V_8_8 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);
#line 4618 "hlds.hlds_llds.c"
                {
#line 4620 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_7_7, hlds__hlds_llds__V_8_8);
                }
#line 357 "hlds_llds.m"
              }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
        case (MR_Integer) 3:
#line 357 "hlds_llds.m"
          {
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10;

#line 357 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 357 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
              {
#line 357 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 4646 "hlds.hlds_llds.c"
                {
#line 4648 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_9_9, hlds__hlds_llds__V_10_10);
                }
#line 357 "hlds_llds.m"
              }
#line 357 "hlds_llds.m"
          }
#line 357 "hlds_llds.m"
          break;
#line 357 "hlds_llds.m"
      }
#line 357 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 357 "hlds_llds.m"
  }
#line 357 "hlds_llds.m"
}

#line 363 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0(
#line 363 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 363 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 363 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 363 "hlds_llds.m"
{
#line 363 "hlds_llds.m"
  {
#line 363 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 363 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 363 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 363 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_27 == hlds__hlds_llds__CastY_28);
#line 363 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4690 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 363 "hlds_llds.m"
    else
#line 363 "hlds_llds.m"
      {
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 3)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 4)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 5)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 6)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 7)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_20_20;

#line 363 "hlds_llds.m"
        {
#line 363 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_20_20, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_12_12)));
        }
#line 4736 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_20_20 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_20_20;
#line 363 "hlds_llds.m"
        else
#line 363 "hlds_llds.m"
          {
#line 363 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_21_21;

#line 363 "hlds_llds.m"
            {
#line 363 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_21_21, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_13_13)));
            }
#line 4756 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_21_21 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_21_21;
#line 363 "hlds_llds.m"
            else
#line 363 "hlds_llds.m"
              {
#line 363 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_22_22;

#line 363 "hlds_llds.m"
                {
#line 363 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_22_22, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_14_14)));
                }
#line 4776 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_22_22 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
                hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                  *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_22_22;
#line 363 "hlds_llds.m"
                else
#line 363 "hlds_llds.m"
                  {
#line 363 "hlds_llds.m"
                    MR_Word hlds__hlds_llds__V_23_23;

#line 363 "hlds_llds.m"
                    {
#line 363 "hlds_llds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_23_23, ((MR_Box) (hlds__hlds_llds__V_7_7)), ((MR_Box) (hlds__hlds_llds__V_15_15)));
                    }
#line 4796 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_23_23 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
                    hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                      *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_23_23;
#line 363 "hlds_llds.m"
                    else
#line 363 "hlds_llds.m"
                      {
#line 363 "hlds_llds.m"
                        MR_Word hlds__hlds_llds__V_24_24;

#line 363 "hlds_llds.m"
                        {
#line 363 "hlds_llds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[2], &hlds__hlds_llds__V_24_24, ((MR_Box) (hlds__hlds_llds__V_8_8)), ((MR_Box) (hlds__hlds_llds__V_16_16)));
                        }
#line 4816 "hlds.hlds_llds.c"
                        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_24_24 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
                        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
                        if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_24_24;
#line 363 "hlds_llds.m"
                        else
#line 363 "hlds_llds.m"
                          {
#line 363 "hlds_llds.m"
                            MR_Word hlds__hlds_llds__V_25_25;

#line 363 "hlds_llds.m"
                            {
#line 363 "hlds_llds.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__V_25_25, ((MR_Box) (hlds__hlds_llds__V_9_9)), ((MR_Box) (hlds__hlds_llds__V_17_17)));
                            }
#line 4836 "hlds.hlds_llds.c"
                            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_25_25 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
                            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
                            if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_25_25;
#line 363 "hlds_llds.m"
                            else
#line 363 "hlds_llds.m"
                              {
#line 363 "hlds_llds.m"
                                MR_Word hlds__hlds_llds__V_26_26;

#line 363 "hlds_llds.m"
                                {
#line 363 "hlds_llds.m"
                                  hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__V_26_26, hlds__hlds_llds__V_10_10, hlds__hlds_llds__V_18_18);
                                }
#line 4856 "hlds.hlds_llds.c"
                                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_26_26 == (MR_Integer) 0);
#line 363 "hlds_llds.m"
                                hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 363 "hlds_llds.m"
                                if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                                  *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_26_26;
#line 363 "hlds_llds.m"
                                else
#line 357 "hlds_llds.m"
                                  {
#line 357 "hlds_llds.m"
                                    MR_Integer hlds__hlds_llds__CastX_61 = (MR_Integer) hlds__hlds_llds__V_11_11;
#line 357 "hlds_llds.m"
                                    MR_Integer hlds__hlds_llds__CastY_62 = (MR_Integer) hlds__hlds_llds__V_19_19;

#line 357 "hlds_llds.m"
                                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_61 == hlds__hlds_llds__CastY_62);
#line 357 "hlds_llds.m"
                                    if (hlds__hlds_llds__succeeded)
#line 4877 "hlds.hlds_llds.c"
                                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "hlds_llds.m"
                                    else
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                      switch (MR_tag((MR_Word) hlds__hlds_llds__V_11_11)) {
#line 357 "hlds_llds.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 0:
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                          switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 357 "hlds_llds.m"
                                            default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                            case (MR_Integer) 0:
#line 357 "hlds_llds.m"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "hlds_llds.m"
                                              break;
#line 357 "hlds_llds.m"
                                            case (MR_Integer) 1:
#line 4901 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                              break;
#line 357 "hlds_llds.m"
                                            case (MR_Integer) 2:
#line 4907 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                              break;
#line 357 "hlds_llds.m"
                                            case (MR_Integer) 3:
#line 4913 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                              break;
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 1:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_66_66 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 1);

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 357 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 4935 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 1:
#line 357 "hlds_llds.m"
                                                {
#line 357 "hlds_llds.m"
                                                  MR_Word hlds__hlds_llds__V_42_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_19_19), (MR_Integer) 1);

#line 357 "hlds_llds.m"
                                                  {
#line 357 "hlds_llds.m"
                                                    hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_66_66, hlds__hlds_llds__V_42_42);
                                                  }
#line 357 "hlds_llds.m"
                                                }
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 2:
#line 4957 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 3:
#line 4963 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                            }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 2:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_68_68 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 2);

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 357 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 4987 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 1:
#line 4993 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 2:
#line 357 "hlds_llds.m"
                                                {
#line 357 "hlds_llds.m"
                                                  MR_Word hlds__hlds_llds__V_51_51 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_19_19), (MR_Integer) 2);

#line 357 "hlds_llds.m"
                                                  {
#line 357 "hlds_llds.m"
                                                    hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_68_68, hlds__hlds_llds__V_51_51);
                                                  }
#line 357 "hlds_llds.m"
                                                }
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 3:
#line 5015 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                            }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 3:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_11_11, (MR_Integer) 0)));

#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 357 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 5039 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 1:
#line 5045 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 2:
#line 5051 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                              case (MR_Integer) 3:
#line 357 "hlds_llds.m"
                                                {
#line 357 "hlds_llds.m"
                                                  MR_Word hlds__hlds_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_19_19, (MR_Integer) 0)));

#line 357 "hlds_llds.m"
                                                  {
#line 357 "hlds_llds.m"
                                                    hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_67_67, hlds__hlds_llds__V_60_60);
                                                  }
#line 357 "hlds_llds.m"
                                                }
#line 357 "hlds_llds.m"
                                                break;
#line 357 "hlds_llds.m"
                                            }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                      }
#line 357 "hlds_llds.m"
                                  }
#line 363 "hlds_llds.m"
                              }
#line 363 "hlds_llds.m"
                          }
#line 363 "hlds_llds.m"
                      }
#line 363 "hlds_llds.m"
                  }
#line 363 "hlds_llds.m"
              }
#line 363 "hlds_llds.m"
          }
#line 363 "hlds_llds.m"
      }
#line 363 "hlds_llds.m"
  }
#line 363 "hlds_llds.m"
}

#line 363 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0(
#line 363 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 363 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 363 "hlds_llds.m"
{
#line 363 "hlds_llds.m"
  {
#line 363 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 363 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 363 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 363 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
#line 363 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 363 "hlds_llds.m"
    else
#line 363 "hlds_llds.m"
      {
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_22_22;
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_23_23;
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_24_24;
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_25_25;
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_26_26;
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 3)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 4)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 5)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 6)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 7)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
#line 363 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
#line 357 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastX_35;
#line 357 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastY_36;

#line 5175 "hlds.hlds_llds.c"
        {
#line 5177 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_11_11)));
        }
#line 363 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
          {
#line 5184 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_22_22 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5186 "hlds.hlds_llds.c"
            {
#line 5188 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_22_22, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_12_12)));
            }
#line 363 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
              {
#line 5195 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_23_23 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5197 "hlds.hlds_llds.c"
                {
#line 5199 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_23_23, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_13_13)));
                }
#line 363 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                  {
#line 5206 "hlds.hlds_llds.c"
                    hlds__hlds_llds__TypeInfo_24_24 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5208 "hlds.hlds_llds.c"
                    {
#line 5210 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_24_24, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_14_14)));
                    }
#line 363 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                      {
#line 5217 "hlds.hlds_llds.c"
                        hlds__hlds_llds__TypeInfo_25_25 = (MR_Word) &hlds__hlds_llds_scalar_common_1[2];
#line 5219 "hlds.hlds_llds.c"
                        {
#line 5221 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_25_25, ((MR_Box) (hlds__hlds_llds__V_7_7)), ((MR_Box) (hlds__hlds_llds__V_15_15)));
                        }
#line 363 "hlds_llds.m"
                        if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                          {
#line 5228 "hlds.hlds_llds.c"
                            hlds__hlds_llds__TypeInfo_26_26 = (MR_Word) &hlds__hlds_llds_scalar_common_2[0];
#line 5230 "hlds.hlds_llds.c"
                            {
#line 5232 "hlds.hlds_llds.c"
                              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_26_26, ((MR_Box) (hlds__hlds_llds__V_8_8)), ((MR_Box) (hlds__hlds_llds__V_16_16)));
                            }
#line 363 "hlds_llds.m"
                            if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                              {
#line 5239 "hlds.hlds_llds.c"
                                {
#line 5241 "hlds.hlds_llds.c"
                                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(hlds__hlds_llds__V_9_9, hlds__hlds_llds__V_17_17);
                                }
#line 363 "hlds_llds.m"
                                if (hlds__hlds_llds__succeeded)
#line 363 "hlds_llds.m"
                                  {
#line 357 "hlds_llds.m"
                                    hlds__hlds_llds__CastX_35 = (MR_Integer) hlds__hlds_llds__V_10_10;
#line 357 "hlds_llds.m"
                                    hlds__hlds_llds__CastY_36 = (MR_Integer) hlds__hlds_llds__V_18_18;
#line 357 "hlds_llds.m"
                                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_35 == hlds__hlds_llds__CastY_36);
#line 357 "hlds_llds.m"
                                    if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
                                      hlds__hlds_llds__succeeded = MR_TRUE;
#line 357 "hlds_llds.m"
                                    else
#line 357 "hlds_llds.m"
#line 357 "hlds_llds.m"
                                      switch (MR_tag((MR_Word) hlds__hlds_llds__V_10_10)) {
#line 357 "hlds_llds.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 0:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__V_10_10;
#line 357 "hlds_llds.m"
                                            MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__V_18_18;

#line 357 "hlds_llds.m"
                                            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_28 == hlds__hlds_llds__CastX_27);
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 1:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_29_29 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_10_10), (MR_Integer) 1);
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_30_30;

#line 357 "hlds_llds.m"
                                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 357 "hlds_llds.m"
                                            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
                                              {
#line 357 "hlds_llds.m"
                                                hlds__hlds_llds__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_18_18), (MR_Integer) 1);
#line 5297 "hlds.hlds_llds.c"
                                                {
#line 5299 "hlds.hlds_llds.c"
                                                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_29_29, hlds__hlds_llds__V_30_30);
                                                }
#line 357 "hlds_llds.m"
                                              }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 2:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_31_31 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_10_10), (MR_Integer) 2);
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_32_32;

#line 357 "hlds_llds.m"
                                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 357 "hlds_llds.m"
                                            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
                                              {
#line 357 "hlds_llds.m"
                                                hlds__hlds_llds__V_32_32 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_18_18), (MR_Integer) 2);
#line 5325 "hlds.hlds_llds.c"
                                                {
#line 5327 "hlds.hlds_llds.c"
                                                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_31_31, hlds__hlds_llds__V_32_32);
                                                }
#line 357 "hlds_llds.m"
                                              }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                        case (MR_Integer) 3:
#line 357 "hlds_llds.m"
                                          {
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 357 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_34_34;

#line 357 "hlds_llds.m"
                                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 3)));
#line 357 "hlds_llds.m"
                                            if (hlds__hlds_llds__succeeded)
#line 357 "hlds_llds.m"
                                              {
#line 357 "hlds_llds.m"
                                                hlds__hlds_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_18_18, (MR_Integer) 0)));
#line 5353 "hlds.hlds_llds.c"
                                                {
#line 5355 "hlds.hlds_llds.c"
                                                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_33_33, hlds__hlds_llds__V_34_34);
                                                }
#line 357 "hlds_llds.m"
                                              }
#line 357 "hlds_llds.m"
                                          }
#line 357 "hlds_llds.m"
                                          break;
#line 357 "hlds_llds.m"
                                      }
#line 363 "hlds_llds.m"
                                  }
#line 363 "hlds_llds.m"
                              }
#line 363 "hlds_llds.m"
                          }
#line 363 "hlds_llds.m"
                      }
#line 363 "hlds_llds.m"
                  }
#line 363 "hlds_llds.m"
              }
#line 363 "hlds_llds.m"
          }
#line 363 "hlds_llds.m"
      }
#line 363 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 363 "hlds_llds.m"
  }
#line 363 "hlds_llds.m"
}

#line 86 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0(
#line 86 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 86 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 86 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 86 "hlds_llds.m"
{
#line 86 "hlds_llds.m"
  {
#line 86 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 86 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 86 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 86 "hlds_llds.m"
    {
#line 86 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
    }
#line 86 "hlds_llds.m"
  }
#line 86 "hlds_llds.m"
}

#line 86 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0(
#line 86 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 86 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 86 "hlds_llds.m"
{
#line 86 "hlds_llds.m"
  {
#line 86 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 86 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 86 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 86 "hlds_llds.m"
    {
#line 86 "hlds_llds.m"
      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 86 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 86 "hlds_llds.m"
  }
#line 86 "hlds_llds.m"
}

#line 56 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0(
#line 56 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 56 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 56 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 56 "hlds_llds.m"
{
#line 56 "hlds_llds.m"
  {
#line 56 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 56 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_77 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 56 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_78 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 56 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_77 == hlds__hlds_llds__CastY_78);
#line 56 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 5473 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "hlds_llds.m"
    else
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 56 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
        case (MR_Integer) 0:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 56 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
            case (MR_Integer) 0:
#line 56 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
            case (MR_Integer) 1:
#line 5497 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
            case (MR_Integer) 2:
#line 5503 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
            case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                case (MR_Integer) 0:
#line 5516 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                  break;
#line 56 "hlds_llds.m"
                case (MR_Integer) 1:
#line 5522 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                  break;
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 1:
#line 56 "hlds_llds.m"
          {
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 56 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
              case (MR_Integer) 0:
#line 5550 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 1:
#line 56 "hlds_llds.m"
                {
#line 56 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_17_17;
#line 56 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_95_95 = (MR_Integer) hlds__hlds_llds__V_90_90;
#line 56 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_96_96 = (MR_Integer) hlds__hlds_llds__V_15_15;

#line 56 "hlds_llds.m"
                  {
#line 56 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_95_95, hlds__hlds_llds__V_96_96);
                  }
#line 5574 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == (MR_Integer) 0);
#line 56 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 56 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_17_17;
#line 56 "hlds_llds.m"
                  else
#line 56 "hlds_llds.m"
                    {
#line 56 "hlds_llds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_89_89, hlds__hlds_llds__V_16_16);
                    }
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 2:
#line 5595 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5608 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5614 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
            }
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 2:
#line 56 "hlds_llds.m"
          {
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 56 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
              case (MR_Integer) 0:
#line 5644 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 1:
#line 5650 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 2:
#line 56 "hlds_llds.m"
                {
#line 56 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_39_39;

#line 56 "hlds_llds.m"
                  {
#line 56 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_39_39, hlds__hlds_llds__V_92_92, hlds__hlds_llds__V_37_37);
                  }
#line 5670 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_39_39 == (MR_Integer) 0);
#line 56 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 56 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_39_39;
#line 56 "hlds_llds.m"
                  else
#line 56 "hlds_llds.m"
                    {
#line 56 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_97_97 = (MR_Integer) hlds__hlds_llds__V_91_91;
#line 56 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_98_98 = (MR_Integer) hlds__hlds_llds__V_38_38;

#line 56 "hlds_llds.m"
                      {
#line 56 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_97_97, hlds__hlds_llds__V_98_98);
                      }
#line 56 "hlds_llds.m"
                    }
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
              case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5707 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5713 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
                break;
#line 56 "hlds_llds.m"
            }
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
            case (MR_Integer) 0:
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 56 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5750 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5756 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 2:
#line 5762 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                      case (MR_Integer) 0:
#line 56 "hlds_llds.m"
                        {
#line 56 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 56 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_61_61;

#line 56 "hlds_llds.m"
                          {
#line 56 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_61_61, hlds__hlds_llds__V_88_88, hlds__hlds_llds__V_59_59);
                          }
#line 5789 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_61_61 == (MR_Integer) 0);
#line 56 "hlds_llds.m"
                          hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 56 "hlds_llds.m"
                          if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
                            *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_61_61;
#line 56 "hlds_llds.m"
                          else
#line 56 "hlds_llds.m"
                            {
#line 56 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_93_93 = (MR_Integer) hlds__hlds_llds__V_87_87;
#line 56 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_94_94 = (MR_Integer) hlds__hlds_llds__V_60_60;

#line 56 "hlds_llds.m"
                              {
#line 56 "hlds_llds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_93_93, hlds__hlds_llds__V_94_94);
                              }
#line 56 "hlds_llds.m"
                            }
#line 56 "hlds_llds.m"
                        }
#line 56 "hlds_llds.m"
                        break;
#line 56 "hlds_llds.m"
                      case (MR_Integer) 1:
#line 5819 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "hlds_llds.m"
                        break;
#line 56 "hlds_llds.m"
                    }
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
            case (MR_Integer) 1:
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 56 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5847 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5853 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 2:
#line 5859 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                  case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
                      case (MR_Integer) 0:
#line 5872 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 56 "hlds_llds.m"
                        break;
#line 56 "hlds_llds.m"
                      case (MR_Integer) 1:
#line 56 "hlds_llds.m"
                        {
#line 56 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));

#line 56 "hlds_llds.m"
                          {
#line 56 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_86_86, hlds__hlds_llds__V_76_76);
                          }
#line 56 "hlds_llds.m"
                        }
#line 56 "hlds_llds.m"
                        break;
#line 56 "hlds_llds.m"
                    }
#line 56 "hlds_llds.m"
                    break;
#line 56 "hlds_llds.m"
                }
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
      }
#line 56 "hlds_llds.m"
  }
#line 56 "hlds_llds.m"
}

#line 56 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0(
#line 56 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 56 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 56 "hlds_llds.m"
{
#line 56 "hlds_llds.m"
  {
#line 56 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 56 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 56 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 56 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
#line 56 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 56 "hlds_llds.m"
    else
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 56 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
        case (MR_Integer) 0:
#line 56 "hlds_llds.m"
          {
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 56 "hlds_llds.m"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 1:
#line 56 "hlds_llds.m"
          {
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7;
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_8_8;

#line 56 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 56 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
                hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 5982 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_7_7);
#line 56 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 5986 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_6_6 == hlds__hlds_llds__V_8_8);
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 2:
#line 56 "hlds_llds.m"
          {
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_11_11;
#line 56 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_12_12;

#line 56 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 56 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 56 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 6017 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_9_9 == hlds__hlds_llds__V_11_11);
#line 56 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 6021 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == hlds__hlds_llds__V_12_12);
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
        case (MR_Integer) 3:
#line 56 "hlds_llds.m"
#line 56 "hlds_llds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 56 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 56 "hlds_llds.m"
            case (MR_Integer) 0:
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_15_15;
#line 56 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_16_16;

#line 56 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 56 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
                  {
#line 56 "hlds_llds.m"
                    hlds__hlds_llds__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 6059 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_13_13 == hlds__hlds_llds__V_15_15);
#line 56 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 6063 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_14_14 == hlds__hlds_llds__V_16_16);
#line 56 "hlds_llds.m"
                  }
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
            case (MR_Integer) 1:
#line 56 "hlds_llds.m"
              {
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_18_18;

#line 56 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 56 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 56 "hlds_llds.m"
                  {
#line 56 "hlds_llds.m"
                    hlds__hlds_llds__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 6088 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == hlds__hlds_llds__V_18_18);
#line 56 "hlds_llds.m"
                  }
#line 56 "hlds_llds.m"
              }
#line 56 "hlds_llds.m"
              break;
#line 56 "hlds_llds.m"
          }
#line 56 "hlds_llds.m"
          break;
#line 56 "hlds_llds.m"
      }
#line 56 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 56 "hlds_llds.m"
  }
#line 56 "hlds_llds.m"
}

#line 63 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(
#line 63 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 63 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 63 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 63 "hlds_llds.m"
{
#line 63 "hlds_llds.m"
  {
#line 63 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 63 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 63 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 63 "hlds_llds.m"
    {
#line 63 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
    }
#line 63 "hlds_llds.m"
  }
#line 63 "hlds_llds.m"
}

#line 63 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(
#line 63 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 63 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 63 "hlds_llds.m"
{
#line 63 "hlds_llds.m"
  {
#line 63 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 63 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 63 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 63 "hlds_llds.m"
    {
#line 63 "hlds_llds.m"
      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 63 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 63 "hlds_llds.m"
  }
#line 63 "hlds_llds.m"
}

#line 73 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0(
#line 73 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 73 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 73 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 73 "hlds_llds.m"
{
#line 73 "hlds_llds.m"
  {
#line 73 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 73 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 73 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 73 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 73 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 6193 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "hlds_llds.m"
    else
#line 73 "hlds_llds.m"
      {
#line 73 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 73 "hlds_llds.m"
        {
#line 73 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 6219 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 73 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 73 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 73 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 73 "hlds_llds.m"
        else
#line 73 "hlds_llds.m"
          {
#line 73 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 73 "hlds_llds.m"
            {
#line 73 "hlds_llds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_11_11, hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_8_8);
            }
#line 6239 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 73 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 73 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 73 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 73 "hlds_llds.m"
            else
#line 73 "hlds_llds.m"
              {
#line 73 "hlds_llds.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_6_6, hlds__hlds_llds__V_9_9);
              }
#line 73 "hlds_llds.m"
          }
#line 73 "hlds_llds.m"
      }
#line 73 "hlds_llds.m"
  }
#line 73 "hlds_llds.m"
}

#line 73 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0(
#line 73 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 73 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 73 "hlds_llds.m"
{
#line 73 "hlds_llds.m"
  {
#line 73 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 73 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 73 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 73 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 73 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 73 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 73 "hlds_llds.m"
    else
#line 73 "hlds_llds.m"
      {
#line 73 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 6304 "hlds.hlds_llds.c"
        {
#line 6306 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 73 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 73 "hlds_llds.m"
          {
#line 6313 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_7_7);
#line 73 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 6317 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_8_8);
#line 73 "hlds_llds.m"
          }
#line 73 "hlds_llds.m"
      }
#line 73 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 73 "hlds_llds.m"
  }
#line 73 "hlds_llds.m"
}

#line 779 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 779 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3,
#line 779 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__4_4)
#line 779 "hlds_llds.m"
{
#line 784 "hlds_llds.m"
  {
#line 784 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 784 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "hlds_llds.m"
    else
#line 786 "hlds_llds.m"
      {
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var0_9;
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Locn_10;
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocns0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var_12;
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocns_13;
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 786 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15;

#line 786 "hlds_llds.m"
        hlds__hlds_llds__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_14_14, (MR_Integer) 0)));
#line 786 "hlds_llds.m"
        hlds__hlds_llds__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_14_14, (MR_Integer) 1)));
#line 787 "hlds_llds.m"
        {
#line 787 "hlds_llds.m"
          parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__Var0_9, &hlds__hlds_llds__Var_12);
        }
#line 786 "hlds_llds.m"
        {
#line 786 "hlds_llds.m"
          hlds__hlds_llds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 786 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_15_15, 0) = ((MR_Box) (hlds__hlds_llds__Var_12));
#line 786 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_15_15, 1) = ((MR_Box) (hlds__hlds_llds__Locn_10));
#line 786 "hlds_llds.m"
        }
#line 788 "hlds_llds.m"
        {
#line 788 "hlds_llds.m"
          hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__VarLocns0_11, &hlds__hlds_llds__VarLocns_13);
        }
#line 786 "hlds_llds.m"
        {
#line 786 "hlds_llds.m"
          MR_Word base;
#line 786 "hlds_llds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__4_4 = base;
#line 786 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 786 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_llds__VarLocns_13));
#line 786 "hlds_llds.m"
        }
#line 786 "hlds_llds.m"
      }
#line 784 "hlds_llds.m"
  }
#line 779 "hlds_llds.m"
}

#line 693 "hlds_llds.m"
static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
#line 693 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1)
#line 693 "hlds_llds.m"
{
#line 695 "hlds_llds.m"
  {
#line 695 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 695 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__2_2;

#line 695 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "hlds_llds.m"
      {
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeCtorInfo_10_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4;
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5;
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6;
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7;
#line 700 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9;

#line 701 "hlds_llds.m"
        {
#line 701 "hlds_llds.m"
          hlds__hlds_llds__V_4_4 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 701 "hlds_llds.m"
        {
#line 701 "hlds_llds.m"
          hlds__hlds_llds__V_5_5 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 702 "hlds_llds.m"
        {
#line 702 "hlds_llds.m"
          hlds__hlds_llds__V_6_6 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 702 "hlds_llds.m"
        {
#line 702 "hlds_llds.m"
          hlds__hlds_llds__V_7_7 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 703 "hlds_llds.m"
        {
#line 703 "hlds_llds.m"
          hlds__hlds_llds__V_9_9 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
        }
#line 701 "hlds_llds.m"
        {
#line 701 "hlds_llds.m"
          hlds__hlds_llds__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 0) = ((MR_Box) (hlds__hlds_llds__V_4_4));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 1) = ((MR_Box) (hlds__hlds_llds__V_5_5));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 2) = ((MR_Box) (hlds__hlds_llds__V_6_6));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 3) = ((MR_Box) (hlds__hlds_llds__V_7_7));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 5) = ((MR_Box) (hlds__hlds_llds__V_9_9));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "hlds_llds.m"
        }
#line 700 "hlds_llds.m"
      }
#line 695 "hlds_llds.m"
    else
#line 696 "hlds_llds.m"
      hlds__hlds_llds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 695 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__2_2;
#line 695 "hlds_llds.m"
  }
#line 693 "hlds_llds.m"
}

#line 323 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
#line 323 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 323 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_2,
#line 323 "hlds_llds.m"
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
#line 323 "hlds_llds.m"
  MR_String * hlds__hlds_llds__STATE_VARIABLE_Explanation_4)
#line 323 "hlds_llds.m"
{
#line 326 "hlds_llds.m"
  {
#line 326 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 326 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "hlds_llds.m"
      *hlds__hlds_llds__STATE_VARIABLE_Explanation_4 = hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3;
#line 326 "hlds_llds.m"
    else
#line 327 "hlds_llds.m"
      {
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var_9;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Slot_10;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 327 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__SlotNum_14;
#line 327 "hlds_llds.m"
        MR_String hlds__hlds_llds__StackStr_16;
#line 327 "hlds_llds.m"
        MR_String hlds__hlds_llds__SlotStr_17;
#line 327 "hlds_llds.m"
        MR_String hlds__hlds_llds__WidthStr_18;
#line 327 "hlds_llds.m"
        MR_String hlds__hlds_llds__VarName_19;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 327 "hlds_llds.m"
        MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_24_24;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_26_26;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_28_28;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_29_29;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_30_30;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_31_31;
#line 327 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_33_33;

#line 327 "hlds_llds.m"
        hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_22_22, (MR_Integer) 0)));
#line 327 "hlds_llds.m"
        hlds__hlds_llds__Slot_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_22_22, (MR_Integer) 1)));
#line 328 "hlds_llds.m"
        {
#line 328 "hlds_llds.m"
          hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__Rest_11, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3, &hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23);
        }
#line 6577 "hlds.hlds_llds.c"
#line 6578 "hlds.hlds_llds.c"
        switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_10)) {
#line 6580 "hlds.hlds_llds.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 6582 "hlds.hlds_llds.c"
          case (MR_Integer) 0:
#line 6584 "hlds.hlds_llds.c"
            {
#line 6586 "hlds.hlds_llds.c"
              MR_Word hlds__hlds_llds__Width_15;

#line 330 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 330 "hlds_llds.m"
              hlds__hlds_llds__Width_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 331 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "sv";
#line 344 "hlds_llds.m"
#line 344 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_15) {
#line 344 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 344 "hlds_llds.m"
                case (MR_Integer) 1:
#line 346 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 344 "hlds_llds.m"
                  break;
#line 344 "hlds_llds.m"
                case (MR_Integer) 0:
#line 343 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 344 "hlds_llds.m"
                  break;
#line 344 "hlds_llds.m"
              }
#line 6614 "hlds.hlds_llds.c"
            }
#line 6616 "hlds.hlds_llds.c"
            break;
#line 6618 "hlds.hlds_llds.c"
          case (MR_Integer) 1:
#line 6620 "hlds.hlds_llds.c"
            {
#line 6622 "hlds.hlds_llds.c"
              MR_Word hlds__hlds_llds__Width_38;

#line 333 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 333 "hlds_llds.m"
              hlds__hlds_llds__Width_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 334 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "parent_sv";
#line 344 "hlds_llds.m"
#line 344 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_38) {
#line 344 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 344 "hlds_llds.m"
                case (MR_Integer) 1:
#line 346 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 344 "hlds_llds.m"
                  break;
#line 344 "hlds_llds.m"
                case (MR_Integer) 0:
#line 343 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 344 "hlds_llds.m"
                  break;
#line 344 "hlds_llds.m"
              }
#line 6650 "hlds.hlds_llds.c"
            }
#line 6652 "hlds.hlds_llds.c"
            break;
#line 6654 "hlds.hlds_llds.c"
          case (MR_Integer) 2:
#line 6656 "hlds.hlds_llds.c"
            {
#line 336 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 338 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "fv";
#line 343 "hlds_llds.m"
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 6664 "hlds.hlds_llds.c"
            }
#line 6666 "hlds.hlds_llds.c"
            break;
#line 6668 "hlds.hlds_llds.c"
        }
#line 340 "hlds_llds.m"
        {
#line 340 "hlds_llds.m"
          mercury__string__int_to_string_2_p_0(hlds__hlds_llds__SlotNum_14, &hlds__hlds_llds__SlotStr_17);
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__Var_9, &hlds__hlds_llds__VarName_19);
        }
#line 350 "hlds_llds.m"
        {
#line 350 "hlds_llds.m"
          hlds__hlds_llds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_33_33, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23));
#line 350 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_31_31, 0) = ((MR_Box) ((MR_String) "\n"));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_31_31, 1) = ((MR_Box) (hlds__hlds_llds__V_33_33));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_30_30, 0) = ((MR_Box) (hlds__hlds_llds__WidthStr_18));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_30_30, 1) = ((MR_Box) (hlds__hlds_llds__V_31_31));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_29_29, 0) = ((MR_Box) (hlds__hlds_llds__SlotStr_17));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_29_29, 1) = ((MR_Box) (hlds__hlds_llds__V_30_30));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_28_28, 0) = ((MR_Box) (hlds__hlds_llds__StackStr_16));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_28_28, 1) = ((MR_Box) (hlds__hlds_llds__V_29_29));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_26_26, 0) = ((MR_Box) ((MR_String) "\t ->\t"));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_26_26, 1) = ((MR_Box) (hlds__hlds_llds__V_28_28));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_24_24, 0) = ((MR_Box) (hlds__hlds_llds__VarName_19));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_24_24, 1) = ((MR_Box) (hlds__hlds_llds__V_26_26));
#line 349 "hlds_llds.m"
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          mercury__string__append_list_2_p_0(hlds__hlds_llds__V_24_24, hlds__hlds_llds__STATE_VARIABLE_Explanation_4);
        }
#line 327 "hlds_llds.m"
      }
#line 326 "hlds_llds.m"
  }
#line 323 "hlds_llds.m"
}

#line 302 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__abs_locn_to_string_3_p_0(
#line 302 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Locn_4,
#line 302 "hlds_llds.m"
  MR_String * hlds__hlds_llds__Str_5,
#line 302 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeWidth_6)
#line 302 "hlds_llds.m"
{
#line 825 "hlds_llds.m"
  {
#line 825 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 825 "hlds_llds.m"
#line 825 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) {
#line 825 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 825 "hlds_llds.m"
      case (MR_Integer) 0:
#line 825 "hlds_llds.m"
        {
#line 826 "hlds_llds.m"
          *hlds__hlds_llds__Str_5 = (MR_String) "any_reg";
#line 827 "hlds_llds.m"
          *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "hlds_llds.m"
        }
#line 825 "hlds_llds.m"
        break;
#line 825 "hlds_llds.m"
      case (MR_Integer) 1:
#line 825 "hlds_llds.m"
        {
#line 825 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 825 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

#line 825 "hlds_llds.m"
#line 825 "hlds_llds.m"
          switch (hlds__hlds_llds__V_27_27) {
#line 825 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 825 "hlds_llds.m"
            case (MR_Integer) 1:
#line 833 "hlds_llds.m"
              {
#line 833 "hlds_llds.m"
                MR_String hlds__hlds_llds__V_17_17;

#line 834 "hlds_llds.m"
                {
#line 834 "hlds_llds.m"
                  hlds__hlds_llds__V_17_17 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__V_26_26);
                }
#line 834 "hlds_llds.m"
                {
#line 834 "hlds_llds.m"
                  *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "f", hlds__hlds_llds__V_17_17);
                }
#line 835 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 833 "hlds_llds.m"
              }
#line 825 "hlds_llds.m"
              break;
#line 825 "hlds_llds.m"
            case (MR_Integer) 0:
#line 829 "hlds_llds.m"
              {
#line 829 "hlds_llds.m"
                MR_String hlds__hlds_llds__V_20_20;

#line 830 "hlds_llds.m"
                {
#line 830 "hlds_llds.m"
                  hlds__hlds_llds__V_20_20 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__V_26_26);
                }
#line 830 "hlds_llds.m"
                {
#line 830 "hlds_llds.m"
                  *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "r", hlds__hlds_llds__V_20_20);
                }
#line 831 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "hlds_llds.m"
              }
#line 825 "hlds_llds.m"
              break;
#line 825 "hlds_llds.m"
          }
#line 825 "hlds_llds.m"
        }
#line 825 "hlds_llds.m"
        break;
#line 825 "hlds_llds.m"
      case (MR_Integer) 2:
#line 837 "hlds_llds.m"
        {
#line 837 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 837 "hlds_llds.m"
          MR_String hlds__hlds_llds__V_14_14;
#line 837 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

#line 838 "hlds_llds.m"
          {
#line 838 "hlds_llds.m"
            hlds__hlds_llds__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_22);
          }
#line 838 "hlds_llds.m"
          {
#line 838 "hlds_llds.m"
            *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar", hlds__hlds_llds__V_14_14);
          }
#line 852 "hlds_llds.m"
#line 852 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_8) {
#line 852 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 852 "hlds_llds.m"
            case (MR_Integer) 1:
#line 853 "hlds_llds.m"
              {
#line 853 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 853 "hlds_llds.m"
              }
#line 852 "hlds_llds.m"
              break;
#line 852 "hlds_llds.m"
            case (MR_Integer) 0:
#line 852 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "hlds_llds.m"
              break;
#line 852 "hlds_llds.m"
          }
#line 837 "hlds_llds.m"
        }
#line 825 "hlds_llds.m"
        break;
#line 825 "hlds_llds.m"
      case (MR_Integer) 3:
#line 825 "hlds_llds.m"
#line 825 "hlds_llds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 0)))) {
#line 825 "hlds_llds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 825 "hlds_llds.m"
          case (MR_Integer) 0:
#line 841 "hlds_llds.m"
            {
#line 841 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_12_12;
#line 841 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 841 "hlds_llds.m"
              MR_Word hlds__hlds_llds__Width_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 2)));

#line 842 "hlds_llds.m"
              {
#line 842 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_23);
              }
#line 842 "hlds_llds.m"
              {
#line 842 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "parent_stackvar", hlds__hlds_llds__V_12_12);
              }
#line 852 "hlds_llds.m"
#line 852 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_24) {
#line 852 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 852 "hlds_llds.m"
                case (MR_Integer) 1:
#line 853 "hlds_llds.m"
                  {
#line 853 "hlds_llds.m"
                    *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 853 "hlds_llds.m"
                  }
#line 852 "hlds_llds.m"
                  break;
#line 852 "hlds_llds.m"
                case (MR_Integer) 0:
#line 852 "hlds_llds.m"
                  *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 852 "hlds_llds.m"
                  break;
#line 852 "hlds_llds.m"
              }
#line 841 "hlds_llds.m"
            }
#line 825 "hlds_llds.m"
            break;
#line 825 "hlds_llds.m"
          case (MR_Integer) 1:
#line 845 "hlds_llds.m"
            {
#line 845 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_10_10;
#line 845 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__N_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));

#line 846 "hlds_llds.m"
              {
#line 846 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_25);
              }
#line 846 "hlds_llds.m"
              {
#line 846 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "framevar", hlds__hlds_llds__V_10_10);
              }
#line 847 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 845 "hlds_llds.m"
            }
#line 825 "hlds_llds.m"
            break;
#line 825 "hlds_llds.m"
        }
#line 825 "hlds_llds.m"
        break;
#line 825 "hlds_llds.m"
    }
#line 825 "hlds_llds.m"
  }
#line 302 "hlds_llds.m"
}

#line 300 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__key_stack_slot_to_abs_locn_2_f_0(
#line 300 "hlds_llds.m"
  MR_Word hlds__hlds_llds__TypeInfo_6_6,
#line 300 "hlds_llds.m"
  MR_Box hlds__hlds_llds__HeadVar__1_4,
#line 300 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 300 "hlds_llds.m"
{
#line 810 "hlds_llds.m"
  {
#line 810 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 810 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__3_3;

#line 810 "hlds_llds.m"
    {
#line 810 "hlds_llds.m"
      hlds__hlds_llds__HeadVar__3_3 = hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(hlds__hlds_llds__Slot_5);
    }
#line 810 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__3_3;
#line 810 "hlds_llds.m"
  }
#line 300 "hlds_llds.m"
}

#line 299 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(
#line 299 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 299 "hlds_llds.m"
{
#line 810 "hlds_llds.m"
  {
#line 810 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 810 "hlds_llds.m"
    MR_Word hlds__hlds_llds__AbsLocn_4;

#line 810 "hlds_llds.m"
#line 810 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
#line 810 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 810 "hlds_llds.m"
      case (MR_Integer) 0:
#line 810 "hlds_llds.m"
        {
#line 810 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 810 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

#line 811 "hlds_llds.m"
          {
#line 811 "hlds_llds.m"
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "hlds_llds.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (hlds__hlds_llds__N_5));
#line 811 "hlds_llds.m"
            MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__Width_6));
#line 811 "hlds_llds.m"
          }
#line 810 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
      case (MR_Integer) 1:
#line 813 "hlds_llds.m"
        {
#line 813 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 813 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

#line 814 "hlds_llds.m"
          {
#line 814 "hlds_llds.m"
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_7));
#line 814 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 2) = ((MR_Box) (hlds__hlds_llds__Width_8));
#line 814 "hlds_llds.m"
          }
#line 813 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
      case (MR_Integer) 2:
#line 816 "hlds_llds.m"
        {
#line 816 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));

#line 817 "hlds_llds.m"
          {
#line 817 "hlds_llds.m"
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 817 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_9));
#line 817 "hlds_llds.m"
          }
#line 816 "hlds_llds.m"
        }
#line 810 "hlds_llds.m"
        break;
#line 810 "hlds_llds.m"
    }
#line 810 "hlds_llds.m"
    return hlds__hlds_llds__AbsLocn_4;
#line 810 "hlds_llds.m"
  }
#line 299 "hlds_llds.m"
}

#line 297 "hlds_llds.m"
MR_Integer MR_CALL 
hlds__hlds_llds__stack_slot_num_1_f_0(
#line 297 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 297 "hlds_llds.m"
{
#line 7134 "hlds.hlds_llds.c"
  {
#line 7136 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;
#line 7138 "hlds.hlds_llds.c"
    MR_Integer hlds__hlds_llds__N_4;

#line 7141 "hlds.hlds_llds.c"
#line 7142 "hlds.hlds_llds.c"
    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
#line 7144 "hlds.hlds_llds.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 7146 "hlds.hlds_llds.c"
      case (MR_Integer) 0:
#line 7148 "hlds.hlds_llds.c"
        {
#line 7150 "hlds.hlds_llds.c"
          MR_Word hlds__hlds_llds__Width_5;

#line 794 "hlds_llds.m"
          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 794 "hlds_llds.m"
          hlds__hlds_llds__Width_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 803 "hlds_llds.m"
#line 803 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_5) {
#line 803 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 803 "hlds_llds.m"
            case (MR_Integer) 1:
#line 804 "hlds_llds.m"
              {
#line 805 "hlds_llds.m"
                {
#line 805 "hlds_llds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
                }
#line 804 "hlds_llds.m"
              }
#line 803 "hlds_llds.m"
              break;
#line 803 "hlds_llds.m"
            case (MR_Integer) 0:
#line 802 "hlds_llds.m"
              {
#line 802 "hlds_llds.m"
              }
#line 803 "hlds_llds.m"
              break;
#line 803 "hlds_llds.m"
          }
#line 7185 "hlds.hlds_llds.c"
        }
#line 7187 "hlds.hlds_llds.c"
        break;
#line 7189 "hlds.hlds_llds.c"
      case (MR_Integer) 1:
#line 7191 "hlds.hlds_llds.c"
        {
#line 7193 "hlds.hlds_llds.c"
          MR_Word hlds__hlds_llds__Width_17;

#line 796 "hlds_llds.m"
          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 796 "hlds_llds.m"
          hlds__hlds_llds__Width_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 803 "hlds_llds.m"
#line 803 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_17) {
#line 803 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 803 "hlds_llds.m"
            case (MR_Integer) 1:
#line 804 "hlds_llds.m"
              {
#line 805 "hlds_llds.m"
                {
#line 805 "hlds_llds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
                }
#line 804 "hlds_llds.m"
              }
#line 803 "hlds_llds.m"
              break;
#line 803 "hlds_llds.m"
            case (MR_Integer) 0:
#line 802 "hlds_llds.m"
              {
#line 802 "hlds_llds.m"
              }
#line 803 "hlds_llds.m"
              break;
#line 803 "hlds_llds.m"
          }
#line 7228 "hlds.hlds_llds.c"
        }
#line 7230 "hlds.hlds_llds.c"
        break;
#line 7232 "hlds.hlds_llds.c"
      case (MR_Integer) 2:
#line 798 "hlds_llds.m"
        hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 7236 "hlds.hlds_llds.c"
        break;
#line 7238 "hlds.hlds_llds.c"
    }
#line 7240 "hlds.hlds_llds.c"
    return hlds__hlds_llds__N_4;
#line 7242 "hlds.hlds_llds.c"
  }
#line 297 "hlds_llds.m"
}

#line 291 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_p_0(
#line 291 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Must_5,
#line 291 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Subn_6,
#line 291 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Details0_7,
#line 291 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Details_8)
#line 291 "hlds_llds.m"
{
#line 707 "hlds_llds.m"
  {
#line 707 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeInfo_11_68;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeCtorInfo_12_69;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 0)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirths0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 1)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeaths0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 2)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeaths0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 3)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeFollowVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 4)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 5)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePoint0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 6)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 7)));
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirths_17;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirths_18;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeaths_19;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeaths_20;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeFollowVars_21;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMap_28;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePoint_29;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_33;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__VarLocnList0_66;
#line 707 "hlds_llds.m"
    MR_Word hlds__hlds_llds__VarLocnList_67;

#line 711 "hlds_llds.m"
    {
#line 711 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreBirths0_9, &hlds__hlds_llds__PreBirths_17);
    }
#line 712 "hlds_llds.m"
    {
#line 712 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostBirths0_10, &hlds__hlds_llds__PostBirths_18);
    }
#line 713 "hlds_llds.m"
    {
#line 713 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreDeaths0_11, &hlds__hlds_llds__PreDeaths_19);
    }
#line 714 "hlds_llds.m"
    {
#line 714 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostDeaths0_12, &hlds__hlds_llds__PostDeaths_20);
    }
#line 718 "hlds_llds.m"
    if ((hlds__hlds_llds__MaybeFollowVars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "hlds_llds.m"
      hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 718 "hlds_llds.m"
    else
#line 719 "hlds_llds.m"
      {
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_60 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeCtorInfo_12_61 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars0_13, (MR_Integer) 0)));
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVarsMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 0)));
#line 719 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__FirstFreeRegR_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 1)));
#line 719 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__FirstFreeRegF_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 2)));
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVarsMap_26;
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVars_27;
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocnList0_58;
#line 719 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocnList_59;

#line 775 "hlds_llds.m"
        {
#line 775 "hlds_llds.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__FollowVarsMap0_23, &hlds__hlds_llds__VarLocnList0_58);
        }
#line 776 "hlds_llds.m"
        {
#line 776 "hlds_llds.m"
          hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_58, &hlds__hlds_llds__VarLocnList_59);
        }
#line 777 "hlds_llds.m"
        {
#line 777 "hlds_llds.m"
          mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__VarLocnList_59, &hlds__hlds_llds__FollowVarsMap_26);
        }
#line 724 "hlds_llds.m"
        {
#line 724 "hlds_llds.m"
          hlds__hlds_llds__FollowVars_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 724 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 0) = ((MR_Box) (hlds__hlds_llds__FollowVarsMap_26));
#line 724 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 1) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegR_24));
#line 724 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 2) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegF_25));
#line 724 "hlds_llds.m"
        }
#line 726 "hlds_llds.m"
        {
#line 726 "hlds_llds.m"
          hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 726 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars_21, 0) = ((MR_Box) (hlds__hlds_llds__FollowVars_27));
#line 726 "hlds_llds.m"
        }
#line 719 "hlds_llds.m"
      }
#line 7393 "hlds.hlds_llds.c"
    hlds__hlds_llds__TypeInfo_11_68 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
#line 7395 "hlds.hlds_llds.c"
    hlds__hlds_llds__TypeCtorInfo_12_69 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 775 "hlds_llds.m"
    {
#line 775 "hlds_llds.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__StoreMap0_14, &hlds__hlds_llds__VarLocnList0_66);
    }
#line 776 "hlds_llds.m"
    {
#line 776 "hlds_llds.m"
      hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_66, &hlds__hlds_llds__VarLocnList_67);
    }
#line 777 "hlds_llds.m"
    {
#line 777 "hlds_llds.m"
      mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__VarLocnList_67, &hlds__hlds_llds__StoreMap_28);
    }
#line 732 "hlds_llds.m"
    if ((hlds__hlds_llds__ResumePoint0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "hlds_llds.m"
      hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "hlds_llds.m"
    else
#line 733 "hlds_llds.m"
      {
#line 733 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumePointVars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 0)));
#line 733 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumeLocs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 1)));
#line 733 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumePointVars_32;

#line 734 "hlds_llds.m"
        {
#line 734 "hlds_llds.m"
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumePointVars0_30, &hlds__hlds_llds__ResumePointVars_32);
        }
#line 736 "hlds_llds.m"
        {
#line 736 "hlds_llds.m"
          hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 0) = ((MR_Box) (hlds__hlds_llds__ResumePointVars_32));
#line 736 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 1) = ((MR_Box) (hlds__hlds_llds__ResumeLocs_31));
#line 736 "hlds_llds.m"
        }
#line 733 "hlds_llds.m"
      }
#line 741 "hlds_llds.m"
#line 741 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed0_16)) {
#line 741 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 741 "hlds_llds.m"
      case (MR_Integer) 0:
#line 740 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 741 "hlds_llds.m"
        break;
#line 741 "hlds_llds.m"
      case (MR_Integer) 1:
#line 742 "hlds_llds.m"
        {
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedAcrossCall0_34 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 1);
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ForwardVars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 0)));
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallResumeVars0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 1)));
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallNondetLiveVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 2)));
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ForwardVars_38;
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallResumeVars_39;
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallNondetLiveVars_40;
#line 742 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedAcrossCall_41;

#line 745 "hlds_llds.m"
          {
#line 745 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ForwardVars0_35, &hlds__hlds_llds__ForwardVars_38);
          }
#line 746 "hlds_llds.m"
          {
#line 746 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallResumeVars0_36, &hlds__hlds_llds__CallResumeVars_39);
          }
#line 747 "hlds_llds.m"
          {
#line 747 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallNondetLiveVars0_37, &hlds__hlds_llds__CallNondetLiveVars_40);
          }
#line 749 "hlds_llds.m"
          {
#line 749 "hlds_llds.m"
            hlds__hlds_llds__NeedAcrossCall_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 749 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 0) = ((MR_Box) (hlds__hlds_llds__ForwardVars_38));
#line 749 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 1) = ((MR_Box) (hlds__hlds_llds__CallResumeVars_39));
#line 749 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 2) = ((MR_Box) (hlds__hlds_llds__CallNondetLiveVars_40));
#line 749 "hlds_llds.m"
          }
#line 751 "hlds_llds.m"
          hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_41);
#line 742 "hlds_llds.m"
        }
#line 741 "hlds_llds.m"
        break;
#line 741 "hlds_llds.m"
      case (MR_Integer) 2:
#line 753 "hlds_llds.m"
        {
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInResume0_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 2);
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__OnStack_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 0)));
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ResumeVars0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 1)));
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NondetLiveVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 2)));
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ResumeVars_46;
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NondetLiveVars_47;
#line 753 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInResume_48;

#line 755 "hlds_llds.m"
          {
#line 755 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumeVars0_44, &hlds__hlds_llds__ResumeVars_46);
          }
#line 756 "hlds_llds.m"
          {
#line 756 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__NondetLiveVars0_45, &hlds__hlds_llds__NondetLiveVars_47);
          }
#line 757 "hlds_llds.m"
          {
#line 757 "hlds_llds.m"
            hlds__hlds_llds__NeedInResume_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 757 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 0) = ((MR_Box) (hlds__hlds_llds__OnStack_43));
#line 757 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 1) = ((MR_Box) (hlds__hlds_llds__ResumeVars_46));
#line 757 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 2) = ((MR_Box) (hlds__hlds_llds__NondetLiveVars_47));
#line 757 "hlds_llds.m"
          }
#line 758 "hlds_llds.m"
          hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_48);
#line 753 "hlds_llds.m"
        }
#line 741 "hlds_llds.m"
        break;
#line 741 "hlds_llds.m"
      case (MR_Integer) 3:
#line 760 "hlds_llds.m"
        {
#line 760 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInParConj0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed0_16, (MR_Integer) 0)));
#line 760 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ParConjVars0_50 = (MR_Word) hlds__hlds_llds__NeedInParConj0_49;
#line 760 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ParConjVars_51;
#line 760 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInParConj_52;

#line 762 "hlds_llds.m"
          {
#line 762 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ParConjVars0_50, &hlds__hlds_llds__ParConjVars_51);
          }
#line 763 "hlds_llds.m"
          hlds__hlds_llds__NeedInParConj_52 = (MR_Word) hlds__hlds_llds__ParConjVars_51;
#line 764 "hlds_llds.m"
          {
#line 764 "hlds_llds.m"
            hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 764 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_33, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_52));
#line 764 "hlds_llds.m"
          }
#line 760 "hlds_llds.m"
        }
#line 741 "hlds_llds.m"
        break;
#line 741 "hlds_llds.m"
    }
#line 766 "hlds_llds.m"
    {
#line 766 "hlds_llds.m"
      MR_Word base;
#line 766 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 766 "hlds_llds.m"
      *hlds__hlds_llds__Details_8 = base;
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_17));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_18));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_19));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_20));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_llds__MaybeFollowVars_21));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_28));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_29));
#line 766 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_llds__MaybeNeed_33));
#line 766 "hlds_llds.m"
    }
#line 707 "hlds_llds.m"
  }
#line 291 "hlds_llds.m"
}

#line 278 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(
#line 278 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Resume_4,
#line 278 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Vars_5,
#line 278 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Locs_6)
#line 278 "hlds_llds.m"
{
#line 685 "hlds_llds.m"
  {
#line 685 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 685 "hlds_llds.m"
    if ((hlds__hlds_llds__Resume_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "hlds_llds.m"
      {
#line 688 "hlds_llds.m"
        {
#line 688 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_resume_vars_and_loc\'/3", (MR_String) "no resume point");
#line 688 "hlds_llds.m"
          return;
        }
#line 687 "hlds_llds.m"
      }
#line 685 "hlds_llds.m"
    else
#line 685 "hlds_llds.m"
      {
#line 685 "hlds_llds.m"
        *hlds__hlds_llds__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 0)));
#line 685 "hlds_llds.m"
        *hlds__hlds_llds__Locs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 1)));
#line 685 "hlds_llds.m"
      }
#line 685 "hlds_llds.m"
  }
#line 278 "hlds_llds.m"
}

#line 275 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_resume_point_3_p_0(
#line 275 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 275 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 275 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 275 "hlds_llds.m"
{
#line 680 "hlds_llds.m"
  {
#line 680 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo_7;
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_14;
#line 680 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_22_22;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_24_24;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_23_23;

#line 646 "hlds_llds.m"
    {
#line 646 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    }
#line 647 "hlds_llds.m"
    {
#line 647 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    }
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
#line 648 "hlds_llds.m"
    {
#line 648 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__V_21_21));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__V_22_22));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__V_24_24));
#line 648 "hlds_llds.m"
    }
#line 649 "hlds_llds.m"
    {
#line 649 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
#line 649 "hlds_llds.m"
    }
#line 650 "hlds_llds.m"
    {
#line 650 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    }
#line 680 "hlds_llds.m"
    {
#line 680 "hlds_llds.m"
      MR_Word base;
#line 680 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__3_3 = base;
#line 680 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
#line 680 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
#line 680 "hlds_llds.m"
    }
#line 680 "hlds_llds.m"
  }
#line 275 "hlds_llds.m"
}

#line 272 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_follow_vars_3_p_0(
#line 272 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 272 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 272 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 272 "hlds_llds.m"
{
#line 676 "hlds_llds.m"
  {
#line 676 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo_7;
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_14;
#line 676 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_22_22;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_23_23;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_24_24;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 632 "hlds_llds.m"
    {
#line 632 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    }
#line 633 "hlds_llds.m"
    {
#line 633 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    }
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
#line 634 "hlds_llds.m"
    {
#line 634 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__V_22_22));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__V_23_23));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__V_24_24));
#line 634 "hlds_llds.m"
    }
#line 635 "hlds_llds.m"
    {
#line 635 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
#line 635 "hlds_llds.m"
    }
#line 636 "hlds_llds.m"
    {
#line 636 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    }
#line 676 "hlds_llds.m"
    {
#line 676 "hlds_llds.m"
      MR_Word base;
#line 676 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__3_3 = base;
#line 676 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
#line 676 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
#line 676 "hlds_llds.m"
    }
#line 676 "hlds_llds.m"
  }
#line 272 "hlds_llds.m"
}

#line 267 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(
#line 267 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInParConj_4,
#line 267 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 267 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 267 "hlds_llds.m"
{
#line 666 "hlds_llds.m"
  {
#line 666 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 666 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 666 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 666 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 666 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 666 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 669 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 667 "hlds_llds.m"
    {
#line 667 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 668 "hlds_llds.m"
    {
#line 668 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 669 "hlds_llds.m"
    {
#line 669 "hlds_llds.m"
      hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_12_12, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_4));
#line 669 "hlds_llds.m"
    }
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 669 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 669 "hlds_llds.m"
    {
#line 669 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 669 "hlds_llds.m"
    }
#line 670 "hlds_llds.m"
    {
#line 670 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 670 "hlds_llds.m"
    }
#line 671 "hlds_llds.m"
    {
#line 671 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 666 "hlds_llds.m"
  }
#line 267 "hlds_llds.m"
}

#line 264 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(
#line 264 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInResume_4,
#line 264 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 264 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 264 "hlds_llds.m"
{
#line 659 "hlds_llds.m"
  {
#line 659 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 659 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 659 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 659 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 659 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 659 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 662 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 660 "hlds_llds.m"
    {
#line 660 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 661 "hlds_llds.m"
    {
#line 661 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_4);
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 662 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 662 "hlds_llds.m"
    {
#line 662 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 662 "hlds_llds.m"
    }
#line 663 "hlds_llds.m"
    {
#line 663 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 663 "hlds_llds.m"
    }
#line 664 "hlds_llds.m"
    {
#line 664 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 659 "hlds_llds.m"
  }
#line 264 "hlds_llds.m"
}

#line 261 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(
#line 261 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedAcrossCall_4,
#line 261 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 261 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 261 "hlds_llds.m"
{
#line 652 "hlds_llds.m"
  {
#line 652 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 652 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 652 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 652 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 652 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 652 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 655 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 653 "hlds_llds.m"
    {
#line 653 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 654 "hlds_llds.m"
    {
#line 654 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_4);
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 655 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 655 "hlds_llds.m"
    {
#line 655 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 655 "hlds_llds.m"
    }
#line 656 "hlds_llds.m"
    {
#line 656 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 656 "hlds_llds.m"
    }
#line 657 "hlds_llds.m"
    {
#line 657 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 652 "hlds_llds.m"
  }
#line 261 "hlds_llds.m"
}

#line 258 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_resume_point_3_p_0(
#line 258 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 258 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 258 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 258 "hlds_llds.m"
{
#line 645 "hlds_llds.m"
  {
#line 645 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 645 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 645 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 645 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 645 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 648 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;

#line 646 "hlds_llds.m"
    {
#line 646 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 647 "hlds_llds.m"
    {
#line 647 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 648 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 648 "hlds_llds.m"
    {
#line 648 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 648 "hlds_llds.m"
    }
#line 649 "hlds_llds.m"
    {
#line 649 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 649 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 649 "hlds_llds.m"
    }
#line 650 "hlds_llds.m"
    {
#line 650 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 645 "hlds_llds.m"
  }
#line 258 "hlds_llds.m"
}

#line 255 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_store_map_3_p_0(
#line 255 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StoreMap_4,
#line 255 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 255 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 255 "hlds_llds.m"
{
#line 638 "hlds_llds.m"
  {
#line 638 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 638 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 638 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 638 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 638 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 641 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;

#line 639 "hlds_llds.m"
    {
#line 639 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 640 "hlds_llds.m"
    {
#line 640 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 641 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 641 "hlds_llds.m"
    {
#line 641 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_4));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 641 "hlds_llds.m"
    }
#line 642 "hlds_llds.m"
    {
#line 642 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 642 "hlds_llds.m"
    }
#line 643 "hlds_llds.m"
    {
#line 643 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 638 "hlds_llds.m"
  }
#line 255 "hlds_llds.m"
}

#line 252 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(
#line 252 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 252 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 252 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 252 "hlds_llds.m"
{
#line 631 "hlds_llds.m"
  {
#line 631 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 631 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 631 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 631 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 631 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 634 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 632 "hlds_llds.m"
    {
#line 632 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 633 "hlds_llds.m"
    {
#line 633 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 634 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 634 "hlds_llds.m"
    {
#line 634 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 634 "hlds_llds.m"
    }
#line 635 "hlds_llds.m"
    {
#line 635 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 635 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 635 "hlds_llds.m"
    }
#line 636 "hlds_llds.m"
    {
#line 636 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 631 "hlds_llds.m"
  }
#line 252 "hlds_llds.m"
}

#line 249 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(
#line 249 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_4,
#line 249 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 249 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 249 "hlds_llds.m"
{
#line 624 "hlds_llds.m"
  {
#line 624 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 624 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 624 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 624 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 624 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 627 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;

#line 625 "hlds_llds.m"
    {
#line 625 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 626 "hlds_llds.m"
    {
#line 626 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 627 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 627 "hlds_llds.m"
    {
#line 627 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_4));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 627 "hlds_llds.m"
    }
#line 628 "hlds_llds.m"
    {
#line 628 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 628 "hlds_llds.m"
    }
#line 629 "hlds_llds.m"
    {
#line 629 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 624 "hlds_llds.m"
  }
#line 249 "hlds_llds.m"
}

#line 246 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(
#line 246 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_4,
#line 246 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 246 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 246 "hlds_llds.m"
{
#line 617 "hlds_llds.m"
  {
#line 617 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 617 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 617 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 617 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 617 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 620 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 618 "hlds_llds.m"
    {
#line 618 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 619 "hlds_llds.m"
    {
#line 619 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 620 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 620 "hlds_llds.m"
    {
#line 620 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_4));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 620 "hlds_llds.m"
    }
#line 621 "hlds_llds.m"
    {
#line 621 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 621 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 621 "hlds_llds.m"
    }
#line 622 "hlds_llds.m"
    {
#line 622 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 617 "hlds_llds.m"
  }
#line 246 "hlds_llds.m"
}

#line 243 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_births_3_p_0(
#line 243 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_4,
#line 243 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 243 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 243 "hlds_llds.m"
{
#line 610 "hlds_llds.m"
  {
#line 610 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 610 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 610 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 610 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 610 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 613 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;

#line 611 "hlds_llds.m"
    {
#line 611 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 612 "hlds_llds.m"
    {
#line 612 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 613 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 613 "hlds_llds.m"
    {
#line 613 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_4));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 613 "hlds_llds.m"
    }
#line 614 "hlds_llds.m"
    {
#line 614 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 614 "hlds_llds.m"
    }
#line 615 "hlds_llds.m"
    {
#line 615 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 610 "hlds_llds.m"
  }
#line 243 "hlds_llds.m"
}

#line 240 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_births_3_p_0(
#line 240 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_4,
#line 240 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 240 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 240 "hlds_llds.m"
{
#line 603 "hlds_llds.m"
  {
#line 603 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 603 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 603 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 603 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 603 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 606 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 604 "hlds_llds.m"
    {
#line 604 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 605 "hlds_llds.m"
    {
#line 605 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 606 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 606 "hlds_llds.m"
    {
#line 606 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_4));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 606 "hlds_llds.m"
    }
#line 607 "hlds_llds.m"
    {
#line 607 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 607 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 607 "hlds_llds.m"
    }
#line 608 "hlds_llds.m"
    {
#line 608 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
    }
#line 603 "hlds_llds.m"
  }
#line 240 "hlds_llds.m"
}

#line 235 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_8,
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_9,
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_10,
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_11,
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_12,
#line 235 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17,
#line 235 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18)
#line 235 "hlds_llds.m"
{
#line 590 "hlds_llds.m"
  {
#line 590 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_14;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_16;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_30_30;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_31_31;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_33_33;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_34_34;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_38_38;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_39_39;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_41_41;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_42_42;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_43_43;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_46_46;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_47_47;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_49_49;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_50_50;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_51_51;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_52_52;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_54_54;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_55_55;
#line 590 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_57_57;
#line 594 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_26_26;
#line 594 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_27_27;
#line 594 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_28_28;
#line 594 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_29_29;
#line 594 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_32_32;

#line 591 "hlds_llds.m"
    {
#line 591 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_14 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17);
    }
#line 593 "hlds_llds.m"
    {
#line 593 "hlds_llds.m"
      hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_14);
    }
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 0)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 1)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 2)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 3)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 4)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 5)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 6)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 7)));
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_34_34 = hlds__hlds_llds__PreBirths_8;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_38_38 = hlds__hlds_llds__V_30_30;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_39_39 = hlds__hlds_llds__V_31_31;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_41_41 = hlds__hlds_llds__V_33_33;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_42_42 = hlds__hlds_llds__V_34_34;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_43_43 = hlds__hlds_llds__PostBirths_9;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_46_46 = hlds__hlds_llds__V_38_38;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_47_47 = hlds__hlds_llds__V_39_39;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_49_49 = hlds__hlds_llds__V_41_41;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_50_50 = hlds__hlds_llds__V_42_42;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_51_51 = hlds__hlds_llds__V_43_43;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_52_52 = hlds__hlds_llds__PreDeaths_10;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_54_54 = hlds__hlds_llds__V_46_46;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_55_55 = hlds__hlds_llds__V_47_47;
#line 597 "hlds_llds.m"
    hlds__hlds_llds__V_57_57 = hlds__hlds_llds__V_49_49;
#line 598 "hlds_llds.m"
    {
#line 598 "hlds_llds.m"
      hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 0) = ((MR_Box) (hlds__hlds_llds__V_50_50));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 1) = ((MR_Box) (hlds__hlds_llds__V_51_51));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 2) = ((MR_Box) (hlds__hlds_llds__V_52_52));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_11));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 4) = ((MR_Box) (hlds__hlds_llds__V_54_54));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 5) = ((MR_Box) (hlds__hlds_llds__V_55_55));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_12));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 7) = ((MR_Box) (hlds__hlds_llds__V_57_57));
#line 598 "hlds_llds.m"
    }
#line 599 "hlds_llds.m"
    {
#line 599 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 599 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_16, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24));
#line 599 "hlds_llds.m"
    }
#line 601 "hlds_llds.m"
    {
#line 601 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_16, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18);
    }
#line 590 "hlds_llds.m"
  }
#line 235 "hlds_llds.m"
}

#line 225 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_p_0(
#line 225 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 225 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 225 "hlds_llds.m"
{
#line 581 "hlds_llds.m"
  {
#line 581 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 581 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 581 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 581 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedInParConj_7;
#line 581 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 583 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 582 "hlds_llds.m"
    {
#line 582 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 583 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 583 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 583 "hlds_llds.m"
      {
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 584 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 3)));
#line 584 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 584 "hlds_llds.m"
          {
#line 584 "hlds_llds.m"
            hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));
#line 585 "hlds_llds.m"
            {
#line 585 "hlds_llds.m"
              MR_Word base;
#line 585 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
#line 585 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
#line 585 "hlds_llds.m"
            }
#line 585 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 584 "hlds_llds.m"
          }
#line 583 "hlds_llds.m"
      }
#line 581 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 581 "hlds_llds.m"
  }
#line 225 "hlds_llds.m"
}

#line 222 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_p_0(
#line 222 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 222 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 222 "hlds_llds.m"
{
#line 575 "hlds_llds.m"
  {
#line 575 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 575 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 575 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 575 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedInResume_7;
#line 575 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 577 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 576 "hlds_llds.m"
    {
#line 576 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 577 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 577 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 577 "hlds_llds.m"
      {
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 578 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 2)));
#line 578 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 578 "hlds_llds.m"
          {
#line 578 "hlds_llds.m"
            hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);
#line 579 "hlds_llds.m"
            {
#line 579 "hlds_llds.m"
              MR_Word base;
#line 579 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 579 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInResume_4 = base;
#line 579 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
#line 579 "hlds_llds.m"
            }
#line 579 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 578 "hlds_llds.m"
          }
#line 577 "hlds_llds.m"
      }
#line 575 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 575 "hlds_llds.m"
  }
#line 222 "hlds_llds.m"
}

#line 219 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(
#line 219 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 219 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAcrossCall_4)
#line 219 "hlds_llds.m"
{
#line 569 "hlds_llds.m"
  {
#line 569 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 569 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 569 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 569 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedAcrossCall_7;
#line 569 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 571 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 570 "hlds_llds.m"
    {
#line 570 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 571 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 571 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 571 "hlds_llds.m"
      {
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 572 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 1)));
#line 572 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 572 "hlds_llds.m"
          {
#line 572 "hlds_llds.m"
            hlds__hlds_llds__NeedAcrossCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);
#line 573 "hlds_llds.m"
            {
#line 573 "hlds_llds.m"
              MR_Word base;
#line 573 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 573 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedAcrossCall_4 = base;
#line 573 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAcrossCall_7));
#line 573 "hlds_llds.m"
            }
#line 573 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 572 "hlds_llds.m"
          }
#line 571 "hlds_llds.m"
      }
#line 569 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 569 "hlds_llds.m"
  }
#line 219 "hlds_llds.m"
}

#line 216 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(
#line 216 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 216 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 216 "hlds_llds.m"
{
#line 565 "hlds_llds.m"
  {
#line 565 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 565 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 565 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 567 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 566 "hlds_llds.m"
    {
#line 566 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 567 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 567 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 567 "hlds_llds.m"
      {
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 567 "hlds_llds.m"
        *hlds__hlds_llds__ResumePoint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 567 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 567 "hlds_llds.m"
      }
#line 565 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 565 "hlds_llds.m"
  }
#line 216 "hlds_llds.m"
}

#line 213 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(
#line 213 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 213 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 213 "hlds_llds.m"
{
#line 561 "hlds_llds.m"
  {
#line 561 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 561 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 561 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 563 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 562 "hlds_llds.m"
    {
#line 562 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 563 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 563 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 563 "hlds_llds.m"
      {
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 563 "hlds_llds.m"
        *hlds__hlds_llds__StoreMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 563 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 563 "hlds_llds.m"
      }
#line 561 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 561 "hlds_llds.m"
  }
#line 213 "hlds_llds.m"
}

#line 210 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_p_0(
#line 210 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 210 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 210 "hlds_llds.m"
{
#line 557 "hlds_llds.m"
  {
#line 557 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 557 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 557 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 559 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 558 "hlds_llds.m"
    {
#line 558 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 559 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 559 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 559 "hlds_llds.m"
      {
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 559 "hlds_llds.m"
        *hlds__hlds_llds__FollowVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 559 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 559 "hlds_llds.m"
      }
#line 557 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 557 "hlds_llds.m"
  }
#line 210 "hlds_llds.m"
}

#line 207 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(
#line 207 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 207 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 207 "hlds_llds.m"
{
#line 553 "hlds_llds.m"
  {
#line 553 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 553 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 553 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 555 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 554 "hlds_llds.m"
    {
#line 554 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 555 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 555 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 555 "hlds_llds.m"
      {
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 555 "hlds_llds.m"
        *hlds__hlds_llds__PostDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 555 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 555 "hlds_llds.m"
      }
#line 553 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 553 "hlds_llds.m"
  }
#line 207 "hlds_llds.m"
}

#line 204 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(
#line 204 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 204 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 204 "hlds_llds.m"
{
#line 549 "hlds_llds.m"
  {
#line 549 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 549 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 549 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 551 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 550 "hlds_llds.m"
    {
#line 550 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 551 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 551 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 551 "hlds_llds.m"
      {
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 551 "hlds_llds.m"
        *hlds__hlds_llds__PreDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 551 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 551 "hlds_llds.m"
      }
#line 549 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 549 "hlds_llds.m"
  }
#line 204 "hlds_llds.m"
}

#line 201 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(
#line 201 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 201 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 201 "hlds_llds.m"
{
#line 545 "hlds_llds.m"
  {
#line 545 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 545 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 545 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 547 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 546 "hlds_llds.m"
    {
#line 546 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 547 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 547 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 547 "hlds_llds.m"
      {
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 547 "hlds_llds.m"
        *hlds__hlds_llds__PostBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 547 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 547 "hlds_llds.m"
      }
#line 545 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 545 "hlds_llds.m"
  }
#line 201 "hlds_llds.m"
}

#line 198 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(
#line 198 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 198 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 198 "hlds_llds.m"
{
#line 541 "hlds_llds.m"
  {
#line 541 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 541 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 541 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 543 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 542 "hlds_llds.m"
    {
#line 542 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 543 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 543 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 543 "hlds_llds.m"
      {
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 543 "hlds_llds.m"
        *hlds__hlds_llds__PreBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 543 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 543 "hlds_llds.m"
      }
#line 541 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 541 "hlds_llds.m"
  }
#line 198 "hlds_llds.m"
}

#line 193 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(
#line 193 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 193 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 193 "hlds_llds.m"
{
#line 522 "hlds_llds.m"
  {
#line 522 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 522 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 524 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 523 "hlds_llds.m"
    {
#line 523 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 524 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 524 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 524 "hlds_llds.m"
      {
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 524 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 524 "hlds_llds.m"
      }
#line 524 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 528 "hlds_llds.m"
#line 528 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 528 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 528 "hlds_llds.m"
        case (MR_Integer) 0:
#line 533 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "hlds_llds.m"
          break;
#line 528 "hlds_llds.m"
        case (MR_Integer) 1:
#line 528 "hlds_llds.m"
        case (MR_Integer) 2:
#line 533 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "hlds_llds.m"
          break;
#line 528 "hlds_llds.m"
        case (MR_Integer) 3:
#line 526 "hlds_llds.m"
          {
#line 526 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));

#line 527 "hlds_llds.m"
            {
#line 527 "hlds_llds.m"
              MR_Word base;
#line 527 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
#line 527 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
#line 527 "hlds_llds.m"
            }
#line 526 "hlds_llds.m"
          }
#line 528 "hlds_llds.m"
          break;
#line 528 "hlds_llds.m"
      }
#line 524 "hlds_llds.m"
    else
#line 536 "hlds_llds.m"
      {
#line 536 "hlds_llds.m"
        {
#line 536 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_par_conj\'/2", (MR_String) "no code_gen_info");
#line 536 "hlds_llds.m"
          return;
        }
#line 536 "hlds_llds.m"
      }
#line 522 "hlds_llds.m"
  }
#line 193 "hlds_llds.m"
}

#line 190 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(
#line 190 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 190 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 190 "hlds_llds.m"
{
#line 505 "hlds_llds.m"
  {
#line 505 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 505 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 507 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 506 "hlds_llds.m"
    {
#line 506 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 507 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 507 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 507 "hlds_llds.m"
      {
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 507 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 507 "hlds_llds.m"
      }
#line 507 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 511 "hlds_llds.m"
#line 511 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 511 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 511 "hlds_llds.m"
        case (MR_Integer) 0:
#line 516 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "hlds_llds.m"
          break;
#line 511 "hlds_llds.m"
        case (MR_Integer) 1:
#line 516 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "hlds_llds.m"
          break;
#line 511 "hlds_llds.m"
        case (MR_Integer) 2:
#line 509 "hlds_llds.m"
          {
#line 509 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);

#line 510 "hlds_llds.m"
            {
#line 510 "hlds_llds.m"
              MR_Word base;
#line 510 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInResume_4 = base;
#line 510 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
#line 510 "hlds_llds.m"
            }
#line 509 "hlds_llds.m"
          }
#line 511 "hlds_llds.m"
          break;
#line 511 "hlds_llds.m"
        case (MR_Integer) 3:
#line 516 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 511 "hlds_llds.m"
          break;
#line 511 "hlds_llds.m"
      }
#line 507 "hlds_llds.m"
    else
#line 519 "hlds_llds.m"
      {
#line 519 "hlds_llds.m"
        {
#line 519 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_resume\'/2", (MR_String) "no code_gen_info");
#line 519 "hlds_llds.m"
          return;
        }
#line 519 "hlds_llds.m"
      }
#line 505 "hlds_llds.m"
  }
#line 190 "hlds_llds.m"
}

#line 187 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(
#line 187 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 187 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAtCall_4)
#line 187 "hlds_llds.m"
{
#line 488 "hlds_llds.m"
  {
#line 488 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 488 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 490 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 489 "hlds_llds.m"
    {
#line 489 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 490 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 490 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 490 "hlds_llds.m"
      {
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 490 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 490 "hlds_llds.m"
      }
#line 490 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 494 "hlds_llds.m"
#line 494 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 494 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 494 "hlds_llds.m"
        case (MR_Integer) 0:
#line 499 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "hlds_llds.m"
          break;
#line 494 "hlds_llds.m"
        case (MR_Integer) 1:
#line 492 "hlds_llds.m"
          {
#line 492 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedAtCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);

#line 493 "hlds_llds.m"
            {
#line 493 "hlds_llds.m"
              MR_Word base;
#line 493 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedAtCall_4 = base;
#line 493 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAtCall_7));
#line 493 "hlds_llds.m"
            }
#line 492 "hlds_llds.m"
          }
#line 494 "hlds_llds.m"
          break;
#line 494 "hlds_llds.m"
        case (MR_Integer) 2:
#line 499 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "hlds_llds.m"
          break;
#line 494 "hlds_llds.m"
        case (MR_Integer) 3:
#line 499 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "hlds_llds.m"
          break;
#line 494 "hlds_llds.m"
      }
#line 490 "hlds_llds.m"
    else
#line 502 "hlds_llds.m"
      {
#line 502 "hlds_llds.m"
        {
#line 502 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_across_call\'/2", (MR_String) "no code_gen_info");
#line 502 "hlds_llds.m"
          return;
        }
#line 502 "hlds_llds.m"
      }
#line 488 "hlds_llds.m"
  }
#line 187 "hlds_llds.m"
}

#line 184 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_resume_point_2_p_0(
#line 184 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 184 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 184 "hlds_llds.m"
{
#line 480 "hlds_llds.m"
  {
#line 480 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 480 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePointPrime_6;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 482 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 481 "hlds_llds.m"
    {
#line 481 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 482 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 482 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 482 "hlds_llds.m"
      {
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__ResumePointPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 482 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 482 "hlds_llds.m"
      }
#line 482 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 483 "hlds_llds.m"
      *hlds__hlds_llds__ResumePoint_4 = hlds__hlds_llds__ResumePointPrime_6;
#line 482 "hlds_llds.m"
    else
#line 485 "hlds_llds.m"
      {
#line 485 "hlds_llds.m"
        {
#line 485 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_resume_point\'/2", (MR_String) "no code_gen_info");
#line 485 "hlds_llds.m"
          return;
        }
#line 485 "hlds_llds.m"
      }
#line 480 "hlds_llds.m"
  }
#line 184 "hlds_llds.m"
}

#line 181 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_store_map_2_p_0(
#line 181 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 181 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 181 "hlds_llds.m"
{
#line 472 "hlds_llds.m"
  {
#line 472 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 472 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMapPrime_6;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 474 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 473 "hlds_llds.m"
    {
#line 473 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 474 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 474 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 474 "hlds_llds.m"
      {
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__StoreMapPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 474 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 474 "hlds_llds.m"
      }
#line 474 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 475 "hlds_llds.m"
      *hlds__hlds_llds__StoreMap_4 = hlds__hlds_llds__StoreMapPrime_6;
#line 474 "hlds_llds.m"
    else
#line 477 "hlds_llds.m"
      {
#line 477 "hlds_llds.m"
        {
#line 477 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_store_map\'/2", (MR_String) "no code_gen_info");
#line 477 "hlds_llds.m"
          return;
        }
#line 477 "hlds_llds.m"
      }
#line 472 "hlds_llds.m"
  }
#line 181 "hlds_llds.m"
}

#line 178 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(
#line 178 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 178 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 178 "hlds_llds.m"
{
#line 464 "hlds_llds.m"
  {
#line 464 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 464 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__FollowVarsPrime_6;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 466 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 465 "hlds_llds.m"
    {
#line 465 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 466 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 466 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 466 "hlds_llds.m"
      {
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__FollowVarsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 466 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 466 "hlds_llds.m"
      }
#line 466 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 467 "hlds_llds.m"
      *hlds__hlds_llds__FollowVars_4 = hlds__hlds_llds__FollowVarsPrime_6;
#line 466 "hlds_llds.m"
    else
#line 469 "hlds_llds.m"
      {
#line 469 "hlds_llds.m"
        {
#line 469 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_follow_vars\'/2", (MR_String) "no code_gen_info");
#line 469 "hlds_llds.m"
          return;
        }
#line 469 "hlds_llds.m"
      }
#line 464 "hlds_llds.m"
  }
#line 178 "hlds_llds.m"
}

#line 175 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(
#line 175 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 175 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 175 "hlds_llds.m"
{
#line 456 "hlds_llds.m"
  {
#line 456 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 456 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeathsPrime_6;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 458 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 457 "hlds_llds.m"
    {
#line 457 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 458 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 458 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 458 "hlds_llds.m"
      {
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__PostDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 458 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 458 "hlds_llds.m"
      }
#line 458 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 459 "hlds_llds.m"
      *hlds__hlds_llds__PostDeaths_4 = hlds__hlds_llds__PostDeathsPrime_6;
#line 458 "hlds_llds.m"
    else
#line 461 "hlds_llds.m"
      {
#line 461 "hlds_llds.m"
        {
#line 461 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_deaths\'/2", (MR_String) "no code_gen_info");
#line 461 "hlds_llds.m"
          return;
        }
#line 461 "hlds_llds.m"
      }
#line 456 "hlds_llds.m"
  }
#line 175 "hlds_llds.m"
}

#line 172 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(
#line 172 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 172 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 172 "hlds_llds.m"
{
#line 448 "hlds_llds.m"
  {
#line 448 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 448 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeathsPrime_6;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 450 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 449 "hlds_llds.m"
    {
#line 449 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 450 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 450 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 450 "hlds_llds.m"
      {
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__PreDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 450 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 450 "hlds_llds.m"
      }
#line 450 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 451 "hlds_llds.m"
      *hlds__hlds_llds__PreDeaths_4 = hlds__hlds_llds__PreDeathsPrime_6;
#line 450 "hlds_llds.m"
    else
#line 453 "hlds_llds.m"
      {
#line 453 "hlds_llds.m"
        {
#line 453 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_deaths\'/2", (MR_String) "no code_gen_info");
#line 453 "hlds_llds.m"
          return;
        }
#line 453 "hlds_llds.m"
      }
#line 448 "hlds_llds.m"
  }
#line 172 "hlds_llds.m"
}

#line 169 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_births_2_p_0(
#line 169 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 169 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 169 "hlds_llds.m"
{
#line 440 "hlds_llds.m"
  {
#line 440 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 440 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirthsPrime_6;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 442 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 441 "hlds_llds.m"
    {
#line 441 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 442 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 442 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 442 "hlds_llds.m"
      {
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__PostBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 442 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 442 "hlds_llds.m"
      }
#line 442 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 443 "hlds_llds.m"
      *hlds__hlds_llds__PostBirths_4 = hlds__hlds_llds__PostBirthsPrime_6;
#line 442 "hlds_llds.m"
    else
#line 445 "hlds_llds.m"
      {
#line 445 "hlds_llds.m"
        {
#line 445 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_births\'/2", (MR_String) "no code_gen_info");
#line 445 "hlds_llds.m"
          return;
        }
#line 445 "hlds_llds.m"
      }
#line 440 "hlds_llds.m"
  }
#line 169 "hlds_llds.m"
}

#line 166 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_births_2_p_0(
#line 166 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 166 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 166 "hlds_llds.m"
{
#line 432 "hlds_llds.m"
  {
#line 432 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 432 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirthsPrime_6;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 434 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 433 "hlds_llds.m"
    {
#line 433 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 434 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 434 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 434 "hlds_llds.m"
      {
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__PreBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 434 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 434 "hlds_llds.m"
      }
#line 434 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 435 "hlds_llds.m"
      *hlds__hlds_llds__PreBirths_4 = hlds__hlds_llds__PreBirthsPrime_6;
#line 434 "hlds_llds.m"
    else
#line 437 "hlds_llds.m"
      {
#line 437 "hlds_llds.m"
        {
#line 437 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_births\'/2", (MR_String) "no code_gen_info");
#line 437 "hlds_llds.m"
          return;
        }
#line 437 "hlds_llds.m"
      }
#line 432 "hlds_llds.m"
  }
#line 166 "hlds_llds.m"
}

#line 54 "hlds_llds.m"
MR_String MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_f_0(
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlots_4,
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_5)
#line 54 "hlds_llds.m"
{
#line 318 "hlds_llds.m"
  {
#line 318 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 318 "hlds_llds.m"
    MR_String hlds__hlds_llds__Explanation_6;
#line 318 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StackSlotsList_7;
#line 318 "hlds_llds.m"
    MR_String hlds__hlds_llds__Explanation1_8;

#line 319 "hlds_llds.m"
    {
#line 319 "hlds_llds.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, hlds__hlds_llds__StackSlots_4, &hlds__hlds_llds__StackSlotsList_7);
    }
#line 320 "hlds_llds.m"
    {
#line 320 "hlds_llds.m"
      hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__StackSlotsList_7, hlds__hlds_llds__VarSet_5, (MR_String) "", &hlds__hlds_llds__Explanation1_8);
    }
#line 321 "hlds_llds.m"
    {
#line 321 "hlds_llds.m"
      hlds__hlds_llds__Explanation_6 = mercury__string__f_43_43_2_f_0((MR_String) "\nStack slot assignments (if any):\n", hlds__hlds_llds__Explanation1_8);
    }
#line 318 "hlds_llds.m"
    return hlds__hlds_llds__Explanation_6;
#line 318 "hlds_llds.m"
  }
#line 54 "hlds_llds.m"
}

void mercury__hlds__hlds_llds__init(void)
{
}

void mercury__hlds__hlds_llds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0);
	MR_register_type_ctor_info(&hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0);
}

void mercury__hlds__hlds_llds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_llds. */
