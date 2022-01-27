/*
** Automatically generated from `hlds_llds.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 130 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 133 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

#line 136 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3];

#line 139 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3];

#line 142 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0;

#line 145 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1];

#line 148 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1];

#line 151 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1];

#line 154 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1];

#line 157 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0;

#line 160 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2];

#line 163 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1;

#line 166 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2];

#line 169 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2;

#line 172 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2];

#line 175 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3;

#line 178 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1];

#line 181 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4;

#line 184 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1];

#line 187 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1];

#line 190 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1];

#line 193 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2];

#line 196 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4];

#line 199 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5];

#line 202 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5];

#line 205 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

#line 211 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8];

#line 214 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8];

#line 217 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0;

#line 220 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1];

#line 223 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1];

#line 226 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1];

#line 229 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1];

#line 232 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0;

#line 235 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1];

#line 238 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1;

#line 241 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1];

#line 244 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2;

#line 247 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1];

#line 250 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3;

#line 253 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1];

#line 256 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1];

#line 259 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1];

#line 262 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1];

#line 265 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4];

#line 268 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4];

#line 271 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4];

#line 274 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3];

#line 277 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3];

#line 280 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0;

#line 283 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1];

#line 286 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1];

#line 289 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1];

#line 292 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1];

#line 295 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1];

#line 298 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 301 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 304 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0;

#line 307 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1];

#line 310 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0;

#line 313 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3];

#line 316 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3];

#line 319 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0;

#line 322 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1];

#line 325 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1];

#line 328 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1];

#line 331 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1];

#line 334 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0;

#line 337 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1;

#line 340 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2];

#line 343 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2];

#line 346 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2];

#line 349 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0;

#line 352 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1;

#line 355 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2;

#line 358 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3;

#line 361 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4];

#line 364 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4];

#line 367 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4];

#line 370 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2];

#line 373 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0;

#line 376 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1;

#line 379 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1];

#line 382 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1];

#line 385 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2];

#line 388 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2];

#line 391 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2];

#line 394 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2];

#line 397 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0;

#line 400 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2];

#line 403 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1;

#line 406 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1];

#line 409 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2;

#line 412 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1];

#line 415 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1];

#line 418 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1];

#line 421 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3];

#line 424 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3];

#line 427 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3];

#line 430 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0;

#line 433 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1;

#line 436 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2];

#line 439 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2];

#line 442 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2];

#line 445 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 448 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 451 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 453 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 456 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 459 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 461 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 463 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 466 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 469 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 471 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 474 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 477 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 479 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 481 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 484 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 487 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 489 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 492 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 495 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 497 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 499 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 502 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 505 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 507 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 510 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 513 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 515 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 517 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 520 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 523 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 525 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 528 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 531 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 533 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 535 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 538 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 541 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 543 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 546 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 549 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 551 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 553 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 556 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 559 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 561 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 564 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 567 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 569 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 571 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 574 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 577 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 579 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 582 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 585 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 587 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 589 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 592 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 595 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 597 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 600 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 603 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 605 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 607 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 610 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 613 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 615 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 618 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 621 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 623 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 625 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 628 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 631 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 633 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 636 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 639 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 641 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 643 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 646 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 649 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 651 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 654 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 657 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 659 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 661 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 664 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 667 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 669 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 672 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 675 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 677 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 679 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 682 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 685 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 687 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 690 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 693 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 695 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 697 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 700 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 703 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 705 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 708 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 711 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 713 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 715 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 718 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 721 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 723 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 726 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 729 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 731 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 733 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 356 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
#line 356 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3);

#line 356 "hlds_llds.m"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2);

#line 778 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3,
#line 778 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__4_4);

#line 692 "hlds_llds.m"
static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
#line 692 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1);

#line 322 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
#line 322 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 322 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_2,
#line 322 "hlds_llds.m"
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
#line 322 "hlds_llds.m"
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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 856 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 864 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

#line 873 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 880 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3] = {
  (MR_String) "afv_map",
  (MR_String) "afv_next_non_res_reg_r",
  (MR_String) "afv_next_non_res_reg_f"
};

#line 887 "hlds.hlds_llds.c"
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

#line 902 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 907 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0
  }
};

#line 916 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 921 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1] = {
  (MR_Integer) 0
};

#line 926 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0
};

#line 947 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_follow_vars_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 968 "hlds.hlds_llds.c"
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

#line 983 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 989 "hlds.hlds_llds.c"
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

#line 1004 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1010 "hlds.hlds_llds.c"
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

#line 1025 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1031 "hlds.hlds_llds.c"
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

#line 1046 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1051 "hlds.hlds_llds.c"
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

#line 1066 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1071 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1
};

#line 1076 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2
};

#line 1081 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4
};

#line 1087 "hlds.hlds_llds.c"
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

#line 1111 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1120 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1129 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_locn_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_locn",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0
};

#line 1150 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_store_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____abs_store_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____abs_store_map_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "abs_store_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1171 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1179 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0
  }
};

#line 1187 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0
};

#line 1199 "hlds.hlds_llds.c"
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

#line 1211 "hlds.hlds_llds.c"
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

#line 1226 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1231 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0
  }
};

#line 1240 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1245 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1] = {
  (MR_Integer) 0
};

#line 1250 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_llds_code_gen_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "llds_code_gen_details",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0
};

#line 1271 "hlds.hlds_llds.c"
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

#line 1286 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0
};

#line 1291 "hlds.hlds_llds.c"
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

#line 1306 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0
};

#line 1311 "hlds.hlds_llds.c"
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

#line 1326 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0
};

#line 1331 "hlds.hlds_llds.c"
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

#line 1346 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1351 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1
};

#line 1356 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2
};

#line 1361 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3
};

#line 1366 "hlds.hlds_llds.c"
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

#line 1390 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1398 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1406 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_maybe_need_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____maybe_need_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____maybe_need_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "maybe_need",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0
};

#line 1427 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1434 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3] = {
  (MR_String) "call_forward_vars",
  (MR_String) "call_resume_vars",
  (MR_String) "call_nondet_vars"
};

#line 1441 "hlds.hlds_llds.c"
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

#line 1456 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1461 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0
  }
};

#line 1470 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1475 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1] = {
  (MR_Integer) 0
};

#line 1480 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_across_call_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_across_call_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_across_call",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0
};

#line 1501 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1] = {
  (MR_Integer) 0
};

#line 1506 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1514 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1522 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 = {
  (MR_String) "need_for_loop_control",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__list__ti_list_1parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "loop_control_distinct_stackvars"
};

#line 1529 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_for_loop_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_for_loop_control",
  {
    &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0
  },
  {
    &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0
};

#line 1550 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1] = {
  (MR_Integer) 0
};

#line 1555 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
  (MR_String) "need_in_par_conj",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__parse_tree__set_of_var__ti_set_of_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_engine_vars"
};

#line 1562 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_par_conj",
  {
    &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0
  },
  {
    &hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0
};

#line 1583 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1590 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3] = {
  (MR_String) "resume_vars_on_stack",
  (MR_String) "resume_resume_vars",
  (MR_String) "resume_nondet_vars"
};

#line 1597 "hlds.hlds_llds.c"
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

#line 1612 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1617 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0
  }
};

#line 1626 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1631 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1] = {
  (MR_Integer) 0
};

#line 1636 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____need_in_resume_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____need_in_resume_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "need_in_resume",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0
};

#line 1657 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0 = {
  (MR_String) "reg_r",
  (MR_Integer) 0
};

#line 1663 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1 = {
  (MR_String) "reg_f",
  (MR_Integer) 1
};

#line 1669 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1
};

#line 1675 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0
};

#line 1681 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1687 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____reg_type_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____reg_type_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "reg_type",
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0
};

#line 1708 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
  (MR_String) "resume_locs_orig_only",
  (MR_Integer) 0
};

#line 1714 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
  (MR_String) "resume_locs_stack_only",
  (MR_Integer) 1
};

#line 1720 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
  (MR_String) "resume_locs_orig_and_stack",
  (MR_Integer) 2
};

#line 1726 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
  (MR_String) "resume_locs_stack_and_orig",
  (MR_Integer) 3
};

#line 1732 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

#line 1740 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1
};

#line 1748 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1756 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_locs_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_locs_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_locs",
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0
};

#line 1777 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0
};

#line 1783 "hlds.hlds_llds.c"
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

#line 1798 "hlds.hlds_llds.c"
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

#line 1813 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1
};

#line 1818 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1823 "hlds.hlds_llds.c"
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

#line 1837 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1843 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1849 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____resume_point_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____resume_point_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "resume_point",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0
};

#line 1870 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1876 "hlds.hlds_llds.c"
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

#line 1891 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1897 "hlds.hlds_llds.c"
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

#line 1912 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1917 "hlds.hlds_llds.c"
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

#line 1932 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0
};

#line 1937 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1942 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2
};

#line 1947 "hlds.hlds_llds.c"
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

#line 1966 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1973 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1980 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot",
  {
    hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0
};

#line 2001 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0 = {
  (MR_String) "single_width",
  (MR_Integer) 0
};

#line 2007 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1 = {
  (MR_String) "double_width",
  (MR_Integer) 1
};

#line 2013 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1
};

#line 2019 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0
};

#line 2025 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2031 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slot_width_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slot_width_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slot_width",
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0
  },
  {
    hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0
};

#line 2052 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 2061 "hlds.hlds_llds.c"
const MR_TypeCtorInfo_Struct hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slots_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_llds____Unify____stack_slots_0_0_10001)),
  ((MR_Box) (hlds__hlds_llds____Compare____stack_slots_0_0_10001)),
  (MR_String) "hlds.hlds_llds",
  (MR_String) "stack_slots",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2082 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 2085 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2087 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2089 "hlds.hlds_llds.c"
{
#line 2091 "hlds.hlds_llds.c"
  {
#line 2093 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2096 "hlds.hlds_llds.c"
    {
#line 2098 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2101 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2103 "hlds.hlds_llds.c"
  }
#line 2105 "hlds.hlds_llds.c"
}

#line 2108 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 2111 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2113 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2115 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2117 "hlds.hlds_llds.c"
{
#line 2119 "hlds.hlds_llds.c"
  {
#line 2121 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2124 "hlds.hlds_llds.c"
    {
#line 2126 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2129 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2131 "hlds.hlds_llds.c"
  }
#line 2133 "hlds.hlds_llds.c"
}

#line 2136 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 2139 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2141 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2143 "hlds.hlds_llds.c"
{
#line 2145 "hlds.hlds_llds.c"
  {
#line 2147 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2150 "hlds.hlds_llds.c"
    {
#line 2152 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2155 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2157 "hlds.hlds_llds.c"
  }
#line 2159 "hlds.hlds_llds.c"
}

#line 2162 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 2165 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2167 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2169 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2171 "hlds.hlds_llds.c"
{
#line 2173 "hlds.hlds_llds.c"
  {
#line 2175 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2178 "hlds.hlds_llds.c"
    {
#line 2180 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2183 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2185 "hlds.hlds_llds.c"
  }
#line 2187 "hlds.hlds_llds.c"
}

#line 2190 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 2193 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2195 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2197 "hlds.hlds_llds.c"
{
#line 2199 "hlds.hlds_llds.c"
  {
#line 2201 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2204 "hlds.hlds_llds.c"
    {
#line 2206 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_locn_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2209 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2211 "hlds.hlds_llds.c"
  }
#line 2213 "hlds.hlds_llds.c"
}

#line 2216 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 2219 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2221 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2223 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2225 "hlds.hlds_llds.c"
{
#line 2227 "hlds.hlds_llds.c"
  {
#line 2229 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2232 "hlds.hlds_llds.c"
    {
#line 2234 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_locn_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2237 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2239 "hlds.hlds_llds.c"
  }
#line 2241 "hlds.hlds_llds.c"
}

#line 2244 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 2247 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2249 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2251 "hlds.hlds_llds.c"
{
#line 2253 "hlds.hlds_llds.c"
  {
#line 2255 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2258 "hlds.hlds_llds.c"
    {
#line 2260 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_store_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2263 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2265 "hlds.hlds_llds.c"
  }
#line 2267 "hlds.hlds_llds.c"
}

#line 2270 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 2273 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2275 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2277 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2279 "hlds.hlds_llds.c"
{
#line 2281 "hlds.hlds_llds.c"
  {
#line 2283 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2286 "hlds.hlds_llds.c"
    {
#line 2288 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_store_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2291 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2293 "hlds.hlds_llds.c"
  }
#line 2295 "hlds.hlds_llds.c"
}

#line 2298 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 2301 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2303 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2305 "hlds.hlds_llds.c"
{
#line 2307 "hlds.hlds_llds.c"
  {
#line 2309 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2312 "hlds.hlds_llds.c"
    {
#line 2314 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____llds_code_gen_details_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2317 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2319 "hlds.hlds_llds.c"
  }
#line 2321 "hlds.hlds_llds.c"
}

#line 2324 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 2327 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2329 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2331 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2333 "hlds.hlds_llds.c"
{
#line 2335 "hlds.hlds_llds.c"
  {
#line 2337 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2340 "hlds.hlds_llds.c"
    {
#line 2342 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____llds_code_gen_details_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2345 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2347 "hlds.hlds_llds.c"
  }
#line 2349 "hlds.hlds_llds.c"
}

#line 2352 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 2355 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2357 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2359 "hlds.hlds_llds.c"
{
#line 2361 "hlds.hlds_llds.c"
  {
#line 2363 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2366 "hlds.hlds_llds.c"
    {
#line 2368 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____maybe_need_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2371 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2373 "hlds.hlds_llds.c"
  }
#line 2375 "hlds.hlds_llds.c"
}

#line 2378 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 2381 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2383 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2385 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2387 "hlds.hlds_llds.c"
{
#line 2389 "hlds.hlds_llds.c"
  {
#line 2391 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2394 "hlds.hlds_llds.c"
    {
#line 2396 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____maybe_need_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2399 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2401 "hlds.hlds_llds.c"
  }
#line 2403 "hlds.hlds_llds.c"
}

#line 2406 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 2409 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2411 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2413 "hlds.hlds_llds.c"
{
#line 2415 "hlds.hlds_llds.c"
  {
#line 2417 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2420 "hlds.hlds_llds.c"
    {
#line 2422 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2425 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2427 "hlds.hlds_llds.c"
  }
#line 2429 "hlds.hlds_llds.c"
}

#line 2432 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 2435 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2437 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2439 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2441 "hlds.hlds_llds.c"
{
#line 2443 "hlds.hlds_llds.c"
  {
#line 2445 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2448 "hlds.hlds_llds.c"
    {
#line 2450 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_across_call_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2453 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2455 "hlds.hlds_llds.c"
  }
#line 2457 "hlds.hlds_llds.c"
}

#line 2460 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 2463 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2465 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2467 "hlds.hlds_llds.c"
{
#line 2469 "hlds.hlds_llds.c"
  {
#line 2471 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2474 "hlds.hlds_llds.c"
    {
#line 2476 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_for_loop_control_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2479 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2481 "hlds.hlds_llds.c"
  }
#line 2483 "hlds.hlds_llds.c"
}

#line 2486 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 2489 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2491 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2493 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2495 "hlds.hlds_llds.c"
{
#line 2497 "hlds.hlds_llds.c"
  {
#line 2499 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2502 "hlds.hlds_llds.c"
    {
#line 2504 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_for_loop_control_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2507 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2509 "hlds.hlds_llds.c"
  }
#line 2511 "hlds.hlds_llds.c"
}

#line 2514 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 2517 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2519 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2521 "hlds.hlds_llds.c"
{
#line 2523 "hlds.hlds_llds.c"
  {
#line 2525 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2528 "hlds.hlds_llds.c"
    {
#line 2530 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2533 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2535 "hlds.hlds_llds.c"
  }
#line 2537 "hlds.hlds_llds.c"
}

#line 2540 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 2543 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2545 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2547 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2549 "hlds.hlds_llds.c"
{
#line 2551 "hlds.hlds_llds.c"
  {
#line 2553 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2556 "hlds.hlds_llds.c"
    {
#line 2558 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_par_conj_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2561 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2563 "hlds.hlds_llds.c"
  }
#line 2565 "hlds.hlds_llds.c"
}

#line 2568 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 2571 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2573 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2575 "hlds.hlds_llds.c"
{
#line 2577 "hlds.hlds_llds.c"
  {
#line 2579 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2582 "hlds.hlds_llds.c"
    {
#line 2584 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2587 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2589 "hlds.hlds_llds.c"
  }
#line 2591 "hlds.hlds_llds.c"
}

#line 2594 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 2597 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2599 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2601 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2603 "hlds.hlds_llds.c"
{
#line 2605 "hlds.hlds_llds.c"
  {
#line 2607 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2610 "hlds.hlds_llds.c"
    {
#line 2612 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_resume_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2615 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2617 "hlds.hlds_llds.c"
  }
#line 2619 "hlds.hlds_llds.c"
}

#line 2622 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 2625 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2627 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2629 "hlds.hlds_llds.c"
{
#line 2631 "hlds.hlds_llds.c"
  {
#line 2633 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2636 "hlds.hlds_llds.c"
    {
#line 2638 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____reg_type_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2641 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2643 "hlds.hlds_llds.c"
  }
#line 2645 "hlds.hlds_llds.c"
}

#line 2648 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 2651 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2653 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2655 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2657 "hlds.hlds_llds.c"
{
#line 2659 "hlds.hlds_llds.c"
  {
#line 2661 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2664 "hlds.hlds_llds.c"
    {
#line 2666 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____reg_type_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2669 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2671 "hlds.hlds_llds.c"
  }
#line 2673 "hlds.hlds_llds.c"
}

#line 2676 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 2679 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2681 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2683 "hlds.hlds_llds.c"
{
#line 2685 "hlds.hlds_llds.c"
  {
#line 2687 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2690 "hlds.hlds_llds.c"
    {
#line 2692 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_locs_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2695 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2697 "hlds.hlds_llds.c"
  }
#line 2699 "hlds.hlds_llds.c"
}

#line 2702 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 2705 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2707 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2709 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2711 "hlds.hlds_llds.c"
{
#line 2713 "hlds.hlds_llds.c"
  {
#line 2715 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2718 "hlds.hlds_llds.c"
    {
#line 2720 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_locs_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2723 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2725 "hlds.hlds_llds.c"
  }
#line 2727 "hlds.hlds_llds.c"
}

#line 2730 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 2733 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2735 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2737 "hlds.hlds_llds.c"
{
#line 2739 "hlds.hlds_llds.c"
  {
#line 2741 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2744 "hlds.hlds_llds.c"
    {
#line 2746 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2749 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2751 "hlds.hlds_llds.c"
  }
#line 2753 "hlds.hlds_llds.c"
}

#line 2756 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 2759 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2761 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2763 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2765 "hlds.hlds_llds.c"
{
#line 2767 "hlds.hlds_llds.c"
  {
#line 2769 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2772 "hlds.hlds_llds.c"
    {
#line 2774 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2777 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2779 "hlds.hlds_llds.c"
  }
#line 2781 "hlds.hlds_llds.c"
}

#line 2784 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 2787 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2789 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2791 "hlds.hlds_llds.c"
{
#line 2793 "hlds.hlds_llds.c"
  {
#line 2795 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2798 "hlds.hlds_llds.c"
    {
#line 2800 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2803 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2805 "hlds.hlds_llds.c"
  }
#line 2807 "hlds.hlds_llds.c"
}

#line 2810 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 2813 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2815 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2817 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2819 "hlds.hlds_llds.c"
{
#line 2821 "hlds.hlds_llds.c"
  {
#line 2823 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2826 "hlds.hlds_llds.c"
    {
#line 2828 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2831 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2833 "hlds.hlds_llds.c"
  }
#line 2835 "hlds.hlds_llds.c"
}

#line 2838 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 2841 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2843 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2845 "hlds.hlds_llds.c"
{
#line 2847 "hlds.hlds_llds.c"
  {
#line 2849 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2852 "hlds.hlds_llds.c"
    {
#line 2854 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_width_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2857 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2859 "hlds.hlds_llds.c"
  }
#line 2861 "hlds.hlds_llds.c"
}

#line 2864 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 2867 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2869 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2871 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2873 "hlds.hlds_llds.c"
{
#line 2875 "hlds.hlds_llds.c"
  {
#line 2877 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2880 "hlds.hlds_llds.c"
    {
#line 2882 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_width_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2885 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2887 "hlds.hlds_llds.c"
  }
#line 2889 "hlds.hlds_llds.c"
}

#line 2892 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 2895 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2897 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2899 "hlds.hlds_llds.c"
{
#line 2901 "hlds.hlds_llds.c"
  {
#line 2903 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2906 "hlds.hlds_llds.c"
    {
#line 2908 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slots_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2911 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2913 "hlds.hlds_llds.c"
  }
#line 2915 "hlds.hlds_llds.c"
}

#line 2918 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 2921 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2923 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2925 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2927 "hlds.hlds_llds.c"
{
#line 2929 "hlds.hlds_llds.c"
  {
#line 2931 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2934 "hlds.hlds_llds.c"
    {
#line 2936 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slots_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2939 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2941 "hlds.hlds_llds.c"
  }
#line 2943 "hlds.hlds_llds.c"
}

#line 298 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(
#line 298 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 298 "hlds_llds.m"
{
#line 809 "hlds_llds.m"
  {
#line 809 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 809 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__3_3;

#line 809 "hlds_llds.m"
    if (((MR_tag((MR_Word) hlds__hlds_llds__Slot_5)) == (MR_mktag((MR_Integer) 0))))
#line 809 "hlds_llds.m"
      {
#line 809 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
#line 809 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Width_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

#line 810 "hlds_llds.m"
        {
#line 810 "hlds_llds.m"
          hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "hlds_llds.m"
          MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (hlds__hlds_llds__N_9));
#line 810 "hlds_llds.m"
          MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__Width_10));
#line 810 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
      }
#line 809 "hlds_llds.m"
    else
#line 809 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__Slot_5)) == (MR_mktag((MR_Integer) 2))))
#line 815 "hlds_llds.m"
        {
#line 815 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));

#line 816 "hlds_llds.m"
          {
#line 816 "hlds_llds.m"
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_13));
#line 816 "hlds_llds.m"
          }
#line 815 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
      else
#line 812 "hlds_llds.m"
        {
#line 812 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 0)));
#line 812 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_5, (MR_Integer) 1)));

#line 813 "hlds_llds.m"
          {
#line 813 "hlds_llds.m"
            hlds__hlds_llds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 1) = ((MR_Box) (hlds__hlds_llds__N_11));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, 2) = ((MR_Box) (hlds__hlds_llds__Width_12));
#line 813 "hlds_llds.m"
          }
#line 812 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__3_3;
#line 809 "hlds_llds.m"
  }
#line 298 "hlds_llds.m"
}

#line 50 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0(
#line 50 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 50 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 50 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 50 "hlds_llds.m"
{
#line 50 "hlds_llds.m"
  {
#line 50 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 50 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 50 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 50 "hlds_llds.m"
    {
#line 50 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 50 "hlds_llds.m"
      return;
    }
#line 50 "hlds_llds.m"
  }
#line 50 "hlds_llds.m"
}

#line 50 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0(
#line 50 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 50 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 50 "hlds_llds.m"
{
#line 50 "hlds_llds.m"
  {
#line 50 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 50 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 50 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 50 "hlds_llds.m"
    {
#line 50 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 50 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 50 "hlds_llds.m"
  }
#line 50 "hlds_llds.m"
}

#line 44 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0(
#line 44 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 44 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 44 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 44 "hlds_llds.m"
{
#line 44 "hlds_llds.m"
  {
#line 44 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 44 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 44 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 44 "hlds_llds.m"
    {
#line 44 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 44 "hlds_llds.m"
      return;
    }
#line 44 "hlds_llds.m"
  }
#line 44 "hlds_llds.m"
}

#line 44 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0(
#line 44 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 44 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 44 "hlds_llds.m"
{
#line 3135 "hlds.hlds_llds.c"
  {
#line 3137 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3140 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3142 "hlds.hlds_llds.c"
  }
#line 44 "hlds_llds.m"
}

#line 39 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0(
#line 39 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 39 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 39 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 39 "hlds_llds.m"
{
#line 39 "hlds_llds.m"
  {
#line 39 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 39 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_36 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 39 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_37 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 39 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_36 == hlds__hlds_llds__CastY_37);
#line 39 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3171 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "hlds_llds.m"
    else
#line 39 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 39 "hlds_llds.m"
        {
#line 39 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 39 "hlds_llds.m"
            {
#line 39 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_8_8;

#line 39 "hlds_llds.m"
              {
#line 39 "hlds_llds.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_8_8, hlds__hlds_llds__V_44_44, hlds__hlds_llds__V_6_6);
              }
#line 3200 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 39 "hlds_llds.m"
              hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 39 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
                *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 39 "hlds_llds.m"
              else
#line 39 "hlds_llds.m"
                {
#line 39 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_48_48 = (MR_Integer) hlds__hlds_llds__V_43_43;
#line 39 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_49_49 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 39 "hlds_llds.m"
                  {
#line 39 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_48_48, hlds__hlds_llds__V_49_49);
#line 39 "hlds_llds.m"
                    return;
                  }
#line 39 "hlds_llds.m"
                }
#line 39 "hlds_llds.m"
            }
#line 39 "hlds_llds.m"
          else
#line 39 "hlds_llds.m"
            if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3232 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 39 "hlds_llds.m"
            else
#line 3236 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 39 "hlds_llds.m"
        }
#line 39 "hlds_llds.m"
      else
#line 39 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 39 "hlds_llds.m"
          {
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "hlds_llds.m"
            if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3251 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 39 "hlds_llds.m"
            else
#line 39 "hlds_llds.m"
              if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 39 "hlds_llds.m"
                {
#line 39 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

#line 39 "hlds_llds.m"
                  {
#line 39 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_45_45, hlds__hlds_llds__V_35_35);
#line 39 "hlds_llds.m"
                    return;
                  }
#line 39 "hlds_llds.m"
                }
#line 39 "hlds_llds.m"
              else
#line 3273 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 39 "hlds_llds.m"
          }
#line 39 "hlds_llds.m"
        else
#line 39 "hlds_llds.m"
          {
#line 39 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "hlds_llds.m"
            if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3288 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 39 "hlds_llds.m"
            else
#line 39 "hlds_llds.m"
              if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3294 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 39 "hlds_llds.m"
              else
#line 39 "hlds_llds.m"
                {
#line 39 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_24_24;

#line 39 "hlds_llds.m"
                  {
#line 39 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_24_24, hlds__hlds_llds__V_47_47, hlds__hlds_llds__V_22_22);
                  }
#line 3312 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_24_24 == (MR_Integer) 0);
#line 39 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 39 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_24_24;
#line 39 "hlds_llds.m"
                  else
#line 39 "hlds_llds.m"
                    {
#line 39 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_50_50 = (MR_Integer) hlds__hlds_llds__V_46_46;
#line 39 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_51_51 = (MR_Integer) hlds__hlds_llds__V_23_23;

#line 39 "hlds_llds.m"
                      {
#line 39 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_50_50, hlds__hlds_llds__V_51_51);
#line 39 "hlds_llds.m"
                        return;
                      }
#line 39 "hlds_llds.m"
                    }
#line 39 "hlds_llds.m"
                }
#line 39 "hlds_llds.m"
          }
#line 39 "hlds_llds.m"
  }
#line 39 "hlds_llds.m"
}

#line 39 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0(
#line 39 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 39 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 39 "hlds_llds.m"
{
#line 39 "hlds_llds.m"
  {
#line 39 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 39 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 39 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 39 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 39 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 39 "hlds_llds.m"
    else
#line 39 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 39 "hlds_llds.m"
        {
#line 39 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_5_5;
#line 39 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_6_6;

#line 39 "hlds_llds.m"
          hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 39 "hlds_llds.m"
          if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
            {
#line 39 "hlds_llds.m"
              hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
              hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3396 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_5_5);
#line 39 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 3400 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 39 "hlds_llds.m"
            }
#line 39 "hlds_llds.m"
        }
#line 39 "hlds_llds.m"
      else
#line 39 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 39 "hlds_llds.m"
          {
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_12_12;

#line 39 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 39 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
              {
#line 39 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 3425 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == hlds__hlds_llds__V_12_12);
#line 39 "hlds_llds.m"
              }
#line 39 "hlds_llds.m"
          }
#line 39 "hlds_llds.m"
        else
#line 39 "hlds_llds.m"
          {
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_9_9;
#line 39 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10;

#line 39 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 39 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 39 "hlds_llds.m"
              {
#line 39 "hlds_llds.m"
                hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3454 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_7_7 == hlds__hlds_llds__V_9_9);
#line 39 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 3458 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == hlds__hlds_llds__V_10_10);
#line 39 "hlds_llds.m"
              }
#line 39 "hlds_llds.m"
          }
#line 39 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 39 "hlds_llds.m"
  }
#line 39 "hlds_llds.m"
}

#line 87 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0(
#line 87 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 87 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 87 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 87 "hlds_llds.m"
{
#line 87 "hlds_llds.m"
  {
#line 87 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 87 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 87 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 87 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 87 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3495 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "hlds_llds.m"
    else
#line 87 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "hlds_llds.m"
        if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "hlds_llds.m"
        else
#line 3507 "hlds.hlds_llds.c"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 87 "hlds_llds.m"
      else
#line 87 "hlds_llds.m"
        {
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 87 "hlds_llds.m"
          if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3520 "hlds.hlds_llds.c"
            *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "hlds_llds.m"
          else
#line 87 "hlds_llds.m"
            {
#line 87 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_8_8;

#line 87 "hlds_llds.m"
              {
#line 87 "hlds_llds.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_8_8, ((MR_Box) (hlds__hlds_llds__V_18_18)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
              }
#line 3538 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 87 "hlds_llds.m"
              hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 87 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 87 "hlds_llds.m"
                *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 87 "hlds_llds.m"
              else
#line 87 "hlds_llds.m"
                {
#line 87 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_19_19 = (MR_Integer) hlds__hlds_llds__V_17_17;
#line 87 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_20_20 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 87 "hlds_llds.m"
                  {
#line 87 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_19_19, hlds__hlds_llds__V_20_20);
#line 87 "hlds_llds.m"
                    return;
                  }
#line 87 "hlds_llds.m"
                }
#line 87 "hlds_llds.m"
            }
#line 87 "hlds_llds.m"
        }
#line 87 "hlds_llds.m"
  }
#line 87 "hlds_llds.m"
}

#line 87 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0(
#line 87 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 87 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 87 "hlds_llds.m"
{
#line 87 "hlds_llds.m"
  {
#line 87 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 87 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 87 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 87 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 87 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 87 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 87 "hlds_llds.m"
    else
#line 87 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "hlds_llds.m"
        {
#line 87 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastX_7 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 87 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastY_8 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 87 "hlds_llds.m"
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_8 == hlds__hlds_llds__CastX_7);
#line 87 "hlds_llds.m"
        }
#line 87 "hlds_llds.m"
      else
#line 87 "hlds_llds.m"
        {
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_5_5;
#line 87 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_6_6;

#line 87 "hlds_llds.m"
          hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 87 "hlds_llds.m"
          if (hlds__hlds_llds__succeeded)
#line 87 "hlds_llds.m"
            {
#line 87 "hlds_llds.m"
              hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "hlds_llds.m"
              hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3637 "hlds.hlds_llds.c"
              hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3639 "hlds.hlds_llds.c"
              {
#line 3641 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
              }
#line 87 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 3646 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 87 "hlds_llds.m"
            }
#line 87 "hlds_llds.m"
        }
#line 87 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 87 "hlds_llds.m"
  }
#line 87 "hlds_llds.m"
}

#line 91 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0(
#line 91 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 91 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 91 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 91 "hlds_llds.m"
{
#line 91 "hlds_llds.m"
  {
#line 91 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 91 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 91 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 91 "hlds_llds.m"
    {
#line 91 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 91 "hlds_llds.m"
      return;
    }
#line 91 "hlds_llds.m"
  }
#line 91 "hlds_llds.m"
}

#line 91 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0(
#line 91 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 91 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 91 "hlds_llds.m"
{
#line 3700 "hlds.hlds_llds.c"
  {
#line 3702 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3705 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3707 "hlds.hlds_llds.c"
  }
#line 91 "hlds_llds.m"
}

#line 35 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0(
#line 35 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 35 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 35 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 35 "hlds_llds.m"
{
#line 35 "hlds_llds.m"
  {
#line 35 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 35 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 35 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 35 "hlds_llds.m"
    {
#line 35 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 35 "hlds_llds.m"
      return;
    }
#line 35 "hlds_llds.m"
  }
#line 35 "hlds_llds.m"
}

#line 35 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0(
#line 35 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 35 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 35 "hlds_llds.m"
{
#line 3753 "hlds.hlds_llds.c"
  {
#line 3755 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3758 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3760 "hlds.hlds_llds.c"
  }
#line 35 "hlds_llds.m"
}

#line 128 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0(
#line 128 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 128 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 128 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 128 "hlds_llds.m"
{
#line 128 "hlds_llds.m"
  {
#line 128 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 128 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 128 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 128 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 128 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3789 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "hlds_llds.m"
    else
#line 128 "hlds_llds.m"
      {
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;
#line 128 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_17_17 = (MR_Integer) hlds__hlds_llds__V_4_4;
#line 128 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_18_18 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 128 "hlds_llds.m"
        {
#line 128 "hlds_llds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_10_10, hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_18_18);
        }
#line 3819 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 128 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 128 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 128 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 128 "hlds_llds.m"
        else
#line 128 "hlds_llds.m"
          {
#line 128 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 128 "hlds_llds.m"
            {
#line 128 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 3839 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 128 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 128 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 128 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 128 "hlds_llds.m"
            else
#line 128 "hlds_llds.m"
              {
#line 128 "hlds_llds.m"
                {
#line 128 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
#line 128 "hlds_llds.m"
                  return;
                }
#line 128 "hlds_llds.m"
              }
#line 128 "hlds_llds.m"
          }
#line 128 "hlds_llds.m"
      }
#line 128 "hlds_llds.m"
  }
#line 128 "hlds_llds.m"
}

#line 128 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0(
#line 128 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 128 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 128 "hlds_llds.m"
{
#line 128 "hlds_llds.m"
  {
#line 128 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 128 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 128 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 128 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 128 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 128 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 128 "hlds_llds.m"
    else
#line 128 "hlds_llds.m"
      {
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 128 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 3914 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_6_6);
#line 128 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 128 "hlds_llds.m"
          {
#line 3920 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3922 "hlds.hlds_llds.c"
            {
#line 3924 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 128 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 128 "hlds_llds.m"
              {
#line 3931 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3933 "hlds.hlds_llds.c"
                {
#line 3935 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 128 "hlds_llds.m"
              }
#line 128 "hlds_llds.m"
          }
#line 128 "hlds_llds.m"
      }
#line 128 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 128 "hlds_llds.m"
  }
#line 128 "hlds_llds.m"
}

#line 139 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0(
#line 139 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 139 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 139 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 139 "hlds_llds.m"
{
#line 139 "hlds_llds.m"
  {
#line 139 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 139 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 139 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 139 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 139 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3975 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "hlds_llds.m"
    else
#line 139 "hlds_llds.m"
      {
#line 139 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 139 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 139 "hlds_llds.m"
        {
#line 139 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
#line 139 "hlds_llds.m"
          return;
        }
#line 139 "hlds_llds.m"
      }
#line 139 "hlds_llds.m"
  }
#line 139 "hlds_llds.m"
}

#line 139 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0(
#line 139 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 139 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 139 "hlds_llds.m"
{
#line 139 "hlds_llds.m"
  {
#line 139 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 139 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 139 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 139 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 139 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 139 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 139 "hlds_llds.m"
    else
#line 139 "hlds_llds.m"
      {
#line 139 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 139 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4033 "hlds.hlds_llds.c"
        {
#line 4035 "hlds.hlds_llds.c"
          return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 139 "hlds_llds.m"
      }
#line 139 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 139 "hlds_llds.m"
  }
#line 139 "hlds_llds.m"
}

#line 148 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0(
#line 148 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 148 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 148 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 148 "hlds_llds.m"
{
#line 148 "hlds_llds.m"
  {
#line 148 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 148 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 148 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 148 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 148 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4071 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "hlds_llds.m"
    else
#line 148 "hlds_llds.m"
      {
#line 148 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 148 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 148 "hlds_llds.m"
        {
#line 148 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
#line 148 "hlds_llds.m"
          return;
        }
#line 148 "hlds_llds.m"
      }
#line 148 "hlds_llds.m"
  }
#line 148 "hlds_llds.m"
}

#line 148 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0(
#line 148 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 148 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 148 "hlds_llds.m"
{
#line 148 "hlds_llds.m"
  {
#line 148 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 148 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 148 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 148 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 148 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 148 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 148 "hlds_llds.m"
    else
#line 148 "hlds_llds.m"
      {
#line 148 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 148 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4129 "hlds.hlds_llds.c"
        {
#line 4131 "hlds.hlds_llds.c"
          return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 148 "hlds_llds.m"
      }
#line 148 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 148 "hlds_llds.m"
  }
#line 148 "hlds_llds.m"
}

#line 113 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0(
#line 113 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 113 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 113 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 113 "hlds_llds.m"
{
#line 113 "hlds_llds.m"
  {
#line 113 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 113 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 113 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 113 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 113 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4167 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 113 "hlds_llds.m"
    else
#line 113 "hlds_llds.m"
      {
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 113 "hlds_llds.m"
        {
#line 113 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 4193 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 113 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 113 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 113 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 113 "hlds_llds.m"
        else
#line 113 "hlds_llds.m"
          {
#line 113 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 113 "hlds_llds.m"
            {
#line 113 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 4213 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 113 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 113 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 113 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 113 "hlds_llds.m"
            else
#line 113 "hlds_llds.m"
              {
#line 113 "hlds_llds.m"
                {
#line 113 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
#line 113 "hlds_llds.m"
                  return;
                }
#line 113 "hlds_llds.m"
              }
#line 113 "hlds_llds.m"
          }
#line 113 "hlds_llds.m"
      }
#line 113 "hlds_llds.m"
  }
#line 113 "hlds_llds.m"
}

#line 113 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0(
#line 113 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 113 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 113 "hlds_llds.m"
{
#line 113 "hlds_llds.m"
  {
#line 113 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 113 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 113 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 113 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 113 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 113 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 113 "hlds_llds.m"
    else
#line 113 "hlds_llds.m"
      {
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_13_13;
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 113 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 4288 "hlds.hlds_llds.c"
        {
#line 4290 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 113 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 113 "hlds_llds.m"
          {
#line 4297 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4299 "hlds.hlds_llds.c"
            {
#line 4301 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 113 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 113 "hlds_llds.m"
              {
#line 4308 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_13_13 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4310 "hlds.hlds_llds.c"
                {
#line 4312 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_13_13, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 113 "hlds_llds.m"
              }
#line 113 "hlds_llds.m"
          }
#line 113 "hlds_llds.m"
      }
#line 113 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 113 "hlds_llds.m"
  }
#line 113 "hlds_llds.m"
}

#line 356 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0(
#line 356 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 356 "hlds_llds.m"
{
#line 356 "hlds_llds.m"
  {
#line 356 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 356 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_28 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 356 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_29 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 356 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_28 == hlds__hlds_llds__CastY_29);
#line 356 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4352 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
    else
#line 356 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
        if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
        else
#line 356 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4366 "hlds.hlds_llds.c"
            *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
          else
#line 356 "hlds_llds.m"
            if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4372 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
            else
#line 4376 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
      else
#line 356 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
          {
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_33_33 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);

#line 356 "hlds_llds.m"
            if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4389 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
            else
#line 356 "hlds_llds.m"
              if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
                {
#line 356 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_9_9 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 1);

#line 356 "hlds_llds.m"
                  {
#line 356 "hlds_llds.m"
                    hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_33_33, hlds__hlds_llds__V_9_9);
#line 356 "hlds_llds.m"
                    return;
                  }
#line 356 "hlds_llds.m"
                }
#line 356 "hlds_llds.m"
              else
#line 356 "hlds_llds.m"
                if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4413 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                else
#line 4417 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
        else
#line 356 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
            {
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
              if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4432 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
              else
#line 356 "hlds_llds.m"
                if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4438 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                else
#line 356 "hlds_llds.m"
                  if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
                    {
#line 356 "hlds_llds.m"
                      MR_Word hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
                      {
#line 356 "hlds_llds.m"
                        hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_34_34, hlds__hlds_llds__V_27_27);
#line 356 "hlds_llds.m"
                        return;
                      }
#line 356 "hlds_llds.m"
                    }
#line 356 "hlds_llds.m"
                  else
#line 4460 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
          else
#line 356 "hlds_llds.m"
            {
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_35_35 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);

#line 356 "hlds_llds.m"
              if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4473 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
              else
#line 356 "hlds_llds.m"
                if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4479 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                else
#line 356 "hlds_llds.m"
                  if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4485 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                  else
#line 356 "hlds_llds.m"
                    {
#line 356 "hlds_llds.m"
                      MR_Word hlds__hlds_llds__V_18_18 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__3_3), (MR_Integer) 2);

#line 356 "hlds_llds.m"
                      {
#line 356 "hlds_llds.m"
                        hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_35_35, hlds__hlds_llds__V_18_18);
#line 356 "hlds_llds.m"
                        return;
                      }
#line 356 "hlds_llds.m"
                    }
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
  }
#line 356 "hlds_llds.m"
}

#line 356 "hlds_llds.m"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0(
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 356 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 356 "hlds_llds.m"
{
#line 356 "hlds_llds.m"
  {
#line 356 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 356 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_11 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 356 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 356 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_11 == hlds__hlds_llds__CastY_12);
#line 356 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 356 "hlds_llds.m"
    else
#line 356 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
        {
#line 356 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 356 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 356 "hlds_llds.m"
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
#line 356 "hlds_llds.m"
        }
#line 356 "hlds_llds.m"
      else
#line 356 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
          {
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 1);
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6;

#line 356 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 356 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
              {
#line 356 "hlds_llds.m"
                hlds__hlds_llds__V_6_6 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);
#line 4568 "hlds.hlds_llds.c"
                {
#line 4570 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_6_6);
                }
#line 356 "hlds_llds.m"
              }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
        else
#line 356 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
            {
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_10_10;

#line 356 "hlds_llds.m"
              hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 356 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                {
#line 356 "hlds_llds.m"
                  hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 4596 "hlds.hlds_llds.c"
                  {
#line 4598 "hlds.hlds_llds.c"
                    return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_9_9, hlds__hlds_llds__V_10_10);
                  }
#line 356 "hlds_llds.m"
                }
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
          else
#line 356 "hlds_llds.m"
            {
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_7_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__1_1), (MR_Integer) 2);
#line 356 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_8_8;

#line 356 "hlds_llds.m"
              hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 356 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                {
#line 356 "hlds_llds.m"
                  hlds__hlds_llds__V_8_8 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);
#line 4622 "hlds.hlds_llds.c"
                  {
#line 4624 "hlds.hlds_llds.c"
                    return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_7_7, hlds__hlds_llds__V_8_8);
                  }
#line 356 "hlds_llds.m"
                }
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 356 "hlds_llds.m"
  }
#line 356 "hlds_llds.m"
}

#line 362 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0(
#line 362 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 362 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 362 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 362 "hlds_llds.m"
{
#line 362 "hlds_llds.m"
  {
#line 362 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 362 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 362 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 362 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_27 == hlds__hlds_llds__CastY_28);
#line 362 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4662 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 362 "hlds_llds.m"
    else
#line 362 "hlds_llds.m"
      {
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 3)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 4)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 5)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 6)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 7)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_20_20;

#line 362 "hlds_llds.m"
        {
#line 362 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_20_20, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_12_12)));
        }
#line 4708 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_20_20 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_20_20;
#line 362 "hlds_llds.m"
        else
#line 362 "hlds_llds.m"
          {
#line 362 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_21_21;

#line 362 "hlds_llds.m"
            {
#line 362 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_21_21, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_13_13)));
            }
#line 4728 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_21_21 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_21_21;
#line 362 "hlds_llds.m"
            else
#line 362 "hlds_llds.m"
              {
#line 362 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_22_22;

#line 362 "hlds_llds.m"
                {
#line 362 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_22_22, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_14_14)));
                }
#line 4748 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_22_22 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
                hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                  *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_22_22;
#line 362 "hlds_llds.m"
                else
#line 362 "hlds_llds.m"
                  {
#line 362 "hlds_llds.m"
                    MR_Word hlds__hlds_llds__V_23_23;

#line 362 "hlds_llds.m"
                    {
#line 362 "hlds_llds.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_23_23, ((MR_Box) (hlds__hlds_llds__V_7_7)), ((MR_Box) (hlds__hlds_llds__V_15_15)));
                    }
#line 4768 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_23_23 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
                    hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                      *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_23_23;
#line 362 "hlds_llds.m"
                    else
#line 362 "hlds_llds.m"
                      {
#line 362 "hlds_llds.m"
                        MR_Word hlds__hlds_llds__V_24_24;

#line 362 "hlds_llds.m"
                        {
#line 362 "hlds_llds.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[2], &hlds__hlds_llds__V_24_24, ((MR_Box) (hlds__hlds_llds__V_8_8)), ((MR_Box) (hlds__hlds_llds__V_16_16)));
                        }
#line 4788 "hlds.hlds_llds.c"
                        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_24_24 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
                        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
                        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_24_24;
#line 362 "hlds_llds.m"
                        else
#line 362 "hlds_llds.m"
                          {
#line 362 "hlds_llds.m"
                            MR_Word hlds__hlds_llds__V_25_25;

#line 362 "hlds_llds.m"
                            {
#line 362 "hlds_llds.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__V_25_25, ((MR_Box) (hlds__hlds_llds__V_9_9)), ((MR_Box) (hlds__hlds_llds__V_17_17)));
                            }
#line 4808 "hlds.hlds_llds.c"
                            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_25_25 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
                            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
                            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_25_25;
#line 362 "hlds_llds.m"
                            else
#line 362 "hlds_llds.m"
                              {
#line 362 "hlds_llds.m"
                                MR_Word hlds__hlds_llds__V_26_26;

#line 362 "hlds_llds.m"
                                {
#line 362 "hlds_llds.m"
                                  hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__V_26_26, hlds__hlds_llds__V_10_10, hlds__hlds_llds__V_18_18);
                                }
#line 4828 "hlds.hlds_llds.c"
                                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_26_26 == (MR_Integer) 0);
#line 362 "hlds_llds.m"
                                hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 362 "hlds_llds.m"
                                if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                                  *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_26_26;
#line 362 "hlds_llds.m"
                                else
#line 356 "hlds_llds.m"
                                  {
#line 356 "hlds_llds.m"
                                    MR_Integer hlds__hlds_llds__CastX_61 = (MR_Integer) hlds__hlds_llds__V_11_11;
#line 356 "hlds_llds.m"
                                    MR_Integer hlds__hlds_llds__CastY_62 = (MR_Integer) hlds__hlds_llds__V_19_19;

#line 356 "hlds_llds.m"
                                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_61 == hlds__hlds_llds__CastY_62);
#line 356 "hlds_llds.m"
                                    if (hlds__hlds_llds__succeeded)
#line 4849 "hlds.hlds_llds.c"
                                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
                                    else
#line 356 "hlds_llds.m"
                                      if ((hlds__hlds_llds__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
                                        if ((hlds__hlds_llds__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
                                          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
                                        else
#line 356 "hlds_llds.m"
                                          if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 4863 "hlds.hlds_llds.c"
                                            *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                          else
#line 356 "hlds_llds.m"
                                            if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 3))))
#line 4869 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                            else
#line 4873 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                      else
#line 356 "hlds_llds.m"
                                        if (((MR_tag((MR_Word) hlds__hlds_llds__V_11_11)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
                                          {
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_66_66 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 1);

#line 356 "hlds_llds.m"
                                            if ((hlds__hlds_llds__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4886 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                            else
#line 356 "hlds_llds.m"
                                              if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
                                                {
#line 356 "hlds_llds.m"
                                                  MR_Word hlds__hlds_llds__V_42_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_19_19), (MR_Integer) 1);

#line 356 "hlds_llds.m"
                                                  {
#line 356 "hlds_llds.m"
                                                    hlds__hlds_llds____Compare____need_across_call_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_66_66, hlds__hlds_llds__V_42_42);
#line 356 "hlds_llds.m"
                                                    return;
                                                  }
#line 356 "hlds_llds.m"
                                                }
#line 356 "hlds_llds.m"
                                              else
#line 356 "hlds_llds.m"
                                                if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 3))))
#line 4910 "hlds.hlds_llds.c"
                                                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                                else
#line 4914 "hlds.hlds_llds.c"
                                                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                        else
#line 356 "hlds_llds.m"
                                          if (((MR_tag((MR_Word) hlds__hlds_llds__V_11_11)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
                                            {
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_11_11, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
                                              if ((hlds__hlds_llds__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4929 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                              else
#line 356 "hlds_llds.m"
                                                if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 4935 "hlds.hlds_llds.c"
                                                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                else
#line 356 "hlds_llds.m"
                                                  if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
                                                    {
#line 356 "hlds_llds.m"
                                                      MR_Word hlds__hlds_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_19_19, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
                                                      {
#line 356 "hlds_llds.m"
                                                        hlds__hlds_llds____Compare____need_in_par_conj_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_67_67, hlds__hlds_llds__V_60_60);
#line 356 "hlds_llds.m"
                                                        return;
                                                      }
#line 356 "hlds_llds.m"
                                                    }
#line 356 "hlds_llds.m"
                                                  else
#line 4957 "hlds.hlds_llds.c"
                                                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                          else
#line 356 "hlds_llds.m"
                                            {
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_68_68 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 2);

#line 356 "hlds_llds.m"
                                              if ((hlds__hlds_llds__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4970 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                              else
#line 356 "hlds_llds.m"
                                                if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 4976 "hlds.hlds_llds.c"
                                                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                else
#line 356 "hlds_llds.m"
                                                  if (((MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) == (MR_mktag((MR_Integer) 3))))
#line 4982 "hlds.hlds_llds.c"
                                                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                                  else
#line 356 "hlds_llds.m"
                                                    {
#line 356 "hlds_llds.m"
                                                      MR_Word hlds__hlds_llds__V_51_51 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_19_19), (MR_Integer) 2);

#line 356 "hlds_llds.m"
                                                      {
#line 356 "hlds_llds.m"
                                                        hlds__hlds_llds____Compare____need_in_resume_0_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_68_68, hlds__hlds_llds__V_51_51);
#line 356 "hlds_llds.m"
                                                        return;
                                                      }
#line 356 "hlds_llds.m"
                                                    }
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                  }
#line 362 "hlds_llds.m"
                              }
#line 362 "hlds_llds.m"
                          }
#line 362 "hlds_llds.m"
                      }
#line 362 "hlds_llds.m"
                  }
#line 362 "hlds_llds.m"
              }
#line 362 "hlds_llds.m"
          }
#line 362 "hlds_llds.m"
      }
#line 362 "hlds_llds.m"
  }
#line 362 "hlds_llds.m"
}

#line 362 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0(
#line 362 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 362 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 362 "hlds_llds.m"
{
#line 362 "hlds_llds.m"
  {
#line 362 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 362 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 362 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 362 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
#line 362 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 362 "hlds_llds.m"
    else
#line 362 "hlds_llds.m"
      {
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_22_22;
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_23_23;
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_24_24;
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_25_25;
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_26_26;
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 3)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 4)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 5)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 6)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 7)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 3)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 4)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 5)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 6)));
#line 362 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 7)));
#line 356 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastX_35;
#line 356 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastY_36;

#line 5098 "hlds.hlds_llds.c"
        {
#line 5100 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_11_11)));
        }
#line 362 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
          {
#line 5107 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_22_22 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5109 "hlds.hlds_llds.c"
            {
#line 5111 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_22_22, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_12_12)));
            }
#line 362 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
              {
#line 5118 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_23_23 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5120 "hlds.hlds_llds.c"
                {
#line 5122 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_23_23, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_13_13)));
                }
#line 362 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                  {
#line 5129 "hlds.hlds_llds.c"
                    hlds__hlds_llds__TypeInfo_24_24 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5131 "hlds.hlds_llds.c"
                    {
#line 5133 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_24_24, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_14_14)));
                    }
#line 362 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                      {
#line 5140 "hlds.hlds_llds.c"
                        hlds__hlds_llds__TypeInfo_25_25 = (MR_Word) &hlds__hlds_llds_scalar_common_1[2];
#line 5142 "hlds.hlds_llds.c"
                        {
#line 5144 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_25_25, ((MR_Box) (hlds__hlds_llds__V_7_7)), ((MR_Box) (hlds__hlds_llds__V_15_15)));
                        }
#line 362 "hlds_llds.m"
                        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                          {
#line 5151 "hlds.hlds_llds.c"
                            hlds__hlds_llds__TypeInfo_26_26 = (MR_Word) &hlds__hlds_llds_scalar_common_2[0];
#line 5153 "hlds.hlds_llds.c"
                            {
#line 5155 "hlds.hlds_llds.c"
                              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_26_26, ((MR_Box) (hlds__hlds_llds__V_8_8)), ((MR_Box) (hlds__hlds_llds__V_16_16)));
                            }
#line 362 "hlds_llds.m"
                            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                              {
#line 5162 "hlds.hlds_llds.c"
                                {
#line 5164 "hlds.hlds_llds.c"
                                  hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(hlds__hlds_llds__V_9_9, hlds__hlds_llds__V_17_17);
                                }
#line 362 "hlds_llds.m"
                                if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                                  {
#line 356 "hlds_llds.m"
                                    hlds__hlds_llds__CastX_35 = (MR_Integer) hlds__hlds_llds__V_10_10;
#line 356 "hlds_llds.m"
                                    hlds__hlds_llds__CastY_36 = (MR_Integer) hlds__hlds_llds__V_18_18;
#line 356 "hlds_llds.m"
                                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_35 == hlds__hlds_llds__CastY_36);
#line 356 "hlds_llds.m"
                                    if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                                      hlds__hlds_llds__succeeded = MR_TRUE;
#line 356 "hlds_llds.m"
                                    else
#line 356 "hlds_llds.m"
                                      if ((hlds__hlds_llds__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "hlds_llds.m"
                                        {
#line 356 "hlds_llds.m"
                                          MR_Integer hlds__hlds_llds__CastX_27 = (MR_Integer) hlds__hlds_llds__V_10_10;
#line 356 "hlds_llds.m"
                                          MR_Integer hlds__hlds_llds__CastY_28 = (MR_Integer) hlds__hlds_llds__V_18_18;

#line 356 "hlds_llds.m"
                                          hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_28 == hlds__hlds_llds__CastX_27);
#line 356 "hlds_llds.m"
                                        }
#line 356 "hlds_llds.m"
                                      else
#line 356 "hlds_llds.m"
                                        if (((MR_tag((MR_Word) hlds__hlds_llds__V_10_10)) == (MR_mktag((MR_Integer) 1))))
#line 356 "hlds_llds.m"
                                          {
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_29_29 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_10_10), (MR_Integer) 1);
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_30_30;

#line 356 "hlds_llds.m"
                                            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 356 "hlds_llds.m"
                                            if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                                              {
#line 356 "hlds_llds.m"
                                                hlds__hlds_llds__V_30_30 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_18_18), (MR_Integer) 1);
#line 5215 "hlds.hlds_llds.c"
                                                {
#line 5217 "hlds.hlds_llds.c"
                                                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_29_29, hlds__hlds_llds__V_30_30);
                                                }
#line 356 "hlds_llds.m"
                                              }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                        else
#line 356 "hlds_llds.m"
                                          if (((MR_tag((MR_Word) hlds__hlds_llds__V_10_10)) == (MR_mktag((MR_Integer) 3))))
#line 356 "hlds_llds.m"
                                            {
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_34_34;

#line 356 "hlds_llds.m"
                                              hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 3)));
#line 356 "hlds_llds.m"
                                              if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                                                {
#line 356 "hlds_llds.m"
                                                  hlds__hlds_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_18_18, (MR_Integer) 0)));
#line 5243 "hlds.hlds_llds.c"
                                                  {
#line 5245 "hlds.hlds_llds.c"
                                                    return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_33_33, hlds__hlds_llds__V_34_34);
                                                  }
#line 356 "hlds_llds.m"
                                                }
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                          else
#line 356 "hlds_llds.m"
                                            {
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_31_31 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_10_10), (MR_Integer) 2);
#line 356 "hlds_llds.m"
                                              MR_Word hlds__hlds_llds__V_32_32;

#line 356 "hlds_llds.m"
                                              hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__V_18_18)) == (MR_mktag((MR_Integer) 2)));
#line 356 "hlds_llds.m"
                                              if (hlds__hlds_llds__succeeded)
#line 356 "hlds_llds.m"
                                                {
#line 356 "hlds_llds.m"
                                                  hlds__hlds_llds__V_32_32 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_18_18), (MR_Integer) 2);
#line 5269 "hlds.hlds_llds.c"
                                                  {
#line 5271 "hlds.hlds_llds.c"
                                                    return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_31_31, hlds__hlds_llds__V_32_32);
                                                  }
#line 356 "hlds_llds.m"
                                                }
#line 356 "hlds_llds.m"
                                            }
#line 362 "hlds_llds.m"
                                  }
#line 362 "hlds_llds.m"
                              }
#line 362 "hlds_llds.m"
                          }
#line 362 "hlds_llds.m"
                      }
#line 362 "hlds_llds.m"
                  }
#line 362 "hlds_llds.m"
              }
#line 362 "hlds_llds.m"
          }
#line 362 "hlds_llds.m"
      }
#line 362 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 362 "hlds_llds.m"
  }
#line 362 "hlds_llds.m"
}

#line 84 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0(
#line 84 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 84 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 84 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 84 "hlds_llds.m"
{
#line 84 "hlds_llds.m"
  {
#line 84 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 84 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 84 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 84 "hlds_llds.m"
    {
#line 84 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 84 "hlds_llds.m"
      return;
    }
#line 84 "hlds_llds.m"
  }
#line 84 "hlds_llds.m"
}

#line 84 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0(
#line 84 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 84 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 84 "hlds_llds.m"
{
#line 84 "hlds_llds.m"
  {
#line 84 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 84 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 84 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 84 "hlds_llds.m"
    {
#line 84 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 84 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 84 "hlds_llds.m"
  }
#line 84 "hlds_llds.m"
}

#line 54 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0(
#line 54 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 54 "hlds_llds.m"
{
#line 54 "hlds_llds.m"
  {
#line 54 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 54 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_77 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 54 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_78 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 54 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_77 == hlds__hlds_llds__CastY_78);
#line 54 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 5387 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "hlds_llds.m"
    else
#line 54 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "hlds_llds.m"
        if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "hlds_llds.m"
        else
#line 54 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5401 "hlds.hlds_llds.c"
            *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
          else
#line 54 "hlds_llds.m"
            if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5407 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
            else
#line 54 "hlds_llds.m"
              if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5413 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
              else
#line 5417 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
      else
#line 54 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 54 "hlds_llds.m"
          {
#line 54 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "hlds_llds.m"
            if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5432 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
            else
#line 54 "hlds_llds.m"
              if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 54 "hlds_llds.m"
                {
#line 54 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_17_17;
#line 54 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_95_95 = (MR_Integer) hlds__hlds_llds__V_90_90;
#line 54 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_96_96 = (MR_Integer) hlds__hlds_llds__V_15_15;

#line 54 "hlds_llds.m"
                  {
#line 54 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_95_95, hlds__hlds_llds__V_96_96);
                  }
#line 5456 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == (MR_Integer) 0);
#line 54 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 54 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_17_17;
#line 54 "hlds_llds.m"
                  else
#line 54 "hlds_llds.m"
                    {
#line 54 "hlds_llds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_89_89, hlds__hlds_llds__V_16_16);
#line 54 "hlds_llds.m"
                      return;
                    }
#line 54 "hlds_llds.m"
                }
#line 54 "hlds_llds.m"
              else
#line 54 "hlds_llds.m"
                if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5479 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
                else
#line 54 "hlds_llds.m"
                  if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5485 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
                  else
#line 5489 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
          }
#line 54 "hlds_llds.m"
        else
#line 54 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 54 "hlds_llds.m"
            {
#line 54 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 54 "hlds_llds.m"
              if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5506 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
              else
#line 54 "hlds_llds.m"
                if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5512 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                else
#line 54 "hlds_llds.m"
                  if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 54 "hlds_llds.m"
                    {
#line 54 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
                      MR_Word hlds__hlds_llds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                      MR_Word hlds__hlds_llds__V_39_39;

#line 54 "hlds_llds.m"
                      {
#line 54 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_39_39, hlds__hlds_llds__V_92_92, hlds__hlds_llds__V_37_37);
                      }
#line 5532 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_39_39 == (MR_Integer) 0);
#line 54 "hlds_llds.m"
                      hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 54 "hlds_llds.m"
                      if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                        *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_39_39;
#line 54 "hlds_llds.m"
                      else
#line 54 "hlds_llds.m"
                        {
#line 54 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_97_97 = (MR_Integer) hlds__hlds_llds__V_91_91;
#line 54 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_98_98 = (MR_Integer) hlds__hlds_llds__V_38_38;

#line 54 "hlds_llds.m"
                          {
#line 54 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_97_97, hlds__hlds_llds__V_98_98);
#line 54 "hlds_llds.m"
                            return;
                          }
#line 54 "hlds_llds.m"
                        }
#line 54 "hlds_llds.m"
                    }
#line 54 "hlds_llds.m"
                  else
#line 54 "hlds_llds.m"
                    if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5564 "hlds.hlds_llds.c"
                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
                    else
#line 5568 "hlds.hlds_llds.c"
                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
            }
#line 54 "hlds_llds.m"
          else
#line 54 "hlds_llds.m"
            if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 54 "hlds_llds.m"
              {
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 54 "hlds_llds.m"
                if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5583 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                else
#line 54 "hlds_llds.m"
                  if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5589 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                  else
#line 54 "hlds_llds.m"
                    if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5595 "hlds.hlds_llds.c"
                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                    else
#line 54 "hlds_llds.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 54 "hlds_llds.m"
                        {
#line 54 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));

#line 54 "hlds_llds.m"
                          {
#line 54 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_86_86, hlds__hlds_llds__V_76_76);
#line 54 "hlds_llds.m"
                            return;
                          }
#line 54 "hlds_llds.m"
                        }
#line 54 "hlds_llds.m"
                      else
#line 5617 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
              }
#line 54 "hlds_llds.m"
            else
#line 54 "hlds_llds.m"
              {
#line 54 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 54 "hlds_llds.m"
                if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5632 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                else
#line 54 "hlds_llds.m"
                  if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5638 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                  else
#line 54 "hlds_llds.m"
                    if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5644 "hlds.hlds_llds.c"
                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 54 "hlds_llds.m"
                    else
#line 54 "hlds_llds.m"
                      if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5650 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 54 "hlds_llds.m"
                      else
#line 54 "hlds_llds.m"
                        {
#line 54 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 54 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_61_61;

#line 54 "hlds_llds.m"
                          {
#line 54 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_61_61, hlds__hlds_llds__V_88_88, hlds__hlds_llds__V_59_59);
                          }
#line 5668 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_61_61 == (MR_Integer) 0);
#line 54 "hlds_llds.m"
                          hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 54 "hlds_llds.m"
                          if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                            *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_61_61;
#line 54 "hlds_llds.m"
                          else
#line 54 "hlds_llds.m"
                            {
#line 54 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_93_93 = (MR_Integer) hlds__hlds_llds__V_87_87;
#line 54 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_94_94 = (MR_Integer) hlds__hlds_llds__V_60_60;

#line 54 "hlds_llds.m"
                              {
#line 54 "hlds_llds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_93_93, hlds__hlds_llds__V_94_94);
#line 54 "hlds_llds.m"
                                return;
                              }
#line 54 "hlds_llds.m"
                            }
#line 54 "hlds_llds.m"
                        }
#line 54 "hlds_llds.m"
              }
#line 54 "hlds_llds.m"
  }
#line 54 "hlds_llds.m"
}

#line 54 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0(
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 54 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 54 "hlds_llds.m"
{
#line 54 "hlds_llds.m"
  {
#line 54 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 54 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 54 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 54 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
#line 54 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 54 "hlds_llds.m"
    else
#line 54 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "hlds_llds.m"
        {
#line 54 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 54 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 54 "hlds_llds.m"
          hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
#line 54 "hlds_llds.m"
        }
#line 54 "hlds_llds.m"
      else
#line 54 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 54 "hlds_llds.m"
          {
#line 54 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7;
#line 54 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_8_8;

#line 54 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 54 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
              {
#line 54 "hlds_llds.m"
                hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
                hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 5767 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_7_7);
#line 54 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 5771 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_6_6 == hlds__hlds_llds__V_8_8);
#line 54 "hlds_llds.m"
              }
#line 54 "hlds_llds.m"
          }
#line 54 "hlds_llds.m"
        else
#line 54 "hlds_llds.m"
          if (((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 54 "hlds_llds.m"
            {
#line 54 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__V_11_11;
#line 54 "hlds_llds.m"
              MR_Word hlds__hlds_llds__V_12_12;

#line 54 "hlds_llds.m"
              hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 54 "hlds_llds.m"
              if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                {
#line 54 "hlds_llds.m"
                  hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "hlds_llds.m"
                  hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 5802 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_9_9 == hlds__hlds_llds__V_11_11);
#line 54 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 5806 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == hlds__hlds_llds__V_12_12);
#line 54 "hlds_llds.m"
                }
#line 54 "hlds_llds.m"
            }
#line 54 "hlds_llds.m"
          else
#line 54 "hlds_llds.m"
            if (((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 54 "hlds_llds.m"
              {
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_18_18;

#line 54 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                  {
#line 54 "hlds_llds.m"
                    hlds__hlds_llds__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 5831 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == hlds__hlds_llds__V_18_18);
#line 54 "hlds_llds.m"
                  }
#line 54 "hlds_llds.m"
              }
#line 54 "hlds_llds.m"
            else
#line 54 "hlds_llds.m"
              {
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 54 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_15_15;
#line 54 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_16_16;

#line 54 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 54 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 54 "hlds_llds.m"
                  {
#line 54 "hlds_llds.m"
                    hlds__hlds_llds__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "hlds_llds.m"
                    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 5860 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_13_13 == hlds__hlds_llds__V_15_15);
#line 54 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 5864 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_14_14 == hlds__hlds_llds__V_16_16);
#line 54 "hlds_llds.m"
                  }
#line 54 "hlds_llds.m"
              }
#line 54 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 54 "hlds_llds.m"
  }
#line 54 "hlds_llds.m"
}

#line 61 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(
#line 61 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 61 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 61 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 61 "hlds_llds.m"
{
#line 61 "hlds_llds.m"
  {
#line 61 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 61 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 61 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 61 "hlds_llds.m"
    {
#line 61 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 61 "hlds_llds.m"
      return;
    }
#line 61 "hlds_llds.m"
  }
#line 61 "hlds_llds.m"
}

#line 61 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(
#line 61 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 61 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 61 "hlds_llds.m"
{
#line 61 "hlds_llds.m"
  {
#line 61 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 61 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 61 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 61 "hlds_llds.m"
    {
#line 61 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 61 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 61 "hlds_llds.m"
  }
#line 61 "hlds_llds.m"
}

#line 71 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0(
#line 71 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 71 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 71 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 71 "hlds_llds.m"
{
#line 71 "hlds_llds.m"
  {
#line 71 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 71 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 71 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 71 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 71 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 5963 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "hlds_llds.m"
    else
#line 71 "hlds_llds.m"
      {
#line 71 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 71 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 71 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 71 "hlds_llds.m"
        {
#line 71 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 5989 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 71 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 71 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 71 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 71 "hlds_llds.m"
        else
#line 71 "hlds_llds.m"
          {
#line 71 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 71 "hlds_llds.m"
            {
#line 71 "hlds_llds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_11_11, hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_8_8);
            }
#line 6009 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 71 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 71 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 71 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 71 "hlds_llds.m"
            else
#line 71 "hlds_llds.m"
              {
#line 71 "hlds_llds.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_6_6, hlds__hlds_llds__V_9_9);
#line 71 "hlds_llds.m"
                return;
              }
#line 71 "hlds_llds.m"
          }
#line 71 "hlds_llds.m"
      }
#line 71 "hlds_llds.m"
  }
#line 71 "hlds_llds.m"
}

#line 71 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0(
#line 71 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 71 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 71 "hlds_llds.m"
{
#line 71 "hlds_llds.m"
  {
#line 71 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 71 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 71 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 71 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 71 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 71 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 71 "hlds_llds.m"
    else
#line 71 "hlds_llds.m"
      {
#line 71 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 71 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 6076 "hlds.hlds_llds.c"
        {
#line 6078 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 71 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 71 "hlds_llds.m"
          {
#line 6085 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_7_7);
#line 71 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 6089 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_8_8);
#line 71 "hlds_llds.m"
          }
#line 71 "hlds_llds.m"
      }
#line 71 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 71 "hlds_llds.m"
  }
#line 71 "hlds_llds.m"
}

#line 778 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 778 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3,
#line 778 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__4_4)
#line 778 "hlds_llds.m"
{
#line 783 "hlds_llds.m"
  {
#line 783 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 783 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 783 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "hlds_llds.m"
    else
#line 785 "hlds_llds.m"
      {
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var0_9;
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Locn_10;
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocns0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var_12;
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocns_13;
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 785 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_15_15;

#line 785 "hlds_llds.m"
        hlds__hlds_llds__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_14_14, (MR_Integer) 0)));
#line 785 "hlds_llds.m"
        hlds__hlds_llds__Locn_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_14_14, (MR_Integer) 1)));
#line 786 "hlds_llds.m"
        {
#line 786 "hlds_llds.m"
          parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__Var0_9, &hlds__hlds_llds__Var_12);
        }
#line 785 "hlds_llds.m"
        {
#line 785 "hlds_llds.m"
          hlds__hlds_llds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 785 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_15_15, 0) = ((MR_Box) (hlds__hlds_llds__Var_12));
#line 785 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_15_15, 1) = ((MR_Box) (hlds__hlds_llds__Locn_10));
#line 785 "hlds_llds.m"
        }
#line 787 "hlds_llds.m"
        {
#line 787 "hlds_llds.m"
          hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__VarLocns0_11, &hlds__hlds_llds__VarLocns_13);
        }
#line 785 "hlds_llds.m"
        {
#line 785 "hlds_llds.m"
          MR_Word base;
#line 785 "hlds_llds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__4_4 = base;
#line 785 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 785 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_llds__VarLocns_13));
#line 785 "hlds_llds.m"
        }
#line 785 "hlds_llds.m"
      }
#line 783 "hlds_llds.m"
  }
#line 778 "hlds_llds.m"
}

#line 692 "hlds_llds.m"
static MR_Word MR_CALL 
hlds__hlds_llds__get_details_1_f_0(
#line 692 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1)
#line 692 "hlds_llds.m"
{
#line 694 "hlds_llds.m"
  {
#line 694 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 694 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__2_2;

#line 694 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "hlds_llds.m"
      {
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeCtorInfo_10_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4;
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5;
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6;
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7;
#line 699 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9;

#line 700 "hlds_llds.m"
        {
#line 700 "hlds_llds.m"
          hlds__hlds_llds__V_4_4 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 700 "hlds_llds.m"
        {
#line 700 "hlds_llds.m"
          hlds__hlds_llds__V_5_5 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 701 "hlds_llds.m"
        {
#line 701 "hlds_llds.m"
          hlds__hlds_llds__V_6_6 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 701 "hlds_llds.m"
        {
#line 701 "hlds_llds.m"
          hlds__hlds_llds__V_7_7 = parse_tree__set_of_var__init_0_f_0(hlds__hlds_llds__TypeCtorInfo_10_12);
        }
#line 702 "hlds_llds.m"
        {
#line 702 "hlds_llds.m"
          hlds__hlds_llds__V_9_9 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0);
        }
#line 700 "hlds_llds.m"
        {
#line 700 "hlds_llds.m"
          hlds__hlds_llds__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 0) = ((MR_Box) (hlds__hlds_llds__V_4_4));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 1) = ((MR_Box) (hlds__hlds_llds__V_5_5));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 2) = ((MR_Box) (hlds__hlds_llds__V_6_6));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 3) = ((MR_Box) (hlds__hlds_llds__V_7_7));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 5) = ((MR_Box) (hlds__hlds_llds__V_9_9));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "hlds_llds.m"
        }
#line 699 "hlds_llds.m"
      }
#line 694 "hlds_llds.m"
    else
#line 695 "hlds_llds.m"
      hlds__hlds_llds__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 694 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__2_2;
#line 694 "hlds_llds.m"
  }
#line 692 "hlds_llds.m"
}

#line 322 "hlds_llds.m"
static void MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_4_p_0(
#line 322 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 322 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_2,
#line 322 "hlds_llds.m"
  MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3,
#line 322 "hlds_llds.m"
  MR_String * hlds__hlds_llds__STATE_VARIABLE_Explanation_4)
#line 322 "hlds_llds.m"
{
#line 325 "hlds_llds.m"
  {
#line 325 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 325 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "hlds_llds.m"
      *hlds__hlds_llds__STATE_VARIABLE_Explanation_4 = hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3;
#line 325 "hlds_llds.m"
    else
#line 326 "hlds_llds.m"
      {
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Var_9;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Slot_10;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__SlotNum_14;
#line 326 "hlds_llds.m"
        MR_String hlds__hlds_llds__StackStr_16;
#line 326 "hlds_llds.m"
        MR_String hlds__hlds_llds__SlotStr_17;
#line 326 "hlds_llds.m"
        MR_String hlds__hlds_llds__WidthStr_18;
#line 326 "hlds_llds.m"
        MR_String hlds__hlds_llds__VarName_19;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "hlds_llds.m"
        MR_String hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_24_24;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_26_26;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_28_28;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_29_29;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_30_30;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_31_31;
#line 326 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_33_33;

#line 326 "hlds_llds.m"
        hlds__hlds_llds__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_22_22, (MR_Integer) 0)));
#line 326 "hlds_llds.m"
        hlds__hlds_llds__Slot_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_22_22, (MR_Integer) 1)));
#line 327 "hlds_llds.m"
        {
#line 327 "hlds_llds.m"
          hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__Rest_11, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__STATE_VARIABLE_Explanation_0_3, &hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23);
        }
#line 6349 "hlds.hlds_llds.c"
        if (((MR_tag((MR_Word) hlds__hlds_llds__Slot_10)) == (MR_mktag((MR_Integer) 0))))
#line 6351 "hlds.hlds_llds.c"
          {
#line 6353 "hlds.hlds_llds.c"
            MR_Word hlds__hlds_llds__Width_15;

#line 329 "hlds_llds.m"
            hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 329 "hlds_llds.m"
            hlds__hlds_llds__Width_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 330 "hlds_llds.m"
            hlds__hlds_llds__StackStr_16 = (MR_String) "sv";
#line 343 "hlds_llds.m"
            if ((hlds__hlds_llds__Width_15 == (MR_Integer) 1))
#line 345 "hlds_llds.m"
              hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 343 "hlds_llds.m"
            else
#line 342 "hlds_llds.m"
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 6370 "hlds.hlds_llds.c"
          }
#line 6372 "hlds.hlds_llds.c"
        else
#line 6374 "hlds.hlds_llds.c"
          if (((MR_tag((MR_Word) hlds__hlds_llds__Slot_10)) == (MR_mktag((MR_Integer) 2))))
#line 6376 "hlds.hlds_llds.c"
            {
#line 335 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 337 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "fv";
#line 342 "hlds_llds.m"
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 6384 "hlds.hlds_llds.c"
            }
#line 6386 "hlds.hlds_llds.c"
          else
#line 6388 "hlds.hlds_llds.c"
            {
#line 6390 "hlds.hlds_llds.c"
              MR_Word hlds__hlds_llds__Width_38;

#line 332 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 332 "hlds_llds.m"
              hlds__hlds_llds__Width_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 333 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "parent_sv";
#line 343 "hlds_llds.m"
              if ((hlds__hlds_llds__Width_38 == (MR_Integer) 1))
#line 345 "hlds_llds.m"
                hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 343 "hlds_llds.m"
              else
#line 342 "hlds_llds.m"
                hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 6407 "hlds.hlds_llds.c"
            }
#line 339 "hlds_llds.m"
        {
#line 339 "hlds_llds.m"
          mercury__string__int_to_string_2_p_0(hlds__hlds_llds__SlotNum_14, &hlds__hlds_llds__SlotStr_17);
        }
#line 347 "hlds_llds.m"
        {
#line 347 "hlds_llds.m"
          mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__VarSet_2, hlds__hlds_llds__Var_9, &hlds__hlds_llds__VarName_19);
        }
#line 349 "hlds_llds.m"
        {
#line 349 "hlds_llds.m"
          hlds__hlds_llds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_33_33, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_Explanation_23_23));
#line 349 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_31_31, 0) = ((MR_Box) ((MR_String) "\n"));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_31_31, 1) = ((MR_Box) (hlds__hlds_llds__V_33_33));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_30_30, 0) = ((MR_Box) (hlds__hlds_llds__WidthStr_18));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_30_30, 1) = ((MR_Box) (hlds__hlds_llds__V_31_31));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_29_29, 0) = ((MR_Box) (hlds__hlds_llds__SlotStr_17));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_29_29, 1) = ((MR_Box) (hlds__hlds_llds__V_30_30));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_28_28, 0) = ((MR_Box) (hlds__hlds_llds__StackStr_16));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_28_28, 1) = ((MR_Box) (hlds__hlds_llds__V_29_29));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_26_26, 0) = ((MR_Box) ((MR_String) "\t ->\t"));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_26_26, 1) = ((MR_Box) (hlds__hlds_llds__V_28_28));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          hlds__hlds_llds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_24_24, 0) = ((MR_Box) (hlds__hlds_llds__VarName_19));
#line 348 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__V_24_24, 1) = ((MR_Box) (hlds__hlds_llds__V_26_26));
#line 348 "hlds_llds.m"
        }
#line 348 "hlds_llds.m"
        {
#line 348 "hlds_llds.m"
          mercury__string__append_list_2_p_0(hlds__hlds_llds__V_24_24, hlds__hlds_llds__STATE_VARIABLE_Explanation_4);
#line 348 "hlds_llds.m"
          return;
        }
#line 326 "hlds_llds.m"
      }
#line 325 "hlds_llds.m"
  }
#line 322 "hlds_llds.m"
}

#line 300 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__abs_locn_to_string_3_p_0(
#line 300 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Locn_4,
#line 300 "hlds_llds.m"
  MR_String * hlds__hlds_llds__Str_5,
#line 300 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeWidth_6)
#line 300 "hlds_llds.m"
{
#line 824 "hlds_llds.m"
  {
#line 824 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 824 "hlds_llds.m"
    if ((hlds__hlds_llds__Locn_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "hlds_llds.m"
      {
#line 825 "hlds_llds.m"
        *hlds__hlds_llds__Str_5 = (MR_String) "any_reg";
#line 826 "hlds_llds.m"
        *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "hlds_llds.m"
      }
#line 824 "hlds_llds.m"
    else
#line 824 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) == (MR_mktag((MR_Integer) 1))))
#line 824 "hlds_llds.m"
        {
#line 824 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 824 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

#line 824 "hlds_llds.m"
          if ((hlds__hlds_llds__V_27_27 == (MR_Integer) 1))
#line 832 "hlds_llds.m"
            {
#line 832 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_17_17;

#line 833 "hlds_llds.m"
              {
#line 833 "hlds_llds.m"
                hlds__hlds_llds__V_17_17 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__V_26_26);
              }
#line 833 "hlds_llds.m"
              {
#line 833 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "f", hlds__hlds_llds__V_17_17);
              }
#line 834 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 832 "hlds_llds.m"
            }
#line 824 "hlds_llds.m"
          else
#line 828 "hlds_llds.m"
            {
#line 828 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_20_20;

#line 829 "hlds_llds.m"
              {
#line 829 "hlds_llds.m"
                hlds__hlds_llds__V_20_20 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__V_26_26);
              }
#line 829 "hlds_llds.m"
              {
#line 829 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "r", hlds__hlds_llds__V_20_20);
              }
#line 830 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "hlds_llds.m"
            }
#line 824 "hlds_llds.m"
        }
#line 824 "hlds_llds.m"
      else
#line 824 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) == (MR_mktag((MR_Integer) 2))))
#line 836 "hlds_llds.m"
          {
#line 836 "hlds_llds.m"
            MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 836 "hlds_llds.m"
            MR_String hlds__hlds_llds__V_14_14;
#line 836 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__N_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

#line 837 "hlds_llds.m"
            {
#line 837 "hlds_llds.m"
              hlds__hlds_llds__V_14_14 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_22);
            }
#line 837 "hlds_llds.m"
            {
#line 837 "hlds_llds.m"
              *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar", hlds__hlds_llds__V_14_14);
            }
#line 851 "hlds_llds.m"
            if ((hlds__hlds_llds__Width_8 == (MR_Integer) 1))
#line 852 "hlds_llds.m"
              {
#line 852 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 852 "hlds_llds.m"
              }
#line 851 "hlds_llds.m"
            else
#line 851 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 836 "hlds_llds.m"
          }
#line 824 "hlds_llds.m"
        else
#line 824 "hlds_llds.m"
          if (((((MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 844 "hlds_llds.m"
            {
#line 844 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_10_10;
#line 844 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__N_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));

#line 845 "hlds_llds.m"
              {
#line 845 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_25);
              }
#line 845 "hlds_llds.m"
              {
#line 845 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "framevar", hlds__hlds_llds__V_10_10);
              }
#line 846 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 844 "hlds_llds.m"
            }
#line 824 "hlds_llds.m"
          else
#line 840 "hlds_llds.m"
            {
#line 840 "hlds_llds.m"
              MR_String hlds__hlds_llds__V_12_12;
#line 840 "hlds_llds.m"
              MR_Integer hlds__hlds_llds__N_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 840 "hlds_llds.m"
              MR_Word hlds__hlds_llds__Width_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 2)));

#line 841 "hlds_llds.m"
              {
#line 841 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = mercury__string__int_to_string_1_f_0(hlds__hlds_llds__N_23);
              }
#line 841 "hlds_llds.m"
              {
#line 841 "hlds_llds.m"
                *hlds__hlds_llds__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "parent_stackvar", hlds__hlds_llds__V_12_12);
              }
#line 851 "hlds_llds.m"
              if ((hlds__hlds_llds__Width_24 == (MR_Integer) 1))
#line 852 "hlds_llds.m"
                {
#line 852 "hlds_llds.m"
                  *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 852 "hlds_llds.m"
                }
#line 851 "hlds_llds.m"
              else
#line 851 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "hlds_llds.m"
            }
#line 824 "hlds_llds.m"
  }
#line 300 "hlds_llds.m"
}

#line 298 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__key_stack_slot_to_abs_locn_2_f_0(
#line 298 "hlds_llds.m"
  MR_Word hlds__hlds_llds__TypeInfo_6_6,
#line 298 "hlds_llds.m"
  MR_Box hlds__hlds_llds__HeadVar__1_4,
#line 298 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 298 "hlds_llds.m"
{
#line 809 "hlds_llds.m"
  {
#line 809 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 809 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__3_3;

#line 809 "hlds_llds.m"
    {
#line 809 "hlds_llds.m"
      return hlds__hlds_llds__HeadVar__3_3 = hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(hlds__hlds_llds__Slot_5);
    }
#line 809 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__3_3;
#line 809 "hlds_llds.m"
  }
#line 298 "hlds_llds.m"
}

#line 297 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(
#line 297 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 297 "hlds_llds.m"
{
#line 809 "hlds_llds.m"
  {
#line 809 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 809 "hlds_llds.m"
    MR_Word hlds__hlds_llds__AbsLocn_4;

#line 809 "hlds_llds.m"
    if (((MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) == (MR_mktag((MR_Integer) 0))))
#line 809 "hlds_llds.m"
      {
#line 809 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 809 "hlds_llds.m"
        MR_Word hlds__hlds_llds__Width_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

#line 810 "hlds_llds.m"
        {
#line 810 "hlds_llds.m"
          hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "hlds_llds.m"
          MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (hlds__hlds_llds__N_5));
#line 810 "hlds_llds.m"
          MR_hl_field(MR_mktag(2), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__Width_6));
#line 810 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
      }
#line 809 "hlds_llds.m"
    else
#line 809 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) == (MR_mktag((MR_Integer) 2))))
#line 815 "hlds_llds.m"
        {
#line 815 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));

#line 816 "hlds_llds.m"
          {
#line 816 "hlds_llds.m"
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_9));
#line 816 "hlds_llds.m"
          }
#line 815 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
      else
#line 812 "hlds_llds.m"
        {
#line 812 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 812 "hlds_llds.m"
          MR_Word hlds__hlds_llds__Width_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));

#line 813 "hlds_llds.m"
          {
#line 813 "hlds_llds.m"
            hlds__hlds_llds__AbsLocn_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 1) = ((MR_Box) (hlds__hlds_llds__N_7));
#line 813 "hlds_llds.m"
            MR_hl_field(MR_mktag(3), hlds__hlds_llds__AbsLocn_4, 2) = ((MR_Box) (hlds__hlds_llds__Width_8));
#line 813 "hlds_llds.m"
          }
#line 812 "hlds_llds.m"
        }
#line 809 "hlds_llds.m"
    return hlds__hlds_llds__AbsLocn_4;
#line 809 "hlds_llds.m"
  }
#line 297 "hlds_llds.m"
}

#line 295 "hlds_llds.m"
MR_Integer MR_CALL 
hlds__hlds_llds__stack_slot_num_1_f_0(
#line 295 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 295 "hlds_llds.m"
{
#line 6809 "hlds.hlds_llds.c"
  {
#line 6811 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;
#line 6813 "hlds.hlds_llds.c"
    MR_Integer hlds__hlds_llds__N_4;

#line 6816 "hlds.hlds_llds.c"
    if (((MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) == (MR_mktag((MR_Integer) 0))))
#line 6818 "hlds.hlds_llds.c"
      {
#line 6820 "hlds.hlds_llds.c"
        MR_Word hlds__hlds_llds__Width_5;

#line 793 "hlds_llds.m"
        hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 793 "hlds_llds.m"
        hlds__hlds_llds__Width_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 802 "hlds_llds.m"
        if ((hlds__hlds_llds__Width_5 == (MR_Integer) 1))
#line 803 "hlds_llds.m"
          {
#line 804 "hlds_llds.m"
            {
#line 804 "hlds_llds.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
            }
#line 803 "hlds_llds.m"
          }
#line 802 "hlds_llds.m"
        else
#line 801 "hlds_llds.m"
          {
#line 801 "hlds_llds.m"
          }
#line 6844 "hlds.hlds_llds.c"
      }
#line 6846 "hlds.hlds_llds.c"
    else
#line 6848 "hlds.hlds_llds.c"
      if (((MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) == (MR_mktag((MR_Integer) 2))))
#line 797 "hlds_llds.m"
        hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 6852 "hlds.hlds_llds.c"
      else
#line 6854 "hlds.hlds_llds.c"
        {
#line 6856 "hlds.hlds_llds.c"
          MR_Word hlds__hlds_llds__Width_17;

#line 795 "hlds_llds.m"
          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 795 "hlds_llds.m"
          hlds__hlds_llds__Width_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 802 "hlds_llds.m"
          if ((hlds__hlds_llds__Width_17 == (MR_Integer) 1))
#line 803 "hlds_llds.m"
            {
#line 804 "hlds_llds.m"
              {
#line 804 "hlds_llds.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "function \140hlds.hlds_llds.stack_slot_num\'/1", (MR_String) "double_width");
              }
#line 803 "hlds_llds.m"
            }
#line 802 "hlds_llds.m"
          else
#line 801 "hlds_llds.m"
            {
#line 801 "hlds_llds.m"
            }
#line 6880 "hlds.hlds_llds.c"
        }
#line 6882 "hlds.hlds_llds.c"
    return hlds__hlds_llds__N_4;
#line 6884 "hlds.hlds_llds.c"
  }
#line 295 "hlds_llds.m"
}

#line 289 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_p_0(
#line 289 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Must_5,
#line 289 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Subn_6,
#line 289 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Details0_7,
#line 289 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Details_8)
#line 289 "hlds_llds.m"
{
#line 706 "hlds_llds.m"
  {
#line 706 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeInfo_11_68;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__TypeCtorInfo_12_69;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirths0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 0)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirths0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 1)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeaths0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 2)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeaths0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 3)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeFollowVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 4)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 5)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePoint0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 6)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Details0_7, (MR_Integer) 7)));
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirths_17;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirths_18;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeaths_19;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeaths_20;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeFollowVars_21;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMap_28;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePoint_29;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_33;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__VarLocnList0_66;
#line 706 "hlds_llds.m"
    MR_Word hlds__hlds_llds__VarLocnList_67;

#line 710 "hlds_llds.m"
    {
#line 710 "hlds_llds.m"
      parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreBirths0_9, &hlds__hlds_llds__PreBirths_17);
    }
#line 711 "hlds_llds.m"
    {
#line 711 "hlds_llds.m"
      parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostBirths0_10, &hlds__hlds_llds__PostBirths_18);
    }
#line 712 "hlds_llds.m"
    {
#line 712 "hlds_llds.m"
      parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreDeaths0_11, &hlds__hlds_llds__PreDeaths_19);
    }
#line 713 "hlds_llds.m"
    {
#line 713 "hlds_llds.m"
      parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostDeaths0_12, &hlds__hlds_llds__PostDeaths_20);
    }
#line 717 "hlds_llds.m"
    if ((hlds__hlds_llds__MaybeFollowVars0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 716 "hlds_llds.m"
      hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "hlds_llds.m"
    else
#line 718 "hlds_llds.m"
      {
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_60 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeCtorInfo_12_61 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars0_13, (MR_Integer) 0)));
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVarsMap0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 0)));
#line 718 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__FirstFreeRegR_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 1)));
#line 718 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__FirstFreeRegF_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars0_22, (MR_Integer) 2)));
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVarsMap_26;
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__FollowVars_27;
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocnList0_58;
#line 718 "hlds_llds.m"
        MR_Word hlds__hlds_llds__VarLocnList_59;

#line 774 "hlds_llds.m"
        {
#line 774 "hlds_llds.m"
          mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__FollowVarsMap0_23, &hlds__hlds_llds__VarLocnList0_58);
        }
#line 775 "hlds_llds.m"
        {
#line 775 "hlds_llds.m"
          hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_58, &hlds__hlds_llds__VarLocnList_59);
        }
#line 776 "hlds_llds.m"
        {
#line 776 "hlds_llds.m"
          mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_60, hlds__hlds_llds__TypeCtorInfo_12_61, hlds__hlds_llds__VarLocnList_59, &hlds__hlds_llds__FollowVarsMap_26);
        }
#line 723 "hlds_llds.m"
        {
#line 723 "hlds_llds.m"
          hlds__hlds_llds__FollowVars_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 723 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 0) = ((MR_Box) (hlds__hlds_llds__FollowVarsMap_26));
#line 723 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 1) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegR_24));
#line 723 "hlds_llds.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_llds__FollowVars_27, 2) = ((MR_Box) (hlds__hlds_llds__FirstFreeRegF_25));
#line 723 "hlds_llds.m"
        }
#line 725 "hlds_llds.m"
        {
#line 725 "hlds_llds.m"
          hlds__hlds_llds__MaybeFollowVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__MaybeFollowVars_21, 0) = ((MR_Box) (hlds__hlds_llds__FollowVars_27));
#line 725 "hlds_llds.m"
        }
#line 718 "hlds_llds.m"
      }
#line 7035 "hlds.hlds_llds.c"
    hlds__hlds_llds__TypeInfo_11_68 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
#line 7037 "hlds.hlds_llds.c"
    hlds__hlds_llds__TypeCtorInfo_12_69 = (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0;
#line 774 "hlds_llds.m"
    {
#line 774 "hlds_llds.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__StoreMap0_14, &hlds__hlds_llds__VarLocnList0_66);
    }
#line 775 "hlds_llds.m"
    {
#line 775 "hlds_llds.m"
      hlds__hlds_llds__rename_vars_in_var_locn_list_4_p_0(hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__VarLocnList0_66, &hlds__hlds_llds__VarLocnList_67);
    }
#line 776 "hlds_llds.m"
    {
#line 776 "hlds_llds.m"
      mercury__map__from_assoc_list_2_p_0(hlds__hlds_llds__TypeInfo_11_68, hlds__hlds_llds__TypeCtorInfo_12_69, hlds__hlds_llds__VarLocnList_67, &hlds__hlds_llds__StoreMap_28);
    }
#line 731 "hlds_llds.m"
    if ((hlds__hlds_llds__ResumePoint0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "hlds_llds.m"
      hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "hlds_llds.m"
    else
#line 732 "hlds_llds.m"
      {
#line 732 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumePointVars0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 0)));
#line 732 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumeLocs_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint0_15, (MR_Integer) 1)));
#line 732 "hlds_llds.m"
        MR_Word hlds__hlds_llds__ResumePointVars_32;

#line 733 "hlds_llds.m"
        {
#line 733 "hlds_llds.m"
          parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumePointVars0_30, &hlds__hlds_llds__ResumePointVars_32);
        }
#line 735 "hlds_llds.m"
        {
#line 735 "hlds_llds.m"
          hlds__hlds_llds__ResumePoint_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 0) = ((MR_Box) (hlds__hlds_llds__ResumePointVars_32));
#line 735 "hlds_llds.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_llds__ResumePoint_29, 1) = ((MR_Box) (hlds__hlds_llds__ResumeLocs_31));
#line 735 "hlds_llds.m"
        }
#line 732 "hlds_llds.m"
      }
#line 740 "hlds_llds.m"
    if ((hlds__hlds_llds__MaybeNeed0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "hlds_llds.m"
      hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "hlds_llds.m"
    else
#line 740 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed0_16)) == (MR_mktag((MR_Integer) 1))))
#line 741 "hlds_llds.m"
        {
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedAcrossCall0_34 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 1);
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ForwardVars0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 0)));
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallResumeVars0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 1)));
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallNondetLiveVars0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall0_34, (MR_Integer) 2)));
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__ForwardVars_38;
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallResumeVars_39;
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__CallNondetLiveVars_40;
#line 741 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedAcrossCall_41;

#line 744 "hlds_llds.m"
          {
#line 744 "hlds_llds.m"
            parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ForwardVars0_35, &hlds__hlds_llds__ForwardVars_38);
          }
#line 745 "hlds_llds.m"
          {
#line 745 "hlds_llds.m"
            parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallResumeVars0_36, &hlds__hlds_llds__CallResumeVars_39);
          }
#line 746 "hlds_llds.m"
          {
#line 746 "hlds_llds.m"
            parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallNondetLiveVars0_37, &hlds__hlds_llds__CallNondetLiveVars_40);
          }
#line 748 "hlds_llds.m"
          {
#line 748 "hlds_llds.m"
            hlds__hlds_llds__NeedAcrossCall_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 0) = ((MR_Box) (hlds__hlds_llds__ForwardVars_38));
#line 748 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 1) = ((MR_Box) (hlds__hlds_llds__CallResumeVars_39));
#line 748 "hlds_llds.m"
            MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedAcrossCall_41, 2) = ((MR_Box) (hlds__hlds_llds__CallNondetLiveVars_40));
#line 748 "hlds_llds.m"
          }
#line 750 "hlds_llds.m"
          hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_41);
#line 741 "hlds_llds.m"
        }
#line 740 "hlds_llds.m"
      else
#line 740 "hlds_llds.m"
        if (((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed0_16)) == (MR_mktag((MR_Integer) 3))))
#line 759 "hlds_llds.m"
          {
#line 759 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInParConj0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed0_16, (MR_Integer) 0)));
#line 759 "hlds_llds.m"
            MR_Word hlds__hlds_llds__ParConjVars0_50 = (MR_Word) hlds__hlds_llds__NeedInParConj0_49;
#line 759 "hlds_llds.m"
            MR_Word hlds__hlds_llds__ParConjVars_51;
#line 759 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInParConj_52;

#line 761 "hlds_llds.m"
            {
#line 761 "hlds_llds.m"
              parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ParConjVars0_50, &hlds__hlds_llds__ParConjVars_51);
            }
#line 762 "hlds_llds.m"
            hlds__hlds_llds__NeedInParConj_52 = (MR_Word) hlds__hlds_llds__ParConjVars_51;
#line 763 "hlds_llds.m"
            {
#line 763 "hlds_llds.m"
              hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 763 "hlds_llds.m"
              MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_33, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_52));
#line 763 "hlds_llds.m"
            }
#line 759 "hlds_llds.m"
          }
#line 740 "hlds_llds.m"
        else
#line 752 "hlds_llds.m"
          {
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInResume0_42 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed0_16), (MR_Integer) 2);
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__OnStack_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 0)));
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__ResumeVars0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 1)));
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NondetLiveVars0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume0_42, (MR_Integer) 2)));
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__ResumeVars_46;
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NondetLiveVars_47;
#line 752 "hlds_llds.m"
            MR_Word hlds__hlds_llds__NeedInResume_48;

#line 754 "hlds_llds.m"
            {
#line 754 "hlds_llds.m"
              parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumeVars0_44, &hlds__hlds_llds__ResumeVars_46);
            }
#line 755 "hlds_llds.m"
            {
#line 755 "hlds_llds.m"
              parse_tree__prog_data__rename_vars_in_set_of_var_4_p_0(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__NondetLiveVars0_45, &hlds__hlds_llds__NondetLiveVars_47);
            }
#line 756 "hlds_llds.m"
            {
#line 756 "hlds_llds.m"
              hlds__hlds_llds__NeedInResume_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 756 "hlds_llds.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 0) = ((MR_Box) (hlds__hlds_llds__OnStack_43));
#line 756 "hlds_llds.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 1) = ((MR_Box) (hlds__hlds_llds__ResumeVars_46));
#line 756 "hlds_llds.m"
              MR_hl_field(MR_mktag(0), hlds__hlds_llds__NeedInResume_48, 2) = ((MR_Box) (hlds__hlds_llds__NondetLiveVars_47));
#line 756 "hlds_llds.m"
            }
#line 757 "hlds_llds.m"
            hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_48);
#line 752 "hlds_llds.m"
          }
#line 765 "hlds_llds.m"
    {
#line 765 "hlds_llds.m"
      MR_Word base;
#line 765 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 765 "hlds_llds.m"
      *hlds__hlds_llds__Details_8 = base;
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_17));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_18));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_19));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_20));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_llds__MaybeFollowVars_21));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_28));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_29));
#line 765 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_llds__MaybeNeed_33));
#line 765 "hlds_llds.m"
    }
#line 706 "hlds_llds.m"
  }
#line 289 "hlds_llds.m"
}

#line 276 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(
#line 276 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Resume_4,
#line 276 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Vars_5,
#line 276 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Locs_6)
#line 276 "hlds_llds.m"
{
#line 684 "hlds_llds.m"
  {
#line 684 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 684 "hlds_llds.m"
    if ((hlds__hlds_llds__Resume_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "hlds_llds.m"
      {
#line 687 "hlds_llds.m"
        {
#line 687 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_resume_vars_and_loc\'/3", (MR_String) "no resume point");
#line 687 "hlds_llds.m"
          return;
        }
#line 686 "hlds_llds.m"
      }
#line 684 "hlds_llds.m"
    else
#line 684 "hlds_llds.m"
      {
#line 684 "hlds_llds.m"
        *hlds__hlds_llds__Vars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 0)));
#line 684 "hlds_llds.m"
        *hlds__hlds_llds__Locs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Resume_4, (MR_Integer) 1)));
#line 684 "hlds_llds.m"
      }
#line 684 "hlds_llds.m"
  }
#line 276 "hlds_llds.m"
}

#line 273 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_resume_point_3_p_0(
#line 273 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 273 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 273 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 273 "hlds_llds.m"
{
#line 679 "hlds_llds.m"
  {
#line 679 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo_7;
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_14;
#line 679 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_22_22;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_24_24;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_23_23;

#line 645 "hlds_llds.m"
    {
#line 645 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    }
#line 646 "hlds_llds.m"
    {
#line 646 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    }
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
#line 647 "hlds_llds.m"
    {
#line 647 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__V_21_21));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__V_22_22));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__V_24_24));
#line 647 "hlds_llds.m"
    }
#line 648 "hlds_llds.m"
    {
#line 648 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
#line 648 "hlds_llds.m"
    }
#line 649 "hlds_llds.m"
    {
#line 649 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    }
#line 679 "hlds_llds.m"
    {
#line 679 "hlds_llds.m"
      MR_Word base;
#line 679 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 679 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__3_3 = base;
#line 679 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
#line 679 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
#line 679 "hlds_llds.m"
    }
#line 679 "hlds_llds.m"
  }
#line 273 "hlds_llds.m"
}

#line 270 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_follow_vars_3_p_0(
#line 270 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 270 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 270 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 270 "hlds_llds.m"
{
#line 675 "hlds_llds.m"
  {
#line 675 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalExpr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__GoalInfo_7;
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_12;
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_13;
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_14;
#line 675 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_15;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_22_22;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_23_23;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_24_24;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 631 "hlds_llds.m"
    {
#line 631 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_12 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo0_6);
    }
#line 632 "hlds_llds.m"
    {
#line 632 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_13 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_12);
    }
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 0)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 1)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 2)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 3)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 4)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 5)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 6)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_13, (MR_Integer) 7)));
#line 633 "hlds_llds.m"
    {
#line 633 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 0) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 1) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 2) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 3) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 5) = ((MR_Box) (hlds__hlds_llds__V_22_22));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 6) = ((MR_Box) (hlds__hlds_llds__V_23_23));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_14, 7) = ((MR_Box) (hlds__hlds_llds__V_24_24));
#line 633 "hlds_llds.m"
    }
#line 634 "hlds_llds.m"
    {
#line 634 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_15, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_14));
#line 634 "hlds_llds.m"
    }
#line 635 "hlds_llds.m"
    {
#line 635 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_15, hlds__hlds_llds__GoalInfo0_6, &hlds__hlds_llds__GoalInfo_7);
    }
#line 675 "hlds_llds.m"
    {
#line 675 "hlds_llds.m"
      MR_Word base;
#line 675 "hlds_llds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 675 "hlds_llds.m"
      *hlds__hlds_llds__HeadVar__3_3 = base;
#line 675 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_llds__GoalExpr_5));
#line 675 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_llds__GoalInfo_7));
#line 675 "hlds_llds.m"
    }
#line 675 "hlds_llds.m"
  }
#line 270 "hlds_llds.m"
}

#line 265 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(
#line 265 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInParConj_4,
#line 265 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 265 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 265 "hlds_llds.m"
{
#line 665 "hlds_llds.m"
  {
#line 665 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 665 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 665 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 665 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 665 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 665 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 668 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 666 "hlds_llds.m"
    {
#line 666 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 667 "hlds_llds.m"
    {
#line 667 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 668 "hlds_llds.m"
    {
#line 668 "hlds_llds.m"
      hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_12_12, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_4));
#line 668 "hlds_llds.m"
    }
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 668 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 668 "hlds_llds.m"
    {
#line 668 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 668 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 668 "hlds_llds.m"
    }
#line 669 "hlds_llds.m"
    {
#line 669 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 669 "hlds_llds.m"
    }
#line 670 "hlds_llds.m"
    {
#line 670 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 670 "hlds_llds.m"
      return;
    }
#line 665 "hlds_llds.m"
  }
#line 265 "hlds_llds.m"
}

#line 262 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(
#line 262 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInResume_4,
#line 262 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 262 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 262 "hlds_llds.m"
{
#line 658 "hlds_llds.m"
  {
#line 658 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 658 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 658 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 658 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 658 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 658 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 661 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 659 "hlds_llds.m"
    {
#line 659 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 660 "hlds_llds.m"
    {
#line 660 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) hlds__hlds_llds__NeedInResume_4);
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 661 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 661 "hlds_llds.m"
    {
#line 661 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 661 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 661 "hlds_llds.m"
    }
#line 662 "hlds_llds.m"
    {
#line 662 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 662 "hlds_llds.m"
    }
#line 663 "hlds_llds.m"
    {
#line 663 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 663 "hlds_llds.m"
      return;
    }
#line 658 "hlds_llds.m"
  }
#line 262 "hlds_llds.m"
}

#line 259 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(
#line 259 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedAcrossCall_4,
#line 259 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 259 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 259 "hlds_llds.m"
{
#line 651 "hlds_llds.m"
  {
#line 651 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 651 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 651 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 651 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 651 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 651 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 654 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_21_21;

#line 652 "hlds_llds.m"
    {
#line 652 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 653 "hlds_llds.m"
    {
#line 653 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) hlds__hlds_llds__NeedAcrossCall_4);
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 654 "hlds_llds.m"
    hlds__hlds_llds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 654 "hlds_llds.m"
    {
#line 654 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 654 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_12_12));
#line 654 "hlds_llds.m"
    }
#line 655 "hlds_llds.m"
    {
#line 655 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 655 "hlds_llds.m"
    }
#line 656 "hlds_llds.m"
    {
#line 656 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 656 "hlds_llds.m"
      return;
    }
#line 651 "hlds_llds.m"
  }
#line 259 "hlds_llds.m"
}

#line 256 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_resume_point_3_p_0(
#line 256 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 256 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 256 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 256 "hlds_llds.m"
{
#line 644 "hlds_llds.m"
  {
#line 644 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 644 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 644 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 644 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 644 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 647 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;

#line 645 "hlds_llds.m"
    {
#line 645 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 646 "hlds_llds.m"
    {
#line 646 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 647 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 647 "hlds_llds.m"
    {
#line 647 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_4));
#line 647 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 647 "hlds_llds.m"
    }
#line 648 "hlds_llds.m"
    {
#line 648 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 648 "hlds_llds.m"
    }
#line 649 "hlds_llds.m"
    {
#line 649 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 649 "hlds_llds.m"
      return;
    }
#line 644 "hlds_llds.m"
  }
#line 256 "hlds_llds.m"
}

#line 253 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_store_map_3_p_0(
#line 253 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StoreMap_4,
#line 253 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 253 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 253 "hlds_llds.m"
{
#line 637 "hlds_llds.m"
  {
#line 637 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 637 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 637 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 637 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 637 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 640 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;

#line 638 "hlds_llds.m"
    {
#line 638 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 639 "hlds_llds.m"
    {
#line 639 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 640 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 640 "hlds_llds.m"
    {
#line 640 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__StoreMap_4));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 640 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 640 "hlds_llds.m"
    }
#line 641 "hlds_llds.m"
    {
#line 641 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 641 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 641 "hlds_llds.m"
    }
#line 642 "hlds_llds.m"
    {
#line 642 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 642 "hlds_llds.m"
      return;
    }
#line 637 "hlds_llds.m"
  }
#line 253 "hlds_llds.m"
}

#line 250 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(
#line 250 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 250 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 250 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 250 "hlds_llds.m"
{
#line 630 "hlds_llds.m"
  {
#line 630 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 630 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 630 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 630 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 630 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 633 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 631 "hlds_llds.m"
    {
#line 631 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 632 "hlds_llds.m"
    {
#line 632 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 633 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 633 "hlds_llds.m"
    {
#line 633 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__FollowVars_4));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 633 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 633 "hlds_llds.m"
    }
#line 634 "hlds_llds.m"
    {
#line 634 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 634 "hlds_llds.m"
    }
#line 635 "hlds_llds.m"
    {
#line 635 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 635 "hlds_llds.m"
      return;
    }
#line 630 "hlds_llds.m"
  }
#line 250 "hlds_llds.m"
}

#line 247 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(
#line 247 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_4,
#line 247 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 247 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 247 "hlds_llds.m"
{
#line 623 "hlds_llds.m"
  {
#line 623 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 623 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 623 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 623 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 623 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 626 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;

#line 624 "hlds_llds.m"
    {
#line 624 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 625 "hlds_llds.m"
    {
#line 625 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 626 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 626 "hlds_llds.m"
    {
#line 626 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_4));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 626 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 626 "hlds_llds.m"
    }
#line 627 "hlds_llds.m"
    {
#line 627 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 627 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 627 "hlds_llds.m"
    }
#line 628 "hlds_llds.m"
    {
#line 628 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 628 "hlds_llds.m"
      return;
    }
#line 623 "hlds_llds.m"
  }
#line 247 "hlds_llds.m"
}

#line 244 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(
#line 244 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_4,
#line 244 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 244 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 244 "hlds_llds.m"
{
#line 616 "hlds_llds.m"
  {
#line 616 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 616 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 616 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 616 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 616 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 619 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 617 "hlds_llds.m"
    {
#line 617 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 618 "hlds_llds.m"
    {
#line 618 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 619 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 619 "hlds_llds.m"
    {
#line 619 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__PreDeaths_4));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 619 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 619 "hlds_llds.m"
    }
#line 620 "hlds_llds.m"
    {
#line 620 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 620 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 620 "hlds_llds.m"
    }
#line 621 "hlds_llds.m"
    {
#line 621 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 621 "hlds_llds.m"
      return;
    }
#line 616 "hlds_llds.m"
  }
#line 244 "hlds_llds.m"
}

#line 241 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_births_3_p_0(
#line 241 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_4,
#line 241 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 241 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 241 "hlds_llds.m"
{
#line 609 "hlds_llds.m"
  {
#line 609 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 609 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 609 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 609 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 609 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 612 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;

#line 610 "hlds_llds.m"
    {
#line 610 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 611 "hlds_llds.m"
    {
#line 611 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 612 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 612 "hlds_llds.m"
    {
#line 612 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__V_13_13));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__PostBirths_4));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 612 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 612 "hlds_llds.m"
    }
#line 613 "hlds_llds.m"
    {
#line 613 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 613 "hlds_llds.m"
    }
#line 614 "hlds_llds.m"
    {
#line 614 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 614 "hlds_llds.m"
      return;
    }
#line 609 "hlds_llds.m"
  }
#line 241 "hlds_llds.m"
}

#line 238 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_births_3_p_0(
#line 238 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_4,
#line 238 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 238 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 238 "hlds_llds.m"
{
#line 602 "hlds_llds.m"
  {
#line 602 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 602 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_6;
#line 602 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo0_7;
#line 602 "hlds_llds.m"
    MR_Word hlds__hlds_llds__LLDSInfo_8;
#line 602 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_9;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;
#line 605 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 603 "hlds_llds.m"
    {
#line 603 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_6 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10);
    }
#line 604 "hlds_llds.m"
    {
#line 604 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo0_7 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_6);
    }
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 0)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 1)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 2)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 3)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 4)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 5)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 6)));
#line 605 "hlds_llds.m"
    hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo0_7, (MR_Integer) 7)));
#line 605 "hlds_llds.m"
    {
#line 605 "hlds_llds.m"
      hlds__hlds_llds__LLDSInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 0) = ((MR_Box) (hlds__hlds_llds__PreBirths_4));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 1) = ((MR_Box) (hlds__hlds_llds__V_14_14));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 2) = ((MR_Box) (hlds__hlds_llds__V_15_15));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 3) = ((MR_Box) (hlds__hlds_llds__V_16_16));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 4) = ((MR_Box) (hlds__hlds_llds__V_17_17));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 5) = ((MR_Box) (hlds__hlds_llds__V_18_18));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 6) = ((MR_Box) (hlds__hlds_llds__V_19_19));
#line 605 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__LLDSInfo_8, 7) = ((MR_Box) (hlds__hlds_llds__V_20_20));
#line 605 "hlds_llds.m"
    }
#line 606 "hlds_llds.m"
    {
#line 606 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_9, 0) = ((MR_Box) (hlds__hlds_llds__LLDSInfo_8));
#line 606 "hlds_llds.m"
    }
#line 607 "hlds_llds.m"
    {
#line 607 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_9, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11);
#line 607 "hlds_llds.m"
      return;
    }
#line 602 "hlds_llds.m"
  }
#line 238 "hlds_llds.m"
}

#line 233 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_8,
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_9,
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_10,
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_11,
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_12,
#line 233 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17,
#line 233 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18)
#line 233 "hlds_llds.m"
{
#line 589 "hlds_llds.m"
  {
#line 589 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo0_14;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_16;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_30_30;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_31_31;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_33_33;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_34_34;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_38_38;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_39_39;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_41_41;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_42_42;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_43_43;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_46_46;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_47_47;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_49_49;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_50_50;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_51_51;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_52_52;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_54_54;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_55_55;
#line 589 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_57_57;
#line 593 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_26_26;
#line 593 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_27_27;
#line 593 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_28_28;
#line 593 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_29_29;
#line 593 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_32_32;

#line 590 "hlds_llds.m"
    {
#line 590 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo0_14 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17);
    }
#line 592 "hlds_llds.m"
    {
#line 592 "hlds_llds.m"
      hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19 = hlds__hlds_llds__get_details_1_f_0(hlds__hlds_llds__CodeGenInfo0_14);
    }
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 0)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 1)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 2)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 3)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 4)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 5)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 6)));
#line 593 "hlds_llds.m"
    hlds__hlds_llds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_19_19, (MR_Integer) 7)));
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_34_34 = hlds__hlds_llds__PreBirths_8;
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_38_38 = hlds__hlds_llds__V_30_30;
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_39_39 = hlds__hlds_llds__V_31_31;
#line 594 "hlds_llds.m"
    hlds__hlds_llds__V_41_41 = hlds__hlds_llds__V_33_33;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_42_42 = hlds__hlds_llds__V_34_34;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_43_43 = hlds__hlds_llds__PostBirths_9;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_46_46 = hlds__hlds_llds__V_38_38;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_47_47 = hlds__hlds_llds__V_39_39;
#line 595 "hlds_llds.m"
    hlds__hlds_llds__V_49_49 = hlds__hlds_llds__V_41_41;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_50_50 = hlds__hlds_llds__V_42_42;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_51_51 = hlds__hlds_llds__V_43_43;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_52_52 = hlds__hlds_llds__PreDeaths_10;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_54_54 = hlds__hlds_llds__V_46_46;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_55_55 = hlds__hlds_llds__V_47_47;
#line 596 "hlds_llds.m"
    hlds__hlds_llds__V_57_57 = hlds__hlds_llds__V_49_49;
#line 597 "hlds_llds.m"
    {
#line 597 "hlds_llds.m"
      hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 0) = ((MR_Box) (hlds__hlds_llds__V_50_50));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 1) = ((MR_Box) (hlds__hlds_llds__V_51_51));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 2) = ((MR_Box) (hlds__hlds_llds__V_52_52));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 3) = ((MR_Box) (hlds__hlds_llds__PostDeaths_11));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 4) = ((MR_Box) (hlds__hlds_llds__V_54_54));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 5) = ((MR_Box) (hlds__hlds_llds__V_55_55));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 6) = ((MR_Box) (hlds__hlds_llds__ResumePoint_12));
#line 597 "hlds_llds.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24, 7) = ((MR_Box) (hlds__hlds_llds__V_57_57));
#line 597 "hlds_llds.m"
    }
#line 598 "hlds_llds.m"
    {
#line 598 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 598 "hlds_llds.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_16, 0) = ((MR_Box) (hlds__hlds_llds__STATE_VARIABLE_LLDSInfo_24_24));
#line 598 "hlds_llds.m"
    }
#line 600 "hlds_llds.m"
    {
#line 600 "hlds_llds.m"
      hlds__hlds_goal__goal_info_set_code_gen_info_3_p_0(hlds__hlds_llds__CodeGenInfo_16, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17, hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18);
#line 600 "hlds_llds.m"
      return;
    }
#line 589 "hlds_llds.m"
  }
#line 233 "hlds_llds.m"
}

#line 223 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_p_0(
#line 223 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 223 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 223 "hlds_llds.m"
{
#line 580 "hlds_llds.m"
  {
#line 580 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 580 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 580 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 580 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedInParConj_7;
#line 580 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 582 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 581 "hlds_llds.m"
    {
#line 581 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 582 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 582 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 582 "hlds_llds.m"
      {
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 582 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 583 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 3)));
#line 583 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 583 "hlds_llds.m"
          {
#line 583 "hlds_llds.m"
            hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));
#line 584 "hlds_llds.m"
            {
#line 584 "hlds_llds.m"
              MR_Word base;
#line 584 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
#line 584 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
#line 584 "hlds_llds.m"
            }
#line 584 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 583 "hlds_llds.m"
          }
#line 582 "hlds_llds.m"
      }
#line 580 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 580 "hlds_llds.m"
  }
#line 223 "hlds_llds.m"
}

#line 220 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_p_0(
#line 220 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 220 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 220 "hlds_llds.m"
{
#line 574 "hlds_llds.m"
  {
#line 574 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 574 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 574 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 574 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedInResume_7;
#line 574 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 576 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 575 "hlds_llds.m"
    {
#line 575 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 576 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 576 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 576 "hlds_llds.m"
      {
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 576 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 577 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 2)));
#line 577 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 577 "hlds_llds.m"
          {
#line 577 "hlds_llds.m"
            hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);
#line 578 "hlds_llds.m"
            {
#line 578 "hlds_llds.m"
              MR_Word base;
#line 578 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedInResume_4 = base;
#line 578 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
#line 578 "hlds_llds.m"
            }
#line 578 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 577 "hlds_llds.m"
          }
#line 576 "hlds_llds.m"
      }
#line 574 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 574 "hlds_llds.m"
  }
#line 220 "hlds_llds.m"
}

#line 217 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(
#line 217 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 217 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAcrossCall_4)
#line 217 "hlds_llds.m"
{
#line 568 "hlds_llds.m"
  {
#line 568 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 568 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 568 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 568 "hlds_llds.m"
    MR_Word hlds__hlds_llds__NeedAcrossCall_7;
#line 568 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 570 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;

#line 569 "hlds_llds.m"
    {
#line 569 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 570 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 570 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 570 "hlds_llds.m"
      {
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 0)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 1)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 2)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 3)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 4)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 5)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 6)));
#line 570 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_8_8, (MR_Integer) 7)));
#line 571 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 1)));
#line 571 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 571 "hlds_llds.m"
          {
#line 571 "hlds_llds.m"
            hlds__hlds_llds__NeedAcrossCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);
#line 572 "hlds_llds.m"
            {
#line 572 "hlds_llds.m"
              MR_Word base;
#line 572 "hlds_llds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "hlds_llds.m"
              *hlds__hlds_llds__MaybeNeedAcrossCall_4 = base;
#line 572 "hlds_llds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAcrossCall_7));
#line 572 "hlds_llds.m"
            }
#line 572 "hlds_llds.m"
            hlds__hlds_llds__succeeded = MR_TRUE;
#line 571 "hlds_llds.m"
          }
#line 570 "hlds_llds.m"
      }
#line 568 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 568 "hlds_llds.m"
  }
#line 217 "hlds_llds.m"
}

#line 214 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(
#line 214 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 214 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 214 "hlds_llds.m"
{
#line 564 "hlds_llds.m"
  {
#line 564 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 564 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 564 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 566 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 565 "hlds_llds.m"
    {
#line 565 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 566 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 566 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 566 "hlds_llds.m"
      {
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 566 "hlds_llds.m"
        *hlds__hlds_llds__ResumePoint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 566 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 566 "hlds_llds.m"
      }
#line 564 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 564 "hlds_llds.m"
  }
#line 214 "hlds_llds.m"
}

#line 211 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(
#line 211 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 211 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 211 "hlds_llds.m"
{
#line 560 "hlds_llds.m"
  {
#line 560 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 560 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 560 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 562 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 561 "hlds_llds.m"
    {
#line 561 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 562 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 562 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 562 "hlds_llds.m"
      {
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 562 "hlds_llds.m"
        *hlds__hlds_llds__StoreMap_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 562 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 562 "hlds_llds.m"
      }
#line 560 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 560 "hlds_llds.m"
  }
#line 211 "hlds_llds.m"
}

#line 208 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_p_0(
#line 208 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 208 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 208 "hlds_llds.m"
{
#line 556 "hlds_llds.m"
  {
#line 556 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 556 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 556 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 558 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 557 "hlds_llds.m"
    {
#line 557 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 558 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 558 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 558 "hlds_llds.m"
      {
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 558 "hlds_llds.m"
        *hlds__hlds_llds__FollowVars_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 558 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 558 "hlds_llds.m"
      }
#line 556 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 556 "hlds_llds.m"
  }
#line 208 "hlds_llds.m"
}

#line 205 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(
#line 205 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 205 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 205 "hlds_llds.m"
{
#line 552 "hlds_llds.m"
  {
#line 552 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 552 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 552 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 554 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 553 "hlds_llds.m"
    {
#line 553 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 554 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 554 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 554 "hlds_llds.m"
      {
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 554 "hlds_llds.m"
        *hlds__hlds_llds__PostDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 554 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 554 "hlds_llds.m"
      }
#line 552 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 552 "hlds_llds.m"
  }
#line 205 "hlds_llds.m"
}

#line 202 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(
#line 202 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 202 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 202 "hlds_llds.m"
{
#line 548 "hlds_llds.m"
  {
#line 548 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 548 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 548 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 550 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 549 "hlds_llds.m"
    {
#line 549 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 550 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 550 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 550 "hlds_llds.m"
      {
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 550 "hlds_llds.m"
        *hlds__hlds_llds__PreDeaths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 550 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 550 "hlds_llds.m"
      }
#line 548 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 548 "hlds_llds.m"
  }
#line 202 "hlds_llds.m"
}

#line 199 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(
#line 199 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 199 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 199 "hlds_llds.m"
{
#line 544 "hlds_llds.m"
  {
#line 544 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 544 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 544 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 546 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 545 "hlds_llds.m"
    {
#line 545 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 546 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 546 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 546 "hlds_llds.m"
      {
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 546 "hlds_llds.m"
        *hlds__hlds_llds__PostBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 546 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 546 "hlds_llds.m"
      }
#line 544 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 544 "hlds_llds.m"
  }
#line 199 "hlds_llds.m"
}

#line 196 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(
#line 196 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 196 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 196 "hlds_llds.m"
{
#line 540 "hlds_llds.m"
  {
#line 540 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 540 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 540 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_6_6;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_8_8;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_9_9;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 542 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;

#line 541 "hlds_llds.m"
    {
#line 541 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 542 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 542 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 542 "hlds_llds.m"
      {
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 542 "hlds_llds.m"
        *hlds__hlds_llds__PreBirths_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 0)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 1)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 2)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 3)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 4)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 5)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 6)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_6_6, (MR_Integer) 7)));
#line 542 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 542 "hlds_llds.m"
      }
#line 540 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 540 "hlds_llds.m"
  }
#line 196 "hlds_llds.m"
}

#line 191 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(
#line 191 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 191 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 191 "hlds_llds.m"
{
#line 521 "hlds_llds.m"
  {
#line 521 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 521 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 534 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 523 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 522 "hlds_llds.m"
    {
#line 522 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 523 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 523 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 523 "hlds_llds.m"
      {
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 523 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 523 "hlds_llds.m"
      }
#line 534 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 527 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 3))))
#line 525 "hlds_llds.m"
        {
#line 525 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInParConj_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__MaybeNeed_6, (MR_Integer) 0)));

#line 526 "hlds_llds.m"
          {
#line 526 "hlds_llds.m"
            MR_Word base;
#line 526 "hlds_llds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "hlds_llds.m"
            *hlds__hlds_llds__MaybeNeedInParConj_4 = base;
#line 526 "hlds_llds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInParConj_7));
#line 526 "hlds_llds.m"
          }
#line 525 "hlds_llds.m"
        }
#line 527 "hlds_llds.m"
      else
#line 532 "hlds_llds.m"
        *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "hlds_llds.m"
    else
#line 535 "hlds_llds.m"
      {
#line 535 "hlds_llds.m"
        {
#line 535 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_par_conj\'/2", (MR_String) "no code_gen_info");
#line 535 "hlds_llds.m"
          return;
        }
#line 535 "hlds_llds.m"
      }
#line 521 "hlds_llds.m"
  }
#line 191 "hlds_llds.m"
}

#line 188 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(
#line 188 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 188 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 188 "hlds_llds.m"
{
#line 504 "hlds_llds.m"
  {
#line 504 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 504 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 517 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 506 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 505 "hlds_llds.m"
    {
#line 505 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 506 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 506 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 506 "hlds_llds.m"
      {
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 506 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 506 "hlds_llds.m"
      }
#line 517 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 510 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 2))))
#line 508 "hlds_llds.m"
        {
#line 508 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedInResume_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 2);

#line 509 "hlds_llds.m"
          {
#line 509 "hlds_llds.m"
            MR_Word base;
#line 509 "hlds_llds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "hlds_llds.m"
            *hlds__hlds_llds__MaybeNeedInResume_4 = base;
#line 509 "hlds_llds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedInResume_7));
#line 509 "hlds_llds.m"
          }
#line 508 "hlds_llds.m"
        }
#line 510 "hlds_llds.m"
      else
#line 515 "hlds_llds.m"
        *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "hlds_llds.m"
    else
#line 518 "hlds_llds.m"
      {
#line 518 "hlds_llds.m"
        {
#line 518 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_in_resume\'/2", (MR_String) "no code_gen_info");
#line 518 "hlds_llds.m"
          return;
        }
#line 518 "hlds_llds.m"
      }
#line 504 "hlds_llds.m"
  }
#line 188 "hlds_llds.m"
}

#line 185 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(
#line 185 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 185 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAtCall_4)
#line 185 "hlds_llds.m"
{
#line 487 "hlds_llds.m"
  {
#line 487 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 487 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 500 "hlds_llds.m"
    MR_Word hlds__hlds_llds__MaybeNeed_6;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_10_10;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_18_18;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_19_19;
#line 489 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_20_20;

#line 488 "hlds_llds.m"
    {
#line 488 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 489 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 489 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 489 "hlds_llds.m"
      {
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 0)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 1)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 2)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 3)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 4)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 5)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 6)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_10_10, (MR_Integer) 7)));
#line 489 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 489 "hlds_llds.m"
      }
#line 500 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 493 "hlds_llds.m"
      if (((MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) == (MR_mktag((MR_Integer) 1))))
#line 491 "hlds_llds.m"
        {
#line 491 "hlds_llds.m"
          MR_Word hlds__hlds_llds__NeedAtCall_7 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__MaybeNeed_6), (MR_Integer) 1);

#line 492 "hlds_llds.m"
          {
#line 492 "hlds_llds.m"
            MR_Word base;
#line 492 "hlds_llds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "hlds_llds.m"
            *hlds__hlds_llds__MaybeNeedAtCall_4 = base;
#line 492 "hlds_llds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_llds__NeedAtCall_7));
#line 492 "hlds_llds.m"
          }
#line 491 "hlds_llds.m"
        }
#line 493 "hlds_llds.m"
      else
#line 498 "hlds_llds.m"
        *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "hlds_llds.m"
    else
#line 501 "hlds_llds.m"
      {
#line 501 "hlds_llds.m"
        {
#line 501 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_maybe_need_across_call\'/2", (MR_String) "no code_gen_info");
#line 501 "hlds_llds.m"
          return;
        }
#line 501 "hlds_llds.m"
      }
#line 487 "hlds_llds.m"
  }
#line 185 "hlds_llds.m"
}

#line 182 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_resume_point_2_p_0(
#line 182 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 182 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 182 "hlds_llds.m"
{
#line 479 "hlds_llds.m"
  {
#line 479 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 479 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 483 "hlds_llds.m"
    MR_Word hlds__hlds_llds__ResumePointPrime_6;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 481 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 480 "hlds_llds.m"
    {
#line 480 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 481 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 481 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 481 "hlds_llds.m"
      {
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__ResumePointPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 481 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 481 "hlds_llds.m"
      }
#line 483 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 482 "hlds_llds.m"
      *hlds__hlds_llds__ResumePoint_4 = hlds__hlds_llds__ResumePointPrime_6;
#line 483 "hlds_llds.m"
    else
#line 484 "hlds_llds.m"
      {
#line 484 "hlds_llds.m"
        {
#line 484 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_resume_point\'/2", (MR_String) "no code_gen_info");
#line 484 "hlds_llds.m"
          return;
        }
#line 484 "hlds_llds.m"
      }
#line 479 "hlds_llds.m"
  }
#line 182 "hlds_llds.m"
}

#line 179 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_store_map_2_p_0(
#line 179 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 179 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 179 "hlds_llds.m"
{
#line 471 "hlds_llds.m"
  {
#line 471 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 471 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 475 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StoreMapPrime_6;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 473 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 472 "hlds_llds.m"
    {
#line 472 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 473 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 473 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 473 "hlds_llds.m"
      {
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__StoreMapPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 473 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 473 "hlds_llds.m"
      }
#line 475 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 474 "hlds_llds.m"
      *hlds__hlds_llds__StoreMap_4 = hlds__hlds_llds__StoreMapPrime_6;
#line 475 "hlds_llds.m"
    else
#line 476 "hlds_llds.m"
      {
#line 476 "hlds_llds.m"
        {
#line 476 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_store_map\'/2", (MR_String) "no code_gen_info");
#line 476 "hlds_llds.m"
          return;
        }
#line 476 "hlds_llds.m"
      }
#line 471 "hlds_llds.m"
  }
#line 179 "hlds_llds.m"
}

#line 176 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(
#line 176 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 176 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 176 "hlds_llds.m"
{
#line 463 "hlds_llds.m"
  {
#line 463 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 463 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 467 "hlds_llds.m"
    MR_Word hlds__hlds_llds__FollowVarsPrime_6;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 465 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 464 "hlds_llds.m"
    {
#line 464 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 465 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 465 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 465 "hlds_llds.m"
      {
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__FollowVarsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 465 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 465 "hlds_llds.m"
      }
#line 467 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 466 "hlds_llds.m"
      *hlds__hlds_llds__FollowVars_4 = hlds__hlds_llds__FollowVarsPrime_6;
#line 467 "hlds_llds.m"
    else
#line 468 "hlds_llds.m"
      {
#line 468 "hlds_llds.m"
        {
#line 468 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_follow_vars\'/2", (MR_String) "no code_gen_info");
#line 468 "hlds_llds.m"
          return;
        }
#line 468 "hlds_llds.m"
      }
#line 463 "hlds_llds.m"
  }
#line 176 "hlds_llds.m"
}

#line 173 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(
#line 173 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 173 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 173 "hlds_llds.m"
{
#line 455 "hlds_llds.m"
  {
#line 455 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 455 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 459 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostDeathsPrime_6;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 457 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 456 "hlds_llds.m"
    {
#line 456 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 457 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 457 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 457 "hlds_llds.m"
      {
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__PostDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 457 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 457 "hlds_llds.m"
      }
#line 459 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 458 "hlds_llds.m"
      *hlds__hlds_llds__PostDeaths_4 = hlds__hlds_llds__PostDeathsPrime_6;
#line 459 "hlds_llds.m"
    else
#line 460 "hlds_llds.m"
      {
#line 460 "hlds_llds.m"
        {
#line 460 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_deaths\'/2", (MR_String) "no code_gen_info");
#line 460 "hlds_llds.m"
          return;
        }
#line 460 "hlds_llds.m"
      }
#line 455 "hlds_llds.m"
  }
#line 173 "hlds_llds.m"
}

#line 170 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(
#line 170 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 170 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 170 "hlds_llds.m"
{
#line 447 "hlds_llds.m"
  {
#line 447 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 447 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 451 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreDeathsPrime_6;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 449 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 448 "hlds_llds.m"
    {
#line 448 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 449 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 449 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 449 "hlds_llds.m"
      {
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__PreDeathsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 449 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 449 "hlds_llds.m"
      }
#line 451 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 450 "hlds_llds.m"
      *hlds__hlds_llds__PreDeaths_4 = hlds__hlds_llds__PreDeathsPrime_6;
#line 451 "hlds_llds.m"
    else
#line 452 "hlds_llds.m"
      {
#line 452 "hlds_llds.m"
        {
#line 452 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_deaths\'/2", (MR_String) "no code_gen_info");
#line 452 "hlds_llds.m"
          return;
        }
#line 452 "hlds_llds.m"
      }
#line 447 "hlds_llds.m"
  }
#line 170 "hlds_llds.m"
}

#line 167 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_births_2_p_0(
#line 167 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 167 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 167 "hlds_llds.m"
{
#line 439 "hlds_llds.m"
  {
#line 439 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 439 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 443 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PostBirthsPrime_6;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 441 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 440 "hlds_llds.m"
    {
#line 440 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 441 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 441 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 441 "hlds_llds.m"
      {
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__PostBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 441 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 441 "hlds_llds.m"
      }
#line 443 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 442 "hlds_llds.m"
      *hlds__hlds_llds__PostBirths_4 = hlds__hlds_llds__PostBirthsPrime_6;
#line 443 "hlds_llds.m"
    else
#line 444 "hlds_llds.m"
      {
#line 444 "hlds_llds.m"
        {
#line 444 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_post_births\'/2", (MR_String) "no code_gen_info");
#line 444 "hlds_llds.m"
          return;
        }
#line 444 "hlds_llds.m"
      }
#line 439 "hlds_llds.m"
  }
#line 167 "hlds_llds.m"
}

#line 164 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_births_2_p_0(
#line 164 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 164 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 164 "hlds_llds.m"
{
#line 431 "hlds_llds.m"
  {
#line 431 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 431 "hlds_llds.m"
    MR_Word hlds__hlds_llds__CodeGenInfo_5;
#line 435 "hlds_llds.m"
    MR_Word hlds__hlds_llds__PreBirthsPrime_6;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_7_7;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_11_11;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_12_12;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_13_13;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_14_14;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_15_15;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_16_16;
#line 433 "hlds_llds.m"
    MR_Word hlds__hlds_llds__V_17_17;

#line 432 "hlds_llds.m"
    {
#line 432 "hlds_llds.m"
      hlds__hlds_llds__CodeGenInfo_5 = hlds__hlds_goal__goal_info_get_code_gen_info_1_f_0(hlds__hlds_llds__GoalInfo_3);
    }
#line 433 "hlds_llds.m"
    hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__CodeGenInfo_5)) == (MR_mktag((MR_Integer) 1)));
#line 433 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 433 "hlds_llds.m"
      {
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__CodeGenInfo_5, (MR_Integer) 0)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__PreBirthsPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 0)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 1)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 2)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 3)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 4)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 5)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 6)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__V_7_7, (MR_Integer) 7)));
#line 433 "hlds_llds.m"
        hlds__hlds_llds__succeeded = MR_TRUE;
#line 433 "hlds_llds.m"
      }
#line 435 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 434 "hlds_llds.m"
      *hlds__hlds_llds__PreBirths_4 = hlds__hlds_llds__PreBirthsPrime_6;
#line 435 "hlds_llds.m"
    else
#line 436 "hlds_llds.m"
      {
#line 436 "hlds_llds.m"
        {
#line 436 "hlds_llds.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_llds", (MR_String) "predicate \140hlds.hlds_llds.goal_info_get_pre_births\'/2", (MR_String) "no code_gen_info");
#line 436 "hlds_llds.m"
          return;
        }
#line 436 "hlds_llds.m"
      }
#line 431 "hlds_llds.m"
  }
#line 164 "hlds_llds.m"
}

#line 52 "hlds_llds.m"
MR_String MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_f_0(
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlots_4,
#line 52 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_5)
#line 52 "hlds_llds.m"
{
#line 317 "hlds_llds.m"
  {
#line 317 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 317 "hlds_llds.m"
    MR_String hlds__hlds_llds__Explanation_6;
#line 317 "hlds_llds.m"
    MR_Word hlds__hlds_llds__StackSlotsList_7;
#line 317 "hlds_llds.m"
    MR_String hlds__hlds_llds__Explanation1_8;

#line 318 "hlds_llds.m"
    {
#line 318 "hlds_llds.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0, hlds__hlds_llds__StackSlots_4, &hlds__hlds_llds__StackSlotsList_7);
    }
#line 319 "hlds_llds.m"
    {
#line 319 "hlds_llds.m"
      hlds__hlds_llds__explain_stack_slots_2_4_p_0(hlds__hlds_llds__StackSlotsList_7, hlds__hlds_llds__VarSet_5, (MR_String) "", &hlds__hlds_llds__Explanation1_8);
    }
#line 320 "hlds_llds.m"
    {
#line 320 "hlds_llds.m"
      return hlds__hlds_llds__Explanation_6 = mercury__string__f_43_43_2_f_0((MR_String) "\nStack slot assignments (if any):\n", hlds__hlds_llds__Explanation1_8);
    }
#line 317 "hlds_llds.m"
    return hlds__hlds_llds__Explanation_6;
#line 317 "hlds_llds.m"
  }
#line 52 "hlds_llds.m"
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
