/*
** Automatically generated from `hlds_llds.m'
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0;

#line 143 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3];

#line 146 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3];

#line 149 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0;

#line 152 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1];

#line 155 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1];

#line 158 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1];

#line 161 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1];

#line 164 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0;

#line 167 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2];

#line 170 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1;

#line 173 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2];

#line 176 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2;

#line 179 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2];

#line 182 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3;

#line 185 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1];

#line 188 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4;

#line 191 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1];

#line 194 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1];

#line 197 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1];

#line 200 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2];

#line 203 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_locn_0[4];

#line 206 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5];

#line 209 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5];

#line 212 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 215 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0;

#line 218 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_llds_code_gen_details_0_0[8];

#line 221 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_llds_code_gen_details_0_0[8];

#line 224 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0;

#line 227 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1];

#line 230 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1];

#line 233 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1];

#line 236 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1];

#line 239 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0;

#line 242 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1];

#line 245 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1;

#line 248 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1];

#line 251 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2;

#line 254 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1];

#line 257 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3;

#line 260 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1];

#line 263 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1];

#line 266 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1];

#line 269 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1];

#line 272 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_maybe_need_0[4];

#line 275 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4];

#line 278 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4];

#line 281 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3];

#line 284 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3];

#line 287 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0;

#line 290 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1];

#line 293 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1];

#line 296 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1];

#line 299 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1];

#line 302 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1];

#line 305 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 308 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0;

#line 311 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1];

#line 314 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0;

#line 317 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3];

#line 320 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3];

#line 323 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0;

#line 326 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1];

#line 329 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1];

#line 332 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1];

#line 335 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1];

#line 338 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0;

#line 341 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1;

#line 344 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2];

#line 347 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2];

#line 350 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2];

#line 353 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0;

#line 356 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1;

#line 359 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2;

#line 362 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3;

#line 365 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4];

#line 368 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4];

#line 371 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4];

#line 374 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2];

#line 377 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0;

#line 380 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1;

#line 383 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1];

#line 386 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1];

#line 389 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_resume_point_0[2];

#line 392 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2];

#line 395 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2];

#line 398 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2];

#line 401 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0;

#line 404 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2];

#line 407 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1;

#line 410 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1];

#line 413 "hlds.hlds_llds.c"
static const MR_DuFunctorDesc hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2;

#line 416 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1];

#line 419 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1];

#line 422 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1];

#line 425 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_stack_slot_0[3];

#line 428 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3];

#line 431 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3];

#line 434 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0;

#line 437 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1;

#line 440 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2];

#line 443 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2];

#line 446 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2];

#line 449 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0;

#line 452 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 455 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 457 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 460 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 463 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 465 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 467 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 470 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 473 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 475 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 478 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 481 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 483 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 485 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 488 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 491 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 493 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 496 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 499 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 501 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 503 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 506 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 509 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 511 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 514 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 517 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 519 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 521 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 524 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 527 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 529 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 532 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 535 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 537 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 539 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 542 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 545 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 547 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 550 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 553 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 555 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 557 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 560 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 563 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 565 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 568 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 571 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 573 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 575 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 578 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 581 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 583 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 586 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 589 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 591 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 593 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 596 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 599 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 601 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 604 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 607 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 609 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 611 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 614 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 617 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 619 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 622 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 625 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 627 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 629 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 632 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 635 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 637 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 640 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 643 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 645 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 647 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 650 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 653 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 655 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 658 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 661 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 663 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 665 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 668 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 671 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 673 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 676 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 679 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 681 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 683 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 686 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 689 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 691 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 694 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 697 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 699 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 701 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 704 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 707 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 709 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 712 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 715 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 717 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 719 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3);

#line 722 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 725 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 727 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2);

#line 730 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 733 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 735 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 737 "hlds.hlds_llds.c"
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



#line 852 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 860 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0
  }
};

#line 869 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_follow_vars_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_abs_locn_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 876 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_abs_follow_vars_0_0[3] = {
  (MR_String) "afv_map",
  (MR_String) "afv_next_non_res_reg_r",
  (MR_String) "afv_next_non_res_reg_f"
};

#line 883 "hlds.hlds_llds.c"
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

#line 898 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 903 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_abs_follow_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_follow_vars_0_0
  }
};

#line 912 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_follow_vars_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_follow_vars_0_0
};

#line 917 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_follow_vars_0[1] = {
  (MR_Integer) 0
};

#line 922 "hlds.hlds_llds.c"
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

#line 939 "hlds.hlds_llds.c"
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

#line 956 "hlds.hlds_llds.c"
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

#line 971 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 977 "hlds.hlds_llds.c"
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

#line 992 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 998 "hlds.hlds_llds.c"
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

#line 1013 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1019 "hlds.hlds_llds.c"
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

#line 1034 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_abs_locn_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1039 "hlds.hlds_llds.c"
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

#line 1054 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1059 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1
};

#line 1064 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2
};

#line 1069 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_abs_locn_0_3[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4
};

#line 1075 "hlds.hlds_llds.c"
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

#line 1099 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_abs_locn_0[5] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_4,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_abs_locn_0_0
};

#line 1108 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_abs_locn_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1117 "hlds.hlds_llds.c"
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

#line 1134 "hlds.hlds_llds.c"
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

#line 1151 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1159 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__maybe__ti_maybe_1hlds__hlds_llds__type_ctor_info_abs_follow_vars_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_follow_vars_0
  }
};

#line 1167 "hlds.hlds_llds.c"
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

#line 1179 "hlds.hlds_llds.c"
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

#line 1191 "hlds.hlds_llds.c"
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

#line 1206 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1211 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_llds_code_gen_details_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_llds_code_gen_details_0_0
  }
};

#line 1220 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_llds_code_gen_details_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_llds_code_gen_details_0_0
};

#line 1225 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_llds_code_gen_details_0[1] = {
  (MR_Integer) 0
};

#line 1230 "hlds.hlds_llds.c"
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

#line 1247 "hlds.hlds_llds.c"
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

#line 1262 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_across_call_0
};

#line 1267 "hlds.hlds_llds.c"
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

#line 1282 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_resume_0
};

#line 1287 "hlds.hlds_llds.c"
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

#line 1302 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_maybe_need_0_3[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_need_in_par_conj_0
};

#line 1307 "hlds.hlds_llds.c"
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

#line 1322 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1327 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1
};

#line 1332 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2
};

#line 1337 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_maybe_need_0_3[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3
};

#line 1342 "hlds.hlds_llds.c"
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

#line 1366 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_maybe_need_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_maybe_need_0_0
};

#line 1374 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_maybe_need_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1382 "hlds.hlds_llds.c"
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

#line 1399 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_across_call_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1406 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_across_call_0_0[3] = {
  (MR_String) "call_forward_vars",
  (MR_String) "call_resume_vars",
  (MR_String) "call_nondet_vars"
};

#line 1413 "hlds.hlds_llds.c"
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

#line 1428 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1433 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_across_call_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_across_call_0_0
  }
};

#line 1442 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_across_call_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_across_call_0_0
};

#line 1447 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_across_call_0[1] = {
  (MR_Integer) 0
};

#line 1452 "hlds.hlds_llds.c"
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

#line 1469 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_for_loop_control_0[1] = {
  (MR_Integer) 0
};

#line 1474 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1482 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_for_loop_control_0 = {
  (MR_String) "need_for_loop_control",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "loop_control_distinct_stackvars"
};

#line 1489 "hlds.hlds_llds.c"
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

#line 1506 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_par_conj_0[1] = {
  (MR_Integer) 0
};

#line 1511 "hlds.hlds_llds.c"
static const MR_NotagFunctorDesc hlds__hlds_llds__hlds__hlds_llds__notag_functor_desc_need_in_par_conj_0 = {
  (MR_String) "need_in_par_conj",
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_String) "par_conj_engine_vars"
};

#line 1518 "hlds.hlds_llds.c"
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

#line 1535 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_need_in_resume_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1542 "hlds.hlds_llds.c"
static const MR_ConstString hlds__hlds_llds__hlds__hlds_llds__field_names_need_in_resume_0_0[3] = {
  (MR_String) "resume_vars_on_stack",
  (MR_String) "resume_resume_vars",
  (MR_String) "resume_nondet_vars"
};

#line 1549 "hlds.hlds_llds.c"
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

#line 1564 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1569 "hlds.hlds_llds.c"
static const MR_DuPtagLayout hlds__hlds_llds__hlds__hlds_llds__du_ptag_ordered_need_in_resume_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_need_in_resume_0_0
  }
};

#line 1578 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_need_in_resume_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_need_in_resume_0_0
};

#line 1583 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_need_in_resume_0[1] = {
  (MR_Integer) 0
};

#line 1588 "hlds.hlds_llds.c"
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

#line 1605 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0 = {
  (MR_String) "reg_r",
  (MR_Integer) 0
};

#line 1611 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1 = {
  (MR_String) "reg_f",
  (MR_Integer) 1
};

#line 1617 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1
};

#line 1623 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_reg_type_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_reg_type_0_0
};

#line 1629 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_reg_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1635 "hlds.hlds_llds.c"
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

#line 1652 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0 = {
  (MR_String) "resume_locs_orig_only",
  (MR_Integer) 0
};

#line 1658 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1 = {
  (MR_String) "resume_locs_stack_only",
  (MR_Integer) 1
};

#line 1664 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2 = {
  (MR_String) "resume_locs_orig_and_stack",
  (MR_Integer) 2
};

#line 1670 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3 = {
  (MR_String) "resume_locs_stack_and_orig",
  (MR_Integer) 3
};

#line 1676 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3
};

#line 1684 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_resume_locs_0[4] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_3,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_resume_locs_0_1
};

#line 1692 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_locs_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1700 "hlds.hlds_llds.c"
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

#line 1717 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_resume_point_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_llds__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_resume_locs_0
};

#line 1723 "hlds.hlds_llds.c"
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

#line 1738 "hlds.hlds_llds.c"
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

#line 1753 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1
};

#line 1758 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_resume_point_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1763 "hlds.hlds_llds.c"
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

#line 1777 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_resume_point_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_resume_point_0_0
};

#line 1783 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_resume_point_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1789 "hlds.hlds_llds.c"
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

#line 1806 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1812 "hlds.hlds_llds.c"
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

#line 1827 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_width_0
};

#line 1833 "hlds.hlds_llds.c"
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

#line 1848 "hlds.hlds_llds.c"
static const MR_PseudoTypeInfo hlds__hlds_llds__hlds__hlds_llds__field_types_stack_slot_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1853 "hlds.hlds_llds.c"
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

#line 1868 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_0[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0
};

#line 1873 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_1[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1878 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_stag_ordered_stack_slot_0_2[1] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2
};

#line 1883 "hlds.hlds_llds.c"
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

#line 1902 "hlds.hlds_llds.c"
static const MR_DuFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__du_name_ordered_stack_slot_0[3] = {
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_2,
  &hlds__hlds_llds__hlds__hlds_llds__du_functor_desc_stack_slot_0_1
};

#line 1909 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1916 "hlds.hlds_llds.c"
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

#line 1933 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0 = {
  (MR_String) "single_width",
  (MR_Integer) 0
};

#line 1939 "hlds.hlds_llds.c"
static const MR_EnumFunctorDesc hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1 = {
  (MR_String) "double_width",
  (MR_Integer) 1
};

#line 1945 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_value_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1
};

#line 1951 "hlds.hlds_llds.c"
static const MR_EnumFunctorDescPtr hlds__hlds_llds__hlds__hlds_llds__enum_name_ordered_stack_slot_width_0[2] = {
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_1,
  &hlds__hlds_llds__hlds__hlds_llds__enum_functor_desc_stack_slot_width_0_0
};

#line 1957 "hlds.hlds_llds.c"
static const MR_Integer hlds__hlds_llds__hlds__hlds_llds__functor_number_map_stack_slot_width_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1963 "hlds.hlds_llds.c"
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

#line 1980 "hlds.hlds_llds.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_llds__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__hlds_llds__type_ctor_info_stack_slot_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_llds__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_stack_slot_0
  }
};

#line 1989 "hlds.hlds_llds.c"
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

#line 2006 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0_10001(
#line 2009 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2011 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2013 "hlds.hlds_llds.c"
{
#line 2015 "hlds.hlds_llds.c"
  {
#line 2017 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2020 "hlds.hlds_llds.c"
    {
#line 2022 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2025 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2027 "hlds.hlds_llds.c"
  }
#line 2029 "hlds.hlds_llds.c"
}

#line 2032 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0_10001(
#line 2035 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2037 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2039 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2041 "hlds.hlds_llds.c"
{
#line 2043 "hlds.hlds_llds.c"
  {
#line 2045 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2048 "hlds.hlds_llds.c"
    {
#line 2050 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2053 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2055 "hlds.hlds_llds.c"
  }
#line 2057 "hlds.hlds_llds.c"
}

#line 2060 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0_10001(
#line 2063 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2065 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2067 "hlds.hlds_llds.c"
{
#line 2069 "hlds.hlds_llds.c"
  {
#line 2071 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2074 "hlds.hlds_llds.c"
    {
#line 2076 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2079 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2081 "hlds.hlds_llds.c"
  }
#line 2083 "hlds.hlds_llds.c"
}

#line 2086 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0_10001(
#line 2089 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2091 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2093 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2095 "hlds.hlds_llds.c"
{
#line 2097 "hlds.hlds_llds.c"
  {
#line 2099 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2102 "hlds.hlds_llds.c"
    {
#line 2104 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2107 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2109 "hlds.hlds_llds.c"
  }
#line 2111 "hlds.hlds_llds.c"
}

#line 2114 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0_10001(
#line 2117 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2119 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2121 "hlds.hlds_llds.c"
{
#line 2123 "hlds.hlds_llds.c"
  {
#line 2125 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2128 "hlds.hlds_llds.c"
    {
#line 2130 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_locn_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2133 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2135 "hlds.hlds_llds.c"
  }
#line 2137 "hlds.hlds_llds.c"
}

#line 2140 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0_10001(
#line 2143 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2145 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2147 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2149 "hlds.hlds_llds.c"
{
#line 2151 "hlds.hlds_llds.c"
  {
#line 2153 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2156 "hlds.hlds_llds.c"
    {
#line 2158 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_locn_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2161 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2163 "hlds.hlds_llds.c"
  }
#line 2165 "hlds.hlds_llds.c"
}

#line 2168 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0_10001(
#line 2171 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2173 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2175 "hlds.hlds_llds.c"
{
#line 2177 "hlds.hlds_llds.c"
  {
#line 2179 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2182 "hlds.hlds_llds.c"
    {
#line 2184 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____abs_store_map_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2187 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2189 "hlds.hlds_llds.c"
  }
#line 2191 "hlds.hlds_llds.c"
}

#line 2194 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0_10001(
#line 2197 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2199 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2201 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2203 "hlds.hlds_llds.c"
{
#line 2205 "hlds.hlds_llds.c"
  {
#line 2207 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2210 "hlds.hlds_llds.c"
    {
#line 2212 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____abs_store_map_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2215 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2217 "hlds.hlds_llds.c"
  }
#line 2219 "hlds.hlds_llds.c"
}

#line 2222 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____llds_code_gen_details_0_0_10001(
#line 2225 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2227 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2229 "hlds.hlds_llds.c"
{
#line 2231 "hlds.hlds_llds.c"
  {
#line 2233 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2236 "hlds.hlds_llds.c"
    {
#line 2238 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____llds_code_gen_details_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2241 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2243 "hlds.hlds_llds.c"
  }
#line 2245 "hlds.hlds_llds.c"
}

#line 2248 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____llds_code_gen_details_0_0_10001(
#line 2251 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2253 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2255 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2257 "hlds.hlds_llds.c"
{
#line 2259 "hlds.hlds_llds.c"
  {
#line 2261 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2264 "hlds.hlds_llds.c"
    {
#line 2266 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____llds_code_gen_details_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2269 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2271 "hlds.hlds_llds.c"
  }
#line 2273 "hlds.hlds_llds.c"
}

#line 2276 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____maybe_need_0_0_10001(
#line 2279 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2281 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2283 "hlds.hlds_llds.c"
{
#line 2285 "hlds.hlds_llds.c"
  {
#line 2287 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2290 "hlds.hlds_llds.c"
    {
#line 2292 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____maybe_need_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2295 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2297 "hlds.hlds_llds.c"
  }
#line 2299 "hlds.hlds_llds.c"
}

#line 2302 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____maybe_need_0_0_10001(
#line 2305 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2307 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2309 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2311 "hlds.hlds_llds.c"
{
#line 2313 "hlds.hlds_llds.c"
  {
#line 2315 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2318 "hlds.hlds_llds.c"
    {
#line 2320 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____maybe_need_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2323 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2325 "hlds.hlds_llds.c"
  }
#line 2327 "hlds.hlds_llds.c"
}

#line 2330 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0_10001(
#line 2333 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2335 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2337 "hlds.hlds_llds.c"
{
#line 2339 "hlds.hlds_llds.c"
  {
#line 2341 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2344 "hlds.hlds_llds.c"
    {
#line 2346 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2349 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2351 "hlds.hlds_llds.c"
  }
#line 2353 "hlds.hlds_llds.c"
}

#line 2356 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0_10001(
#line 2359 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2361 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2363 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2365 "hlds.hlds_llds.c"
{
#line 2367 "hlds.hlds_llds.c"
  {
#line 2369 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2372 "hlds.hlds_llds.c"
    {
#line 2374 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_across_call_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2377 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2379 "hlds.hlds_llds.c"
  }
#line 2381 "hlds.hlds_llds.c"
}

#line 2384 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0_10001(
#line 2387 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2389 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2391 "hlds.hlds_llds.c"
{
#line 2393 "hlds.hlds_llds.c"
  {
#line 2395 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2398 "hlds.hlds_llds.c"
    {
#line 2400 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_for_loop_control_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2403 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2405 "hlds.hlds_llds.c"
  }
#line 2407 "hlds.hlds_llds.c"
}

#line 2410 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0_10001(
#line 2413 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2415 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2417 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2419 "hlds.hlds_llds.c"
{
#line 2421 "hlds.hlds_llds.c"
  {
#line 2423 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2426 "hlds.hlds_llds.c"
    {
#line 2428 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_for_loop_control_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2431 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2433 "hlds.hlds_llds.c"
  }
#line 2435 "hlds.hlds_llds.c"
}

#line 2438 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0_10001(
#line 2441 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2443 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2445 "hlds.hlds_llds.c"
{
#line 2447 "hlds.hlds_llds.c"
  {
#line 2449 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2452 "hlds.hlds_llds.c"
    {
#line 2454 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2457 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2459 "hlds.hlds_llds.c"
  }
#line 2461 "hlds.hlds_llds.c"
}

#line 2464 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0_10001(
#line 2467 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2469 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2471 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2473 "hlds.hlds_llds.c"
{
#line 2475 "hlds.hlds_llds.c"
  {
#line 2477 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2480 "hlds.hlds_llds.c"
    {
#line 2482 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_par_conj_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2485 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2487 "hlds.hlds_llds.c"
  }
#line 2489 "hlds.hlds_llds.c"
}

#line 2492 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0_10001(
#line 2495 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2497 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2499 "hlds.hlds_llds.c"
{
#line 2501 "hlds.hlds_llds.c"
  {
#line 2503 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2506 "hlds.hlds_llds.c"
    {
#line 2508 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2511 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2513 "hlds.hlds_llds.c"
  }
#line 2515 "hlds.hlds_llds.c"
}

#line 2518 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0_10001(
#line 2521 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2523 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2525 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2527 "hlds.hlds_llds.c"
{
#line 2529 "hlds.hlds_llds.c"
  {
#line 2531 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2534 "hlds.hlds_llds.c"
    {
#line 2536 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____need_in_resume_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2539 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2541 "hlds.hlds_llds.c"
  }
#line 2543 "hlds.hlds_llds.c"
}

#line 2546 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0_10001(
#line 2549 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2551 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2553 "hlds.hlds_llds.c"
{
#line 2555 "hlds.hlds_llds.c"
  {
#line 2557 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2560 "hlds.hlds_llds.c"
    {
#line 2562 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____reg_type_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2565 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2567 "hlds.hlds_llds.c"
  }
#line 2569 "hlds.hlds_llds.c"
}

#line 2572 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0_10001(
#line 2575 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2577 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2579 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2581 "hlds.hlds_llds.c"
{
#line 2583 "hlds.hlds_llds.c"
  {
#line 2585 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2588 "hlds.hlds_llds.c"
    {
#line 2590 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____reg_type_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2593 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2595 "hlds.hlds_llds.c"
  }
#line 2597 "hlds.hlds_llds.c"
}

#line 2600 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0_10001(
#line 2603 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2605 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2607 "hlds.hlds_llds.c"
{
#line 2609 "hlds.hlds_llds.c"
  {
#line 2611 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2614 "hlds.hlds_llds.c"
    {
#line 2616 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_locs_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2619 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2621 "hlds.hlds_llds.c"
  }
#line 2623 "hlds.hlds_llds.c"
}

#line 2626 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0_10001(
#line 2629 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2631 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2633 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2635 "hlds.hlds_llds.c"
{
#line 2637 "hlds.hlds_llds.c"
  {
#line 2639 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2642 "hlds.hlds_llds.c"
    {
#line 2644 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_locs_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2647 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2649 "hlds.hlds_llds.c"
  }
#line 2651 "hlds.hlds_llds.c"
}

#line 2654 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0_10001(
#line 2657 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2659 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2661 "hlds.hlds_llds.c"
{
#line 2663 "hlds.hlds_llds.c"
  {
#line 2665 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2668 "hlds.hlds_llds.c"
    {
#line 2670 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____resume_point_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2673 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2675 "hlds.hlds_llds.c"
  }
#line 2677 "hlds.hlds_llds.c"
}

#line 2680 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0_10001(
#line 2683 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2685 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2687 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2689 "hlds.hlds_llds.c"
{
#line 2691 "hlds.hlds_llds.c"
  {
#line 2693 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2696 "hlds.hlds_llds.c"
    {
#line 2698 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____resume_point_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2701 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2703 "hlds.hlds_llds.c"
  }
#line 2705 "hlds.hlds_llds.c"
}

#line 2708 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0_10001(
#line 2711 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2713 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2715 "hlds.hlds_llds.c"
{
#line 2717 "hlds.hlds_llds.c"
  {
#line 2719 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2722 "hlds.hlds_llds.c"
    {
#line 2724 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2727 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2729 "hlds.hlds_llds.c"
  }
#line 2731 "hlds.hlds_llds.c"
}

#line 2734 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0_10001(
#line 2737 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2739 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2741 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2743 "hlds.hlds_llds.c"
{
#line 2745 "hlds.hlds_llds.c"
  {
#line 2747 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2750 "hlds.hlds_llds.c"
    {
#line 2752 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2755 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2757 "hlds.hlds_llds.c"
  }
#line 2759 "hlds.hlds_llds.c"
}

#line 2762 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0_10001(
#line 2765 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2767 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2769 "hlds.hlds_llds.c"
{
#line 2771 "hlds.hlds_llds.c"
  {
#line 2773 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2776 "hlds.hlds_llds.c"
    {
#line 2778 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slot_width_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2781 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2783 "hlds.hlds_llds.c"
  }
#line 2785 "hlds.hlds_llds.c"
}

#line 2788 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0_10001(
#line 2791 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2793 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2795 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2797 "hlds.hlds_llds.c"
{
#line 2799 "hlds.hlds_llds.c"
  {
#line 2801 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2804 "hlds.hlds_llds.c"
    {
#line 2806 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slot_width_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2809 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2811 "hlds.hlds_llds.c"
  }
#line 2813 "hlds.hlds_llds.c"
}

#line 2816 "hlds.hlds_llds.c"
static MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0_10001(
#line 2819 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_1,
#line 2821 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2)
#line 2823 "hlds.hlds_llds.c"
{
#line 2825 "hlds.hlds_llds.c"
  {
#line 2827 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;

#line 2830 "hlds.hlds_llds.c"
    {
#line 2832 "hlds.hlds_llds.c"
      hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____stack_slots_0_0(((MR_Word) hlds__hlds_llds__wrapper_arg_1), ((MR_Word) hlds__hlds_llds__wrapper_arg_2));
    }
#line 2835 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 2837 "hlds.hlds_llds.c"
  }
#line 2839 "hlds.hlds_llds.c"
}

#line 2842 "hlds.hlds_llds.c"
static void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0_10001(
#line 2845 "hlds.hlds_llds.c"
  MR_Box * hlds__hlds_llds__wrapper_arg_1,
#line 2847 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_2,
#line 2849 "hlds.hlds_llds.c"
  MR_Box hlds__hlds_llds__wrapper_arg_3)
#line 2851 "hlds.hlds_llds.c"
{
#line 2853 "hlds.hlds_llds.c"
  {
#line 2855 "hlds.hlds_llds.c"
    MR_Word hlds__hlds_llds__conv0_HeadVar__1_1;

#line 2858 "hlds.hlds_llds.c"
    {
#line 2860 "hlds.hlds_llds.c"
      hlds__hlds_llds____Compare____stack_slots_0_0(&hlds__hlds_llds__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_llds__wrapper_arg_2), ((MR_Word) hlds__hlds_llds__wrapper_arg_3));
    }
#line 2863 "hlds.hlds_llds.c"
    *hlds__hlds_llds__wrapper_arg_1 = ((MR_Box) (hlds__hlds_llds__conv0_HeadVar__1_1));
#line 2865 "hlds.hlds_llds.c"
  }
#line 2867 "hlds.hlds_llds.c"
}

#line 299 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_107_101_121_95_115_116_97_99_107_95_115_108_111_116_95_116_111_95_97_98_115_95_108_111_99_110_95_95_91_49_44_32_50_93_95_48_2_f_0(
#line 299 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 299 "hlds_llds.m"
{
#line 809 "hlds_llds.m"
  {
#line 809 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 809 "hlds_llds.m"
    MR_Word hlds__hlds_llds__HeadVar__3_3;

#line 809 "hlds_llds.m"
#line 809 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_5)) {
#line 809 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 809 "hlds_llds.m"
      case (MR_Integer) 0:
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
        break;
#line 809 "hlds_llds.m"
      case (MR_Integer) 1:
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
        break;
#line 809 "hlds_llds.m"
      case (MR_Integer) 2:
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
        break;
#line 809 "hlds_llds.m"
    }
#line 809 "hlds_llds.m"
    return hlds__hlds_llds__HeadVar__3_3;
#line 809 "hlds_llds.m"
  }
#line 299 "hlds_llds.m"
}

#line 51 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slots_0_0(
#line 51 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 51 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 51 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 51 "hlds_llds.m"
{
#line 51 "hlds_llds.m"
  {
#line 51 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 51 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 51 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 51 "hlds_llds.m"
    {
#line 51 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 51 "hlds_llds.m"
      return;
    }
#line 51 "hlds_llds.m"
  }
#line 51 "hlds_llds.m"
}

#line 51 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slots_0_0(
#line 51 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 51 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 51 "hlds_llds.m"
{
#line 51 "hlds_llds.m"
  {
#line 51 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 51 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 51 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 51 "hlds_llds.m"
    {
#line 51 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[1], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 51 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 51 "hlds_llds.m"
  }
#line 51 "hlds_llds.m"
}

#line 45 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_width_0_0(
#line 45 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 45 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 45 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 45 "hlds_llds.m"
{
#line 45 "hlds_llds.m"
  {
#line 45 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 45 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 45 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 45 "hlds_llds.m"
    {
#line 45 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 45 "hlds_llds.m"
      return;
    }
#line 45 "hlds_llds.m"
  }
#line 45 "hlds_llds.m"
}

#line 45 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_width_0_0(
#line 45 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 45 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 45 "hlds_llds.m"
{
#line 3070 "hlds.hlds_llds.c"
  {
#line 3072 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3075 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3077 "hlds.hlds_llds.c"
  }
#line 45 "hlds_llds.m"
}

#line 40 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____stack_slot_0_0(
#line 40 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 40 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 40 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 40 "hlds_llds.m"
{
#line 40 "hlds_llds.m"
  {
#line 40 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 40 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_36 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 40 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_37 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 40 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_36 == hlds__hlds_llds__CastY_37);
#line 40 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3106 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "hlds_llds.m"
    else
#line 40 "hlds_llds.m"
#line 40 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 40 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 40 "hlds_llds.m"
        case (MR_Integer) 0:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "hlds_llds.m"
#line 40 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 40 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "hlds_llds.m"
              case (MR_Integer) 0:
#line 40 "hlds_llds.m"
                {
#line 40 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_8_8;

#line 40 "hlds_llds.m"
                  {
#line 40 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_8_8, hlds__hlds_llds__V_44_44, hlds__hlds_llds__V_6_6);
                  }
#line 3145 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 40 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 40 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 40 "hlds_llds.m"
                  else
#line 40 "hlds_llds.m"
                    {
#line 40 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_48_48 = (MR_Integer) hlds__hlds_llds__V_43_43;
#line 40 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_49_49 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 40 "hlds_llds.m"
                      {
#line 40 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_48_48, hlds__hlds_llds__V_49_49);
#line 40 "hlds_llds.m"
                        return;
                      }
#line 40 "hlds_llds.m"
                    }
#line 40 "hlds_llds.m"
                }
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 1:
#line 3177 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 2:
#line 3183 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
            }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
        case (MR_Integer) 1:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "hlds_llds.m"
#line 40 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 40 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "hlds_llds.m"
              case (MR_Integer) 0:
#line 3209 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 1:
#line 40 "hlds_llds.m"
                {
#line 40 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_24_24;

#line 40 "hlds_llds.m"
                  {
#line 40 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_24_24, hlds__hlds_llds__V_47_47, hlds__hlds_llds__V_22_22);
                  }
#line 3229 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_24_24 == (MR_Integer) 0);
#line 40 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 40 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_24_24;
#line 40 "hlds_llds.m"
                  else
#line 40 "hlds_llds.m"
                    {
#line 40 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_50_50 = (MR_Integer) hlds__hlds_llds__V_46_46;
#line 40 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_51_51 = (MR_Integer) hlds__hlds_llds__V_23_23;

#line 40 "hlds_llds.m"
                      {
#line 40 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_50_50, hlds__hlds_llds__V_51_51);
#line 40 "hlds_llds.m"
                        return;
                      }
#line 40 "hlds_llds.m"
                    }
#line 40 "hlds_llds.m"
                }
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 2:
#line 3261 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
            }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
        case (MR_Integer) 2:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "hlds_llds.m"
#line 40 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 40 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 40 "hlds_llds.m"
              case (MR_Integer) 0:
#line 3285 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 1:
#line 3291 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
              case (MR_Integer) 2:
#line 40 "hlds_llds.m"
                {
#line 40 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));

#line 40 "hlds_llds.m"
                  {
#line 40 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_45_45, hlds__hlds_llds__V_35_35);
#line 40 "hlds_llds.m"
                    return;
                  }
#line 40 "hlds_llds.m"
                }
#line 40 "hlds_llds.m"
                break;
#line 40 "hlds_llds.m"
            }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
      }
#line 40 "hlds_llds.m"
  }
#line 40 "hlds_llds.m"
}

#line 40 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____stack_slot_0_0(
#line 40 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 40 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 40 "hlds_llds.m"
{
#line 40 "hlds_llds.m"
  {
#line 40 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 40 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 40 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 40 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 40 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 40 "hlds_llds.m"
    else
#line 40 "hlds_llds.m"
#line 40 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 40 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 40 "hlds_llds.m"
        case (MR_Integer) 0:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_5_5;
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6;

#line 40 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 40 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
              {
#line 40 "hlds_llds.m"
                hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
                hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3380 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_5_5);
#line 40 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 3384 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 40 "hlds_llds.m"
              }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
        case (MR_Integer) 1:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_9_9;
#line 40 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10;

#line 40 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
              {
#line 40 "hlds_llds.m"
                hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
                hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3415 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_7_7 == hlds__hlds_llds__V_9_9);
#line 40 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 3419 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == hlds__hlds_llds__V_10_10);
#line 40 "hlds_llds.m"
              }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
        case (MR_Integer) 2:
#line 40 "hlds_llds.m"
          {
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_12_12;

#line 40 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 40 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 40 "hlds_llds.m"
              {
#line 40 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 3444 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == hlds__hlds_llds__V_12_12);
#line 40 "hlds_llds.m"
              }
#line 40 "hlds_llds.m"
          }
#line 40 "hlds_llds.m"
          break;
#line 40 "hlds_llds.m"
      }
#line 40 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 40 "hlds_llds.m"
  }
#line 40 "hlds_llds.m"
}

#line 88 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_point_0_0(
#line 88 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 88 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 88 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 88 "hlds_llds.m"
{
#line 88 "hlds_llds.m"
  {
#line 88 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 88 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_13 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 88 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_14 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 88 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_13 == hlds__hlds_llds__CastY_14);
#line 88 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3485 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "hlds_llds.m"
    else
#line 88 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "hlds_llds.m"
      if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "hlds_llds.m"
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "hlds_llds.m"
      else
#line 3497 "hlds.hlds_llds.c"
        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 88 "hlds_llds.m"
    else
#line 88 "hlds_llds.m"
      {
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 88 "hlds_llds.m"
        if ((hlds__hlds_llds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3510 "hlds.hlds_llds.c"
          *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 88 "hlds_llds.m"
        else
#line 88 "hlds_llds.m"
          {
#line 88 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_8_8;

#line 88 "hlds_llds.m"
            {
#line 88 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_8_8, ((MR_Box) (hlds__hlds_llds__V_18_18)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
            }
#line 3528 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_8_8 == (MR_Integer) 0);
#line 88 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 88 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 88 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_8_8;
#line 88 "hlds_llds.m"
            else
#line 88 "hlds_llds.m"
              {
#line 88 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_19_19 = (MR_Integer) hlds__hlds_llds__V_17_17;
#line 88 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_20_20 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 88 "hlds_llds.m"
                {
#line 88 "hlds_llds.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_19_19, hlds__hlds_llds__V_20_20);
#line 88 "hlds_llds.m"
                  return;
                }
#line 88 "hlds_llds.m"
              }
#line 88 "hlds_llds.m"
          }
#line 88 "hlds_llds.m"
      }
#line 88 "hlds_llds.m"
  }
#line 88 "hlds_llds.m"
}

#line 88 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_point_0_0(
#line 88 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 88 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 88 "hlds_llds.m"
{
#line 88 "hlds_llds.m"
  {
#line 88 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 88 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 88 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 88 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 88 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 88 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 88 "hlds_llds.m"
    else
#line 88 "hlds_llds.m"
    if ((hlds__hlds_llds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "hlds_llds.m"
      {
#line 88 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastX_7 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 88 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__CastY_8 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 88 "hlds_llds.m"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_8 == hlds__hlds_llds__CastX_7);
#line 88 "hlds_llds.m"
      }
#line 88 "hlds_llds.m"
    else
#line 88 "hlds_llds.m"
      {
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5;
#line 88 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6;

#line 88 "hlds_llds.m"
        hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 88 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 88 "hlds_llds.m"
          {
#line 88 "hlds_llds.m"
            hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "hlds_llds.m"
            hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 3627 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3629 "hlds.hlds_llds.c"
            {
#line 3631 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
            }
#line 88 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 3636 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_6_6);
#line 88 "hlds_llds.m"
          }
#line 88 "hlds_llds.m"
      }
#line 88 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 88 "hlds_llds.m"
  }
#line 88 "hlds_llds.m"
}

#line 92 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____resume_locs_0_0(
#line 92 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 92 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 92 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 92 "hlds_llds.m"
{
#line 92 "hlds_llds.m"
  {
#line 92 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 92 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 92 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 92 "hlds_llds.m"
    {
#line 92 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 92 "hlds_llds.m"
      return;
    }
#line 92 "hlds_llds.m"
  }
#line 92 "hlds_llds.m"
}

#line 92 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____resume_locs_0_0(
#line 92 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 92 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 92 "hlds_llds.m"
{
#line 3690 "hlds.hlds_llds.c"
  {
#line 3692 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3695 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3697 "hlds.hlds_llds.c"
  }
#line 92 "hlds_llds.m"
}

#line 36 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____reg_type_0_0(
#line 36 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 36 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 36 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 36 "hlds_llds.m"
{
#line 36 "hlds_llds.m"
  {
#line 36 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 36 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar1_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 36 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__Cast_HeadVar2_5 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 36 "hlds_llds.m"
    {
#line 36 "hlds_llds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__Cast_HeadVar1_4, hlds__hlds_llds__Cast_HeadVar2_5);
#line 36 "hlds_llds.m"
      return;
    }
#line 36 "hlds_llds.m"
  }
#line 36 "hlds_llds.m"
}

#line 36 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____reg_type_0_0(
#line 36 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_1,
#line 36 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 36 "hlds_llds.m"
{
#line 3743 "hlds.hlds_llds.c"
  {
#line 3745 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded = (hlds__hlds_llds__HeadVar__2_1 == hlds__hlds_llds__HeadVar__2_2);

#line 3748 "hlds.hlds_llds.c"
    return hlds__hlds_llds__succeeded;
#line 3750 "hlds.hlds_llds.c"
  }
#line 36 "hlds_llds.m"
}

#line 129 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_resume_0_0(
#line 129 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 129 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 129 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 129 "hlds_llds.m"
{
#line 129 "hlds_llds.m"
  {
#line 129 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 129 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 129 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 129 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 129 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3779 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "hlds_llds.m"
    else
#line 129 "hlds_llds.m"
      {
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;
#line 129 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_17_17 = (MR_Integer) hlds__hlds_llds__V_4_4;
#line 129 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_18_18 = (MR_Integer) hlds__hlds_llds__V_7_7;

#line 129 "hlds_llds.m"
        {
#line 129 "hlds_llds.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_10_10, hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_18_18);
        }
#line 3809 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 129 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 129 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 129 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 129 "hlds_llds.m"
        else
#line 129 "hlds_llds.m"
          {
#line 129 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 129 "hlds_llds.m"
            {
#line 129 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 3829 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 129 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 129 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 129 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 129 "hlds_llds.m"
            else
#line 129 "hlds_llds.m"
              {
#line 129 "hlds_llds.m"
                {
#line 129 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
#line 129 "hlds_llds.m"
                  return;
                }
#line 129 "hlds_llds.m"
              }
#line 129 "hlds_llds.m"
          }
#line 129 "hlds_llds.m"
      }
#line 129 "hlds_llds.m"
  }
#line 129 "hlds_llds.m"
}

#line 129 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_resume_0_0(
#line 129 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 129 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 129 "hlds_llds.m"
{
#line 129 "hlds_llds.m"
  {
#line 129 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 129 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 129 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 129 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 129 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 129 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 129 "hlds_llds.m"
    else
#line 129 "hlds_llds.m"
      {
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_11_11;
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 3904 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_3_3 == hlds__hlds_llds__V_6_6);
#line 129 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 129 "hlds_llds.m"
          {
#line 3910 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_11_11 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3912 "hlds.hlds_llds.c"
            {
#line 3914 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_11_11, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 129 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 129 "hlds_llds.m"
              {
#line 3921 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 3923 "hlds.hlds_llds.c"
                {
#line 3925 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 129 "hlds_llds.m"
              }
#line 129 "hlds_llds.m"
          }
#line 129 "hlds_llds.m"
      }
#line 129 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 129 "hlds_llds.m"
  }
#line 129 "hlds_llds.m"
}

#line 140 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_in_par_conj_0_0(
#line 140 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 140 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 140 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 140 "hlds_llds.m"
{
#line 140 "hlds_llds.m"
  {
#line 140 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 140 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 140 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 140 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 140 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 3965 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 140 "hlds_llds.m"
    else
#line 140 "hlds_llds.m"
      {
#line 140 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 140 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 140 "hlds_llds.m"
        {
#line 140 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
#line 140 "hlds_llds.m"
          return;
        }
#line 140 "hlds_llds.m"
      }
#line 140 "hlds_llds.m"
  }
#line 140 "hlds_llds.m"
}

#line 140 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_in_par_conj_0_0(
#line 140 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 140 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 140 "hlds_llds.m"
{
#line 140 "hlds_llds.m"
  {
#line 140 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 140 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 140 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 140 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 140 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 140 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 140 "hlds_llds.m"
    else
#line 140 "hlds_llds.m"
      {
#line 140 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 140 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4023 "hlds.hlds_llds.c"
        {
#line 4025 "hlds.hlds_llds.c"
          return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 140 "hlds_llds.m"
      }
#line 140 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 140 "hlds_llds.m"
  }
#line 140 "hlds_llds.m"
}

#line 149 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_for_loop_control_0_0(
#line 149 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 149 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 149 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 149 "hlds_llds.m"
{
#line 149 "hlds_llds.m"
  {
#line 149 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 149 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 149 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_7 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 149 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_6 == hlds__hlds_llds__CastY_7);
#line 149 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4061 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 149 "hlds_llds.m"
    else
#line 149 "hlds_llds.m"
      {
#line 149 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;
#line 149 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = (MR_Word) hlds__hlds_llds__HeadVar__3_3;

#line 149 "hlds_llds.m"
        {
#line 149 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_5_5)));
#line 149 "hlds_llds.m"
          return;
        }
#line 149 "hlds_llds.m"
      }
#line 149 "hlds_llds.m"
  }
#line 149 "hlds_llds.m"
}

#line 149 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_for_loop_control_0_0(
#line 149 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 149 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 149 "hlds_llds.m"
{
#line 149 "hlds_llds.m"
  {
#line 149 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 149 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_5 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 149 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_6 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 149 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_5 == hlds__hlds_llds__CastY_6);
#line 149 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 149 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 149 "hlds_llds.m"
    else
#line 149 "hlds_llds.m"
      {
#line 149 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = (MR_Word) hlds__hlds_llds__HeadVar__1_1;
#line 149 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = (MR_Word) hlds__hlds_llds__HeadVar__2_2;

#line 4119 "hlds.hlds_llds.c"
        {
#line 4121 "hlds.hlds_llds.c"
          return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[3], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_4_4)));
        }
#line 149 "hlds_llds.m"
      }
#line 149 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 149 "hlds_llds.m"
  }
#line 149 "hlds_llds.m"
}

#line 114 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____need_across_call_0_0(
#line 114 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 114 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 114 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 114 "hlds_llds.m"
{
#line 114 "hlds_llds.m"
  {
#line 114 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 114 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 114 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 114 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 114 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 4157 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "hlds_llds.m"
    else
#line 114 "hlds_llds.m"
      {
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 114 "hlds_llds.m"
        {
#line 114 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 4183 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 114 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 114 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 114 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 114 "hlds_llds.m"
        else
#line 114 "hlds_llds.m"
          {
#line 114 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 114 "hlds_llds.m"
            {
#line 114 "hlds_llds.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], &hlds__hlds_llds__V_11_11, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
            }
#line 4203 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 114 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 114 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 114 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 114 "hlds_llds.m"
            else
#line 114 "hlds_llds.m"
              {
#line 114 "hlds_llds.m"
                {
#line 114 "hlds_llds.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_9_9)));
#line 114 "hlds_llds.m"
                  return;
                }
#line 114 "hlds_llds.m"
              }
#line 114 "hlds_llds.m"
          }
#line 114 "hlds_llds.m"
      }
#line 114 "hlds_llds.m"
  }
#line 114 "hlds_llds.m"
}

#line 114 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____need_across_call_0_0(
#line 114 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 114 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 114 "hlds_llds.m"
{
#line 114 "hlds_llds.m"
  {
#line 114 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 114 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 114 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 114 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 114 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 114 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 114 "hlds_llds.m"
    else
#line 114 "hlds_llds.m"
      {
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_12_12;
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__TypeInfo_13_13;
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 4278 "hlds.hlds_llds.c"
        {
#line 4280 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 114 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 114 "hlds_llds.m"
          {
#line 4287 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_12_12 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4289 "hlds.hlds_llds.c"
            {
#line 4291 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_12_12, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
            }
#line 114 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 114 "hlds_llds.m"
              {
#line 4298 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_13_13 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 4300 "hlds.hlds_llds.c"
                {
#line 4302 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_13_13, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_8_8)));
                }
#line 114 "hlds_llds.m"
              }
#line 114 "hlds_llds.m"
          }
#line 114 "hlds_llds.m"
      }
#line 114 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 114 "hlds_llds.m"
  }
#line 114 "hlds_llds.m"
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
#line 4342 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
    else
#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 356 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
        case (MR_Integer) 0:
#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 356 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
            case (MR_Integer) 0:
#line 356 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
              break;
#line 356 "hlds_llds.m"
            case (MR_Integer) 1:
#line 4366 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
              break;
#line 356 "hlds_llds.m"
            case (MR_Integer) 2:
#line 4372 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
              break;
#line 356 "hlds_llds.m"
            case (MR_Integer) 3:
#line 4378 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
              break;
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 1:
#line 356 "hlds_llds.m"
          {
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_33_33 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 1);

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 356 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4400 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 1:
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
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 2:
#line 4424 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 3:
#line 4430 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 2:
#line 356 "hlds_llds.m"
          {
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_35_35 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__HeadVar__2_2), (MR_Integer) 2);

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 356 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4454 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 1:
#line 4460 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 2:
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
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 3:
#line 4484 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 3:
#line 356 "hlds_llds.m"
          {
#line 356 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 356 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
              case (MR_Integer) 0:
#line 4508 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 1:
#line 4514 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 2:
#line 4520 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                break;
#line 356 "hlds_llds.m"
              case (MR_Integer) 3:
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
                break;
#line 356 "hlds_llds.m"
            }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
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
#line 356 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 356 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
        case (MR_Integer) 0:
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
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 1:
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
#line 4618 "hlds.hlds_llds.c"
                {
#line 4620 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_6_6);
                }
#line 356 "hlds_llds.m"
              }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 2:
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
#line 4646 "hlds.hlds_llds.c"
                {
#line 4648 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_7_7, hlds__hlds_llds__V_8_8);
                }
#line 356 "hlds_llds.m"
              }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
#line 356 "hlds_llds.m"
        case (MR_Integer) 3:
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
#line 4674 "hlds.hlds_llds.c"
                {
#line 4676 "hlds.hlds_llds.c"
                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_9_9, hlds__hlds_llds__V_10_10);
                }
#line 356 "hlds_llds.m"
              }
#line 356 "hlds_llds.m"
          }
#line 356 "hlds_llds.m"
          break;
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
#line 4718 "hlds.hlds_llds.c"
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
#line 4764 "hlds.hlds_llds.c"
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
#line 4784 "hlds.hlds_llds.c"
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
#line 4804 "hlds.hlds_llds.c"
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
#line 4824 "hlds.hlds_llds.c"
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
#line 4844 "hlds.hlds_llds.c"
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
#line 4864 "hlds.hlds_llds.c"
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
#line 4884 "hlds.hlds_llds.c"
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
#line 4905 "hlds.hlds_llds.c"
                                      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
                                    else
#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
                                      switch (MR_tag((MR_Word) hlds__hlds_llds__V_11_11)) {
#line 356 "hlds_llds.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 0:
#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
                                          switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 356 "hlds_llds.m"
                                            default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                            case (MR_Integer) 0:
#line 356 "hlds_llds.m"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 356 "hlds_llds.m"
                                              break;
#line 356 "hlds_llds.m"
                                            case (MR_Integer) 1:
#line 4929 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                              break;
#line 356 "hlds_llds.m"
                                            case (MR_Integer) 2:
#line 4935 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                              break;
#line 356 "hlds_llds.m"
                                            case (MR_Integer) 3:
#line 4941 "hlds.hlds_llds.c"
                                              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                              break;
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 1:
#line 356 "hlds_llds.m"
                                          {
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_66_66 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 1);

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 356 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 4963 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 1:
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
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 2:
#line 4987 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 3:
#line 4993 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 2:
#line 356 "hlds_llds.m"
                                          {
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_68_68 = (MR_Word) MR_body(((MR_Word) hlds__hlds_llds__V_11_11), (MR_Integer) 2);

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 356 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 5017 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 1:
#line 5023 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 2:
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
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 3:
#line 5047 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 3:
#line 356 "hlds_llds.m"
                                          {
#line 356 "hlds_llds.m"
                                            MR_Word hlds__hlds_llds__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__V_11_11, (MR_Integer) 0)));

#line 356 "hlds_llds.m"
#line 356 "hlds_llds.m"
                                            switch (MR_tag((MR_Word) hlds__hlds_llds__V_19_19)) {
#line 356 "hlds_llds.m"
                                              default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 0:
#line 5071 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 1:
#line 5077 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 2:
#line 5083 "hlds.hlds_llds.c"
                                                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 356 "hlds_llds.m"
                                                break;
#line 356 "hlds_llds.m"
                                              case (MR_Integer) 3:
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
                                                break;
#line 356 "hlds_llds.m"
                                            }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
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

#line 5209 "hlds.hlds_llds.c"
        {
#line 5211 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_1[1], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_11_11)));
        }
#line 362 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
          {
#line 5218 "hlds.hlds_llds.c"
            hlds__hlds_llds__TypeInfo_22_22 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5220 "hlds.hlds_llds.c"
            {
#line 5222 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_22_22, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_12_12)));
            }
#line 362 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
              {
#line 5229 "hlds.hlds_llds.c"
                hlds__hlds_llds__TypeInfo_23_23 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5231 "hlds.hlds_llds.c"
                {
#line 5233 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_23_23, ((MR_Box) (hlds__hlds_llds__V_5_5)), ((MR_Box) (hlds__hlds_llds__V_13_13)));
                }
#line 362 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                  {
#line 5240 "hlds.hlds_llds.c"
                    hlds__hlds_llds__TypeInfo_24_24 = (MR_Word) &hlds__hlds_llds_scalar_common_1[1];
#line 5242 "hlds.hlds_llds.c"
                    {
#line 5244 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_24_24, ((MR_Box) (hlds__hlds_llds__V_6_6)), ((MR_Box) (hlds__hlds_llds__V_14_14)));
                    }
#line 362 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                      {
#line 5251 "hlds.hlds_llds.c"
                        hlds__hlds_llds__TypeInfo_25_25 = (MR_Word) &hlds__hlds_llds_scalar_common_1[2];
#line 5253 "hlds.hlds_llds.c"
                        {
#line 5255 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_25_25, ((MR_Box) (hlds__hlds_llds__V_7_7)), ((MR_Box) (hlds__hlds_llds__V_15_15)));
                        }
#line 362 "hlds_llds.m"
                        if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                          {
#line 5262 "hlds.hlds_llds.c"
                            hlds__hlds_llds__TypeInfo_26_26 = (MR_Word) &hlds__hlds_llds_scalar_common_2[0];
#line 5264 "hlds.hlds_llds.c"
                            {
#line 5266 "hlds.hlds_llds.c"
                              hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_llds__TypeInfo_26_26, ((MR_Box) (hlds__hlds_llds__V_8_8)), ((MR_Box) (hlds__hlds_llds__V_16_16)));
                            }
#line 362 "hlds_llds.m"
                            if (hlds__hlds_llds__succeeded)
#line 362 "hlds_llds.m"
                              {
#line 5273 "hlds.hlds_llds.c"
                                {
#line 5275 "hlds.hlds_llds.c"
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
#line 356 "hlds_llds.m"
                                      switch (MR_tag((MR_Word) hlds__hlds_llds__V_10_10)) {
#line 356 "hlds_llds.m"
                                        default: /*NOTREACHED*/ MR_assert(0);
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 0:
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
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 1:
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
#line 5331 "hlds.hlds_llds.c"
                                                {
#line 5333 "hlds.hlds_llds.c"
                                                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_across_call_0_0(hlds__hlds_llds__V_29_29, hlds__hlds_llds__V_30_30);
                                                }
#line 356 "hlds_llds.m"
                                              }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 2:
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
#line 5359 "hlds.hlds_llds.c"
                                                {
#line 5361 "hlds.hlds_llds.c"
                                                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_resume_0_0(hlds__hlds_llds__V_31_31, hlds__hlds_llds__V_32_32);
                                                }
#line 356 "hlds_llds.m"
                                              }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
#line 356 "hlds_llds.m"
                                        case (MR_Integer) 3:
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
#line 5387 "hlds.hlds_llds.c"
                                                {
#line 5389 "hlds.hlds_llds.c"
                                                  return hlds__hlds_llds__succeeded = hlds__hlds_llds____Unify____need_in_par_conj_0_0(hlds__hlds_llds__V_33_33, hlds__hlds_llds__V_34_34);
                                                }
#line 356 "hlds_llds.m"
                                              }
#line 356 "hlds_llds.m"
                                          }
#line 356 "hlds_llds.m"
                                          break;
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

#line 85 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_store_map_0_0(
#line 85 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 85 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 85 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 85 "hlds_llds.m"
{
#line 85 "hlds_llds.m"
  {
#line 85 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 85 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 85 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 85 "hlds_llds.m"
    {
#line 85 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 85 "hlds_llds.m"
      return;
    }
#line 85 "hlds_llds.m"
  }
#line 85 "hlds_llds.m"
}

#line 85 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_store_map_0_0(
#line 85 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 85 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 85 "hlds_llds.m"
{
#line 85 "hlds_llds.m"
  {
#line 85 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 85 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 85 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 85 "hlds_llds.m"
    {
#line 85 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 85 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 85 "hlds_llds.m"
  }
#line 85 "hlds_llds.m"
}

#line 55 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_locn_0_0(
#line 55 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 55 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 55 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 55 "hlds_llds.m"
{
#line 55 "hlds_llds.m"
  {
#line 55 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 55 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_77 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 55 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_78 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 55 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_77 == hlds__hlds_llds__CastY_78);
#line 55 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 5509 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "hlds_llds.m"
    else
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) {
#line 55 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
        case (MR_Integer) 0:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
          switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 55 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
            case (MR_Integer) 0:
#line 55 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
            case (MR_Integer) 1:
#line 5533 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
            case (MR_Integer) 2:
#line 5539 "hlds.hlds_llds.c"
              *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
            case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                case (MR_Integer) 0:
#line 5552 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                  break;
#line 55 "hlds_llds.m"
                case (MR_Integer) 1:
#line 5558 "hlds.hlds_llds.c"
                  *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                  break;
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 1:
#line 55 "hlds_llds.m"
          {
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 55 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
              case (MR_Integer) 0:
#line 5586 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 1:
#line 55 "hlds_llds.m"
                {
#line 55 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_17_17;
#line 55 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_95_95 = (MR_Integer) hlds__hlds_llds__V_90_90;
#line 55 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_96_96 = (MR_Integer) hlds__hlds_llds__V_15_15;

#line 55 "hlds_llds.m"
                  {
#line 55 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_17_17, hlds__hlds_llds__V_95_95, hlds__hlds_llds__V_96_96);
                  }
#line 5610 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == (MR_Integer) 0);
#line 55 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 55 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_17_17;
#line 55 "hlds_llds.m"
                  else
#line 55 "hlds_llds.m"
                    {
#line 55 "hlds_llds.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_89_89, hlds__hlds_llds__V_16_16);
#line 55 "hlds_llds.m"
                      return;
                    }
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 2:
#line 5633 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5646 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5652 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
            }
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 2:
#line 55 "hlds_llds.m"
          {
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));

#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
            switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 55 "hlds_llds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
              case (MR_Integer) 0:
#line 5682 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 1:
#line 5688 "hlds.hlds_llds.c"
                *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 2:
#line 55 "hlds_llds.m"
                {
#line 55 "hlds_llds.m"
                  MR_Integer hlds__hlds_llds__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                  MR_Word hlds__hlds_llds__V_39_39;

#line 55 "hlds_llds.m"
                  {
#line 55 "hlds_llds.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_39_39, hlds__hlds_llds__V_92_92, hlds__hlds_llds__V_37_37);
                  }
#line 5708 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_39_39 == (MR_Integer) 0);
#line 55 "hlds_llds.m"
                  hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 55 "hlds_llds.m"
                  if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
                    *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_39_39;
#line 55 "hlds_llds.m"
                  else
#line 55 "hlds_llds.m"
                    {
#line 55 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_97_97 = (MR_Integer) hlds__hlds_llds__V_91_91;
#line 55 "hlds_llds.m"
                      MR_Integer hlds__hlds_llds__V_98_98 = (MR_Integer) hlds__hlds_llds__V_38_38;

#line 55 "hlds_llds.m"
                      {
#line 55 "hlds_llds.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_97_97, hlds__hlds_llds__V_98_98);
#line 55 "hlds_llds.m"
                        return;
                      }
#line 55 "hlds_llds.m"
                    }
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
              case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5747 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5753 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
                break;
#line 55 "hlds_llds.m"
            }
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
            case (MR_Integer) 0:
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 55 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5790 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5796 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 2:
#line 5802 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                      case (MR_Integer) 0:
#line 55 "hlds_llds.m"
                        {
#line 55 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "hlds_llds.m"
                          MR_Word hlds__hlds_llds__V_61_61;

#line 55 "hlds_llds.m"
                          {
#line 55 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_61_61, hlds__hlds_llds__V_88_88, hlds__hlds_llds__V_59_59);
                          }
#line 5829 "hlds.hlds_llds.c"
                          hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_61_61 == (MR_Integer) 0);
#line 55 "hlds_llds.m"
                          hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 55 "hlds_llds.m"
                          if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
                            *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_61_61;
#line 55 "hlds_llds.m"
                          else
#line 55 "hlds_llds.m"
                            {
#line 55 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_93_93 = (MR_Integer) hlds__hlds_llds__V_87_87;
#line 55 "hlds_llds.m"
                              MR_Integer hlds__hlds_llds__V_94_94 = (MR_Integer) hlds__hlds_llds__V_60_60;

#line 55 "hlds_llds.m"
                              {
#line 55 "hlds_llds.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_93_93, hlds__hlds_llds__V_94_94);
#line 55 "hlds_llds.m"
                                return;
                              }
#line 55 "hlds_llds.m"
                            }
#line 55 "hlds_llds.m"
                        }
#line 55 "hlds_llds.m"
                        break;
#line 55 "hlds_llds.m"
                      case (MR_Integer) 1:
#line 5861 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 1;
#line 55 "hlds_llds.m"
                        break;
#line 55 "hlds_llds.m"
                    }
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
            case (MR_Integer) 1:
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));

#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__3_3)) {
#line 55 "hlds_llds.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                  case (MR_Integer) 0:
#line 5889 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 1:
#line 5895 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 2:
#line 5901 "hlds.hlds_llds.c"
                    *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                  case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
                      case (MR_Integer) 0:
#line 5914 "hlds.hlds_llds.c"
                        *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 2;
#line 55 "hlds_llds.m"
                        break;
#line 55 "hlds_llds.m"
                      case (MR_Integer) 1:
#line 55 "hlds_llds.m"
                        {
#line 55 "hlds_llds.m"
                          MR_Integer hlds__hlds_llds__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));

#line 55 "hlds_llds.m"
                          {
#line 55 "hlds_llds.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_86_86, hlds__hlds_llds__V_76_76);
#line 55 "hlds_llds.m"
                            return;
                          }
#line 55 "hlds_llds.m"
                        }
#line 55 "hlds_llds.m"
                        break;
#line 55 "hlds_llds.m"
                    }
#line 55 "hlds_llds.m"
                    break;
#line 55 "hlds_llds.m"
                }
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
      }
#line 55 "hlds_llds.m"
  }
#line 55 "hlds_llds.m"
}

#line 55 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_locn_0_0(
#line 55 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 55 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 55 "hlds_llds.m"
{
#line 55 "hlds_llds.m"
  {
#line 55 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 55 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_19 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 55 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_20 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 55 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_19 == hlds__hlds_llds__CastY_20);
#line 55 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 55 "hlds_llds.m"
    else
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__HeadVar__1_1)) {
#line 55 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
        case (MR_Integer) 0:
#line 55 "hlds_llds.m"
          {
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastX_3 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__CastY_4 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 55 "hlds_llds.m"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastY_4 == hlds__hlds_llds__CastX_3);
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 1:
#line 55 "hlds_llds.m"
          {
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_7_7;
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_8_8;

#line 55 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 55 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
                hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 6026 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_7_7);
#line 55 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 6030 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_6_6 == hlds__hlds_llds__V_8_8);
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 2:
#line 55 "hlds_llds.m"
          {
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
            MR_Integer hlds__hlds_llds__V_11_11;
#line 55 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_12_12;

#line 55 "hlds_llds.m"
            hlds__hlds_llds__succeeded = ((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 55 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                hlds__hlds_llds__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "hlds_llds.m"
                hlds__hlds_llds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 6061 "hlds.hlds_llds.c"
                hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_9_9 == hlds__hlds_llds__V_11_11);
#line 55 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 6065 "hlds.hlds_llds.c"
                  hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == hlds__hlds_llds__V_12_12);
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
        case (MR_Integer) 3:
#line 55 "hlds_llds.m"
#line 55 "hlds_llds.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)))) {
#line 55 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 55 "hlds_llds.m"
            case (MR_Integer) 0:
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_15_15;
#line 55 "hlds_llds.m"
                MR_Word hlds__hlds_llds__V_16_16;

#line 55 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 55 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
                  {
#line 55 "hlds_llds.m"
                    hlds__hlds_llds__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                    hlds__hlds_llds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 6103 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_13_13 == hlds__hlds_llds__V_15_15);
#line 55 "hlds_llds.m"
                    if (hlds__hlds_llds__succeeded)
#line 6107 "hlds.hlds_llds.c"
                      hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_14_14 == hlds__hlds_llds__V_16_16);
#line 55 "hlds_llds.m"
                  }
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
            case (MR_Integer) 1:
#line 55 "hlds_llds.m"
              {
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                MR_Integer hlds__hlds_llds__V_18_18;

#line 55 "hlds_llds.m"
                hlds__hlds_llds__succeeded = ((((MR_tag((MR_Word) hlds__hlds_llds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 55 "hlds_llds.m"
                if (hlds__hlds_llds__succeeded)
#line 55 "hlds_llds.m"
                  {
#line 55 "hlds_llds.m"
                    hlds__hlds_llds__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 6132 "hlds.hlds_llds.c"
                    hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_17_17 == hlds__hlds_llds__V_18_18);
#line 55 "hlds_llds.m"
                  }
#line 55 "hlds_llds.m"
              }
#line 55 "hlds_llds.m"
              break;
#line 55 "hlds_llds.m"
          }
#line 55 "hlds_llds.m"
          break;
#line 55 "hlds_llds.m"
      }
#line 55 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 55 "hlds_llds.m"
  }
#line 55 "hlds_llds.m"
}

#line 62 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_map_0_0(
#line 62 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 62 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 62 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 62 "hlds_llds.m"
{
#line 62 "hlds_llds.m"
  {
#line 62 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 62 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_4 = hlds__hlds_llds__HeadVar__2_2;
#line 62 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_5 = hlds__hlds_llds__HeadVar__3_3;

#line 62 "hlds_llds.m"
    {
#line 62 "hlds_llds.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], hlds__hlds_llds__HeadVar__1_1, ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_5)));
#line 62 "hlds_llds.m"
      return;
    }
#line 62 "hlds_llds.m"
  }
#line 62 "hlds_llds.m"
}

#line 62 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_map_0_0(
#line 62 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 62 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 62 "hlds_llds.m"
{
#line 62 "hlds_llds.m"
  {
#line 62 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 62 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar1_3 = hlds__hlds_llds__HeadVar__1_1;
#line 62 "hlds_llds.m"
    MR_Word hlds__hlds_llds__Cast_HeadVar2_4 = hlds__hlds_llds__HeadVar__2_2;

#line 62 "hlds_llds.m"
    {
#line 62 "hlds_llds.m"
      return hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_llds__Cast_HeadVar2_4)));
    }
#line 62 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 62 "hlds_llds.m"
  }
#line 62 "hlds_llds.m"
}

#line 72 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds____Compare____abs_follow_vars_0_0(
#line 72 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__1_1,
#line 72 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 72 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__3_3)
#line 72 "hlds_llds.m"
{
#line 72 "hlds_llds.m"
  {
#line 72 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 72 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_12 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;
#line 72 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_13 = (MR_Integer) hlds__hlds_llds__HeadVar__3_3;

#line 72 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_12 == hlds__hlds_llds__CastY_13);
#line 72 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 6239 "hlds.hlds_llds.c"
      *hlds__hlds_llds__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "hlds_llds.m"
    else
#line 72 "hlds_llds.m"
      {
#line 72 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__3_3, (MR_Integer) 2)));
#line 72 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_10_10;

#line 72 "hlds_llds.m"
        {
#line 72 "hlds_llds.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], &hlds__hlds_llds__V_10_10, ((MR_Box) (hlds__hlds_llds__V_4_4)), ((MR_Box) (hlds__hlds_llds__V_7_7)));
        }
#line 6265 "hlds.hlds_llds.c"
        hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_10_10 == (MR_Integer) 0);
#line 72 "hlds_llds.m"
        hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 72 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 72 "hlds_llds.m"
          *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_10_10;
#line 72 "hlds_llds.m"
        else
#line 72 "hlds_llds.m"
          {
#line 72 "hlds_llds.m"
            MR_Word hlds__hlds_llds__V_11_11;

#line 72 "hlds_llds.m"
            {
#line 72 "hlds_llds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_llds__V_11_11, hlds__hlds_llds__V_5_5, hlds__hlds_llds__V_8_8);
            }
#line 6285 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_11_11 == (MR_Integer) 0);
#line 72 "hlds_llds.m"
            hlds__hlds_llds__succeeded = !(hlds__hlds_llds__succeeded);
#line 72 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 72 "hlds_llds.m"
              *hlds__hlds_llds__HeadVar__1_1 = hlds__hlds_llds__V_11_11;
#line 72 "hlds_llds.m"
            else
#line 72 "hlds_llds.m"
              {
#line 72 "hlds_llds.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__V_6_6, hlds__hlds_llds__V_9_9);
#line 72 "hlds_llds.m"
                return;
              }
#line 72 "hlds_llds.m"
          }
#line 72 "hlds_llds.m"
      }
#line 72 "hlds_llds.m"
  }
#line 72 "hlds_llds.m"
}

#line 72 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds____Unify____abs_follow_vars_0_0(
#line 72 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__1_1,
#line 72 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2)
#line 72 "hlds_llds.m"
{
#line 72 "hlds_llds.m"
  {
#line 72 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 72 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastX_9 = (MR_Integer) hlds__hlds_llds__HeadVar__1_1;
#line 72 "hlds_llds.m"
    MR_Integer hlds__hlds_llds__CastY_10 = (MR_Integer) hlds__hlds_llds__HeadVar__2_2;

#line 72 "hlds_llds.m"
    hlds__hlds_llds__succeeded = (hlds__hlds_llds__CastX_9 == hlds__hlds_llds__CastY_10);
#line 72 "hlds_llds.m"
    if (hlds__hlds_llds__succeeded)
#line 72 "hlds_llds.m"
      hlds__hlds_llds__succeeded = MR_TRUE;
#line 72 "hlds_llds.m"
    else
#line 72 "hlds_llds.m"
      {
#line 72 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__1_1, (MR_Integer) 2)));
#line 72 "hlds_llds.m"
        MR_Word hlds__hlds_llds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "hlds_llds.m"
        MR_Integer hlds__hlds_llds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__HeadVar__2_2, (MR_Integer) 2)));

#line 6352 "hlds.hlds_llds.c"
        {
#line 6354 "hlds.hlds_llds.c"
          hlds__hlds_llds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_llds_scalar_common_2[0], ((MR_Box) (hlds__hlds_llds__V_3_3)), ((MR_Box) (hlds__hlds_llds__V_6_6)));
        }
#line 72 "hlds_llds.m"
        if (hlds__hlds_llds__succeeded)
#line 72 "hlds_llds.m"
          {
#line 6361 "hlds.hlds_llds.c"
            hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_4_4 == hlds__hlds_llds__V_7_7);
#line 72 "hlds_llds.m"
            if (hlds__hlds_llds__succeeded)
#line 6365 "hlds.hlds_llds.c"
              hlds__hlds_llds__succeeded = (hlds__hlds_llds__V_5_5 == hlds__hlds_llds__V_8_8);
#line 72 "hlds_llds.m"
          }
#line 72 "hlds_llds.m"
      }
#line 72 "hlds_llds.m"
    return hlds__hlds_llds__succeeded;
#line 72 "hlds_llds.m"
  }
#line 72 "hlds_llds.m"
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
          parse_tree__prog_rename__rename_var_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_llds__HeadVar__1_1, hlds__hlds_llds__HeadVar__2_2, hlds__hlds_llds__Var0_9, &hlds__hlds_llds__Var_12);
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
#line 6625 "hlds.hlds_llds.c"
#line 6626 "hlds.hlds_llds.c"
        switch (MR_tag((MR_Word) hlds__hlds_llds__Slot_10)) {
#line 6628 "hlds.hlds_llds.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 6630 "hlds.hlds_llds.c"
          case (MR_Integer) 0:
#line 6632 "hlds.hlds_llds.c"
            {
#line 6634 "hlds.hlds_llds.c"
              MR_Word hlds__hlds_llds__Width_15;

#line 329 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 329 "hlds_llds.m"
              hlds__hlds_llds__Width_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 330 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "sv";
#line 343 "hlds_llds.m"
#line 343 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_15) {
#line 343 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 343 "hlds_llds.m"
                case (MR_Integer) 1:
#line 345 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 343 "hlds_llds.m"
                  break;
#line 343 "hlds_llds.m"
                case (MR_Integer) 0:
#line 342 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 343 "hlds_llds.m"
                  break;
#line 343 "hlds_llds.m"
              }
#line 6662 "hlds.hlds_llds.c"
            }
#line 6664 "hlds.hlds_llds.c"
            break;
#line 6666 "hlds.hlds_llds.c"
          case (MR_Integer) 1:
#line 6668 "hlds.hlds_llds.c"
            {
#line 6670 "hlds.hlds_llds.c"
              MR_Word hlds__hlds_llds__Width_38;

#line 332 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 332 "hlds_llds.m"
              hlds__hlds_llds__Width_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Slot_10, (MR_Integer) 1)));
#line 333 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "parent_sv";
#line 343 "hlds_llds.m"
#line 343 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_38) {
#line 343 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 343 "hlds_llds.m"
                case (MR_Integer) 1:
#line 345 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) " (double width)";
#line 343 "hlds_llds.m"
                  break;
#line 343 "hlds_llds.m"
                case (MR_Integer) 0:
#line 342 "hlds_llds.m"
                  hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 343 "hlds_llds.m"
                  break;
#line 343 "hlds_llds.m"
              }
#line 6698 "hlds.hlds_llds.c"
            }
#line 6700 "hlds.hlds_llds.c"
            break;
#line 6702 "hlds.hlds_llds.c"
          case (MR_Integer) 2:
#line 6704 "hlds.hlds_llds.c"
            {
#line 335 "hlds_llds.m"
              hlds__hlds_llds__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__Slot_10, (MR_Integer) 0)));
#line 337 "hlds_llds.m"
              hlds__hlds_llds__StackStr_16 = (MR_String) "fv";
#line 342 "hlds_llds.m"
              hlds__hlds_llds__WidthStr_18 = (MR_String) "";
#line 6712 "hlds.hlds_llds.c"
            }
#line 6714 "hlds.hlds_llds.c"
            break;
#line 6716 "hlds.hlds_llds.c"
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

#line 301 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__abs_locn_to_string_3_p_0(
#line 301 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Locn_4,
#line 301 "hlds_llds.m"
  MR_String * hlds__hlds_llds__Str_5,
#line 301 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeWidth_6)
#line 301 "hlds_llds.m"
{
#line 824 "hlds_llds.m"
  {
#line 824 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;

#line 824 "hlds_llds.m"
#line 824 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__Locn_4)) {
#line 824 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 824 "hlds_llds.m"
      case (MR_Integer) 0:
#line 824 "hlds_llds.m"
        {
#line 825 "hlds_llds.m"
          *hlds__hlds_llds__Str_5 = (MR_String) "any_reg";
#line 826 "hlds_llds.m"
          *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "hlds_llds.m"
        }
#line 824 "hlds_llds.m"
        break;
#line 824 "hlds_llds.m"
      case (MR_Integer) 1:
#line 824 "hlds_llds.m"
        {
#line 824 "hlds_llds.m"
          MR_Integer hlds__hlds_llds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 1)));
#line 824 "hlds_llds.m"
          MR_Word hlds__hlds_llds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__Locn_4, (MR_Integer) 0)));

#line 824 "hlds_llds.m"
#line 824 "hlds_llds.m"
          switch (hlds__hlds_llds__V_27_27) {
#line 824 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 824 "hlds_llds.m"
            case (MR_Integer) 1:
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
              break;
#line 824 "hlds_llds.m"
            case (MR_Integer) 0:
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
              break;
#line 824 "hlds_llds.m"
          }
#line 824 "hlds_llds.m"
        }
#line 824 "hlds_llds.m"
        break;
#line 824 "hlds_llds.m"
      case (MR_Integer) 2:
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
#line 851 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_8) {
#line 851 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 851 "hlds_llds.m"
            case (MR_Integer) 1:
#line 852 "hlds_llds.m"
              {
#line 852 "hlds_llds.m"
                *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 852 "hlds_llds.m"
              }
#line 851 "hlds_llds.m"
              break;
#line 851 "hlds_llds.m"
            case (MR_Integer) 0:
#line 851 "hlds_llds.m"
              *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "hlds_llds.m"
              break;
#line 851 "hlds_llds.m"
          }
#line 836 "hlds_llds.m"
        }
#line 824 "hlds_llds.m"
        break;
#line 824 "hlds_llds.m"
      case (MR_Integer) 3:
#line 824 "hlds_llds.m"
#line 824 "hlds_llds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_llds__Locn_4, (MR_Integer) 0)))) {
#line 824 "hlds_llds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 824 "hlds_llds.m"
          case (MR_Integer) 0:
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
#line 851 "hlds_llds.m"
              switch (hlds__hlds_llds__Width_24) {
#line 851 "hlds_llds.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 851 "hlds_llds.m"
                case (MR_Integer) 1:
#line 852 "hlds_llds.m"
                  {
#line 852 "hlds_llds.m"
                    *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__hlds_llds_scalar_common_3[0]);
#line 852 "hlds_llds.m"
                  }
#line 851 "hlds_llds.m"
                  break;
#line 851 "hlds_llds.m"
                case (MR_Integer) 0:
#line 851 "hlds_llds.m"
                  *hlds__hlds_llds__MaybeWidth_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "hlds_llds.m"
                  break;
#line 851 "hlds_llds.m"
              }
#line 840 "hlds_llds.m"
            }
#line 824 "hlds_llds.m"
            break;
#line 824 "hlds_llds.m"
          case (MR_Integer) 1:
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
            break;
#line 824 "hlds_llds.m"
        }
#line 824 "hlds_llds.m"
        break;
#line 824 "hlds_llds.m"
    }
#line 824 "hlds_llds.m"
  }
#line 301 "hlds_llds.m"
}

#line 299 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__key_stack_slot_to_abs_locn_2_f_0(
#line 299 "hlds_llds.m"
  MR_Word hlds__hlds_llds__TypeInfo_6_6,
#line 299 "hlds_llds.m"
  MR_Box hlds__hlds_llds__HeadVar__1_4,
#line 299 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Slot_5)
#line 299 "hlds_llds.m"
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
#line 299 "hlds_llds.m"
}

#line 298 "hlds_llds.m"
MR_Word MR_CALL 
hlds__hlds_llds__stack_slot_to_abs_locn_1_f_0(
#line 298 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 298 "hlds_llds.m"
{
#line 809 "hlds_llds.m"
  {
#line 809 "hlds_llds.m"
    MR_bool hlds__hlds_llds__succeeded;
#line 809 "hlds_llds.m"
    MR_Word hlds__hlds_llds__AbsLocn_4;

#line 809 "hlds_llds.m"
#line 809 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
#line 809 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 809 "hlds_llds.m"
      case (MR_Integer) 0:
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
        break;
#line 809 "hlds_llds.m"
      case (MR_Integer) 1:
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
        break;
#line 809 "hlds_llds.m"
      case (MR_Integer) 2:
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
        break;
#line 809 "hlds_llds.m"
    }
#line 809 "hlds_llds.m"
    return hlds__hlds_llds__AbsLocn_4;
#line 809 "hlds_llds.m"
  }
#line 298 "hlds_llds.m"
}

#line 296 "hlds_llds.m"
MR_Integer MR_CALL 
hlds__hlds_llds__stack_slot_num_1_f_0(
#line 296 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlot_3)
#line 296 "hlds_llds.m"
{
#line 7184 "hlds.hlds_llds.c"
  {
#line 7186 "hlds.hlds_llds.c"
    MR_bool hlds__hlds_llds__succeeded;
#line 7188 "hlds.hlds_llds.c"
    MR_Integer hlds__hlds_llds__N_4;

#line 7191 "hlds.hlds_llds.c"
#line 7192 "hlds.hlds_llds.c"
    switch (MR_tag((MR_Word) hlds__hlds_llds__StackSlot_3)) {
#line 7194 "hlds.hlds_llds.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 7196 "hlds.hlds_llds.c"
      case (MR_Integer) 0:
#line 7198 "hlds.hlds_llds.c"
        {
#line 7200 "hlds.hlds_llds.c"
          MR_Word hlds__hlds_llds__Width_5;

#line 793 "hlds_llds.m"
          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 793 "hlds_llds.m"
          hlds__hlds_llds__Width_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 802 "hlds_llds.m"
#line 802 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_5) {
#line 802 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 802 "hlds_llds.m"
            case (MR_Integer) 1:
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
              break;
#line 802 "hlds_llds.m"
            case (MR_Integer) 0:
#line 801 "hlds_llds.m"
              {
#line 801 "hlds_llds.m"
              }
#line 802 "hlds_llds.m"
              break;
#line 802 "hlds_llds.m"
          }
#line 7235 "hlds.hlds_llds.c"
        }
#line 7237 "hlds.hlds_llds.c"
        break;
#line 7239 "hlds.hlds_llds.c"
      case (MR_Integer) 1:
#line 7241 "hlds.hlds_llds.c"
        {
#line 7243 "hlds.hlds_llds.c"
          MR_Word hlds__hlds_llds__Width_17;

#line 795 "hlds_llds.m"
          hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 795 "hlds_llds.m"
          hlds__hlds_llds__Width_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_llds__StackSlot_3, (MR_Integer) 1)));
#line 802 "hlds_llds.m"
#line 802 "hlds_llds.m"
          switch (hlds__hlds_llds__Width_17) {
#line 802 "hlds_llds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 802 "hlds_llds.m"
            case (MR_Integer) 1:
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
              break;
#line 802 "hlds_llds.m"
            case (MR_Integer) 0:
#line 801 "hlds_llds.m"
              {
#line 801 "hlds_llds.m"
              }
#line 802 "hlds_llds.m"
              break;
#line 802 "hlds_llds.m"
          }
#line 7278 "hlds.hlds_llds.c"
        }
#line 7280 "hlds.hlds_llds.c"
        break;
#line 7282 "hlds.hlds_llds.c"
      case (MR_Integer) 2:
#line 797 "hlds_llds.m"
        hlds__hlds_llds__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__hlds_llds__StackSlot_3, (MR_Integer) 0)));
#line 7286 "hlds.hlds_llds.c"
        break;
#line 7288 "hlds.hlds_llds.c"
    }
#line 7290 "hlds.hlds_llds.c"
    return hlds__hlds_llds__N_4;
#line 7292 "hlds.hlds_llds.c"
  }
#line 296 "hlds_llds.m"
}

#line 290 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__rename_vars_in_llds_code_gen_info_4_p_0(
#line 290 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Must_5,
#line 290 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Subn_6,
#line 290 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Details0_7,
#line 290 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Details_8)
#line 290 "hlds_llds.m"
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
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreBirths0_9, &hlds__hlds_llds__PreBirths_17);
    }
#line 711 "hlds_llds.m"
    {
#line 711 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostBirths0_10, &hlds__hlds_llds__PostBirths_18);
    }
#line 712 "hlds_llds.m"
    {
#line 712 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PreDeaths0_11, &hlds__hlds_llds__PreDeaths_19);
    }
#line 713 "hlds_llds.m"
    {
#line 713 "hlds_llds.m"
      parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__PostDeaths0_12, &hlds__hlds_llds__PostDeaths_20);
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
#line 7443 "hlds.hlds_llds.c"
    hlds__hlds_llds__TypeInfo_11_68 = (MR_Word) &hlds__hlds_llds_scalar_common_1[0];
#line 7445 "hlds.hlds_llds.c"
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
          parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumePointVars0_30, &hlds__hlds_llds__ResumePointVars_32);
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
#line 740 "hlds_llds.m"
    switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed0_16)) {
#line 740 "hlds_llds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 740 "hlds_llds.m"
      case (MR_Integer) 0:
#line 739 "hlds_llds.m"
        hlds__hlds_llds__MaybeNeed_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "hlds_llds.m"
        break;
#line 740 "hlds_llds.m"
      case (MR_Integer) 1:
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
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ForwardVars0_35, &hlds__hlds_llds__ForwardVars_38);
          }
#line 745 "hlds_llds.m"
          {
#line 745 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallResumeVars0_36, &hlds__hlds_llds__CallResumeVars_39);
          }
#line 746 "hlds_llds.m"
          {
#line 746 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__CallNondetLiveVars0_37, &hlds__hlds_llds__CallNondetLiveVars_40);
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
        break;
#line 740 "hlds_llds.m"
      case (MR_Integer) 2:
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
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ResumeVars0_44, &hlds__hlds_llds__ResumeVars_46);
          }
#line 755 "hlds_llds.m"
          {
#line 755 "hlds_llds.m"
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__NondetLiveVars0_45, &hlds__hlds_llds__NondetLiveVars_47);
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
#line 740 "hlds_llds.m"
        break;
#line 740 "hlds_llds.m"
      case (MR_Integer) 3:
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
            parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_2(hlds__hlds_llds__TypeCtorInfo_53_53, hlds__hlds_llds__Must_5, hlds__hlds_llds__Subn_6, hlds__hlds_llds__ParConjVars0_50, &hlds__hlds_llds__ParConjVars_51);
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
        break;
#line 740 "hlds_llds.m"
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
#line 290 "hlds_llds.m"
}

#line 277 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_resume_vars_and_loc_3_p_0(
#line 277 "hlds_llds.m"
  MR_Word hlds__hlds_llds__Resume_4,
#line 277 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Vars_5,
#line 277 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__Locs_6)
#line 277 "hlds_llds.m"
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
#line 277 "hlds_llds.m"
}

#line 274 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_resume_point_3_p_0(
#line 274 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 274 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 274 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 274 "hlds_llds.m"
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
#line 274 "hlds_llds.m"
}

#line 271 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_set_follow_vars_3_p_0(
#line 271 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 271 "hlds_llds.m"
  MR_Word hlds__hlds_llds__HeadVar__2_2,
#line 271 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__HeadVar__3_3)
#line 271 "hlds_llds.m"
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
#line 271 "hlds_llds.m"
}

#line 266 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_par_conj_3_p_0(
#line 266 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInParConj_4,
#line 266 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 266 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 266 "hlds_llds.m"
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
#line 266 "hlds_llds.m"
}

#line 263 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_in_resume_3_p_0(
#line 263 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedInResume_4,
#line 263 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 263 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 263 "hlds_llds.m"
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
#line 263 "hlds_llds.m"
}

#line 260 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_need_across_call_3_p_0(
#line 260 "hlds_llds.m"
  MR_Word hlds__hlds_llds__NeedAcrossCall_4,
#line 260 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 260 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 260 "hlds_llds.m"
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
#line 260 "hlds_llds.m"
}

#line 257 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_resume_point_3_p_0(
#line 257 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_4,
#line 257 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 257 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 257 "hlds_llds.m"
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
#line 257 "hlds_llds.m"
}

#line 254 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_store_map_3_p_0(
#line 254 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StoreMap_4,
#line 254 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 254 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 254 "hlds_llds.m"
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
#line 254 "hlds_llds.m"
}

#line 251 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_follow_vars_3_p_0(
#line 251 "hlds_llds.m"
  MR_Word hlds__hlds_llds__FollowVars_4,
#line 251 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 251 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 251 "hlds_llds.m"
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
#line 251 "hlds_llds.m"
}

#line 248 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_deaths_3_p_0(
#line 248 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_4,
#line 248 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 248 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 248 "hlds_llds.m"
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
#line 248 "hlds_llds.m"
}

#line 245 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_deaths_3_p_0(
#line 245 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_4,
#line 245 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 245 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 245 "hlds_llds.m"
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
#line 245 "hlds_llds.m"
}

#line 242 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_post_births_3_p_0(
#line 242 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_4,
#line 242 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 242 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 242 "hlds_llds.m"
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
#line 242 "hlds_llds.m"
}

#line 239 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_set_pre_births_3_p_0(
#line 239 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_4,
#line 239 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_10,
#line 239 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_11)
#line 239 "hlds_llds.m"
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
#line 239 "hlds_llds.m"
}

#line 234 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_initialize_liveness_info_7_p_0(
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreBirths_8,
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostBirths_9,
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PreDeaths_10,
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__PostDeaths_11,
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__ResumePoint_12,
#line 234 "hlds_llds.m"
  MR_Word hlds__hlds_llds__STATE_VARIABLE_GoalInfo_0_17,
#line 234 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__STATE_VARIABLE_GoalInfo_18)
#line 234 "hlds_llds.m"
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
#line 234 "hlds_llds.m"
}

#line 224 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_par_conj_2_p_0(
#line 224 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 224 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 224 "hlds_llds.m"
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
#line 224 "hlds_llds.m"
}

#line 221 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_in_resume_2_p_0(
#line 221 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 221 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 221 "hlds_llds.m"
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
#line 221 "hlds_llds.m"
}

#line 218 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(
#line 218 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 218 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAcrossCall_4)
#line 218 "hlds_llds.m"
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
#line 218 "hlds_llds.m"
}

#line 215 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(
#line 215 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 215 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 215 "hlds_llds.m"
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
#line 215 "hlds_llds.m"
}

#line 212 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(
#line 212 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 212 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 212 "hlds_llds.m"
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
#line 212 "hlds_llds.m"
}

#line 209 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_follow_vars_2_p_0(
#line 209 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 209 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 209 "hlds_llds.m"
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
#line 209 "hlds_llds.m"
}

#line 206 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_deaths_2_p_0(
#line 206 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 206 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 206 "hlds_llds.m"
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
#line 206 "hlds_llds.m"
}

#line 203 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_deaths_2_p_0(
#line 203 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 203 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 203 "hlds_llds.m"
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
#line 203 "hlds_llds.m"
}

#line 200 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_post_births_2_p_0(
#line 200 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 200 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 200 "hlds_llds.m"
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
#line 200 "hlds_llds.m"
}

#line 197 "hlds_llds.m"
MR_bool MR_CALL 
hlds__hlds_llds__goal_info_maybe_get_pre_births_2_p_0(
#line 197 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 197 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 197 "hlds_llds.m"
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
#line 197 "hlds_llds.m"
}

#line 192 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_par_conj_2_p_0(
#line 192 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 192 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInParConj_4)
#line 192 "hlds_llds.m"
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
#line 527 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 527 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 527 "hlds_llds.m"
        case (MR_Integer) 0:
#line 532 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "hlds_llds.m"
          break;
#line 527 "hlds_llds.m"
        case (MR_Integer) 1:
#line 527 "hlds_llds.m"
        case (MR_Integer) 2:
#line 532 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInParConj_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "hlds_llds.m"
          break;
#line 527 "hlds_llds.m"
        case (MR_Integer) 3:
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
          break;
#line 527 "hlds_llds.m"
      }
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
#line 192 "hlds_llds.m"
}

#line 189 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_in_resume_2_p_0(
#line 189 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 189 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedInResume_4)
#line 189 "hlds_llds.m"
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
#line 510 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 510 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 510 "hlds_llds.m"
        case (MR_Integer) 0:
#line 515 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "hlds_llds.m"
          break;
#line 510 "hlds_llds.m"
        case (MR_Integer) 1:
#line 515 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "hlds_llds.m"
          break;
#line 510 "hlds_llds.m"
        case (MR_Integer) 2:
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
          break;
#line 510 "hlds_llds.m"
        case (MR_Integer) 3:
#line 515 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedInResume_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "hlds_llds.m"
          break;
#line 510 "hlds_llds.m"
      }
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
#line 189 "hlds_llds.m"
}

#line 186 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(
#line 186 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 186 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__MaybeNeedAtCall_4)
#line 186 "hlds_llds.m"
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
#line 493 "hlds_llds.m"
      switch (MR_tag((MR_Word) hlds__hlds_llds__MaybeNeed_6)) {
#line 493 "hlds_llds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 493 "hlds_llds.m"
        case (MR_Integer) 0:
#line 498 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "hlds_llds.m"
          break;
#line 493 "hlds_llds.m"
        case (MR_Integer) 1:
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
          break;
#line 493 "hlds_llds.m"
        case (MR_Integer) 2:
#line 498 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "hlds_llds.m"
          break;
#line 493 "hlds_llds.m"
        case (MR_Integer) 3:
#line 498 "hlds_llds.m"
          *hlds__hlds_llds__MaybeNeedAtCall_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "hlds_llds.m"
          break;
#line 493 "hlds_llds.m"
      }
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
#line 186 "hlds_llds.m"
}

#line 183 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_resume_point_2_p_0(
#line 183 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 183 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__ResumePoint_4)
#line 183 "hlds_llds.m"
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
#line 183 "hlds_llds.m"
}

#line 180 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_store_map_2_p_0(
#line 180 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 180 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__StoreMap_4)
#line 180 "hlds_llds.m"
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
#line 180 "hlds_llds.m"
}

#line 177 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_follow_vars_2_p_0(
#line 177 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 177 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__FollowVars_4)
#line 177 "hlds_llds.m"
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
#line 177 "hlds_llds.m"
}

#line 174 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_deaths_2_p_0(
#line 174 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 174 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostDeaths_4)
#line 174 "hlds_llds.m"
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
#line 174 "hlds_llds.m"
}

#line 171 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_deaths_2_p_0(
#line 171 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 171 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreDeaths_4)
#line 171 "hlds_llds.m"
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
#line 171 "hlds_llds.m"
}

#line 168 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_post_births_2_p_0(
#line 168 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 168 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PostBirths_4)
#line 168 "hlds_llds.m"
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
#line 168 "hlds_llds.m"
}

#line 165 "hlds_llds.m"
void MR_CALL 
hlds__hlds_llds__goal_info_get_pre_births_2_p_0(
#line 165 "hlds_llds.m"
  MR_Word hlds__hlds_llds__GoalInfo_3,
#line 165 "hlds_llds.m"
  MR_Word * hlds__hlds_llds__PreBirths_4)
#line 165 "hlds_llds.m"
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
#line 165 "hlds_llds.m"
}

#line 53 "hlds_llds.m"
MR_String MR_CALL 
hlds__hlds_llds__explain_stack_slots_2_f_0(
#line 53 "hlds_llds.m"
  MR_Word hlds__hlds_llds__StackSlots_4,
#line 53 "hlds_llds.m"
  MR_Word hlds__hlds_llds__VarSet_5)
#line 53 "hlds_llds.m"
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
#line 53 "hlds_llds.m"
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
