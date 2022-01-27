/*
** Automatically generated from `error_util.m'
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


/* :- module parse_tree.error_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__error_util__init
ENDINIT
*/

#include "parse_tree.error_util.mih"


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
#include "int.mih"
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
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 137 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 140 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 143 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 146 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 149 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 152 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 155 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 158 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 161 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 164 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 167 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 170 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 173 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 176 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 179 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 182 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 185 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 188 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 191 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 194 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 197 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 200 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 203 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 206 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 209 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 212 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 215 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 218 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 221 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 224 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 227 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 230 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1];

#line 233 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 236 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 239 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 242 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 245 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 248 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 251 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 254 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 257 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 260 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 263 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 266 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 269 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 272 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 275 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 278 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 281 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 284 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 287 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 290 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 293 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 296 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 299 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 302 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 305 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 308 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 311 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 314 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 317 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 320 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 323 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 326 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 329 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 332 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 335 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 338 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 341 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 344 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 347 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 350 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 353 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 356 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 359 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 362 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 365 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 368 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 371 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 374 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 377 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 380 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 383 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 386 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 389 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 392 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 395 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 398 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 401 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 404 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 407 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 410 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 413 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 416 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 419 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 422 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 425 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 428 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 431 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 434 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 437 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 440 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 443 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 446 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 449 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 452 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1];

#line 455 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 458 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 461 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 464 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 467 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 470 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 473 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 476 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 479 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 482 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 485 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 488 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 491 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 494 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 497 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 500 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 503 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 506 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 509 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 512 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 515 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 518 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 521 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 524 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 527 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 530 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 533 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 536 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 539 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[14];

#line 542 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 545 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[19];

#line 548 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[19];

#line 551 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 554 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 557 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 560 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 563 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 566 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 569 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 572 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 575 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 578 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 581 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 584 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 587 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 590 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 593 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 596 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 599 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 602 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 605 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 608 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 611 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 614 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 617 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 620 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 623 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 626 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 629 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 632 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 635 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 638 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 641 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 644 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 647 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 650 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 653 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 656 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 659 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 662 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 665 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 668 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 671 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 674 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 677 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 680 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 683 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 686 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 689 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 692 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 695 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 698 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 701 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 704 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 707 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 710 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 713 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 716 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 719 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 722 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 725 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 728 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 731 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 733 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 736 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 739 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 741 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 743 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 746 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 749 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 751 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 754 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 757 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 759 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 761 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 764 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 769 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 772 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 775 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 777 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 779 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 782 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 785 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 787 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 790 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 793 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 795 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 797 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 800 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 805 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 808 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 811 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 813 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 815 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 818 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 823 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 826 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 829 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 831 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 833 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 836 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 839 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 841 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 844 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 847 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 849 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 851 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 854 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 859 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 862 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 865 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 867 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 869 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 872 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 877 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 880 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 883 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 885 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 887 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 890 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 893 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 895 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 898 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 901 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 903 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 905 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 908 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 913 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 916 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 919 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 921 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 923 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 926 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 931 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 934 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 937 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 939 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 941 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 944 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 947 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 949 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 952 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 955 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 957 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 959 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 962 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 967 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 970 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 973 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 975 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 977 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 980 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 985 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 988 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 991 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 993 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 995 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 998 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1001 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1003 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1006 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1009 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1011 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1013 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1016 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1021 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1024 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1027 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1029 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1031 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1034 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1039 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1042 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1045 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1047 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1049 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 645 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__645__1_1_p_0(
#line 645 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1178 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1178 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1178 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1278 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1278 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1278 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1160 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1160 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1160 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 772 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 772 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 772 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 776 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 776 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 776 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 890 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 890 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 890 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1428 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1428 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1428 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1518 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1518 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1518 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1518 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1518 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1518 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1518 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1493 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1493 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1493 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1493 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1493 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1445 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1445 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1445 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1413 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1413 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1413 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1413 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1403 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1403 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1403 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1403 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1390 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1390 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1390 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1390 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1390 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1385 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1385 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1385 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1385 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1380 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1380 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1375 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1375 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1334 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1334 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1289 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1283 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1283 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1184 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1184 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1147 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1147 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1147 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1147 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1134 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1134 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1049 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1038 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1038 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1011 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1011 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1011 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1011 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 963 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 963 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 808 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 808 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8);

#line 780 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 780 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5);

#line 733 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 733 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 733 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 733 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 733 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 733 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 733 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23);

#line 693 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 693 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 693 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 693 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 607 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 607 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 607 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 607 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 593 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 593 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 532 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 532 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 730 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7);

#line 691 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 691 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 645 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 645 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 645 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 591 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 591 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[17][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[4][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][11];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_2[0]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[7]))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_4[0])),
    ((MR_Box) (parse_tree__error_util__sort_error_msgs_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_5[0])),
    ((MR_Box) (parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__error_util_scalar_common_4[1])),
    ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 79))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "parse_tree.error_util.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1722 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1728 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1734 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1740 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1747 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1754 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1761 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_actual_severity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____actual_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____actual_severity_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "actual_severity",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0
};

#line 1782 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1790 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1796 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0 = {
  (MR_String) "error_line",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0,
  NULL,
  NULL,
  NULL
};

#line 1811 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1816 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1825 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1830 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1835 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_line_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_line_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_line",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0
};

#line 1856 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1864 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1870 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 1876 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0 = {
  (MR_String) "simple_msg",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0,
  parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0,
  NULL,
  NULL
};

#line 1891 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1899 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1907 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 1915 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1 = {
  (MR_String) "error_msg",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1,
  parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1,
  NULL,
  NULL
};

#line 1930 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1935 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 1940 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1
  }
};

#line 1954 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1960 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1966 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_msg_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_msg_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_msg",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0
};

#line 1987 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1995 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2000 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0 = {
  (MR_String) "always",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0,
  NULL,
  NULL,
  NULL
};

#line 2015 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2022 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 10
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2041 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1 = {
  (MR_String) "option_is_set",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1,
  NULL,
  parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1,
  NULL
};

#line 2056 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2061 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2 = {
  (MR_String) "verbose_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2,
  NULL,
  NULL,
  NULL
};

#line 2076 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2082 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3 = {
  (MR_String) "verbose_and_nonverbose",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3,
  NULL,
  NULL,
  NULL
};

#line 2097 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2102 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2110 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2115 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2123 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2132 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4 = {
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4,
  NULL,
  NULL,
  &parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4
};

#line 2147 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2152 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2157 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2162 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2168 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3
  }
};

#line 2192 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2201 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2210 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_msg_component_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_msg_component_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_msg_component",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0
};

#line 2231 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0 = {
  (MR_String) "phase_read_files",
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

#line 2246 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1 = {
  (MR_String) "phase_term_to_parse_tree",
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

#line 2261 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2 = {
  (MR_String) "phase_parse_tree_to_hlds",
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

#line 2276 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3 = {
  (MR_String) "phase_expand_types",
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

#line 2291 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4 = {
  (MR_String) "phase_type_check",
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

#line 2306 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5 = {
  (MR_String) "phase_inst_check",
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

#line 2321 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2326 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6 = {
  (MR_String) "phase_mode_check",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6,
  NULL,
  NULL,
  NULL
};

#line 2341 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7 = {
  (MR_String) "phase_purity_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2356 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8 = {
  (MR_String) "phase_detism_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2371 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9 = {
  (MR_String) "phase_oisu_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2386 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2391 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10 = {
  (MR_String) "phase_simplify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 10,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10,
  NULL,
  NULL,
  NULL
};

#line 2406 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11 = {
  (MR_String) "phase_dead_code",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2421 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12 = {
  (MR_String) "phase_termination_analysis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2436 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13 = {
  (MR_String) "phase_accumulator_intro",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2451 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14 = {
  (MR_String) "phase_auto_parallelism",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 12,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2466 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15 = {
  (MR_String) "phase_interface_gen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 13,
  (MR_Integer) 15,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2481 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16 = {
  (MR_String) "phase_code_gen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 14,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2496 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16
};

#line 2515 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2520 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2525 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3] = {
  {
    (MR_Integer) 15,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2
  }
};

#line 2544 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4
};

#line 2565 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17] = {
  (MR_Integer) 12,
  (MR_Integer) 14,
  (MR_Integer) 10,
  (MR_Integer) 5,
  (MR_Integer) 16,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 13,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2
};

#line 2586 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_phase_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_phase_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_phase",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0
  },
  (MR_Integer) 17,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0
};

#line 2607 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0 = {
  (MR_String) "severity_error",
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

#line 2622 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1 = {
  (MR_String) "severity_warning",
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

#line 2637 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2 = {
  (MR_String) "severity_informational",
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

#line 2652 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2660 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2668 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2676 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3 = {
  (MR_String) "severity_conditional",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3,
  parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3,
  NULL,
  NULL
};

#line 2691 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2698 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2703 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1
  }
};

#line 2717 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2725 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2733 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_severity_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_severity",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0
};

#line 2754 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2762 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2769 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2776 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0 = {
  (MR_String) "error_spec",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0,
  parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0,
  NULL,
  NULL
};

#line 2791 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2796 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2805 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2810 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2815 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0
};

#line 2836 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2844 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2853 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2861 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec_accumulator",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2882 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2887 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0 = {
  (MR_String) "fixed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0,
  NULL,
  NULL,
  NULL
};

#line 2902 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2907 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1 = {
  (MR_String) "quote",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1,
  NULL,
  NULL,
  NULL
};

#line 2922 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2927 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2 = {
  (MR_String) "int_fixed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2,
  NULL,
  NULL,
  NULL
};

#line 2942 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2947 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3 = {
  (MR_String) "nth_fixed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3,
  NULL,
  NULL,
  NULL
};

#line 2962 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4 = {
  (MR_String) "lower_case_next_if_not_first",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2977 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2982 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5 = {
  (MR_String) "prefix",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5,
  NULL,
  NULL,
  NULL
};

#line 2997 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3002 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6 = {
  (MR_String) "suffix",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6,
  NULL,
  NULL,
  NULL
};

#line 3017 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3022 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7 = {
  (MR_String) "words",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7,
  NULL,
  NULL,
  NULL
};

#line 3037 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3042 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8 = {
  (MR_String) "words_quote",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8,
  NULL,
  NULL,
  NULL
};

#line 3057 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3062 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9 = {
  (MR_String) "sym_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9,
  NULL,
  NULL,
  NULL
};

#line 3077 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3082 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10 = {
  (MR_String) "sym_name_and_arity",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10,
  NULL,
  NULL,
  NULL
};

#line 3097 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3102 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11 = {
  (MR_String) "top_ctor_of_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11,
  NULL,
  NULL,
  NULL
};

#line 3117 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3122 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12 = {
  (MR_String) "p_or_f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12,
  NULL,
  NULL,
  NULL
};

#line 3137 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3142 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13 = {
  (MR_String) "simple_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13,
  NULL,
  NULL,
  NULL
};

#line 3157 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3162 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14 = {
  (MR_String) "decl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14,
  NULL,
  NULL,
  NULL
};

#line 3177 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3182 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15 = {
  (MR_String) "pragma_decl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15,
  NULL,
  NULL,
  NULL
};

#line 3197 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3212 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3217 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17 = {
  (MR_String) "nl_indent_delta",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 17,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17,
  NULL,
  NULL,
  NULL
};

#line 3232 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18 = {
  (MR_String) "blank_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3247 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18
};

#line 3254 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3259 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3264 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[14] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17
};

#line 3282 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2
  },
  {
    (MR_Integer) 14,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3
  }
};

#line 3306 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[19] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8
};

#line 3329 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[19] = {
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 13,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0
};

#line 3352 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____format_component_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____format_component_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "format_component",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0
  },
  (MR_Integer) 19,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0
};

#line 3373 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_components_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____format_components_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____format_components_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "format_components",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3394 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3400 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3406 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3412 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3418 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3424 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_first_in_msg",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0
};

#line 3445 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3451 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3457 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3463 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3469 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3475 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_lower_next_initial",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0
};

#line 3496 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3502 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3508 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3514 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3520 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3526 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_printed_something_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_printed_something_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_printed_something_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_printed_something",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0
};

#line 3547 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3553 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3559 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3565 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3571 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3577 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_treat_as_first",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0
};

#line 3598 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3604 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3610 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3616 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3622 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3628 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____mode_report_control_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____mode_report_control_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "mode_report_control",
  {
    parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0
};

#line 3649 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3656 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0 = {
  (MR_String) "paragraph",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0,
  NULL,
  NULL,
  NULL
};

#line 3671 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3676 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3685 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3690 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3695 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____paragraph_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____paragraph_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "paragraph",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0
};

#line 3716 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3721 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0 = {
  (MR_String) "plain",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0,
  NULL,
  NULL,
  NULL
};

#line 3736 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3741 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1 = {
  (MR_String) "prefix",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1,
  NULL,
  NULL,
  NULL
};

#line 3756 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2 = {
  (MR_String) "lower_next",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3771 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3776 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3781 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3786 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2
  }
};

#line 3805 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3812 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3819 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____plain_or_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____plain_or_prefix_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "plain_or_prefix",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0
};

#line 3840 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3845 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0 = {
  (MR_String) "plain_word",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__error_util__parse_tree__error_util__field_types_word_0_0,
  NULL,
  NULL,
  NULL
};

#line 3860 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3865 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1 = {
  (MR_String) "prefix_word",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__field_types_word_0_1,
  NULL,
  NULL,
  NULL
};

#line 3880 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3885 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2 = {
  (MR_String) "suffix_word",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__error_util__parse_tree__error_util__field_types_word_0_2,
  NULL,
  NULL,
  NULL
};

#line 3900 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3 = {
  (MR_String) "lower_next_word",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3915 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 3920 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 3925 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 3930 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3935 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3
  }
};

#line 3959 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3967 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 3975 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____word_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____word_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "word",
  {
    parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0
  },
  {
    parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0
};

#line 3996 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4001 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4010 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4021 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4029 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4032 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4034 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4036 "parse_tree.error_util.c"
{
#line 4038 "parse_tree.error_util.c"
  {
#line 4040 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4043 "parse_tree.error_util.c"
    {
#line 4045 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4048 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4050 "parse_tree.error_util.c"
  }
#line 4052 "parse_tree.error_util.c"
}

#line 4055 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4058 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4060 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4062 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4064 "parse_tree.error_util.c"
{
#line 4066 "parse_tree.error_util.c"
  {
#line 4068 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4071 "parse_tree.error_util.c"
    {
#line 4073 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4076 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4078 "parse_tree.error_util.c"
  }
#line 4080 "parse_tree.error_util.c"
}

#line 4083 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4086 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4088 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4090 "parse_tree.error_util.c"
{
#line 4092 "parse_tree.error_util.c"
  {
#line 4094 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4097 "parse_tree.error_util.c"
    {
#line 4099 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4102 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4104 "parse_tree.error_util.c"
  }
#line 4106 "parse_tree.error_util.c"
}

#line 4109 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4112 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4114 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4116 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4118 "parse_tree.error_util.c"
{
#line 4120 "parse_tree.error_util.c"
  {
#line 4122 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4125 "parse_tree.error_util.c"
    {
#line 4127 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4130 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4132 "parse_tree.error_util.c"
  }
#line 4134 "parse_tree.error_util.c"
}

#line 4137 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4140 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4142 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4144 "parse_tree.error_util.c"
{
#line 4146 "parse_tree.error_util.c"
  {
#line 4148 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4151 "parse_tree.error_util.c"
    {
#line 4153 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4156 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4158 "parse_tree.error_util.c"
  }
#line 4160 "parse_tree.error_util.c"
}

#line 4163 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4166 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4168 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4170 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4172 "parse_tree.error_util.c"
{
#line 4174 "parse_tree.error_util.c"
  {
#line 4176 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4179 "parse_tree.error_util.c"
    {
#line 4181 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4184 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4186 "parse_tree.error_util.c"
  }
#line 4188 "parse_tree.error_util.c"
}

#line 4191 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4194 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4196 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4198 "parse_tree.error_util.c"
{
#line 4200 "parse_tree.error_util.c"
  {
#line 4202 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4205 "parse_tree.error_util.c"
    {
#line 4207 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4210 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4212 "parse_tree.error_util.c"
  }
#line 4214 "parse_tree.error_util.c"
}

#line 4217 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4220 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4222 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4224 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4226 "parse_tree.error_util.c"
{
#line 4228 "parse_tree.error_util.c"
  {
#line 4230 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4233 "parse_tree.error_util.c"
    {
#line 4235 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4238 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4240 "parse_tree.error_util.c"
  }
#line 4242 "parse_tree.error_util.c"
}

#line 4245 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4248 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4250 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4252 "parse_tree.error_util.c"
{
#line 4254 "parse_tree.error_util.c"
  {
#line 4256 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4259 "parse_tree.error_util.c"
    {
#line 4261 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4264 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4266 "parse_tree.error_util.c"
  }
#line 4268 "parse_tree.error_util.c"
}

#line 4271 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4274 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4276 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4278 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4280 "parse_tree.error_util.c"
{
#line 4282 "parse_tree.error_util.c"
  {
#line 4284 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4287 "parse_tree.error_util.c"
    {
#line 4289 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4292 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4294 "parse_tree.error_util.c"
  }
#line 4296 "parse_tree.error_util.c"
}

#line 4299 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4302 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4304 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4306 "parse_tree.error_util.c"
{
#line 4308 "parse_tree.error_util.c"
  {
#line 4310 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4313 "parse_tree.error_util.c"
    {
#line 4315 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4318 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4320 "parse_tree.error_util.c"
  }
#line 4322 "parse_tree.error_util.c"
}

#line 4325 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4328 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4330 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4332 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4334 "parse_tree.error_util.c"
{
#line 4336 "parse_tree.error_util.c"
  {
#line 4338 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4341 "parse_tree.error_util.c"
    {
#line 4343 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4346 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4348 "parse_tree.error_util.c"
  }
#line 4350 "parse_tree.error_util.c"
}

#line 4353 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4356 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4358 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4360 "parse_tree.error_util.c"
{
#line 4362 "parse_tree.error_util.c"
  {
#line 4364 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4367 "parse_tree.error_util.c"
    {
#line 4369 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4372 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4374 "parse_tree.error_util.c"
  }
#line 4376 "parse_tree.error_util.c"
}

#line 4379 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4382 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4384 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4386 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4388 "parse_tree.error_util.c"
{
#line 4390 "parse_tree.error_util.c"
  {
#line 4392 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4395 "parse_tree.error_util.c"
    {
#line 4397 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4400 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4402 "parse_tree.error_util.c"
  }
#line 4404 "parse_tree.error_util.c"
}

#line 4407 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4410 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4412 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4414 "parse_tree.error_util.c"
{
#line 4416 "parse_tree.error_util.c"
  {
#line 4418 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4421 "parse_tree.error_util.c"
    {
#line 4423 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4426 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4428 "parse_tree.error_util.c"
  }
#line 4430 "parse_tree.error_util.c"
}

#line 4433 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4436 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4438 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4440 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4442 "parse_tree.error_util.c"
{
#line 4444 "parse_tree.error_util.c"
  {
#line 4446 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4449 "parse_tree.error_util.c"
    {
#line 4451 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4454 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4456 "parse_tree.error_util.c"
  }
#line 4458 "parse_tree.error_util.c"
}

#line 4461 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4464 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4466 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4468 "parse_tree.error_util.c"
{
#line 4470 "parse_tree.error_util.c"
  {
#line 4472 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4475 "parse_tree.error_util.c"
    {
#line 4477 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4480 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4482 "parse_tree.error_util.c"
  }
#line 4484 "parse_tree.error_util.c"
}

#line 4487 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4490 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4492 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4494 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4496 "parse_tree.error_util.c"
{
#line 4498 "parse_tree.error_util.c"
  {
#line 4500 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4503 "parse_tree.error_util.c"
    {
#line 4505 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4508 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4510 "parse_tree.error_util.c"
  }
#line 4512 "parse_tree.error_util.c"
}

#line 4515 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4518 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4520 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4522 "parse_tree.error_util.c"
{
#line 4524 "parse_tree.error_util.c"
  {
#line 4526 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4529 "parse_tree.error_util.c"
    {
#line 4531 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4534 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4536 "parse_tree.error_util.c"
  }
#line 4538 "parse_tree.error_util.c"
}

#line 4541 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4544 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4546 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4548 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4550 "parse_tree.error_util.c"
{
#line 4552 "parse_tree.error_util.c"
  {
#line 4554 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4557 "parse_tree.error_util.c"
    {
#line 4559 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4562 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4564 "parse_tree.error_util.c"
  }
#line 4566 "parse_tree.error_util.c"
}

#line 4569 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4572 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4574 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4576 "parse_tree.error_util.c"
{
#line 4578 "parse_tree.error_util.c"
  {
#line 4580 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4583 "parse_tree.error_util.c"
    {
#line 4585 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4588 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4590 "parse_tree.error_util.c"
  }
#line 4592 "parse_tree.error_util.c"
}

#line 4595 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4598 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4600 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4602 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4604 "parse_tree.error_util.c"
{
#line 4606 "parse_tree.error_util.c"
  {
#line 4608 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4611 "parse_tree.error_util.c"
    {
#line 4613 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4616 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4618 "parse_tree.error_util.c"
  }
#line 4620 "parse_tree.error_util.c"
}

#line 4623 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4626 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4628 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4630 "parse_tree.error_util.c"
{
#line 4632 "parse_tree.error_util.c"
  {
#line 4634 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4637 "parse_tree.error_util.c"
    {
#line 4639 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4642 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4644 "parse_tree.error_util.c"
  }
#line 4646 "parse_tree.error_util.c"
}

#line 4649 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4652 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4654 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4656 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4658 "parse_tree.error_util.c"
{
#line 4660 "parse_tree.error_util.c"
  {
#line 4662 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4665 "parse_tree.error_util.c"
    {
#line 4667 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4670 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4672 "parse_tree.error_util.c"
  }
#line 4674 "parse_tree.error_util.c"
}

#line 4677 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4680 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4682 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4684 "parse_tree.error_util.c"
{
#line 4686 "parse_tree.error_util.c"
  {
#line 4688 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4691 "parse_tree.error_util.c"
    {
#line 4693 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4696 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4698 "parse_tree.error_util.c"
  }
#line 4700 "parse_tree.error_util.c"
}

#line 4703 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4706 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4708 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4710 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4712 "parse_tree.error_util.c"
{
#line 4714 "parse_tree.error_util.c"
  {
#line 4716 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4719 "parse_tree.error_util.c"
    {
#line 4721 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4724 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4726 "parse_tree.error_util.c"
  }
#line 4728 "parse_tree.error_util.c"
}

#line 4731 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4734 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4736 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4738 "parse_tree.error_util.c"
{
#line 4740 "parse_tree.error_util.c"
  {
#line 4742 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4745 "parse_tree.error_util.c"
    {
#line 4747 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4750 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4752 "parse_tree.error_util.c"
  }
#line 4754 "parse_tree.error_util.c"
}

#line 4757 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 4760 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4762 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4764 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4766 "parse_tree.error_util.c"
{
#line 4768 "parse_tree.error_util.c"
  {
#line 4770 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4773 "parse_tree.error_util.c"
    {
#line 4775 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4778 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4780 "parse_tree.error_util.c"
  }
#line 4782 "parse_tree.error_util.c"
}

#line 4785 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 4788 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4790 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4792 "parse_tree.error_util.c"
{
#line 4794 "parse_tree.error_util.c"
  {
#line 4796 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4799 "parse_tree.error_util.c"
    {
#line 4801 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4804 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4806 "parse_tree.error_util.c"
  }
#line 4808 "parse_tree.error_util.c"
}

#line 4811 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 4814 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4816 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4818 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4820 "parse_tree.error_util.c"
{
#line 4822 "parse_tree.error_util.c"
  {
#line 4824 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4827 "parse_tree.error_util.c"
    {
#line 4829 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4832 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4834 "parse_tree.error_util.c"
  }
#line 4836 "parse_tree.error_util.c"
}

#line 4839 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 4842 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4844 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4846 "parse_tree.error_util.c"
{
#line 4848 "parse_tree.error_util.c"
  {
#line 4850 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4853 "parse_tree.error_util.c"
    {
#line 4855 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4858 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4860 "parse_tree.error_util.c"
  }
#line 4862 "parse_tree.error_util.c"
}

#line 4865 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 4868 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4870 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4872 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4874 "parse_tree.error_util.c"
{
#line 4876 "parse_tree.error_util.c"
  {
#line 4878 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4881 "parse_tree.error_util.c"
    {
#line 4883 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4886 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4888 "parse_tree.error_util.c"
  }
#line 4890 "parse_tree.error_util.c"
}

#line 4893 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 4896 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4898 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4900 "parse_tree.error_util.c"
{
#line 4902 "parse_tree.error_util.c"
  {
#line 4904 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4907 "parse_tree.error_util.c"
    {
#line 4909 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4912 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4914 "parse_tree.error_util.c"
  }
#line 4916 "parse_tree.error_util.c"
}

#line 4919 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 4922 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4924 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4926 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4928 "parse_tree.error_util.c"
{
#line 4930 "parse_tree.error_util.c"
  {
#line 4932 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4935 "parse_tree.error_util.c"
    {
#line 4937 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4940 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4942 "parse_tree.error_util.c"
  }
#line 4944 "parse_tree.error_util.c"
}

#line 4947 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 4950 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4952 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4954 "parse_tree.error_util.c"
{
#line 4956 "parse_tree.error_util.c"
  {
#line 4958 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4961 "parse_tree.error_util.c"
    {
#line 4963 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4966 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4968 "parse_tree.error_util.c"
  }
#line 4970 "parse_tree.error_util.c"
}

#line 4973 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 4976 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4978 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4980 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4982 "parse_tree.error_util.c"
{
#line 4984 "parse_tree.error_util.c"
  {
#line 4986 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4989 "parse_tree.error_util.c"
    {
#line 4991 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4994 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4996 "parse_tree.error_util.c"
  }
#line 4998 "parse_tree.error_util.c"
}

#line 645 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__645__1_1_p_0(
#line 645 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 645 "error_util.m"
{
#line 645 "error_util.m"
  {
#line 645 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 668 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 681 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
    else
#line 668 "error_util.m"
      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 682 "error_util.m"
        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
      else
#line 668 "error_util.m"
        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 684 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
        else
#line 668 "error_util.m"
          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 679 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
          else
#line 668 "error_util.m"
            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 676 "error_util.m"
              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
            else
#line 668 "error_util.m"
              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 671 "error_util.m"
                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
              else
#line 668 "error_util.m"
                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 673 "error_util.m"
                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                else
#line 668 "error_util.m"
                  if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 683 "error_util.m"
                    parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                  else
#line 668 "error_util.m"
                    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 677 "error_util.m"
                      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                    else
#line 668 "error_util.m"
                      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 670 "error_util.m"
                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                      else
#line 668 "error_util.m"
                        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 675 "error_util.m"
                          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                        else
#line 668 "error_util.m"
                          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "error_util.m"
                            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                          else
#line 668 "error_util.m"
                            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 669 "error_util.m"
                              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                            else
#line 668 "error_util.m"
                              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 680 "error_util.m"
                                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                              else
#line 668 "error_util.m"
                                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 672 "error_util.m"
                                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "error_util.m"
                                else
#line 668 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__Phase_31)) == (MR_mktag((MR_Integer) 1))))
#line 674 "error_util.m"
                                    {
#line 674 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 674 "error_util.m"
                                      {
#line 674 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 674 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 674 "error_util.m"
                                      }
#line 674 "error_util.m"
                                    }
#line 668 "error_util.m"
                                  else
#line 678 "error_util.m"
                                    {
#line 678 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 678 "error_util.m"
                                      {
#line 678 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 678 "error_util.m"
                                      }
#line 678 "error_util.m"
                                    }
#line 647 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 647 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 647 "error_util.m"
      {
#line 647 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 647 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 647 "error_util.m"
      }
#line 645 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 645 "error_util.m"
  }
#line 645 "error_util.m"
}

#line 1178 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1178 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1178 "error_util.m"
{
#line 1178 "error_util.m"
  {
#line 1178 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1178 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1178 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1178 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1178 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5190 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1178 "error_util.m"
    else
#line 1178 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1178 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1178 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1178 "error_util.m"
        else
#line 1178 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5204 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
          else
#line 1178 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5210 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
            else
#line 5214 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
      else
#line 1178 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "error_util.m"
          {
#line 1178 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1178 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5227 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
            else
#line 1178 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "error_util.m"
                {
#line 1178 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1178 "error_util.m"
                  {
#line 1178 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1178 "error_util.m"
                    return;
                  }
#line 1178 "error_util.m"
                }
#line 1178 "error_util.m"
              else
#line 1178 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5251 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
                else
#line 5255 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
          }
#line 1178 "error_util.m"
        else
#line 1178 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1178 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5270 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
              else
#line 1178 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5276 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
                else
#line 1178 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1178 "error_util.m"
                    {
#line 1178 "error_util.m"
                      MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1178 "error_util.m"
                      {
#line 1178 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1178 "error_util.m"
                        return;
                      }
#line 1178 "error_util.m"
                    }
#line 1178 "error_util.m"
                  else
#line 5298 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
          else
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1178 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5311 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1178 "error_util.m"
              else
#line 1178 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5317 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
                else
#line 1178 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5323 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1178 "error_util.m"
                  else
#line 1178 "error_util.m"
                    {
#line 1178 "error_util.m"
                      MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1178 "error_util.m"
                      {
#line 1178 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1178 "error_util.m"
                        return;
                      }
#line 1178 "error_util.m"
                    }
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
  }
#line 1178 "error_util.m"
}

#line 1178 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1178 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1178 "error_util.m"
{
#line 1178 "error_util.m"
  {
#line 1178 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1178 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1178 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1178 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1178 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1178 "error_util.m"
    else
#line 1178 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1178 "error_util.m"
        {
#line 1178 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1178 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1178 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1178 "error_util.m"
        }
#line 1178 "error_util.m"
      else
#line 1178 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "error_util.m"
          {
#line 1178 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1178 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1178 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
              {
#line 1178 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5406 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1178 "error_util.m"
              }
#line 1178 "error_util.m"
          }
#line 1178 "error_util.m"
        else
#line 1178 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_6_6;

#line 1178 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1178 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
                {
#line 1178 "error_util.m"
                  parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5431 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1178 "error_util.m"
                }
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
          else
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1178 "error_util.m"
              MR_String parse_tree__error_util__V_8_8;

#line 1178 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1178 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
                {
#line 1178 "error_util.m"
                  parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5454 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1178 "error_util.m"
                }
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1178 "error_util.m"
  }
#line 1178 "error_util.m"
}

#line 1278 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1278 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1278 "error_util.m"
{
#line 1278 "error_util.m"
  {
#line 1278 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1278 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1278 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1278 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1278 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5491 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1278 "error_util.m"
    else
#line 1278 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1278 "error_util.m"
        else
#line 1278 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5505 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1278 "error_util.m"
          else
#line 5509 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1278 "error_util.m"
      else
#line 1278 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1278 "error_util.m"
          {
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1278 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5522 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1278 "error_util.m"
            else
#line 1278 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1278 "error_util.m"
                {
#line 1278 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1278 "error_util.m"
                  {
#line 1278 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1278 "error_util.m"
                    return;
                  }
#line 1278 "error_util.m"
                }
#line 1278 "error_util.m"
              else
#line 5544 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1278 "error_util.m"
          }
#line 1278 "error_util.m"
        else
#line 1278 "error_util.m"
          {
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1278 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5557 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1278 "error_util.m"
            else
#line 1278 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5563 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1278 "error_util.m"
              else
#line 1278 "error_util.m"
                {
#line 1278 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1278 "error_util.m"
                  {
#line 1278 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1278 "error_util.m"
                    return;
                  }
#line 1278 "error_util.m"
                }
#line 1278 "error_util.m"
          }
#line 1278 "error_util.m"
  }
#line 1278 "error_util.m"
}

#line 1278 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1278 "error_util.m"
{
#line 1278 "error_util.m"
  {
#line 1278 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1278 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1278 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1278 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1278 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1278 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1278 "error_util.m"
    else
#line 1278 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "error_util.m"
        {
#line 1278 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1278 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1278 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1278 "error_util.m"
        }
#line 1278 "error_util.m"
      else
#line 1278 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1278 "error_util.m"
          {
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1278 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1278 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1278 "error_util.m"
              {
#line 1278 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5646 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1278 "error_util.m"
              }
#line 1278 "error_util.m"
          }
#line 1278 "error_util.m"
        else
#line 1278 "error_util.m"
          {
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1278 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1278 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1278 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1278 "error_util.m"
              {
#line 1278 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5669 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1278 "error_util.m"
              }
#line 1278 "error_util.m"
          }
#line 1278 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1278 "error_util.m"
  }
#line 1278 "error_util.m"
}

#line 1160 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1160 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1160 "error_util.m"
{
#line 1160 "error_util.m"
  {
#line 1160 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1160 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1160 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1160 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1160 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5706 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1160 "error_util.m"
    else
#line 1160 "error_util.m"
      {
#line 1160 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1160 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1160 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1160 "error_util.m"
        {
#line 1160 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 5732 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1160 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1160 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1160 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1160 "error_util.m"
        else
#line 1160 "error_util.m"
          {
#line 1160 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1160 "error_util.m"
            {
#line 1160 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 5752 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1160 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1160 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1160 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1160 "error_util.m"
            else
#line 1160 "error_util.m"
              {
#line 1160 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1160 "error_util.m"
                return;
              }
#line 1160 "error_util.m"
          }
#line 1160 "error_util.m"
      }
#line 1160 "error_util.m"
  }
#line 1160 "error_util.m"
}

#line 1160 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1160 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1160 "error_util.m"
{
#line 1160 "error_util.m"
  {
#line 1160 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1160 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1160 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1160 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1160 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1160 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1160 "error_util.m"
    else
#line 1160 "error_util.m"
      {
#line 1160 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1160 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1160 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 5819 "parse_tree.error_util.c"
        {
#line 5821 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1160 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1160 "error_util.m"
          {
#line 5828 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1160 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 5832 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1160 "error_util.m"
          }
#line 1160 "error_util.m"
      }
#line 1160 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1160 "error_util.m"
  }
#line 1160 "error_util.m"
}

#line 102 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0(
#line 102 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 102 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 102 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 102 "error_util.m"
{
#line 102 "error_util.m"
  {
#line 102 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 102 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 102 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 102 "error_util.m"
    {
#line 102 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 102 "error_util.m"
      return;
    }
#line 102 "error_util.m"
  }
#line 102 "error_util.m"
}

#line 102 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0(
#line 102 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 102 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 102 "error_util.m"
{
#line 5886 "parse_tree.error_util.c"
  {
#line 5888 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5891 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5893 "parse_tree.error_util.c"
  }
#line 102 "error_util.m"
}

#line 146 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
#line 146 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 146 "error_util.m"
{
#line 146 "error_util.m"
  {
#line 146 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 146 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 146 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 146 "error_util.m"
    {
#line 146 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 146 "error_util.m"
      return;
    }
#line 146 "error_util.m"
  }
#line 146 "error_util.m"
}

#line 146 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 146 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 146 "error_util.m"
{
#line 5939 "parse_tree.error_util.c"
  {
#line 5941 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5944 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5946 "parse_tree.error_util.c"
  }
#line 146 "error_util.m"
}

#line 772 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 772 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 772 "error_util.m"
{
#line 772 "error_util.m"
  {
#line 772 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 772 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 772 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 772 "error_util.m"
    {
#line 772 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 772 "error_util.m"
      return;
    }
#line 772 "error_util.m"
  }
#line 772 "error_util.m"
}

#line 772 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 772 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 772 "error_util.m"
{
#line 5992 "parse_tree.error_util.c"
  {
#line 5994 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5997 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5999 "parse_tree.error_util.c"
  }
#line 772 "error_util.m"
}

#line 776 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 776 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 776 "error_util.m"
{
#line 776 "error_util.m"
  {
#line 776 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 776 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 776 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 776 "error_util.m"
    {
#line 776 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 776 "error_util.m"
      return;
    }
#line 776 "error_util.m"
  }
#line 776 "error_util.m"
}

#line 776 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 776 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 776 "error_util.m"
{
#line 6045 "parse_tree.error_util.c"
  {
#line 6047 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6050 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6052 "parse_tree.error_util.c"
  }
#line 776 "error_util.m"
}

#line 890 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 890 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 890 "error_util.m"
{
#line 890 "error_util.m"
  {
#line 890 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 890 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 890 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 890 "error_util.m"
    {
#line 890 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 890 "error_util.m"
      return;
    }
#line 890 "error_util.m"
  }
#line 890 "error_util.m"
}

#line 890 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 890 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 890 "error_util.m"
{
#line 6098 "parse_tree.error_util.c"
  {
#line 6100 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6103 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6105 "parse_tree.error_util.c"
  }
#line 890 "error_util.m"
}

#line 348 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 348 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 348 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 348 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 348 "error_util.m"
{
#line 348 "error_util.m"
  {
#line 348 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 348 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 348 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 348 "error_util.m"
    {
#line 348 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 348 "error_util.m"
      return;
    }
#line 348 "error_util.m"
  }
#line 348 "error_util.m"
}

#line 348 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 348 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 348 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 348 "error_util.m"
{
#line 348 "error_util.m"
  {
#line 348 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 348 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 348 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 348 "error_util.m"
    {
#line 348 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 348 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 348 "error_util.m"
  }
#line 348 "error_util.m"
}

#line 274 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 274 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 274 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 274 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 274 "error_util.m"
{
#line 274 "error_util.m"
  {
#line 274 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 274 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 274 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 274 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 274 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6196 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "error_util.m"
    else
#line 274 "error_util.m"
      {
#line 274 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 274 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 274 "error_util.m"
        {
#line 274 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 274 "error_util.m"
        {
#line 274 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 274 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 274 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6221 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 274 "error_util.m"
        else
#line 274 "error_util.m"
          {
#line 274 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 274 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6231 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 274 "error_util.m"
            else
#line 274 "error_util.m"
              {
#line 274 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 274 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 274 "error_util.m"
                  {
#line 274 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 274 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                  }
#line 274 "error_util.m"
                else
#line 274 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "error_util.m"
                    {
#line 274 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 274 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                    }
#line 274 "error_util.m"
                  else
#line 274 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 274 "error_util.m"
                      {
#line 274 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 274 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                      }
#line 274 "error_util.m"
                    else
#line 274 "error_util.m"
                      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 274 "error_util.m"
                        {
#line 274 "error_util.m"
                          MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "error_util.m"
                          MR_String parse_tree__error_util__V_8_8;

#line 274 "error_util.m"
                          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 274 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                            {
#line 274 "error_util.m"
                              parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "error_util.m"
                              {
#line 274 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                              }
#line 274 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                            }
#line 274 "error_util.m"
                        }
#line 274 "error_util.m"
                      else
#line 274 "error_util.m"
                        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 274 "error_util.m"
                          {
#line 274 "error_util.m"
                            MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "error_util.m"
                            MR_String parse_tree__error_util__V_10_10;

#line 274 "error_util.m"
                            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 274 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                              {
#line 274 "error_util.m"
                                parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "error_util.m"
                                {
#line 274 "error_util.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                                }
#line 274 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                              }
#line 274 "error_util.m"
                          }
#line 274 "error_util.m"
                        else
#line 274 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 274 "error_util.m"
                            {
#line 274 "error_util.m"
                              MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                              MR_String parse_tree__error_util__V_34_34;

#line 274 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 274 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                {
#line 274 "error_util.m"
                                  parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                  {
#line 274 "error_util.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                                  }
#line 274 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                }
#line 274 "error_util.m"
                            }
#line 274 "error_util.m"
                          else
#line 274 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 274 "error_util.m"
                              {
#line 274 "error_util.m"
                                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                MR_Integer parse_tree__error_util__V_12_12;

#line 274 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 274 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                  {
#line 274 "error_util.m"
                                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                    {
#line 274 "error_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                                    }
#line 274 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                  }
#line 274 "error_util.m"
                              }
#line 274 "error_util.m"
                            else
#line 274 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 274 "error_util.m"
                                {
#line 274 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_38_38;

#line 274 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 274 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                    {
#line 274 "error_util.m"
                                      parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                      {
#line 274 "error_util.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                                      }
#line 274 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                    }
#line 274 "error_util.m"
                                }
#line 274 "error_util.m"
                              else
#line 274 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 274 "error_util.m"
                                  {
#line 274 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_14_14;

#line 274 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 274 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                      {
#line 274 "error_util.m"
                                        parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                        {
#line 274 "error_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                                        }
#line 274 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                      }
#line 274 "error_util.m"
                                  }
#line 274 "error_util.m"
                                else
#line 274 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 274 "error_util.m"
                                    {
#line 274 "error_util.m"
                                      MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                      MR_Word parse_tree__error_util__V_30_30;
#line 274 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_57_57;
#line 274 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_58_58;

#line 274 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 274 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                        {
#line 274 "error_util.m"
                                          parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                          parse_tree__error_util__V_57_57 = (MR_Integer) parse_tree__error_util__V_29_29;
#line 274 "error_util.m"
                                          parse_tree__error_util__V_58_58 = (MR_Integer) parse_tree__error_util__V_30_30;
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_57_57, parse_tree__error_util__V_58_58);
                                          }
#line 274 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                        }
#line 274 "error_util.m"
                                    }
#line 274 "error_util.m"
                                  else
#line 274 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 274 "error_util.m"
                                      {
#line 274 "error_util.m"
                                        MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                        MR_String parse_tree__error_util__V_36_36;

#line 274 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 274 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                            {
#line 274 "error_util.m"
                                              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                                            }
#line 274 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                          }
#line 274 "error_util.m"
                                      }
#line 274 "error_util.m"
                                    else
#line 274 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 274 "error_util.m"
                                        {
#line 274 "error_util.m"
                                          MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                          MR_String parse_tree__error_util__V_16_16;

#line 274 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 274 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                            {
#line 274 "error_util.m"
                                              parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                              {
#line 274 "error_util.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                              }
#line 274 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                            }
#line 274 "error_util.m"
                                        }
#line 274 "error_util.m"
                                      else
#line 274 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                            MR_Word parse_tree__error_util__V_32_32;

#line 274 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 274 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                              {
#line 274 "error_util.m"
                                                parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                {
#line 274 "error_util.m"
                                                  parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                                                }
#line 274 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                              }
#line 274 "error_util.m"
                                          }
#line 274 "error_util.m"
                                        else
#line 274 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 274 "error_util.m"
                                            {
#line 274 "error_util.m"
                                              MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                              MR_String parse_tree__error_util__V_18_18;

#line 274 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 274 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                {
#line 274 "error_util.m"
                                                  parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                  {
#line 274 "error_util.m"
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                                  }
#line 274 "error_util.m"
                                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                }
#line 274 "error_util.m"
                                            }
#line 274 "error_util.m"
                                          else
#line 274 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 274 "error_util.m"
                                              {
#line 274 "error_util.m"
                                                MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                MR_Word parse_tree__error_util__V_24_24;

#line 274 "error_util.m"
                                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 274 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                  {
#line 274 "error_util.m"
                                                    parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                    {
#line 274 "error_util.m"
                                                      mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                                    }
#line 274 "error_util.m"
                                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                  }
#line 274 "error_util.m"
                                              }
#line 274 "error_util.m"
                                            else
#line 274 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 274 "error_util.m"
                                                {
#line 274 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_26_26;

#line 274 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 274 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                    {
#line 274 "error_util.m"
                                                      parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                      {
#line 274 "error_util.m"
                                                        parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                                      }
#line 274 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                    }
#line 274 "error_util.m"
                                                }
#line 274 "error_util.m"
                                              else
#line 274 "error_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 274 "error_util.m"
                                                  {
#line 274 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_28_28;

#line 274 "error_util.m"
                                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 274 "error_util.m"
                                                    if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                      {
#line 274 "error_util.m"
                                                        parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                        {
#line 274 "error_util.m"
                                                          parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                                                        }
#line 274 "error_util.m"
                                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                      }
#line 274 "error_util.m"
                                                  }
#line 274 "error_util.m"
                                                else
#line 274 "error_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 274 "error_util.m"
                                                    {
#line 274 "error_util.m"
                                                      MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                      MR_String parse_tree__error_util__V_20_20;

#line 274 "error_util.m"
                                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 274 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                        {
#line 274 "error_util.m"
                                                          parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                          {
#line 274 "error_util.m"
                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                                                          }
#line 274 "error_util.m"
                                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                        }
#line 274 "error_util.m"
                                                    }
#line 274 "error_util.m"
                                                  else
#line 274 "error_util.m"
                                                    {
#line 274 "error_util.m"
                                                      MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                      MR_String parse_tree__error_util__V_22_22;

#line 274 "error_util.m"
                                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 274 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                                        {
#line 274 "error_util.m"
                                                          parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "error_util.m"
                                                          {
#line 274 "error_util.m"
                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                                          }
#line 274 "error_util.m"
                                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
                                                        }
#line 274 "error_util.m"
                                                    }
#line 274 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 274 "error_util.m"
                else
#line 274 "error_util.m"
                  {
#line 274 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 274 "error_util.m"
                    return;
                  }
#line 274 "error_util.m"
              }
#line 274 "error_util.m"
          }
#line 274 "error_util.m"
      }
#line 274 "error_util.m"
  }
#line 274 "error_util.m"
}

#line 274 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 274 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 274 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 274 "error_util.m"
{
#line 274 "error_util.m"
  {
#line 274 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 274 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6800 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 274 "error_util.m"
    else
#line 274 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6806 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 274 "error_util.m"
      else
#line 274 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6812 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 274 "error_util.m"
        else
#line 274 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6818 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 274 "error_util.m"
          else
#line 274 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6824 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 274 "error_util.m"
            else
#line 274 "error_util.m"
              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6830 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 274 "error_util.m"
              else
#line 274 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6836 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 274 "error_util.m"
                else
#line 274 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 6842 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 274 "error_util.m"
                  else
#line 274 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6848 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 274 "error_util.m"
                    else
#line 274 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6854 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 274 "error_util.m"
                      else
#line 274 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 6860 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 274 "error_util.m"
                        else
#line 274 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6866 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 274 "error_util.m"
                          else
#line 274 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6872 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 274 "error_util.m"
                            else
#line 274 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6878 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 274 "error_util.m"
                              else
#line 274 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6884 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 274 "error_util.m"
                                else
#line 274 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6890 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 274 "error_util.m"
                                  else
#line 274 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6896 "parse_tree.error_util.c"
                                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 274 "error_util.m"
                                    else
#line 274 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6902 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 274 "error_util.m"
                                      else
#line 6906 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 274 "error_util.m"
  }
#line 274 "error_util.m"
}

#line 274 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 274 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 274 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 274 "error_util.m"
{
#line 274 "error_util.m"
  {
#line 274 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 274 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 274 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 274 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_41 == parse_tree__error_util__CastY_42);
#line 274 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 274 "error_util.m"
    else
#line 274 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 274 "error_util.m"
        {
#line 274 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 274 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 274 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 274 "error_util.m"
        }
#line 274 "error_util.m"
      else
#line 274 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "error_util.m"
          {
#line 274 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 274 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 274 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 274 "error_util.m"
          }
#line 274 "error_util.m"
        else
#line 274 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 274 "error_util.m"
            {
#line 274 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 274 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 274 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 274 "error_util.m"
            }
#line 274 "error_util.m"
          else
#line 274 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 274 "error_util.m"
              {
#line 274 "error_util.m"
                MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 274 "error_util.m"
                parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 274 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                  {
#line 274 "error_util.m"
                    parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7001 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 274 "error_util.m"
                  }
#line 274 "error_util.m"
              }
#line 274 "error_util.m"
            else
#line 274 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 274 "error_util.m"
                {
#line 274 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "error_util.m"
                  MR_String parse_tree__error_util__V_6_6;

#line 274 "error_util.m"
                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 274 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                    {
#line 274 "error_util.m"
                      parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7026 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 274 "error_util.m"
                    }
#line 274 "error_util.m"
                }
#line 274 "error_util.m"
              else
#line 274 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 274 "error_util.m"
                  {
#line 274 "error_util.m"
                    MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                    MR_String parse_tree__error_util__V_32_32;

#line 274 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 274 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                      {
#line 274 "error_util.m"
                        parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7051 "parse_tree.error_util.c"
                        parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32) == 0);
#line 274 "error_util.m"
                      }
#line 274 "error_util.m"
                  }
#line 274 "error_util.m"
                else
#line 274 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 274 "error_util.m"
                    {
#line 274 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 274 "error_util.m"
                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 274 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                        {
#line 274 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7076 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_7_7 == parse_tree__error_util__V_8_8);
#line 274 "error_util.m"
                        }
#line 274 "error_util.m"
                    }
#line 274 "error_util.m"
                  else
#line 274 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 274 "error_util.m"
                      {
#line 274 "error_util.m"
                        MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                        MR_Integer parse_tree__error_util__V_38_38;

#line 274 "error_util.m"
                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 274 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                          {
#line 274 "error_util.m"
                            parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7101 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == parse_tree__error_util__V_38_38);
#line 274 "error_util.m"
                          }
#line 274 "error_util.m"
                      }
#line 274 "error_util.m"
                    else
#line 274 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 274 "error_util.m"
                        {
#line 274 "error_util.m"
                          MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                          MR_Integer parse_tree__error_util__V_10_10;

#line 274 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 274 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                            {
#line 274 "error_util.m"
                              parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7126 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 274 "error_util.m"
                            }
#line 274 "error_util.m"
                        }
#line 274 "error_util.m"
                      else
#line 274 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 274 "error_util.m"
                          {
#line 274 "error_util.m"
                            MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                            MR_Word parse_tree__error_util__V_28_28;

#line 274 "error_util.m"
                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 274 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                              {
#line 274 "error_util.m"
                                parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7151 "parse_tree.error_util.c"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == parse_tree__error_util__V_28_28);
#line 274 "error_util.m"
                              }
#line 274 "error_util.m"
                          }
#line 274 "error_util.m"
                        else
#line 274 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 274 "error_util.m"
                            {
#line 274 "error_util.m"
                              MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                              MR_String parse_tree__error_util__V_34_34;

#line 274 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 274 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                {
#line 274 "error_util.m"
                                  parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7176 "parse_tree.error_util.c"
                                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34) == 0);
#line 274 "error_util.m"
                                }
#line 274 "error_util.m"
                            }
#line 274 "error_util.m"
                          else
#line 274 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 274 "error_util.m"
                              {
#line 274 "error_util.m"
                                MR_String parse_tree__error_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                MR_String parse_tree__error_util__V_14_14;

#line 274 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 274 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                  {
#line 274 "error_util.m"
                                    parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7201 "parse_tree.error_util.c"
                                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14) == 0);
#line 274 "error_util.m"
                                  }
#line 274 "error_util.m"
                              }
#line 274 "error_util.m"
                            else
#line 274 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 274 "error_util.m"
                                {
#line 274 "error_util.m"
                                  MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                  MR_Word parse_tree__error_util__V_30_30;

#line 274 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 274 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                    {
#line 274 "error_util.m"
                                      parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7226 "parse_tree.error_util.c"
                                      {
#line 7228 "parse_tree.error_util.c"
                                        return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                                      }
#line 274 "error_util.m"
                                    }
#line 274 "error_util.m"
                                }
#line 274 "error_util.m"
                              else
#line 274 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 274 "error_util.m"
                                  {
#line 274 "error_util.m"
                                    MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                    MR_String parse_tree__error_util__V_16_16;

#line 274 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 274 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                      {
#line 274 "error_util.m"
                                        parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7254 "parse_tree.error_util.c"
                                        parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 274 "error_util.m"
                                      }
#line 274 "error_util.m"
                                  }
#line 274 "error_util.m"
                                else
#line 274 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 274 "error_util.m"
                                    {
#line 274 "error_util.m"
                                      MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                      MR_Word parse_tree__error_util__V_22_22;

#line 274 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 274 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                        {
#line 274 "error_util.m"
                                          parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7279 "parse_tree.error_util.c"
                                          {
#line 7281 "parse_tree.error_util.c"
                                            return parse_tree__error_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                          }
#line 274 "error_util.m"
                                        }
#line 274 "error_util.m"
                                    }
#line 274 "error_util.m"
                                  else
#line 274 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 274 "error_util.m"
                                      {
#line 274 "error_util.m"
                                        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                        MR_Word parse_tree__error_util__V_24_24;

#line 274 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 274 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7307 "parse_tree.error_util.c"
                                            {
#line 7309 "parse_tree.error_util.c"
                                              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                            }
#line 274 "error_util.m"
                                          }
#line 274 "error_util.m"
                                      }
#line 274 "error_util.m"
                                    else
#line 274 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 274 "error_util.m"
                                        {
#line 274 "error_util.m"
                                          MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                          MR_Word parse_tree__error_util__V_26_26;

#line 274 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 274 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                            {
#line 274 "error_util.m"
                                              parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7335 "parse_tree.error_util.c"
                                              {
#line 7337 "parse_tree.error_util.c"
                                                return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                              }
#line 274 "error_util.m"
                                            }
#line 274 "error_util.m"
                                        }
#line 274 "error_util.m"
                                      else
#line 274 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                            MR_String parse_tree__error_util__V_18_18;

#line 274 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 274 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                              {
#line 274 "error_util.m"
                                                parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7363 "parse_tree.error_util.c"
                                                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 274 "error_util.m"
                                              }
#line 274 "error_util.m"
                                          }
#line 274 "error_util.m"
                                        else
#line 274 "error_util.m"
                                          {
#line 274 "error_util.m"
                                            MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "error_util.m"
                                            MR_String parse_tree__error_util__V_20_20;

#line 274 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 274 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 274 "error_util.m"
                                              {
#line 274 "error_util.m"
                                                parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7386 "parse_tree.error_util.c"
                                                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 274 "error_util.m"
                                              }
#line 274 "error_util.m"
                                          }
#line 274 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 274 "error_util.m"
  }
#line 274 "error_util.m"
}

#line 640 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 640 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 640 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 640 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 640 "error_util.m"
{
#line 640 "error_util.m"
  {
#line 640 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 640 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 640 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 640 "error_util.m"
    {
#line 640 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 640 "error_util.m"
      return;
    }
#line 640 "error_util.m"
  }
#line 640 "error_util.m"
}

#line 640 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 640 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 640 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 640 "error_util.m"
{
#line 640 "error_util.m"
  {
#line 640 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 640 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 640 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 640 "error_util.m"
    {
#line 640 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 640 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 640 "error_util.m"
  }
#line 640 "error_util.m"
}

#line 65 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0(
#line 65 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 65 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 65 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 65 "error_util.m"
{
#line 65 "error_util.m"
  {
#line 65 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 65 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 65 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 65 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 65 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 7485 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "error_util.m"
    else
#line 65 "error_util.m"
      {
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 65 "error_util.m"
        {
#line 65 "error_util.m"
          parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_10_10, parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
        }
#line 7511 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 65 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 65 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 65 "error_util.m"
        else
#line 65 "error_util.m"
          {
#line 65 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 65 "error_util.m"
            {
#line 65 "error_util.m"
              parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 7531 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 65 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 65 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 65 "error_util.m"
            else
#line 65 "error_util.m"
              {
#line 65 "error_util.m"
                {
#line 65 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
#line 65 "error_util.m"
                  return;
                }
#line 65 "error_util.m"
              }
#line 65 "error_util.m"
          }
#line 65 "error_util.m"
      }
#line 65 "error_util.m"
  }
#line 65 "error_util.m"
}

#line 65 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0(
#line 65 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 65 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 65 "error_util.m"
{
#line 65 "error_util.m"
  {
#line 65 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 65 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 65 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 65 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 65 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 65 "error_util.m"
    else
#line 65 "error_util.m"
      {
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_11_11;
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 7604 "parse_tree.error_util.c"
        {
#line 7606 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 65 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
          {
#line 7613 "parse_tree.error_util.c"
            {
#line 7615 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 65 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
              {
#line 7622 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 7624 "parse_tree.error_util.c"
                {
#line 7626 "parse_tree.error_util.c"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_11_11, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_8_8)));
                }
#line 65 "error_util.m"
              }
#line 65 "error_util.m"
          }
#line 65 "error_util.m"
      }
#line 65 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 65 "error_util.m"
  }
#line 65 "error_util.m"
}

#line 72 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0(
#line 72 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 72 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 72 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 72 "error_util.m"
{
#line 72 "error_util.m"
  {
#line 72 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 72 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 72 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 72 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 72 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 7666 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "error_util.m"
    else
#line 72 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "error_util.m"
        else
#line 72 "error_util.m"
          if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "error_util.m"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
          else
#line 72 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
            else
#line 7690 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
      else
#line 72 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "error_util.m"
          if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "error_util.m"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
          else
#line 72 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "error_util.m"
            else
#line 72 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
              else
#line 7714 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
        else
#line 72 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
            else
#line 72 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
              else
#line 72 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "error_util.m"
                else
#line 7738 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "error_util.m"
          else
#line 72 "error_util.m"
            {
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7755 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
              else
#line 72 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7761 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
                else
#line 72 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7767 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
                  else
#line 72 "error_util.m"
                    {
#line 72 "error_util.m"
                      MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 72 "error_util.m"
                      MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "error_util.m"
                      MR_Word parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 72 "error_util.m"
                      MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 72 "error_util.m"
                      MR_Word parse_tree__error_util__V_36_36;
#line 72 "error_util.m"
                      MR_Integer parse_tree__error_util__V_49_49 = (MR_Integer) parse_tree__error_util__V_48_48;
#line 72 "error_util.m"
                      MR_Integer parse_tree__error_util__V_50_50 = (MR_Integer) parse_tree__error_util__V_32_32;

#line 72 "error_util.m"
                      {
#line 72 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_36_36, parse_tree__error_util__V_49_49, parse_tree__error_util__V_50_50);
                      }
#line 7793 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 72 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 72 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_36_36;
#line 72 "error_util.m"
                      else
#line 72 "error_util.m"
                        {
#line 72 "error_util.m"
                          MR_Word parse_tree__error_util__V_37_37;
#line 72 "error_util.m"
                          MR_Integer parse_tree__error_util__V_51_51 = (MR_Integer) parse_tree__error_util__V_47_47;
#line 72 "error_util.m"
                          MR_Integer parse_tree__error_util__V_52_52 = (MR_Integer) parse_tree__error_util__V_33_33;

#line 72 "error_util.m"
                          {
#line 72 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_37_37, parse_tree__error_util__V_51_51, parse_tree__error_util__V_52_52);
                          }
#line 7817 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 72 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 72 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_37_37;
#line 72 "error_util.m"
                          else
#line 72 "error_util.m"
                            {
#line 72 "error_util.m"
                              MR_Word parse_tree__error_util__V_38_38;

#line 72 "error_util.m"
                              {
#line 72 "error_util.m"
                                parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_38_38, parse_tree__error_util__V_46_46, parse_tree__error_util__V_34_34);
                              }
#line 7837 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_38_38 == (MR_Integer) 0);
#line 72 "error_util.m"
                              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 72 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_38_38;
#line 72 "error_util.m"
                              else
#line 72 "error_util.m"
                                {
#line 72 "error_util.m"
                                  {
#line 72 "error_util.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
#line 72 "error_util.m"
                                    return;
                                  }
#line 72 "error_util.m"
                                }
#line 72 "error_util.m"
                            }
#line 72 "error_util.m"
                        }
#line 72 "error_util.m"
                    }
#line 72 "error_util.m"
            }
#line 72 "error_util.m"
  }
#line 72 "error_util.m"
}

#line 72 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0(
#line 72 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 72 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 72 "error_util.m"
{
#line 72 "error_util.m"
  {
#line 72 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 72 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 72 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 72 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_17 == parse_tree__error_util__CastY_18);
#line 72 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 72 "error_util.m"
    else
#line 72 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "error_util.m"
        {
#line 72 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 72 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 72 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 72 "error_util.m"
        }
#line 72 "error_util.m"
      else
#line 72 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "error_util.m"
          {
#line 72 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 72 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 72 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 72 "error_util.m"
          }
#line 72 "error_util.m"
        else
#line 72 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "error_util.m"
            {
#line 72 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 72 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 72 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 72 "error_util.m"
            }
#line 72 "error_util.m"
          else
#line 72 "error_util.m"
            {
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_19_19;
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_13_13;
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_14_14;
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_15_15;
#line 72 "error_util.m"
              MR_Word parse_tree__error_util__V_16_16;

#line 72 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 72 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                {
#line 72 "error_util.m"
                  parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 72 "error_util.m"
                  parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 72 "error_util.m"
                  parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 72 "error_util.m"
                  parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 7977 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 72 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                    {
#line 7983 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 72 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                        {
#line 7989 "parse_tree.error_util.c"
                          {
#line 7991 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                          }
#line 72 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                            {
#line 7998 "parse_tree.error_util.c"
                              parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 8000 "parse_tree.error_util.c"
                              {
#line 8002 "parse_tree.error_util.c"
                                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_19_19, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                              }
#line 72 "error_util.m"
                            }
#line 72 "error_util.m"
                        }
#line 72 "error_util.m"
                    }
#line 72 "error_util.m"
                }
#line 72 "error_util.m"
            }
#line 72 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 72 "error_util.m"
  }
#line 72 "error_util.m"
}

#line 106 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0(
#line 106 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 106 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 106 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 106 "error_util.m"
{
#line 106 "error_util.m"
  {
#line 106 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 106 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 106 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 106 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 106 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8046 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "error_util.m"
    else
#line 106 "error_util.m"
      {
#line 106 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 106 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 106 "error_util.m"
        {
#line 106 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 106 "error_util.m"
        {
#line 106 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 106 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 106 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 8071 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 106 "error_util.m"
        else
#line 106 "error_util.m"
          {
#line 106 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 106 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8081 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 106 "error_util.m"
            else
#line 106 "error_util.m"
              {
#line 106 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 106 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 106 "error_util.m"
                  {
#line 106 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                  }
#line 106 "error_util.m"
                else
#line 106 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 106 "error_util.m"
                    {
#line 106 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                    }
#line 106 "error_util.m"
                  else
#line 106 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 106 "error_util.m"
                      {
#line 106 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                      }
#line 106 "error_util.m"
                    else
#line 106 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 106 "error_util.m"
                        {
#line 106 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                        }
#line 106 "error_util.m"
                      else
#line 106 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 106 "error_util.m"
                          {
#line 106 "error_util.m"
                            parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                            parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                          }
#line 106 "error_util.m"
                        else
#line 106 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 106 "error_util.m"
                            {
#line 106 "error_util.m"
                              parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                            }
#line 106 "error_util.m"
                          else
#line 106 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 106 "error_util.m"
                              {
#line 106 "error_util.m"
                                parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                              }
#line 106 "error_util.m"
                            else
#line 106 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 106 "error_util.m"
                                {
#line 106 "error_util.m"
                                  parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                }
#line 106 "error_util.m"
                              else
#line 106 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 106 "error_util.m"
                                  {
#line 106 "error_util.m"
                                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                  }
#line 106 "error_util.m"
                                else
#line 106 "error_util.m"
                                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 106 "error_util.m"
                                    {
#line 106 "error_util.m"
                                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                    }
#line 106 "error_util.m"
                                  else
#line 106 "error_util.m"
                                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 106 "error_util.m"
                                      {
#line 106 "error_util.m"
                                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                      }
#line 106 "error_util.m"
                                    else
#line 106 "error_util.m"
                                      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 106 "error_util.m"
                                        {
#line 106 "error_util.m"
                                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                        }
#line 106 "error_util.m"
                                      else
#line 106 "error_util.m"
                                        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 106 "error_util.m"
                                          {
#line 106 "error_util.m"
                                            parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                          }
#line 106 "error_util.m"
                                        else
#line 106 "error_util.m"
                                          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 106 "error_util.m"
                                            {
#line 106 "error_util.m"
                                              parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                            }
#line 106 "error_util.m"
                                          else
#line 106 "error_util.m"
                                            if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 106 "error_util.m"
                                              {
#line 106 "error_util.m"
                                                parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 106 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                              }
#line 106 "error_util.m"
                                            else
#line 106 "error_util.m"
                                              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 106 "error_util.m"
                                                {
#line 106 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_8_8;
#line 106 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_15_15;
#line 106 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_16_16;

#line 106 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 106 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
                                                    {
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_15_15 = (MR_Integer) parse_tree__error_util__V_7_7;
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_16_16 = (MR_Integer) parse_tree__error_util__V_8_8;
#line 106 "error_util.m"
                                                      {
#line 106 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                                      }
#line 106 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                                    }
#line 106 "error_util.m"
                                                }
#line 106 "error_util.m"
                                              else
#line 106 "error_util.m"
                                                {
#line 106 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_10_10;
#line 106 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_17_17;
#line 106 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_18_18;

#line 106 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 106 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
                                                    {
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_17_17 = (MR_Integer) parse_tree__error_util__V_9_9;
#line 106 "error_util.m"
                                                      parse_tree__error_util__V_18_18 = (MR_Integer) parse_tree__error_util__V_10_10;
#line 106 "error_util.m"
                                                      {
#line 106 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                                      }
#line 106 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
                                                    }
#line 106 "error_util.m"
                                                }
#line 106 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 106 "error_util.m"
                else
#line 106 "error_util.m"
                  {
#line 106 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 106 "error_util.m"
                    return;
                  }
#line 106 "error_util.m"
              }
#line 106 "error_util.m"
          }
#line 106 "error_util.m"
      }
#line 106 "error_util.m"
  }
#line 106 "error_util.m"
}

#line 106 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____error_phase_0_0(
#line 106 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 106 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 106 "error_util.m"
{
#line 106 "error_util.m"
  {
#line 106 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 106 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8382 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 106 "error_util.m"
    else
#line 106 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8388 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 106 "error_util.m"
      else
#line 106 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8394 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 106 "error_util.m"
        else
#line 106 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8400 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 106 "error_util.m"
          else
#line 106 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8406 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 106 "error_util.m"
            else
#line 106 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8412 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 106 "error_util.m"
              else
#line 106 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8418 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 106 "error_util.m"
                else
#line 106 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8424 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 106 "error_util.m"
                  else
#line 106 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8430 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 106 "error_util.m"
                    else
#line 106 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8436 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 106 "error_util.m"
                      else
#line 106 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8442 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 106 "error_util.m"
                        else
#line 106 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8448 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 106 "error_util.m"
                          else
#line 106 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8454 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 106 "error_util.m"
                            else
#line 106 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8460 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 106 "error_util.m"
                              else
#line 106 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8466 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 106 "error_util.m"
                                else
#line 106 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8472 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 106 "error_util.m"
                                  else
#line 8476 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 106 "error_util.m"
  }
#line 106 "error_util.m"
}

#line 106 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0(
#line 106 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 106 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 106 "error_util.m"
{
#line 106 "error_util.m"
  {
#line 106 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 106 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_37 == parse_tree__error_util__CastY_38);
#line 106 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 106 "error_util.m"
    else
#line 106 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 106 "error_util.m"
        {
#line 106 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_29 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_30 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_30 == parse_tree__error_util__CastX_29);
#line 106 "error_util.m"
        }
#line 106 "error_util.m"
      else
#line 106 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 106 "error_util.m"
          {
#line 106 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_31 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_32 == parse_tree__error_util__CastX_31);
#line 106 "error_util.m"
          }
#line 106 "error_util.m"
        else
#line 106 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 106 "error_util.m"
            {
#line 106 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 106 "error_util.m"
            }
#line 106 "error_util.m"
          else
#line 106 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 106 "error_util.m"
              {
#line 106 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_25 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_26 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_26 == parse_tree__error_util__CastX_25);
#line 106 "error_util.m"
              }
#line 106 "error_util.m"
            else
#line 106 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 106 "error_util.m"
                {
#line 106 "error_util.m"
                  MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                  MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_20 == parse_tree__error_util__CastX_19);
#line 106 "error_util.m"
                }
#line 106 "error_util.m"
              else
#line 106 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 106 "error_util.m"
                  {
#line 106 "error_util.m"
                    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 106 "error_util.m"
                  }
#line 106 "error_util.m"
                else
#line 106 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 106 "error_util.m"
                    {
#line 106 "error_util.m"
                      MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                      MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 106 "error_util.m"
                    }
#line 106 "error_util.m"
                  else
#line 106 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 106 "error_util.m"
                      {
#line 106 "error_util.m"
                        MR_Integer parse_tree__error_util__CastX_33 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                        MR_Integer parse_tree__error_util__CastY_34 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_34 == parse_tree__error_util__CastX_33);
#line 106 "error_util.m"
                      }
#line 106 "error_util.m"
                    else
#line 106 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 106 "error_util.m"
                        {
#line 106 "error_util.m"
                          MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                          MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_22 == parse_tree__error_util__CastX_21);
#line 106 "error_util.m"
                        }
#line 106 "error_util.m"
                      else
#line 106 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 106 "error_util.m"
                          {
#line 106 "error_util.m"
                            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 106 "error_util.m"
                          }
#line 106 "error_util.m"
                        else
#line 106 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 106 "error_util.m"
                            {
#line 106 "error_util.m"
                              MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                              MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_18 == parse_tree__error_util__CastX_17);
#line 106 "error_util.m"
                            }
#line 106 "error_util.m"
                          else
#line 106 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 106 "error_util.m"
                              {
#line 106 "error_util.m"
                                MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                                MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 106 "error_util.m"
                              }
#line 106 "error_util.m"
                            else
#line 106 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 106 "error_util.m"
                                {
#line 106 "error_util.m"
                                  MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                                  MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 106 "error_util.m"
                                }
#line 106 "error_util.m"
                              else
#line 106 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 106 "error_util.m"
                                  {
#line 106 "error_util.m"
                                    MR_Integer parse_tree__error_util__CastX_27 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                                    MR_Integer parse_tree__error_util__CastY_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_28 == parse_tree__error_util__CastX_27);
#line 106 "error_util.m"
                                  }
#line 106 "error_util.m"
                                else
#line 106 "error_util.m"
                                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 106 "error_util.m"
                                    {
#line 106 "error_util.m"
                                      MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 106 "error_util.m"
                                      MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 106 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 106 "error_util.m"
                                    }
#line 106 "error_util.m"
                                  else
#line 106 "error_util.m"
                                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 106 "error_util.m"
                                      {
#line 106 "error_util.m"
                                        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "error_util.m"
                                        MR_Word parse_tree__error_util__V_16_16;

#line 106 "error_util.m"
                                        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 106 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
                                          {
#line 106 "error_util.m"
                                            parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8751 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_15_15 == parse_tree__error_util__V_16_16);
#line 106 "error_util.m"
                                          }
#line 106 "error_util.m"
                                      }
#line 106 "error_util.m"
                                    else
#line 106 "error_util.m"
                                      {
#line 106 "error_util.m"
                                        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "error_util.m"
                                        MR_Word parse_tree__error_util__V_24_24;

#line 106 "error_util.m"
                                        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 106 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 106 "error_util.m"
                                          {
#line 106 "error_util.m"
                                            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8774 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_23_23 == parse_tree__error_util__V_24_24);
#line 106 "error_util.m"
                                          }
#line 106 "error_util.m"
                                      }
#line 106 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 106 "error_util.m"
  }
#line 106 "error_util.m"
}

#line 162 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 162 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 162 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 162 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 162 "error_util.m"
{
#line 162 "error_util.m"
  {
#line 162 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 162 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_87 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 162 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_88 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 162 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_87 == parse_tree__error_util__CastY_88);
#line 162 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 162 "error_util.m"
    else
#line 162 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
        {
#line 162 "error_util.m"
          MR_Word parse_tree__error_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 162 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
            {
#line 162 "error_util.m"
              MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_109_109)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 162 "error_util.m"
                return;
              }
#line 162 "error_util.m"
            }
#line 162 "error_util.m"
          else
#line 162 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
            else
#line 162 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
              else
#line 162 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
                else
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
        }
#line 162 "error_util.m"
      else
#line 162 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
          {
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 162 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
            else
#line 162 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
                {
#line 162 "error_util.m"
                  MR_Word parse_tree__error_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 162 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 162 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 162 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27;
#line 162 "error_util.m"
                  MR_Integer parse_tree__error_util__V_118_118 = (MR_Integer) parse_tree__error_util__V_112_112;
#line 162 "error_util.m"
                  MR_Integer parse_tree__error_util__V_119_119 = (MR_Integer) parse_tree__error_util__V_24_24;

#line 162 "error_util.m"
                  {
#line 162 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_27_27, parse_tree__error_util__V_118_118, parse_tree__error_util__V_119_119);
                  }
#line 162 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == (MR_Integer) 0);
#line 162 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 162 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_27_27;
#line 162 "error_util.m"
                  else
#line 162 "error_util.m"
                    {
#line 162 "error_util.m"
                      MR_Word parse_tree__error_util__V_28_28;
#line 162 "error_util.m"
                      MR_Integer parse_tree__error_util__V_120_120 = (MR_Integer) parse_tree__error_util__V_111_111;
#line 162 "error_util.m"
                      MR_Integer parse_tree__error_util__V_121_121 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 162 "error_util.m"
                      {
#line 162 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_120_120, parse_tree__error_util__V_121_121);
                      }
#line 162 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 162 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 162 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 162 "error_util.m"
                      else
#line 162 "error_util.m"
                        {
#line 162 "error_util.m"
                          {
#line 162 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_110_110)), ((MR_Box) (parse_tree__error_util__V_26_26)));
#line 162 "error_util.m"
                            return;
                          }
#line 162 "error_util.m"
                        }
#line 162 "error_util.m"
                    }
#line 162 "error_util.m"
                }
#line 162 "error_util.m"
              else
#line 162 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
                else
#line 162 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
                  else
#line 162 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
          }
#line 162 "error_util.m"
        else
#line 162 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
            {
#line 162 "error_util.m"
              MR_Word parse_tree__error_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 162 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
              else
#line 162 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                else
#line 162 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
                    {
#line 162 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 162 "error_util.m"
                      {
#line 162 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_117_117)), ((MR_Box) (parse_tree__error_util__V_49_49)));
#line 162 "error_util.m"
                        return;
                      }
#line 162 "error_util.m"
                    }
#line 162 "error_util.m"
                  else
#line 162 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
                    else
#line 162 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
            }
#line 162 "error_util.m"
          else
#line 162 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "error_util.m"
                MR_Box parse_tree__error_util__V_113_113 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 162 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                else
#line 162 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                  else
#line 162 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                    else
#line 162 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
                        {
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_92_92;
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_93_93;
#line 162 "error_util.m"
                          MR_Box parse_tree__error_util__V_86_86 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 9061 "parse_tree.error_util.c"
                          {
#line 9063 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_114_114, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_92_92);
                          }
#line 9066 "parse_tree.error_util.c"
                          {
#line 9068 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_93_93);
                          }
#line 162 "error_util.m"
                          {
#line 162 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_92_92, parse_tree__error_util__TypeInfo_93_93, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_113_113, parse_tree__error_util__V_86_86);
#line 162 "error_util.m"
                            return;
                          }
#line 162 "error_util.m"
                        }
#line 162 "error_util.m"
                      else
#line 162 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
              }
#line 162 "error_util.m"
            else
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 162 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                else
#line 162 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                  else
#line 162 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 162 "error_util.m"
                    else
#line 162 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 162 "error_util.m"
                      else
#line 162 "error_util.m"
                        {
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 162 "error_util.m"
                          MR_Word parse_tree__error_util__V_70_70;

#line 162 "error_util.m"
                          {
#line 162 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__V_70_70, ((MR_Box) (parse_tree__error_util__V_116_116)), ((MR_Box) (parse_tree__error_util__V_68_68)));
                          }
#line 162 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_70_70 == (MR_Integer) 0);
#line 162 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 162 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_70_70;
#line 162 "error_util.m"
                          else
#line 162 "error_util.m"
                            {
#line 162 "error_util.m"
                              {
#line 162 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_115_115)), ((MR_Box) (parse_tree__error_util__V_69_69)));
#line 162 "error_util.m"
                                return;
                              }
#line 162 "error_util.m"
                            }
#line 162 "error_util.m"
                        }
#line 162 "error_util.m"
              }
#line 162 "error_util.m"
  }
#line 162 "error_util.m"
}

#line 162 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 162 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 162 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 162 "error_util.m"
{
#line 162 "error_util.m"
  {
#line 162 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 162 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 162 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 162 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_19 == parse_tree__error_util__CastY_20);
#line 162 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 162 "error_util.m"
    else
#line 162 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 162 "error_util.m"
        {
#line 162 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 162 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 162 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4;

#line 162 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 162 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
            {
#line 162 "error_util.m"
              parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9208 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_26_26 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
              }
#line 162 "error_util.m"
            }
#line 162 "error_util.m"
        }
#line 162 "error_util.m"
      else
#line 162 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 162 "error_util.m"
          {
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 162 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 162 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 162 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 162 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 162 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 162 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                  {
#line 162 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 162 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                      {
#line 9264 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_27_27 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 162 "error_util.m"
                        {
#line 162 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_27_27, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 162 "error_util.m"
                      }
#line 162 "error_util.m"
                  }
#line 162 "error_util.m"
              }
#line 162 "error_util.m"
          }
#line 162 "error_util.m"
        else
#line 162 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 162 "error_util.m"
            {
#line 162 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 162 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 162 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12;

#line 162 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 162 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                {
#line 162 "error_util.m"
                  parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9300 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 162 "error_util.m"
                  {
#line 162 "error_util.m"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_11_11)), ((MR_Box) (parse_tree__error_util__V_12_12)));
                  }
#line 162 "error_util.m"
                }
#line 162 "error_util.m"
            }
#line 162 "error_util.m"
          else
#line 162 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_22;
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_24_24;
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_25_25;
#line 162 "error_util.m"
                MR_Box parse_tree__error_util__V_17_17 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 162 "error_util.m"
                MR_Box parse_tree__error_util__V_18_18;
#line 162 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_23;

#line 162 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 162 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                  {
#line 162 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "error_util.m"
                    parse_tree__error_util__V_18_18 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 9342 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_23 = (MR_Integer) 1;
#line 9344 "parse_tree.error_util.c"
                    {
#line 9346 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_21, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_24_24);
                    }
#line 9349 "parse_tree.error_util.c"
                    {
#line 9351 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_22, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_25_25);
                    }
#line 162 "error_util.m"
                    {
#line 162 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_24_24, parse_tree__error_util__TypeInfo_25_25, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                    }
#line 162 "error_util.m"
                  }
#line 162 "error_util.m"
              }
#line 162 "error_util.m"
            else
#line 162 "error_util.m"
              {
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 162 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 162 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 162 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                  {
#line 162 "error_util.m"
                    parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 9390 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 162 "error_util.m"
                    {
#line 162 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_13_13)), ((MR_Box) (parse_tree__error_util__V_15_15)));
                    }
#line 162 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 162 "error_util.m"
                      {
#line 9401 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 162 "error_util.m"
                        {
#line 162 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_14_14)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                        }
#line 162 "error_util.m"
                      }
#line 162 "error_util.m"
                  }
#line 162 "error_util.m"
              }
#line 162 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 162 "error_util.m"
  }
#line 162 "error_util.m"
}

#line 150 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 150 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 150 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 150 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 150 "error_util.m"
{
#line 150 "error_util.m"
  {
#line 150 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 150 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 150 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 150 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 150 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9445 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "error_util.m"
    else
#line 150 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 150 "error_util.m"
        {
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 150 "error_util.m"
          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 150 "error_util.m"
            {
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "error_util.m"
              MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_29_29;

#line 150 "error_util.m"
              {
#line 150 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
              }
#line 9482 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 150 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 150 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 150 "error_util.m"
              else
#line 150 "error_util.m"
                {
#line 150 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;
#line 150 "error_util.m"
                  MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 150 "error_util.m"
                  MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 150 "error_util.m"
                  {
#line 150 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                  }
#line 9506 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 150 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 150 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 150 "error_util.m"
                  else
#line 150 "error_util.m"
                    {
#line 150 "error_util.m"
                      MR_Word parse_tree__error_util__V_31_31;

#line 150 "error_util.m"
                      {
#line 150 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                      }
#line 9526 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 150 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 150 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 150 "error_util.m"
                      else
#line 150 "error_util.m"
                        {
#line 150 "error_util.m"
                          {
#line 150 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
#line 150 "error_util.m"
                            return;
                          }
#line 150 "error_util.m"
                        }
#line 150 "error_util.m"
                    }
#line 150 "error_util.m"
                }
#line 150 "error_util.m"
            }
#line 150 "error_util.m"
          else
#line 9555 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "error_util.m"
        }
#line 150 "error_util.m"
      else
#line 150 "error_util.m"
        {
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9570 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "error_util.m"
          else
#line 150 "error_util.m"
            {
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "error_util.m"
              MR_Word parse_tree__error_util__V_8_8;

#line 150 "error_util.m"
              {
#line 150 "error_util.m"
                mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
              }
#line 9588 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 150 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 150 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 150 "error_util.m"
              else
#line 150 "error_util.m"
                {
#line 150 "error_util.m"
                  {
#line 150 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 150 "error_util.m"
                    return;
                  }
#line 150 "error_util.m"
                }
#line 150 "error_util.m"
            }
#line 150 "error_util.m"
        }
#line 150 "error_util.m"
  }
#line 150 "error_util.m"
}

#line 150 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 150 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 150 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 150 "error_util.m"
{
#line 150 "error_util.m"
  {
#line 150 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 150 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 150 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 150 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 150 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 150 "error_util.m"
    else
#line 150 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 150 "error_util.m"
        {
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "error_util.m"
          MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_11_11;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_12_12;
#line 150 "error_util.m"
          MR_Integer parse_tree__error_util__V_13_13;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_14_14;

#line 150 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 150 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
            {
#line 150 "error_util.m"
              parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "error_util.m"
              parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "error_util.m"
              parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "error_util.m"
              parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 9683 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 9685 "parse_tree.error_util.c"
              {
#line 9687 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
              }
#line 150 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                {
#line 9694 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 150 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                    {
#line 9700 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 150 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                        {
#line 9706 "parse_tree.error_util.c"
                          parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9708 "parse_tree.error_util.c"
                          {
#line 9710 "parse_tree.error_util.c"
                            return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                          }
#line 150 "error_util.m"
                        }
#line 150 "error_util.m"
                    }
#line 150 "error_util.m"
                }
#line 150 "error_util.m"
            }
#line 150 "error_util.m"
        }
#line 150 "error_util.m"
      else
#line 150 "error_util.m"
        {
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_5_5;
#line 150 "error_util.m"
          MR_Word parse_tree__error_util__V_6_6;

#line 150 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 150 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
            {
#line 150 "error_util.m"
              parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "error_util.m"
              parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 9748 "parse_tree.error_util.c"
              {
#line 9750 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
              }
#line 150 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 150 "error_util.m"
                {
#line 9757 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9759 "parse_tree.error_util.c"
                  {
#line 9761 "parse_tree.error_util.c"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                  }
#line 150 "error_util.m"
                }
#line 150 "error_util.m"
            }
#line 150 "error_util.m"
        }
#line 150 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 150 "error_util.m"
  }
#line 150 "error_util.m"
}

#line 1428 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1428 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1428 "error_util.m"
{
#line 1428 "error_util.m"
  {
#line 1428 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1428 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1428 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1428 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1428 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9801 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1428 "error_util.m"
    else
#line 1428 "error_util.m"
      {
#line 1428 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1428 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1428 "error_util.m"
        {
#line 1428 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 9823 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1428 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1428 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1428 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1428 "error_util.m"
        else
#line 1428 "error_util.m"
          {
#line 1428 "error_util.m"
            {
#line 1428 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1428 "error_util.m"
              return;
            }
#line 1428 "error_util.m"
          }
#line 1428 "error_util.m"
      }
#line 1428 "error_util.m"
  }
#line 1428 "error_util.m"
}

#line 1428 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1428 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1428 "error_util.m"
{
#line 1428 "error_util.m"
  {
#line 1428 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1428 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1428 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1428 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1428 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1428 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1428 "error_util.m"
    else
#line 1428 "error_util.m"
      {
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1428 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1428 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1428 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 9890 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1428 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1428 "error_util.m"
          {
#line 9896 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[2];
#line 9898 "parse_tree.error_util.c"
            {
#line 9900 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1428 "error_util.m"
          }
#line 1428 "error_util.m"
      }
#line 1428 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1428 "error_util.m"
  }
#line 1428 "error_util.m"
}

#line 97 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0(
#line 97 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 97 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 97 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 97 "error_util.m"
{
#line 97 "error_util.m"
  {
#line 97 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 97 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 97 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 97 "error_util.m"
    {
#line 97 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 97 "error_util.m"
      return;
    }
#line 97 "error_util.m"
  }
#line 97 "error_util.m"
}

#line 97 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0(
#line 97 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 97 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 97 "error_util.m"
{
#line 9955 "parse_tree.error_util.c"
  {
#line 9957 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 9960 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 9962 "parse_tree.error_util.c"
  }
#line 97 "error_util.m"
}

#line 1518 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1518 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1518 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1518 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1518 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1518 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1518 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1518 "error_util.m"
{
#line 1521 "error_util.m"
  while (MR_TRUE)
#line 1521 "error_util.m"
    {
#line 1521 "error_util.m"
      /* tailcall optimized into a loop */
#line 1521 "error_util.m"
      {
#line 1521 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1521 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1521 "error_util.m"
          {
#line 1521 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1521 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1521 "error_util.m"
          }
#line 1521 "error_util.m"
        else
#line 1522 "error_util.m"
          {
#line 1522 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1522 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1522 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1522 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1522 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1523 "error_util.m"
            {
#line 1523 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1524 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1524 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1525 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1528 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1526 "error_util.m"
              {
#line 1526 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1526 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1526 "error_util.m"
                {
#line 1526 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1526 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1526 "error_util.m"
                }
#line 1526 "error_util.m"
                {
#line 1526 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1527 "error_util.m"
                /* direct tailcall eliminated */
#line 1527 "error_util.m"
                {
#line 1527 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1527 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1527 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1527 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1527 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1527 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1527 "error_util.m"
                }
#line 1527 "error_util.m"
                continue;
#line 1526 "error_util.m"
              }
#line 1528 "error_util.m"
            else
#line 1529 "error_util.m"
              {
#line 1529 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1530 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1529 "error_util.m"
              }
#line 1522 "error_util.m"
          }
#line 1521 "error_util.m"
      }
#line 1521 "error_util.m"
      break;
#line 1521 "error_util.m"
    }
#line 1518 "error_util.m"
}

#line 1493 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1493 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1493 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1493 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1493 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1493 "error_util.m"
{
#line 1498 "error_util.m"
  {
#line 1498 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1498 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1499 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1498 "error_util.m"
    else
#line 1501 "error_util.m"
      {
#line 1501 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1501 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1501 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1501 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1501 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1513 "error_util.m"
        {
#line 1513 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1514 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1514 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1515 "error_util.m"
        {
#line 1515 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1515 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "error_util.m"
        }
#line 1515 "error_util.m"
        {
#line 1515 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1504 "error_util.m"
        {
#line 1504 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1504 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1504 "error_util.m"
        }
#line 1505 "error_util.m"
        {
#line 1505 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1506 "error_util.m"
        {
#line 1506 "error_util.m"
          MR_Word base;
#line 1506 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1506 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1506 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1506 "error_util.m"
        }
#line 1501 "error_util.m"
      }
#line 1498 "error_util.m"
  }
#line 1493 "error_util.m"
}

#line 1445 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1445 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1445 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1445 "error_util.m"
{
#line 1451 "error_util.m"
  {
#line 1451 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1451 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1452 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "error_util.m"
    else
#line 1454 "error_util.m"
      {
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1454 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1454 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1454 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1454 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1454 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1459 "error_util.m"
        if ((parse_tree__error_util__TreatAsFirst_6 == (MR_Integer) 1))
#line 1461 "error_util.m"
          parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1459 "error_util.m"
        else
#line 1457 "error_util.m"
          {
#line 1458 "error_util.m"
            parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1457 "error_util.m"
          }
#line 1463 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1465 "error_util.m"
        {
#line 1465 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1465 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1465 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "error_util.m"
        }
#line 10287 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1466 "error_util.m"
        {
#line 1466 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1471 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "error_util.m"
          {
#line 1469 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1470 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "error_util.m"
          }
#line 1471 "error_util.m"
        else
#line 1472 "error_util.m"
          {
#line 1472 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1472 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1473 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1483 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1484 "error_util.m"
              {
#line 1484 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1485 "error_util.m"
                {
#line 1485 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1485 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1485 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1485 "error_util.m"
                }
#line 1485 "error_util.m"
                {
#line 1485 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1485 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1485 "error_util.m"
                }
#line 1484 "error_util.m"
              }
#line 1483 "error_util.m"
            else
#line 1475 "error_util.m"
              {
#line 1475 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1475 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1475 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1475 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1475 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1475 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1475 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1475 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1475 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1513 "error_util.m"
                {
#line 1513 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1514 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1514 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1515 "error_util.m"
                {
#line 1515 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1515 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "error_util.m"
                }
#line 1515 "error_util.m"
                {
#line 1515 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1478 "error_util.m"
                {
#line 1478 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1478 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1478 "error_util.m"
                }
#line 1480 "error_util.m"
                {
#line 1480 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1482 "error_util.m"
                {
#line 1482 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1482 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1482 "error_util.m"
                }
#line 1475 "error_util.m"
              }
#line 1472 "error_util.m"
          }
#line 1488 "error_util.m"
        {
#line 1488 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1490 "error_util.m"
        {
#line 1490 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1490 "error_util.m"
        {
#line 1490 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1454 "error_util.m"
      }
#line 1451 "error_util.m"
  }
#line 1445 "error_util.m"
}

#line 1413 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1413 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1413 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1413 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1413 "error_util.m"
{
#line 1422 "error_util.m"
  while (MR_TRUE)
#line 1422 "error_util.m"
    {
#line 1422 "error_util.m"
      /* tailcall optimized into a loop */
#line 1422 "error_util.m"
      {
#line 1422 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1422 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1422 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1416 "error_util.m"
        {
#line 1416 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1422 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1419 "error_util.m"
          {
#line 1417 "error_util.m"
            {
#line 1417 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1419 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1418 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1419 "error_util.m"
            else
#line 1420 "error_util.m"
              {
#line 1420 "error_util.m"
                /* direct tailcall eliminated */
#line 1420 "error_util.m"
                {
#line 1420 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1420 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1420 "error_util.m"
                }
#line 1420 "error_util.m"
                continue;
#line 1420 "error_util.m"
              }
#line 1419 "error_util.m"
          }
#line 1422 "error_util.m"
        else
#line 1423 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1422 "error_util.m"
      }
#line 1422 "error_util.m"
      break;
#line 1422 "error_util.m"
    }
#line 1413 "error_util.m"
}

#line 1403 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1403 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1403 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1403 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1403 "error_util.m"
{
#line 1405 "error_util.m"
  while (MR_TRUE)
#line 1405 "error_util.m"
    {
#line 1405 "error_util.m"
      /* tailcall optimized into a loop */
#line 1405 "error_util.m"
      {
#line 1405 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1405 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1405 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1406 "error_util.m"
        {
#line 1406 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1405 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1405 "error_util.m"
          {
#line 1407 "error_util.m"
            {
#line 1407 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1409 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1408 "error_util.m"
              {
#line 1408 "error_util.m"
                /* direct tailcall eliminated */
#line 1408 "error_util.m"
                {
#line 1408 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1408 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1408 "error_util.m"
                }
#line 1408 "error_util.m"
                continue;
#line 1408 "error_util.m"
              }
#line 1409 "error_util.m"
            else
#line 1410 "error_util.m"
              {
#line 1410 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1410 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1410 "error_util.m"
              }
#line 1405 "error_util.m"
          }
#line 1405 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1405 "error_util.m"
      }
#line 1405 "error_util.m"
      break;
#line 1405 "error_util.m"
    }
#line 1403 "error_util.m"
}

#line 1390 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1390 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1390 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1390 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1390 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1390 "error_util.m"
{
#line 1399 "error_util.m"
  while (MR_TRUE)
#line 1399 "error_util.m"
    {
#line 1399 "error_util.m"
      /* tailcall optimized into a loop */
#line 1399 "error_util.m"
      {
#line 1399 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1399 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1394 "error_util.m"
        {
#line 1394 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1399 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1395 "error_util.m"
          {
#line 1395 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1395 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1395 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1395 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1395 "error_util.m"
            {
#line 1395 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1396 "error_util.m"
            {
#line 1396 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1397 "error_util.m"
            {
#line 1397 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1397 "error_util.m"
            }
#line 1397 "error_util.m"
            {
#line 1397 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1397 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1397 "error_util.m"
            }
#line 1397 "error_util.m"
            /* direct tailcall eliminated */
#line 1397 "error_util.m"
            {
#line 1397 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1397 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1397 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1397 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1397 "error_util.m"
            }
#line 1397 "error_util.m"
            continue;
#line 1395 "error_util.m"
          }
#line 1399 "error_util.m"
        else
#line 1400 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1399 "error_util.m"
      }
#line 1399 "error_util.m"
      break;
#line 1399 "error_util.m"
    }
#line 1390 "error_util.m"
}

#line 1385 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1385 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1385 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1385 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1385 "error_util.m"
{
#line 1387 "error_util.m"
  {
#line 1387 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1388 "error_util.m"
    {
#line 1388 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1388 "error_util.m"
      return;
    }
#line 1387 "error_util.m"
  }
#line 1385 "error_util.m"
}

#line 1380 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1380 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1380 "error_util.m"
{
#line 1382 "error_util.m"
  {
#line 1382 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1382 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1382 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1382 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1383 "error_util.m"
    {
#line 1383 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1383 "error_util.m"
    {
#line 1383 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1383 "error_util.m"
    {
#line 1383 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1383 "error_util.m"
    {
#line 1383 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1382 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1382 "error_util.m"
  }
#line 1380 "error_util.m"
}

#line 1375 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1375 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1375 "error_util.m"
{
#line 1377 "error_util.m"
  {
#line 1377 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1377 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1377 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1377 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1378 "error_util.m"
    {
#line 1378 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1377 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1377 "error_util.m"
  }
#line 1375 "error_util.m"
}

#line 1334 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1334 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1334 "error_util.m"
{
#line 1336 "error_util.m"
  {
#line 1336 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1336 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1336 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1336 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1336 "error_util.m"
    else
#line 1337 "error_util.m"
      {
#line 1337 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1337 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1337 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1338 "error_util.m"
        {
#line 1338 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1342 "error_util.m"
        if ((parse_tree__error_util__Head_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1356 "error_util.m"
          if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1355 "error_util.m"
            parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1356 "error_util.m"
          else
#line 1357 "error_util.m"
            {
#line 1357 "error_util.m"
              MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1357 "error_util.m"
              MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1357 "error_util.m"
              MR_String parse_tree__error_util__V_13_13;
#line 1371 "error_util.m"
              MR_Char parse_tree__error_util__First_17;
#line 1371 "error_util.m"
              MR_String parse_tree__error_util__Rest_18;

#line 1366 "error_util.m"
              {
#line 1366 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
              }
#line 1366 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1367 "error_util.m"
                {
#line 1367 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                }
#line 1371 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1369 "error_util.m"
                {
#line 1369 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1369 "error_util.m"
                  {
#line 1369 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                  }
#line 1370 "error_util.m"
                  {
#line 1370 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                  }
#line 1369 "error_util.m"
                }
#line 1371 "error_util.m"
              else
#line 1372 "error_util.m"
                parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1358 "error_util.m"
              {
#line 1358 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1358 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1358 "error_util.m"
              }
#line 1357 "error_util.m"
            }
#line 1342 "error_util.m"
        else
#line 1342 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__Head_3)) == (MR_mktag((MR_Integer) 1))))
#line 1340 "error_util.m"
            {
#line 1340 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1341 "error_util.m"
              {
#line 1341 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1341 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1341 "error_util.m"
              }
#line 1340 "error_util.m"
            }
#line 1342 "error_util.m"
          else
#line 1343 "error_util.m"
            {
#line 1343 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1347 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1349 "error_util.m"
                {
#line 1349 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1349 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1349 "error_util.m"
                }
#line 1347 "error_util.m"
              else
#line 1345 "error_util.m"
                {
#line 1345 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1345 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1345 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1346 "error_util.m"
                  {
#line 1346 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1346 "error_util.m"
                  {
#line 1346 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1346 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1346 "error_util.m"
                  }
#line 1345 "error_util.m"
                }
#line 1343 "error_util.m"
            }
#line 1337 "error_util.m"
      }
#line 1336 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1336 "error_util.m"
  }
#line 1334 "error_util.m"
}

#line 1289 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1289 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1289 "error_util.m"
{
#line 1291 "error_util.m"
  while (MR_TRUE)
#line 1291 "error_util.m"
    {
#line 1291 "error_util.m"
      /* tailcall optimized into a loop */
#line 1291 "error_util.m"
      {
#line 1291 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1291 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1291 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1291 "error_util.m"
        else
#line 1292 "error_util.m"
          {
#line 1292 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1292 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1296 "error_util.m"
            if ((parse_tree__error_util__Word_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "error_util.m"
              {
#line 1297 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1298 "error_util.m"
                {
#line 1298 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1298 "error_util.m"
                {
#line 1298 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1298 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1298 "error_util.m"
                }
#line 1297 "error_util.m"
              }
#line 1296 "error_util.m"
            else
#line 1296 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 1))))
#line 1294 "error_util.m"
                {
#line 1294 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1294 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1294 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1295 "error_util.m"
                  {
#line 1295 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1295 "error_util.m"
                  }
#line 1295 "error_util.m"
                  {
#line 1295 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1295 "error_util.m"
                  {
#line 1295 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1295 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1295 "error_util.m"
                  }
#line 1294 "error_util.m"
                }
#line 1296 "error_util.m"
              else
#line 1296 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 2))))
#line 1300 "error_util.m"
                  {
#line 1300 "error_util.m"
                    MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1300 "error_util.m"
                    MR_Word parse_tree__error_util__V_29_29;
#line 1300 "error_util.m"
                    MR_Word parse_tree__error_util__V_30_30;

#line 1301 "error_util.m"
                    {
#line 1301 "error_util.m"
                      parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "error_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1301 "error_util.m"
                    }
#line 1301 "error_util.m"
                    {
#line 1301 "error_util.m"
                      parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                    }
#line 1301 "error_util.m"
                    {
#line 1301 "error_util.m"
                      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1301 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1301 "error_util.m"
                    }
#line 1300 "error_util.m"
                  }
#line 1296 "error_util.m"
                else
#line 1303 "error_util.m"
                  {
#line 1303 "error_util.m"
                    MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1307 "error_util.m"
                    if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "error_util.m"
                      {
#line 1305 "error_util.m"
                        MR_Word parse_tree__error_util__V_27_27;

#line 1306 "error_util.m"
                        {
#line 1306 "error_util.m"
                          parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1306 "error_util.m"
                        }
#line 1306 "error_util.m"
                        {
#line 1306 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1306 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "error_util.m"
                        }
#line 1305 "error_util.m"
                      }
#line 1307 "error_util.m"
                    else
#line 1307 "error_util.m"
                      {
#line 1307 "error_util.m"
                        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1307 "error_util.m"
                        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1307 "error_util.m"
                        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1312 "error_util.m"
                          {
#line 1312 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1312 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1312 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1371 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1371 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1366 "error_util.m"
                            {
#line 1366 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1366 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1367 "error_util.m"
                              {
#line 1367 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1371 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1369 "error_util.m"
                              {
#line 1369 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1369 "error_util.m"
                                {
#line 1369 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1370 "error_util.m"
                                {
#line 1370 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1369 "error_util.m"
                              }
#line 1371 "error_util.m"
                            else
#line 1372 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1317 "error_util.m"
                            {
#line 1317 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1317 "error_util.m"
                            }
#line 1317 "error_util.m"
                            {
#line 1317 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1317 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1317 "error_util.m"
                            }
#line 1318 "error_util.m"
                            /* direct tailcall eliminated */
#line 1318 "error_util.m"
                            {
#line 1318 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1318 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1318 "error_util.m"
                            }
#line 1318 "error_util.m"
                            continue;
#line 1312 "error_util.m"
                          }
#line 1307 "error_util.m"
                        else
#line 1307 "error_util.m"
                          if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1308 "error_util.m"
                            {
#line 1308 "error_util.m"
                              MR_Word parse_tree__error_util__V_24_24;
#line 1308 "error_util.m"
                              MR_String parse_tree__error_util__V_25_25;
#line 1308 "error_util.m"
                              MR_Word parse_tree__error_util__V_26_26;
#line 1308 "error_util.m"
                              MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1309 "error_util.m"
                              {
#line 1309 "error_util.m"
                                parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                              }
#line 1309 "error_util.m"
                              {
#line 1309 "error_util.m"
                                parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1309 "error_util.m"
                              }
#line 1310 "error_util.m"
                              {
#line 1310 "error_util.m"
                                parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                              }
#line 1310 "error_util.m"
                              {
#line 1310 "error_util.m"
                                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1310 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1310 "error_util.m"
                              }
#line 1308 "error_util.m"
                            }
#line 1307 "error_util.m"
                          else
#line 1307 "error_util.m"
                            if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 2))))
#line 1320 "error_util.m"
                              {
#line 1320 "error_util.m"
                                MR_Word parse_tree__error_util__V_17_17;
#line 1320 "error_util.m"
                                MR_String parse_tree__error_util__V_18_18;
#line 1320 "error_util.m"
                                MR_Word parse_tree__error_util__V_19_19;
#line 1320 "error_util.m"
                                MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1325 "error_util.m"
                                {
#line 1325 "error_util.m"
                                  parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                                }
#line 1325 "error_util.m"
                                {
#line 1325 "error_util.m"
                                  parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1325 "error_util.m"
                                }
#line 1326 "error_util.m"
                                {
#line 1326 "error_util.m"
                                  parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                                }
#line 1326 "error_util.m"
                                {
#line 1326 "error_util.m"
                                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1326 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1326 "error_util.m"
                                }
#line 1320 "error_util.m"
                              }
#line 1307 "error_util.m"
                            else
#line 1328 "error_util.m"
                              {
#line 1328 "error_util.m"
                                MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1328 "error_util.m"
                                MR_Word parse_tree__error_util__V_13_13;
#line 1328 "error_util.m"
                                MR_Word parse_tree__error_util__V_14_14;
#line 1328 "error_util.m"
                                MR_String parse_tree__error_util__V_15_15;

#line 1330 "error_util.m"
                                {
#line 1330 "error_util.m"
                                  parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                                }
#line 1330 "error_util.m"
                                {
#line 1330 "error_util.m"
                                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "error_util.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1330 "error_util.m"
                                }
#line 1330 "error_util.m"
                                {
#line 1330 "error_util.m"
                                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1330 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1330 "error_util.m"
                                }
#line 1329 "error_util.m"
                                /* direct tailcall eliminated */
#line 1329 "error_util.m"
                                {
#line 1329 "error_util.m"
                                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1329 "error_util.m"
                                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1329 "error_util.m"
                                }
#line 1329 "error_util.m"
                                continue;
#line 1328 "error_util.m"
                              }
#line 1307 "error_util.m"
                      }
#line 1303 "error_util.m"
                  }
#line 1292 "error_util.m"
          }
#line 1291 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1291 "error_util.m"
      }
#line 1291 "error_util.m"
      break;
#line 1291 "error_util.m"
    }
#line 1289 "error_util.m"
}

#line 1283 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1283 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1283 "error_util.m"
{
#line 1285 "error_util.m"
  {
#line 1285 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1285 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1285 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1285 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1286 "error_util.m"
    {
#line 1286 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1286 "error_util.m"
    {
#line 1286 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1287 "error_util.m"
    {
#line 1287 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1285 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1285 "error_util.m"
  }
#line 1283 "error_util.m"
}

#line 1184 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1184 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1184 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1184 "error_util.m"
{
#line 1188 "error_util.m"
  while (MR_TRUE)
#line 1188 "error_util.m"
    {
#line 1188 "error_util.m"
      /* tailcall optimized into a loop */
#line 1188 "error_util.m"
      {
#line 1188 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1188 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "error_util.m"
          {
#line 1188 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1188 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1189 "error_util.m"
            {
#line 1189 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1190 "error_util.m"
            {
#line 1190 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1190 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1190 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1190 "error_util.m"
            }
#line 1190 "error_util.m"
            {
#line 1190 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1188 "error_util.m"
          }
#line 1188 "error_util.m"
        else
#line 1192 "error_util.m"
          {
#line 1192 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1192 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1192 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1192 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_47_47;

#line 1196 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1270 "error_util.m"
              {
#line 1270 "error_util.m"
                MR_Word parse_tree__error_util__V_41_41;
#line 1270 "error_util.m"
                MR_Word parse_tree__error_util__Strings_92;

#line 1271 "error_util.m"
                {
#line 1271 "error_util.m"
                  parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1272 "error_util.m"
                {
#line 1272 "error_util.m"
                  parse_tree__error_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1272 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1272 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1272 "error_util.m"
                }
#line 1272 "error_util.m"
                {
#line 1272 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_41_41)));
                }
#line 1273 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1270 "error_util.m"
              }
#line 1196 "error_util.m"
            else
#line 1196 "error_util.m"
              if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "error_util.m"
                {
#line 1216 "error_util.m"
                  if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1215 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1216 "error_util.m"
                  else
#line 1217 "error_util.m"
                    {
#line 1218 "error_util.m"
                      {
#line 1218 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1218 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1218 "error_util.m"
                      }
#line 1217 "error_util.m"
                    }
#line 1218 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1212 "error_util.m"
                }
#line 1196 "error_util.m"
              else
#line 1196 "error_util.m"
                if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1260 "error_util.m"
                  {
#line 1260 "error_util.m"
                    MR_Word parse_tree__error_util__Strings_36;
#line 1260 "error_util.m"
                    MR_Word parse_tree__error_util__V_48_48;

#line 1261 "error_util.m"
                    {
#line 1261 "error_util.m"
                      parse_tree__error_util__Strings_36 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                    }
#line 1262 "error_util.m"
                    {
#line 1262 "error_util.m"
                      parse_tree__error_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 0) = ((MR_Box) (parse_tree__error_util__Strings_36));
#line 1262 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1262 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1262 "error_util.m"
                    }
#line 1262 "error_util.m"
                    {
#line 1262 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_48_48)));
                    }
#line 1263 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1260 "error_util.m"
                  }
#line 1196 "error_util.m"
                else
#line 1196 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 1))))
#line 1200 "error_util.m"
                    {
#line 1200 "error_util.m"
                      MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1200 "error_util.m"
                      MR_Word parse_tree__error_util__V_74_74;

#line 1201 "error_util.m"
                      {
#line 1201 "error_util.m"
                        parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1201 "error_util.m"
                      }
#line 1201 "error_util.m"
                      {
#line 1201 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1201 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1201 "error_util.m"
                      }
#line 1201 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1200 "error_util.m"
                    }
#line 1196 "error_util.m"
                  else
#line 1196 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 2))))
#line 1203 "error_util.m"
                      {
#line 1203 "error_util.m"
                        MR_Word parse_tree__error_util__V_72_72;
#line 1203 "error_util.m"
                        MR_String parse_tree__error_util__V_73_73;
#line 1203 "error_util.m"
                        MR_String parse_tree__error_util__Word_79 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));

#line 1204 "error_util.m"
                        {
#line 1204 "error_util.m"
                          parse_tree__error_util__V_73_73 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_79);
                        }
#line 1204 "error_util.m"
                        {
#line 1204 "error_util.m"
                          parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1204 "error_util.m"
                        }
#line 1204 "error_util.m"
                        {
#line 1204 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1204 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1204 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1204 "error_util.m"
                        }
#line 1204 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1203 "error_util.m"
                      }
#line 1196 "error_util.m"
                    else
#line 1196 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1252 "error_util.m"
                        {
#line 1252 "error_util.m"
                          MR_String parse_tree__error_util__DeclName_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1252 "error_util.m"
                          MR_String parse_tree__error_util__V_54_54;
#line 1252 "error_util.m"
                          MR_Word parse_tree__error_util__V_56_56;
#line 1252 "error_util.m"
                          MR_String parse_tree__error_util__Word_89;

#line 1253 "error_util.m"
                          {
#line 1253 "error_util.m"
                            parse_tree__error_util__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_34);
                          }
#line 1253 "error_util.m"
                          {
#line 1253 "error_util.m"
                            parse_tree__error_util__Word_89 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_54_54);
                          }
#line 1254 "error_util.m"
                          {
#line 1254 "error_util.m"
                            parse_tree__error_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__V_56_56, 0) = ((MR_Box) (parse_tree__error_util__Word_89));
#line 1254 "error_util.m"
                          }
#line 1254 "error_util.m"
                          {
#line 1254 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_56_56));
#line 1254 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1254 "error_util.m"
                          }
#line 1254 "error_util.m"
                          parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1252 "error_util.m"
                        }
#line 1196 "error_util.m"
                      else
#line 1196 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1206 "error_util.m"
                          {
#line 1206 "error_util.m"
                            MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1206 "error_util.m"
                            MR_Word parse_tree__error_util__V_70_70;
#line 1206 "error_util.m"
                            MR_String parse_tree__error_util__V_71_71;

#line 1207 "error_util.m"
                            {
#line 1207 "error_util.m"
                              parse_tree__error_util__V_71_71 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                            }
#line 1207 "error_util.m"
                            {
#line 1207 "error_util.m"
                              parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1207 "error_util.m"
                            }
#line 1207 "error_util.m"
                            {
#line 1207 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1207 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1207 "error_util.m"
                            }
#line 1207 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1206 "error_util.m"
                          }
#line 1196 "error_util.m"
                        else
#line 1196 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1265 "error_util.m"
                            {
#line 1265 "error_util.m"
                              MR_Integer parse_tree__error_util__IndentDelta_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1265 "error_util.m"
                              MR_Word parse_tree__error_util__V_45_45;
#line 1265 "error_util.m"
                              MR_Word parse_tree__error_util__Strings_91;

#line 1266 "error_util.m"
                              {
#line 1266 "error_util.m"
                                parse_tree__error_util__Strings_91 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                              }
#line 1267 "error_util.m"
                              {
#line 1267 "error_util.m"
                                parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_91));
#line 1267 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1267 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_37));
#line 1267 "error_util.m"
                              }
#line 1267 "error_util.m"
                              {
#line 1267 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                              }
#line 1268 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1265 "error_util.m"
                            }
#line 1196 "error_util.m"
                          else
#line 1196 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1209 "error_util.m"
                              {
#line 1209 "error_util.m"
                                MR_Word parse_tree__error_util__V_68_68;
#line 1209 "error_util.m"
                                MR_String parse_tree__error_util__V_69_69;
#line 1209 "error_util.m"
                                MR_Integer parse_tree__error_util__Int_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1210 "error_util.m"
                                {
#line 1210 "error_util.m"
                                  parse_tree__error_util__V_69_69 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_80);
                                }
#line 1210 "error_util.m"
                                {
#line 1210 "error_util.m"
                                  parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__V_69_69));
#line 1210 "error_util.m"
                                }
#line 1210 "error_util.m"
                                {
#line 1210 "error_util.m"
                                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1210 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1210 "error_util.m"
                                }
#line 1210 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1209 "error_util.m"
                              }
#line 1196 "error_util.m"
                            else
#line 1196 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1244 "error_util.m"
                                {
#line 1244 "error_util.m"
                                  MR_Word parse_tree__error_util__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1244 "error_util.m"
                                  MR_Word parse_tree__error_util__V_57_57;
#line 1244 "error_util.m"
                                  MR_String parse_tree__error_util__Word_87;

#line 1542 "error_util.m"
                                  if ((parse_tree__error_util__PredOrFunc_32 == (MR_Integer) 1))
#line 1543 "error_util.m"
                                    parse_tree__error_util__Word_87 = (MR_String) "function";
#line 1542 "error_util.m"
                                  else
#line 1542 "error_util.m"
                                    parse_tree__error_util__Word_87 = (MR_String) "predicate";
#line 1246 "error_util.m"
                                  {
#line 1246 "error_util.m"
                                    parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_87));
#line 1246 "error_util.m"
                                  }
#line 1246 "error_util.m"
                                  {
#line 1246 "error_util.m"
                                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1246 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1246 "error_util.m"
                                  }
#line 1246 "error_util.m"
                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1244 "error_util.m"
                                }
#line 1196 "error_util.m"
                              else
#line 1196 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1256 "error_util.m"
                                  {
#line 1256 "error_util.m"
                                    MR_String parse_tree__error_util__PragmaName_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1256 "error_util.m"
                                    MR_String parse_tree__error_util__V_51_51;
#line 1256 "error_util.m"
                                    MR_Word parse_tree__error_util__V_53_53;
#line 1256 "error_util.m"
                                    MR_String parse_tree__error_util__Word_90;

#line 1257 "error_util.m"
                                    {
#line 1257 "error_util.m"
                                      parse_tree__error_util__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_35);
                                    }
#line 1257 "error_util.m"
                                    {
#line 1257 "error_util.m"
                                      parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_51_51);
                                    }
#line 1258 "error_util.m"
                                    {
#line 1258 "error_util.m"
                                      parse_tree__error_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_53_53, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1258 "error_util.m"
                                    }
#line 1258 "error_util.m"
                                    {
#line 1258 "error_util.m"
                                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_53_53));
#line 1258 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1258 "error_util.m"
                                    }
#line 1258 "error_util.m"
                                    parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1256 "error_util.m"
                                  }
#line 1196 "error_util.m"
                                else
#line 1196 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1221 "error_util.m"
                                    {
#line 1221 "error_util.m"
                                      MR_Word parse_tree__error_util__V_66_66;
#line 1221 "error_util.m"
                                      MR_String parse_tree__error_util__Word_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1222 "error_util.m"
                                      {
#line 1222 "error_util.m"
                                        parse_tree__error_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "error_util.m"
                                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_66_66, 0) = ((MR_Box) (parse_tree__error_util__Word_81));
#line 1222 "error_util.m"
                                      }
#line 1222 "error_util.m"
                                      {
#line 1222 "error_util.m"
                                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1222 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1222 "error_util.m"
                                      }
#line 1222 "error_util.m"
                                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1221 "error_util.m"
                                    }
#line 1196 "error_util.m"
                                  else
#line 1196 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1248 "error_util.m"
                                      {
#line 1248 "error_util.m"
                                        MR_Word parse_tree__error_util__SimpleCallId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1248 "error_util.m"
                                        MR_String parse_tree__error_util__WordsStr_88;

#line 1249 "error_util.m"
                                        {
#line 1249 "error_util.m"
                                          parse_tree__error_util__WordsStr_88 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_33);
                                        }
#line 1250 "error_util.m"
                                        {
#line 1250 "error_util.m"
                                          parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_88, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                        }
#line 1250 "error_util.m"
                                        parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1248 "error_util.m"
                                      }
#line 1196 "error_util.m"
                                    else
#line 1196 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1224 "error_util.m"
                                        {
#line 1224 "error_util.m"
                                          MR_Word parse_tree__error_util__V_65_65;
#line 1224 "error_util.m"
                                          MR_String parse_tree__error_util__Word_82 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1225 "error_util.m"
                                          {
#line 1225 "error_util.m"
                                            parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "error_util.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__Word_82));
#line 1225 "error_util.m"
                                          }
#line 1225 "error_util.m"
                                          {
#line 1225 "error_util.m"
                                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1225 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1225 "error_util.m"
                                          }
#line 1225 "error_util.m"
                                          parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1224 "error_util.m"
                                        }
#line 1196 "error_util.m"
                                      else
#line 1196 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1227 "error_util.m"
                                          {
#line 1227 "error_util.m"
                                            MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1227 "error_util.m"
                                            MR_Word parse_tree__error_util__V_63_63;
#line 1227 "error_util.m"
                                            MR_String parse_tree__error_util__V_64_64;

#line 1228 "error_util.m"
                                            {
#line 1228 "error_util.m"
                                              parse_tree__error_util__V_64_64 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                                            }
#line 1228 "error_util.m"
                                            {
#line 1228 "error_util.m"
                                              parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1228 "error_util.m"
                                            }
#line 1228 "error_util.m"
                                            {
#line 1228 "error_util.m"
                                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1228 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1228 "error_util.m"
                                            }
#line 1228 "error_util.m"
                                            parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1227 "error_util.m"
                                          }
#line 1196 "error_util.m"
                                        else
#line 1196 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1230 "error_util.m"
                                            {
#line 1230 "error_util.m"
                                              MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1230 "error_util.m"
                                              MR_Word parse_tree__error_util__V_62_62;
#line 1230 "error_util.m"
                                              MR_String parse_tree__error_util__Word_83;

#line 1231 "error_util.m"
                                              {
#line 1231 "error_util.m"
                                                parse_tree__error_util__Word_83 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                                              }
#line 1232 "error_util.m"
                                              {
#line 1232 "error_util.m"
                                                parse_tree__error_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_62_62, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1232 "error_util.m"
                                              }
#line 1232 "error_util.m"
                                              {
#line 1232 "error_util.m"
                                                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1232 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1232 "error_util.m"
                                              }
#line 1232 "error_util.m"
                                              parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1230 "error_util.m"
                                            }
#line 1196 "error_util.m"
                                          else
#line 1196 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1234 "error_util.m"
                                              {
#line 1234 "error_util.m"
                                                MR_Word parse_tree__error_util__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1240 "error_util.m"
                                                MR_Word parse_tree__error_util__TypeCtor_28;

#line 1235 "error_util.m"
                                                {
#line 1235 "error_util.m"
                                                  parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_27, &parse_tree__error_util__TypeCtor_28);
                                                }
#line 1240 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1236 "error_util.m"
                                                  {
#line 1236 "error_util.m"
                                                    MR_Word parse_tree__error_util__TypeCtorName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 0)));
#line 1236 "error_util.m"
                                                    MR_Integer parse_tree__error_util__TypeCtorArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 1)));
#line 1236 "error_util.m"
                                                    MR_Word parse_tree__error_util__NewWord_31;
#line 1236 "error_util.m"
                                                    MR_String parse_tree__error_util__V_58_58;
#line 1236 "error_util.m"
                                                    MR_Word parse_tree__error_util__SymName_84;

#line 1237 "error_util.m"
                                                    {
#line 1237 "error_util.m"
                                                      parse_tree__error_util__SymName_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "error_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_84, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_29));
#line 1237 "error_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_84, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_30));
#line 1237 "error_util.m"
                                                    }
#line 1238 "error_util.m"
                                                    {
#line 1238 "error_util.m"
                                                      parse_tree__error_util__V_58_58 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_84);
                                                    }
#line 1238 "error_util.m"
                                                    {
#line 1238 "error_util.m"
                                                      parse_tree__error_util__NewWord_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_31, 0) = ((MR_Box) (parse_tree__error_util__V_58_58));
#line 1238 "error_util.m"
                                                    }
#line 1239 "error_util.m"
                                                    {
#line 1239 "error_util.m"
                                                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_31));
#line 1239 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1239 "error_util.m"
                                                    }
#line 1236 "error_util.m"
                                                  }
#line 1240 "error_util.m"
                                                else
#line 1241 "error_util.m"
                                                  {
#line 1241 "error_util.m"
                                                    {
#line 1241 "error_util.m"
                                                      mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "predicate \140parse_tree.error_util.convert_components_to_paragraphs_acc\'/5", (MR_String) "type is variable");
#line 1241 "error_util.m"
                                                      return;
                                                    }
#line 1241 "error_util.m"
                                                  }
#line 1241 "error_util.m"
                                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1234 "error_util.m"
                                              }
#line 1196 "error_util.m"
                                            else
#line 1196 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1194 "error_util.m"
                                                {
#line 1194 "error_util.m"
                                                  MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1195 "error_util.m"
                                                  {
#line 1195 "error_util.m"
                                                    parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                  }
#line 1195 "error_util.m"
                                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1194 "error_util.m"
                                                }
#line 1196 "error_util.m"
                                              else
#line 1197 "error_util.m"
                                                {
#line 1197 "error_util.m"
                                                  MR_String parse_tree__error_util__V_75_75;
#line 1197 "error_util.m"
                                                  MR_String parse_tree__error_util__WordsStr_78 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1198 "error_util.m"
                                                  {
#line 1198 "error_util.m"
                                                    parse_tree__error_util__V_75_75 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_78);
                                                  }
#line 1198 "error_util.m"
                                                  {
#line 1198 "error_util.m"
                                                    parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_75_75, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                  }
#line 1198 "error_util.m"
                                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1197 "error_util.m"
                                                }
#line 1275 "error_util.m"
            /* direct tailcall eliminated */
#line 1275 "error_util.m"
            {
#line 1275 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1275 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1275 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_47_47;

#line 1275 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1275 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1275 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1275 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1275 "error_util.m"
            }
#line 1275 "error_util.m"
            continue;
#line 1192 "error_util.m"
          }
#line 1188 "error_util.m"
      }
#line 1188 "error_util.m"
      break;
#line 1188 "error_util.m"
    }
#line 1184 "error_util.m"
}

#line 1147 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1147 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1147 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1147 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1147 "error_util.m"
{
#line 1152 "error_util.m"
  {
#line 1152 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1152 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1152 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1151 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1152 "error_util.m"
    else
#line 1154 "error_util.m"
      {
#line 1152 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1152 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1152 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1152 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1152 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1152 "error_util.m"
          {
#line 1152 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1152 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1152 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1152 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1152 "error_util.m"
          }
#line 1154 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1153 "error_util.m"
          {
#line 1153 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1154 "error_util.m"
        else
#line 1155 "error_util.m"
          {
#line 1155 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1155 "error_util.m"
            {
#line 1155 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1155 "error_util.m"
            {
#line 1155 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1155 "error_util.m"
          }
#line 1154 "error_util.m"
      }
#line 1152 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1152 "error_util.m"
  }
#line 1147 "error_util.m"
}

#line 1134 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1134 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1134 "error_util.m"
{
#line 1136 "error_util.m"
  {
#line 1136 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1136 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1136 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1138 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "first";
#line 1136 "error_util.m"
    else
#line 1136 "error_util.m"
      {
#line 1139 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1136 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1140 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "second";
#line 1136 "error_util.m"
        else
#line 1136 "error_util.m"
          {
#line 1141 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1136 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1142 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_String) "third";
#line 1136 "error_util.m"
            else
#line 1144 "error_util.m"
              {
#line 1144 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 1144 "error_util.m"
                {
#line 1144 "error_util.m"
                  parse_tree__error_util__V_4_4 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                }
#line 1144 "error_util.m"
                {
#line 1144 "error_util.m"
                  return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "th");
                }
#line 1144 "error_util.m"
              }
#line 1136 "error_util.m"
          }
#line 1136 "error_util.m"
      }
#line 1136 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1136 "error_util.m"
  }
#line 1134 "error_util.m"
}

#line 1049 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1049 "error_util.m"
{
#line 1052 "error_util.m"
  {
#line 1052 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1052 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1052 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1052 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1052 "error_util.m"
    else
#line 1053 "error_util.m"
      {
#line 1053 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1053 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1053 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1054 "error_util.m"
        {
#line 1054 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1058 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1130 "error_util.m"
          {
#line 1131 "error_util.m"
            {
#line 1131 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
            }
#line 1130 "error_util.m"
          }
#line 1058 "error_util.m"
        else
#line 1058 "error_util.m"
          if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "error_util.m"
            if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1077 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1078 "error_util.m"
            else
#line 1371 "error_util.m"
              {
#line 1371 "error_util.m"
                MR_Char parse_tree__error_util__First_62;
#line 1371 "error_util.m"
                MR_String parse_tree__error_util__Rest_63;

#line 1366 "error_util.m"
                {
#line 1366 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_62, &parse_tree__error_util__Rest_63);
                }
#line 1366 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1367 "error_util.m"
                  {
#line 1367 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_62);
                  }
#line 1371 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1369 "error_util.m"
                  {
#line 1369 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_64;

#line 1369 "error_util.m"
                    {
#line 1369 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_62, &parse_tree__error_util__LoweredFirst_64);
                    }
#line 1370 "error_util.m"
                    {
#line 1370 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_64, parse_tree__error_util__Rest_63);
                    }
#line 1369 "error_util.m"
                  }
#line 1371 "error_util.m"
                else
#line 1372 "error_util.m"
                  parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1371 "error_util.m"
              }
#line 1058 "error_util.m"
          else
#line 1058 "error_util.m"
            if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1123 "error_util.m"
              {
#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                }
#line 1123 "error_util.m"
              }
#line 1058 "error_util.m"
            else
#line 1058 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1062 "error_util.m"
                {
#line 1062 "error_util.m"
                  MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1063 "error_util.m"
                  {
#line 1063 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1062 "error_util.m"
                }
#line 1058 "error_util.m"
              else
#line 1058 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1065 "error_util.m"
                  {
#line 1065 "error_util.m"
                    MR_String parse_tree__error_util__V_39_39;
#line 1065 "error_util.m"
                    MR_String parse_tree__error_util__Word_42 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));
#line 1065 "error_util.m"
                    MR_String parse_tree__error_util__V_74_74;

#line 1545 "error_util.m"
                    {
#line 1545 "error_util.m"
                      parse_tree__error_util__V_74_74 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_42, (MR_String) "\'");
                    }
#line 1545 "error_util.m"
                    {
#line 1545 "error_util.m"
                      parse_tree__error_util__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_74_74);
                    }
#line 1066 "error_util.m"
                    {
#line 1066 "error_util.m"
                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                    }
#line 1065 "error_util.m"
                  }
#line 1058 "error_util.m"
                else
#line 1058 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1105 "error_util.m"
                    {
#line 1105 "error_util.m"
                      MR_String parse_tree__error_util__Decl_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1105 "error_util.m"
                      MR_String parse_tree__error_util__V_35_35;
#line 1105 "error_util.m"
                      MR_String parse_tree__error_util__Word_48;
#line 1105 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;

#line 1106 "error_util.m"
                      {
#line 1106 "error_util.m"
                        parse_tree__error_util__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_19);
                      }
#line 1545 "error_util.m"
                      {
#line 1545 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_35_35, (MR_String) "\'");
                      }
#line 1545 "error_util.m"
                      {
#line 1545 "error_util.m"
                        parse_tree__error_util__Word_48 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_58_58);
                      }
#line 1107 "error_util.m"
                      {
#line 1107 "error_util.m"
                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                      }
#line 1105 "error_util.m"
                    }
#line 1058 "error_util.m"
                  else
#line 1058 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1068 "error_util.m"
                      {
#line 1068 "error_util.m"
                        MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1068 "error_util.m"
                        MR_String parse_tree__error_util__V_38_38;

#line 1069 "error_util.m"
                        {
#line 1069 "error_util.m"
                          parse_tree__error_util__V_38_38 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                        }
#line 1069 "error_util.m"
                        {
#line 1069 "error_util.m"
                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                        }
#line 1068 "error_util.m"
                      }
#line 1058 "error_util.m"
                    else
#line 1058 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1126 "error_util.m"
                        {
#line 1128 "error_util.m"
                          {
#line 1128 "error_util.m"
                            return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                          }
#line 1126 "error_util.m"
                        }
#line 1058 "error_util.m"
                      else
#line 1058 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1071 "error_util.m"
                          {
#line 1071 "error_util.m"
                            MR_String parse_tree__error_util__V_37_37;
#line 1071 "error_util.m"
                            MR_Integer parse_tree__error_util__Int_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1137 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 1);
#line 1136 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1138 "error_util.m"
                              parse_tree__error_util__V_37_37 = (MR_String) "first";
#line 1136 "error_util.m"
                            else
#line 1136 "error_util.m"
                              {
#line 1139 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 2);
#line 1136 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 1140 "error_util.m"
                                  parse_tree__error_util__V_37_37 = (MR_String) "second";
#line 1136 "error_util.m"
                                else
#line 1136 "error_util.m"
                                  {
#line 1141 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 3);
#line 1136 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 1142 "error_util.m"
                                      parse_tree__error_util__V_37_37 = (MR_String) "third";
#line 1136 "error_util.m"
                                    else
#line 1144 "error_util.m"
                                      {
#line 1144 "error_util.m"
                                        MR_String parse_tree__error_util__V_66_66;

#line 1144 "error_util.m"
                                        {
#line 1144 "error_util.m"
                                          parse_tree__error_util__V_66_66 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_43);
                                        }
#line 1144 "error_util.m"
                                        {
#line 1144 "error_util.m"
                                          parse_tree__error_util__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_66_66, (MR_String) "th");
                                        }
#line 1144 "error_util.m"
                                      }
#line 1136 "error_util.m"
                                  }
#line 1136 "error_util.m"
                              }
#line 1072 "error_util.m"
                            {
#line 1072 "error_util.m"
                              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_37_37, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                            }
#line 1071 "error_util.m"
                          }
#line 1058 "error_util.m"
                        else
#line 1058 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1097 "error_util.m"
                            {
#line 1097 "error_util.m"
                              MR_Word parse_tree__error_util__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1097 "error_util.m"
                              MR_String parse_tree__error_util__Word_46;

#line 1542 "error_util.m"
                              if ((parse_tree__error_util__PredOrFunc_17 == (MR_Integer) 1))
#line 1543 "error_util.m"
                                parse_tree__error_util__Word_46 = (MR_String) "function";
#line 1542 "error_util.m"
                              else
#line 1542 "error_util.m"
                                parse_tree__error_util__Word_46 = (MR_String) "predicate";
#line 1099 "error_util.m"
                              {
#line 1099 "error_util.m"
                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                              }
#line 1097 "error_util.m"
                            }
#line 1058 "error_util.m"
                          else
#line 1058 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1109 "error_util.m"
                              {
#line 1109 "error_util.m"
                                MR_String parse_tree__error_util__PragmaName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1109 "error_util.m"
                                MR_String parse_tree__error_util__V_33_33;
#line 1109 "error_util.m"
                                MR_String parse_tree__error_util__Word_49;
#line 1109 "error_util.m"
                                MR_String parse_tree__error_util__V_70_70;

#line 1110 "error_util.m"
                                {
#line 1110 "error_util.m"
                                  parse_tree__error_util__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_20);
                                }
#line 1545 "error_util.m"
                                {
#line 1545 "error_util.m"
                                  parse_tree__error_util__V_70_70 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_33_33, (MR_String) "\'");
                                }
#line 1545 "error_util.m"
                                {
#line 1545 "error_util.m"
                                  parse_tree__error_util__Word_49 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_70_70);
                                }
#line 1111 "error_util.m"
                                {
#line 1111 "error_util.m"
                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                }
#line 1109 "error_util.m"
                              }
#line 1058 "error_util.m"
                            else
#line 1058 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1083 "error_util.m"
                                {
#line 1083 "error_util.m"
                                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1084 "error_util.m"
                                  {
#line 1084 "error_util.m"
                                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                                  }
#line 1083 "error_util.m"
                                }
#line 1058 "error_util.m"
                              else
#line 1058 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1101 "error_util.m"
                                  {
#line 1101 "error_util.m"
                                    MR_Word parse_tree__error_util__SimpleCallId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1101 "error_util.m"
                                    MR_String parse_tree__error_util__Word_47;

#line 1102 "error_util.m"
                                    {
#line 1102 "error_util.m"
                                      parse_tree__error_util__Word_47 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_18);
                                    }
#line 1103 "error_util.m"
                                    {
#line 1103 "error_util.m"
                                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                    }
#line 1101 "error_util.m"
                                  }
#line 1058 "error_util.m"
                                else
#line 1058 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1086 "error_util.m"
                                    {
#line 1086 "error_util.m"
                                      MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1087 "error_util.m"
                                      {
#line 1087 "error_util.m"
                                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                      }
#line 1086 "error_util.m"
                                    }
#line 1058 "error_util.m"
                                  else
#line 1058 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1089 "error_util.m"
                                      {
#line 1089 "error_util.m"
                                        MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1089 "error_util.m"
                                        MR_String parse_tree__error_util__Word_44;
#line 1089 "error_util.m"
                                        MR_String parse_tree__error_util__V_77_77;
#line 1089 "error_util.m"
                                        MR_String parse_tree__error_util__V_80_80;

#line 1378 "error_util.m"
                                        {
#line 1378 "error_util.m"
                                          parse_tree__error_util__V_77_77 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                                        }
#line 1545 "error_util.m"
                                        {
#line 1545 "error_util.m"
                                          parse_tree__error_util__V_80_80 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_77_77, (MR_String) "\'");
                                        }
#line 1545 "error_util.m"
                                        {
#line 1545 "error_util.m"
                                          parse_tree__error_util__Word_44 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_80_80);
                                        }
#line 1091 "error_util.m"
                                        {
#line 1091 "error_util.m"
                                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_44, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                        }
#line 1089 "error_util.m"
                                      }
#line 1058 "error_util.m"
                                    else
#line 1058 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1093 "error_util.m"
                                        {
#line 1093 "error_util.m"
                                          MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__Word_45;
#line 1093 "error_util.m"
                                          MR_Word parse_tree__error_util__SymName_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1093 "error_util.m"
                                          MR_Integer parse_tree__error_util__Arity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__V_84_84;
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__V_85_85;
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__V_86_86;
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__V_88_88;
#line 1093 "error_util.m"
                                          MR_String parse_tree__error_util__V_91_91;

#line 1383 "error_util.m"
                                          {
#line 1383 "error_util.m"
                                            parse_tree__error_util__V_85_85 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_82);
                                          }
#line 1545 "error_util.m"
                                          {
#line 1545 "error_util.m"
                                            parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_85_85, (MR_String) "\'");
                                          }
#line 1545 "error_util.m"
                                          {
#line 1545 "error_util.m"
                                            parse_tree__error_util__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_91_91);
                                          }
#line 1383 "error_util.m"
                                          {
#line 1383 "error_util.m"
                                            parse_tree__error_util__V_88_88 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_83);
                                          }
#line 1383 "error_util.m"
                                          {
#line 1383 "error_util.m"
                                            parse_tree__error_util__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_88_88);
                                          }
#line 1383 "error_util.m"
                                          {
#line 1383 "error_util.m"
                                            parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_84_84, parse_tree__error_util__V_86_86);
                                          }
#line 1095 "error_util.m"
                                          {
#line 1095 "error_util.m"
                                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                          }
#line 1093 "error_util.m"
                                        }
#line 1058 "error_util.m"
                                      else
#line 1058 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1113 "error_util.m"
                                          {
#line 1113 "error_util.m"
                                            MR_Word parse_tree__error_util__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1119 "error_util.m"
                                            MR_Word parse_tree__error_util__TypeCtor_22;

#line 1114 "error_util.m"
                                            {
#line 1114 "error_util.m"
                                              parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_21, &parse_tree__error_util__TypeCtor_22);
                                            }
#line 1119 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1115 "error_util.m"
                                              {
#line 1115 "error_util.m"
                                                MR_Word parse_tree__error_util__TypeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 0)));
#line 1115 "error_util.m"
                                                MR_Integer parse_tree__error_util__TypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 1)));
#line 1115 "error_util.m"
                                                MR_String parse_tree__error_util__Word_50;
#line 1115 "error_util.m"
                                                MR_Word parse_tree__error_util__SymName_51;

#line 1116 "error_util.m"
                                                {
#line 1116 "error_util.m"
                                                  parse_tree__error_util__SymName_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_51, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_23));
#line 1116 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_51, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_24));
#line 1116 "error_util.m"
                                                }
#line 1117 "error_util.m"
                                                {
#line 1117 "error_util.m"
                                                  parse_tree__error_util__Word_50 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_51);
                                                }
#line 1118 "error_util.m"
                                                {
#line 1118 "error_util.m"
                                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                                }
#line 1115 "error_util.m"
                                              }
#line 1119 "error_util.m"
                                            else
#line 1120 "error_util.m"
                                              {
#line 1120 "error_util.m"
                                                {
#line 1120 "error_util.m"
                                                  mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "function \140parse_tree.error_util.error_pieces_to_string_2\'/2", (MR_String) "type is variable");
                                                }
#line 1120 "error_util.m"
                                              }
#line 1113 "error_util.m"
                                          }
#line 1058 "error_util.m"
                                        else
#line 1058 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1056 "error_util.m"
                                            {
#line 1056 "error_util.m"
                                              MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1057 "error_util.m"
                                              {
#line 1057 "error_util.m"
                                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                              }
#line 1056 "error_util.m"
                                            }
#line 1058 "error_util.m"
                                          else
#line 1059 "error_util.m"
                                            {
#line 1059 "error_util.m"
                                              MR_String parse_tree__error_util__V_40_40;
#line 1059 "error_util.m"
                                              MR_String parse_tree__error_util__Words_41 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1059 "error_util.m"
                                              MR_String parse_tree__error_util__V_95_95;

#line 1545 "error_util.m"
                                              {
#line 1545 "error_util.m"
                                                parse_tree__error_util__V_95_95 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Words_41, (MR_String) "\'");
                                              }
#line 1545 "error_util.m"
                                              {
#line 1545 "error_util.m"
                                                parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_95_95);
                                              }
#line 1060 "error_util.m"
                                              {
#line 1060 "error_util.m"
                                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                              }
#line 1059 "error_util.m"
                                            }
#line 1053 "error_util.m"
      }
#line 1052 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1052 "error_util.m"
  }
#line 1049 "error_util.m"
}

#line 1038 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1038 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1038 "error_util.m"
{
#line 1040 "error_util.m"
  while (MR_TRUE)
#line 1040 "error_util.m"
    {
#line 1040 "error_util.m"
      /* tailcall optimized into a loop */
#line 1040 "error_util.m"
      {
#line 1040 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1040 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1040 "error_util.m"
          {
#line 1040 "error_util.m"
          }
#line 1040 "error_util.m"
        else
#line 1041 "error_util.m"
          {
#line 1041 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1041 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1042 "error_util.m"
            {
#line 1042 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1043 "error_util.m"
            {
#line 1043 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1044 "error_util.m"
            /* direct tailcall eliminated */
#line 1044 "error_util.m"
            {
#line 1044 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1044 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1044 "error_util.m"
            }
#line 1044 "error_util.m"
            continue;
#line 1041 "error_util.m"
          }
#line 1040 "error_util.m"
      }
#line 1040 "error_util.m"
      break;
#line 1040 "error_util.m"
    }
#line 1038 "error_util.m"
}

#line 1011 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1011 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1011 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1011 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1011 "error_util.m"
{
#line 1014 "error_util.m"
  while (MR_TRUE)
#line 1014 "error_util.m"
    {
#line 1014 "error_util.m"
      /* tailcall optimized into a loop */
#line 1014 "error_util.m"
      {
#line 1014 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1014 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "error_util.m"
          {
#line 1014 "error_util.m"
          }
#line 1014 "error_util.m"
        else
#line 1015 "error_util.m"
          {
#line 1015 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1015 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1015 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1015 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1015 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1015 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1015 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1019 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "error_util.m"
              {
#line 1020 "error_util.m"
              }
#line 1019 "error_util.m"
            else
#line 1017 "error_util.m"
              {
#line 1017 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1018 "error_util.m"
                {
#line 1018 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1017 "error_util.m"
              }
#line 1022 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1022 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1023 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1023 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1024 "error_util.m"
            {
#line 1024 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1025 "error_util.m"
            {
#line 1025 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1031 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "error_util.m"
              {
#line 1032 "error_util.m"
                {
#line 1032 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1031 "error_util.m"
              }
#line 1031 "error_util.m"
            else
#line 1033 "error_util.m"
              {
#line 1033 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1033 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1034 "error_util.m"
                {
#line 1034 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1035 "error_util.m"
                {
#line 1035 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1036 "error_util.m"
                {
#line 1036 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1033 "error_util.m"
              }
#line 1027 "error_util.m"
            /* direct tailcall eliminated */
#line 1027 "error_util.m"
            {
#line 1027 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1027 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1027 "error_util.m"
            }
#line 1027 "error_util.m"
            continue;
#line 1015 "error_util.m"
          }
#line 1014 "error_util.m"
      }
#line 1014 "error_util.m"
      break;
#line 1014 "error_util.m"
    }
#line 1011 "error_util.m"
}

#line 963 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 963 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 963 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 963 "error_util.m"
{
#line 968 "error_util.m"
  {
#line 968 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_9_43;
#line 968 "error_util.m"
    MR_Integer parse_tree__error_util__ContextLength_21;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Paragraphs_22;
#line 968 "error_util.m"
    MR_Integer parse_tree__error_util__FirstIndent_23;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__MaybeRemain_26;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Lines_27;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__ParasCord_39;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__V_42_42;

#line 989 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "error_util.m"
      parse_tree__error_util__ContextLength_21 = (MR_Integer) 0;
#line 989 "error_util.m"
    else
#line 977 "error_util.m"
      {
#line 977 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, (MR_Integer) 0)));
#line 977 "error_util.m"
        MR_String parse_tree__error_util__FileName_15;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_16;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__FileNameLength_17;
#line 977 "error_util.m"
        MR_String parse_tree__error_util__LineNumberStr_18;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength0_19;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength_20;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__V_31_31;
#line 977 "error_util.m"
        MR_Integer parse_tree__error_util__V_32_32;

#line 978 "error_util.m"
        {
#line 978 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__FileName_15);
        }
#line 979 "error_util.m"
        {
#line 979 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__LineNumber_16);
        }
#line 980 "error_util.m"
        {
#line 980 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_15, &parse_tree__error_util__FileNameLength_17);
        }
#line 981 "error_util.m"
        {
#line 981 "error_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_16, &parse_tree__error_util__LineNumberStr_18);
        }
#line 982 "error_util.m"
        {
#line 982 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_18, &parse_tree__error_util__LineNumberStrLength0_19);
        }
#line 983 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_19 < (MR_Integer) 3);
#line 985 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 984 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = (MR_Integer) 3;
#line 985 "error_util.m"
        else
#line 986 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = parse_tree__error_util__LineNumberStrLength0_19;
#line 988 "error_util.m"
        parse_tree__error_util__V_32_32 = (parse_tree__error_util__FileNameLength_17 + (MR_Integer) 1);
#line 988 "error_util.m"
        parse_tree__error_util__V_31_31 = (parse_tree__error_util__V_32_32 + parse_tree__error_util__LineNumberStrLength_20);
#line 988 "error_util.m"
        parse_tree__error_util__ContextLength_21 = (parse_tree__error_util__V_31_31 + (MR_Integer) 2);
#line 977 "error_util.m"
      }
#line 13416 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_9_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1175 "error_util.m"
    {
#line 1175 "error_util.m"
      parse_tree__error_util__V_42_42 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_43);
    }
#line 1174 "error_util.m"
    {
#line 1174 "error_util.m"
      parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_42_42, &parse_tree__error_util__ParasCord_39);
    }
#line 1176 "error_util.m"
    {
#line 1176 "error_util.m"
      parse_tree__error_util__Paragraphs_22 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_43, parse_tree__error_util__ParasCord_39);
    }
#line 994 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_8 == (MR_Integer) 0);
#line 994 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 994 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 0;
#line 994 "error_util.m"
    else
#line 994 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 1;
#line 999 "error_util.m"
    if ((parse_tree__error_util__MaybeMaxWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1001 "error_util.m"
      parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 999 "error_util.m"
    else
#line 996 "error_util.m"
      {
#line 996 "error_util.m"
        MR_Integer parse_tree__error_util__MaxWidth_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_11, (MR_Integer) 0)));
#line 996 "error_util.m"
        MR_Integer parse_tree__error_util__Remain_25;
#line 996 "error_util.m"
        MR_Integer parse_tree__error_util__V_35_35 = (parse_tree__error_util__ContextLength_21 + parse_tree__error_util__FixedIndent_10);

#line 997 "error_util.m"
        parse_tree__error_util__Remain_25 = (parse_tree__error_util__MaxWidth_24 - parse_tree__error_util__V_35_35);
#line 998 "error_util.m"
        {
#line 998 "error_util.m"
          parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 998 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_26, 0) = ((MR_Box) (parse_tree__error_util__Remain_25));
#line 998 "error_util.m"
        }
#line 996 "error_util.m"
      }
#line 1003 "error_util.m"
    {
#line 1003 "error_util.m"
      parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__FirstIndent_23, parse_tree__error_util__Paragraphs_22, parse_tree__error_util__MaybeRemain_26, &parse_tree__error_util__Lines_27);
    }
#line 1005 "error_util.m"
    {
#line 1005 "error_util.m"
      parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_27, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10);
#line 1005 "error_util.m"
      return;
    }
#line 968 "error_util.m"
  }
#line 963 "error_util.m"
}

#line 808 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 808 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8)
#line 808 "error_util.m"
{
#line 814 "error_util.m"
  while (MR_TRUE)
#line 814 "error_util.m"
    {
#line 814 "error_util.m"
      /* tailcall optimized into a loop */
#line 814 "error_util.m"
      {
#line 814 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 814 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "error_util.m"
          {
#line 814 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 814 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 814 "error_util.m"
          }
#line 814 "error_util.m"
        else
#line 816 "error_util.m"
          {
#line 816 "error_util.m"
            MR_Word parse_tree__error_util__Component_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 816 "error_util.m"
            MR_Word parse_tree__error_util__Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 816 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 816 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 825 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 0))))
#line 818 "error_util.m"
              {
#line 818 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_23, (MR_Integer) 0)));
#line 818 "error_util.m"
                MR_Word parse_tree__error_util__MaybeMaxWidth_32;

#line 819 "error_util.m"
                {
#line 819 "error_util.m"
                  libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_32);
                }
#line 821 "error_util.m"
                {
#line 821 "error_util.m"
                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_32, parse_tree__error_util__ComponentPieces_31);
                }
#line 823 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 824 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 818 "error_util.m"
              }
#line 825 "error_util.m"
            else
#line 825 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 1))))
#line 826 "error_util.m"
                {
#line 826 "error_util.m"
                  MR_Word parse_tree__error_util__Option_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 826 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 826 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 826 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_36;

#line 827 "error_util.m"
                  {
#line 827 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_33, &parse_tree__error_util__OptionValue_36);
                  }
#line 828 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_36 == parse_tree__error_util__RequiredValue_34);
#line 831 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 829 "error_util.m"
                    {
#line 829 "error_util.m"
                      parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__EmbeddedComponents_35, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_70_70, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71);
                    }
#line 831 "error_util.m"
                  else
#line 832 "error_util.m"
                    {
#line 832 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 832 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 832 "error_util.m"
                    }
#line 826 "error_util.m"
                }
#line 825 "error_util.m"
              else
#line 825 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 2))))
#line 835 "error_util.m"
                  {
#line 835 "error_util.m"
                    MR_Word parse_tree__error_util__VerboseErrors_37;
#line 835 "error_util.m"
                    MR_Word parse_tree__error_util__ComponentPieces_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_23, (MR_Integer) 0)));

#line 836 "error_util.m"
                    {
#line 836 "error_util.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_37);
                    }
#line 845 "error_util.m"
                    if ((parse_tree__error_util__VerboseErrors_37 == (MR_Integer) 0))
#line 846 "error_util.m"
                      {
#line 847 "error_util.m"
                        {
#line 847 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 847 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 847 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 846 "error_util.m"
                      }
#line 845 "error_util.m"
                    else
#line 838 "error_util.m"
                      {
#line 838 "error_util.m"
                        MR_Word parse_tree__error_util__MaybeMaxWidth_75;

#line 839 "error_util.m"
                        {
#line 839 "error_util.m"
                          libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_75);
                        }
#line 841 "error_util.m"
                        {
#line 841 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_75, parse_tree__error_util__ComponentPieces_77);
                        }
#line 843 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 844 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 838 "error_util.m"
                      }
#line 835 "error_util.m"
                  }
#line 825 "error_util.m"
                else
#line 825 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 867 "error_util.m"
                    {
#line 867 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 867 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_40 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2));
#line 13674 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13676 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69;

#line 13679 "parse_tree.error_util.c"
                      {
#line 13681 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_81), parse_tree__error_util__Anything_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69);
                      }
#line 869 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 870 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 867 "error_util.m"
                    }
#line 825 "error_util.m"
                  else
#line 850 "error_util.m"
                    {
#line 850 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 850 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2)));
#line 850 "error_util.m"
                      MR_Word parse_tree__error_util__MaybeMaxWidth_79;
#line 850 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_80;

#line 851 "error_util.m"
                      {
#line 851 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_80);
                      }
#line 852 "error_util.m"
                      {
#line 852 "error_util.m"
                        libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_79);
                      }
#line 858 "error_util.m"
                      if ((parse_tree__error_util__VerboseErrors_80 == (MR_Integer) 0))
#line 859 "error_util.m"
                        {
#line 860 "error_util.m"
                          {
#line 860 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__NonVerbosePieces_39);
                          }
#line 862 "error_util.m"
                          {
#line 862 "error_util.m"
                            libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                          }
#line 859 "error_util.m"
                        }
#line 858 "error_util.m"
                      else
#line 856 "error_util.m"
                        {
#line 856 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__VerbosePieces_38);
                        }
#line 864 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 865 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 850 "error_util.m"
                    }
#line 872 "error_util.m"
            /* direct tailcall eliminated */
#line 872 "error_util.m"
            {
#line 872 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_24;
#line 872 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 872 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 872 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 872 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 872 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 872 "error_util.m"
            }
#line 872 "error_util.m"
            continue;
#line 816 "error_util.m"
          }
#line 814 "error_util.m"
      }
#line 814 "error_util.m"
      break;
#line 814 "error_util.m"
    }
#line 808 "error_util.m"
}

#line 780 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 780 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 780 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5)
#line 780 "error_util.m"
{
#line 785 "error_util.m"
  while (MR_TRUE)
#line 785 "error_util.m"
    {
#line 785 "error_util.m"
      /* tailcall optimized into a loop */
#line 785 "error_util.m"
      {
#line 785 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 785 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 785 "error_util.m"
        else
#line 786 "error_util.m"
          {
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__Msg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__Components_23;
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_24;
#line 786 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_26;
#line 786 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_27;
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_33_33;
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 786 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 13827 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_16)) == (MR_mktag((MR_Integer) 1))))
#line 13829 "parse_tree.error_util.c"
              {
#line 13831 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_25;

#line 793 "error_util.m"
                parse_tree__error_util__MaybeContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 0)));
#line 793 "error_util.m"
                parse_tree__error_util__TreatAsFirst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 793 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 2)));
#line 793 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 3)));
#line 799 "error_util.m"
                if ((parse_tree__error_util__TreatAsFirst_25 == (MR_Integer) 1))
#line 800 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 799 "error_util.m"
                else
#line 798 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = (MR_Integer) 0;
#line 13850 "parse_tree.error_util.c"
              }
#line 13852 "parse_tree.error_util.c"
            else
#line 13854 "parse_tree.error_util.c"
              {
#line 13856 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 0)));

#line 788 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 789 "error_util.m"
                {
#line 789 "error_util.m"
                  parse_tree__error_util__MaybeContext_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 789 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_24, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_22));
#line 789 "error_util.m"
                }
#line 791 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = (MR_Integer) 0;
#line 800 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 13873 "parse_tree.error_util.c"
              }
#line 803 "error_util.m"
            parse_tree__error_util__Indent_27 = (parse_tree__error_util__ExtraIndentLevel_26 * (MR_Integer) 2);
#line 804 "error_util.m"
            {
#line 804 "error_util.m"
              parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__Components_23, parse_tree__error_util__MaybeContext_24, parse_tree__error_util__Indent_27, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_33_33, &parse_tree__error_util__STATE_VARIABLE_First_35_35, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36);
            }
#line 806 "error_util.m"
            /* direct tailcall eliminated */
#line 806 "error_util.m"
            {
#line 806 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_17;
#line 806 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 806 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 806 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 806 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 806 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 806 "error_util.m"
            }
#line 806 "error_util.m"
            continue;
#line 786 "error_util.m"
          }
#line 785 "error_util.m"
      }
#line 785 "error_util.m"
      break;
#line 785 "error_util.m"
    }
#line 780 "error_util.m"
}

#line 733 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 733 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 733 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 733 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 733 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 733 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 733 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23)
#line 733 "error_util.m"
{
#line 736 "error_util.m"
  {
#line 736 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__Severity_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_17;
#line 736 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_18;
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));

#line 738 "error_util.m"
    {
#line 738 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_7_p_0(parse_tree__error_util__Msgs_16, parse_tree__error_util__Globals_9, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_17);
    }
#line 740 "error_util.m"
    {
#line 740 "error_util.m"
      parse_tree__error_util__MaybeActual_18 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_9, parse_tree__error_util__Severity_14);
    }
#line 751 "error_util.m"
    if ((parse_tree__error_util__PrintedSome_17 == (MR_Integer) 1))
#line 742 "error_util.m"
      {
#line 742 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 742 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 742 "error_util.m"
      }
#line 751 "error_util.m"
    else
#line 766 "error_util.m"
      if ((parse_tree__error_util__MaybeActual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "error_util.m"
        {
#line 768 "error_util.m"
          {
#line 768 "error_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/8", (MR_String) "MaybeActual is no");
#line 768 "error_util.m"
            return;
          }
#line 767 "error_util.m"
        }
#line 766 "error_util.m"
      else
#line 754 "error_util.m"
        {
#line 754 "error_util.m"
          MR_Word parse_tree__error_util__Actual_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_18, (MR_Integer) 0)));

#line 759 "error_util.m"
          if ((parse_tree__error_util__Actual_19 == (MR_Integer) 0))
#line 756 "error_util.m"
            {
#line 757 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22 + (MR_Integer) 1);
#line 758 "error_util.m"
              {
#line 758 "error_util.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 758 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 756 "error_util.m"
            }
#line 759 "error_util.m"
          else
#line 759 "error_util.m"
            if ((parse_tree__error_util__Actual_19 == (MR_Integer) 2))
#line 764 "error_util.m"
              {
#line 764 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 764 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 764 "error_util.m"
              }
#line 759 "error_util.m"
            else
#line 760 "error_util.m"
              {
#line 761 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20 + (MR_Integer) 1);
#line 762 "error_util.m"
                {
#line 762 "error_util.m"
                  libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_9);
                }
#line 762 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 760 "error_util.m"
              }
#line 754 "error_util.m"
        }
#line 736 "error_util.m"
  }
#line 733 "error_util.m"
}

#line 693 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 693 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 693 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 693 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 693 "error_util.m"
{
#line 696 "error_util.m"
  {
#line 696 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 696 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 696 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 696 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 696 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 696 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 698 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 698 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 699 "error_util.m"
    {
#line 699 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 700 "error_util.m"
    {
#line 700 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 701 "error_util.m"
    {
#line 701 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 702 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 704 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 703 "error_util.m"
      {
#line 703 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 703 "error_util.m"
        return;
      }
#line 704 "error_util.m"
    else
#line 705 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 696 "error_util.m"
  }
#line 693 "error_util.m"
}

#line 607 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 607 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 607 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 607 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 607 "error_util.m"
{
#line 610 "error_util.m"
  {
#line 610 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 610 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 610 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 610 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 628 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 628 "error_util.m"
      {
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 631 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 631 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 631 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 628 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "error_util.m"
        else
#line 632 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 628 "error_util.m"
      }
#line 628 "error_util.m"
    else
#line 628 "error_util.m"
      {
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 629 "error_util.m"
        {
#line 629 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 629 "error_util.m"
        }
#line 628 "error_util.m"
      }
#line 628 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 628 "error_util.m"
      {
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 631 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 631 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 631 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 628 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "error_util.m"
        else
#line 632 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 628 "error_util.m"
      }
#line 628 "error_util.m"
    else
#line 628 "error_util.m"
      {
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 628 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 629 "error_util.m"
        {
#line 629 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 629 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 629 "error_util.m"
        }
#line 628 "error_util.m"
      }
#line 613 "error_util.m"
    {
#line 613 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 617 "error_util.m"
    if ((parse_tree__error_util__ContextResult_9 == (MR_Integer) 0))
#line 616 "error_util.m"
      {
#line 616 "error_util.m"
        parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 616 "error_util.m"
        return;
      }
#line 617 "error_util.m"
    else
#line 621 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 610 "error_util.m"
  }
#line 607 "error_util.m"
}

#line 593 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 593 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 593 "error_util.m"
{
#line 595 "error_util.m"
  {
#line 595 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 595 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 595 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "error_util.m"
    else
#line 596 "error_util.m"
      {
#line 596 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 596 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 597 "error_util.m"
        {
#line 597 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 14269 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 14271 "parse_tree.error_util.c"
          {
#line 14273 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 631 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 631 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 631 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 14282 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 604 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 14286 "parse_tree.error_util.c"
            else
#line 14288 "parse_tree.error_util.c"
              {
#line 14290 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 601 "error_util.m"
                {
#line 601 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 601 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 601 "error_util.m"
                }
#line 14303 "parse_tree.error_util.c"
              }
#line 14305 "parse_tree.error_util.c"
          }
#line 14307 "parse_tree.error_util.c"
        else
#line 14309 "parse_tree.error_util.c"
          {
#line 14311 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 628 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 601 "error_util.m"
            {
#line 601 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 601 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 601 "error_util.m"
            }
#line 14326 "parse_tree.error_util.c"
          }
#line 596 "error_util.m"
      }
#line 595 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 595 "error_util.m"
  }
#line 593 "error_util.m"
}

#line 532 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 532 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 532 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 532 "error_util.m"
{
#line 535 "error_util.m"
  while (MR_TRUE)
#line 535 "error_util.m"
    {
#line 535 "error_util.m"
      /* tailcall optimized into a loop */
#line 535 "error_util.m"
      {
#line 535 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 535 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 535 "error_util.m"
        else
#line 536 "error_util.m"
          {
#line 536 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 536 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 536 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 538 "error_util.m"
            {
#line 538 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 542 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 542 "error_util.m"
            else
#line 542 "error_util.m"
              {
#line 542 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 542 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 542 "error_util.m"
                else
#line 546 "error_util.m"
                  {
#line 546 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 546 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 548 "error_util.m"
                    {
#line 548 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 548 "error_util.m"
                    {
#line 548 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 548 "error_util.m"
                    }
#line 546 "error_util.m"
                  }
#line 542 "error_util.m"
              }
#line 550 "error_util.m"
            /* direct tailcall eliminated */
#line 550 "error_util.m"
            {
#line 550 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 550 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 550 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 550 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 550 "error_util.m"
            }
#line 550 "error_util.m"
            continue;
#line 536 "error_util.m"
          }
#line 535 "error_util.m"
      }
#line 535 "error_util.m"
      break;
#line 535 "error_util.m"
    }
#line 532 "error_util.m"
}

#line 460 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 460 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 460 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 460 "error_util.m"
{
#line 1568 "error_util.m"
  {
#line 1568 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1568 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1568 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1569 "error_util.m"
    {
#line 1569 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1570 "error_util.m"
    {
#line 1570 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1571 "error_util.m"
    {
#line 1571 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1572 "error_util.m"
    {
#line 1572 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1573 "error_util.m"
    {
#line 1573 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1573 "error_util.m"
    {
#line 1573 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1574 "error_util.m"
    {
#line 1574 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1576 "error_util.m"
    {
#line 1576 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1576 "error_util.m"
      return;
    }
#line 1568 "error_util.m"
  }
#line 460 "error_util.m"
}

#line 452 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 452 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 452 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 452 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 452 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 452 "error_util.m"
{
#line 1562 "error_util.m"
  {
#line 1562 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1562 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_23;
#line 1562 "error_util.m"
    MR_Word parse_tree__error_util__V_26_26;

#line 1563 "error_util.m"
    {
#line 1563 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 951 "error_util.m"
    {
#line 951 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_23);
    }
#line 953 "error_util.m"
    {
#line 953 "error_util.m"
      parse_tree__error_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_26_26, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 953 "error_util.m"
    }
#line 953 "error_util.m"
    {
#line 953 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_26_26, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_23, parse_tree__error_util__Components_10);
#line 953 "error_util.m"
      return;
    }
#line 1562 "error_util.m"
  }
#line 452 "error_util.m"
}

#line 447 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 447 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 447 "error_util.m"
{
#line 1547 "error_util.m"
  {
#line 1547 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1547 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1547 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1556 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1556 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1550 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1548 "error_util.m"
    {
#line 1548 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1550 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1550 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1550 "error_util.m"
      {
#line 1550 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1550 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1551 "error_util.m"
        {
#line 1551 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1550 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1550 "error_util.m"
          {
#line 1552 "error_util.m"
            {
#line 1552 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1552 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1550 "error_util.m"
          }
#line 1550 "error_util.m"
      }
#line 1556 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1554 "error_util.m"
      {
#line 1554 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1554 "error_util.m"
        {
#line 1554 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1554 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1554 "error_util.m"
        }
#line 1555 "error_util.m"
        {
#line 1555 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1554 "error_util.m"
      }
#line 1556 "error_util.m"
    else
#line 1557 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1547 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1547 "error_util.m"
  }
#line 447 "error_util.m"
}

#line 442 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 442 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 442 "error_util.m"
{
#line 1545 "error_util.m"
  {
#line 1545 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1545 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1545 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1545 "error_util.m"
    {
#line 1545 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1545 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1545 "error_util.m"
  }
#line 442 "error_util.m"
}

#line 438 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 438 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 438 "error_util.m"
{
#line 1542 "error_util.m"
  {
#line 1542 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1542 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1542 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 1))
#line 1543 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1542 "error_util.m"
    else
#line 1542 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1542 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1542 "error_util.m"
  }
#line 438 "error_util.m"
}

#line 436 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 436 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 436 "error_util.m"
{
#line 1535 "error_util.m"
  {
#line 1535 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1535 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1535 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1535 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1535 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1535 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1535 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1535 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1535 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1535 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1536 "error_util.m"
    {
#line 1536 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1537 "error_util.m"
    }
#line 1536 "error_util.m"
    {
#line 1536 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1536 "error_util.m"
    }
#line 1536 "error_util.m"
    {
#line 1536 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1536 "error_util.m"
    }
#line 1536 "error_util.m"
    {
#line 1536 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1536 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1536 "error_util.m"
    }
#line 1536 "error_util.m"
    {
#line 1536 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1535 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1535 "error_util.m"
  }
#line 436 "error_util.m"
}

#line 434 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 434 "error_util.m"
{
#line 1539 "error_util.m"
  {
#line 1539 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1539 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1539 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1539 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1539 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1540 "error_util.m"
    {
#line 1540 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1540 "error_util.m"
    {
#line 1540 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1540 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1540 "error_util.m"
    }
#line 1540 "error_util.m"
    {
#line 1540 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1540 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1540 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1540 "error_util.m"
    }
#line 1540 "error_util.m"
    {
#line 1540 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1539 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1539 "error_util.m"
  }
#line 434 "error_util.m"
}

#line 430 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 430 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 430 "error_util.m"
{
#line 1046 "error_util.m"
  {
#line 1046 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1046 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1047 "error_util.m"
    {
#line 1047 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1046 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1046 "error_util.m"
  }
#line 430 "error_util.m"
}

#line 426 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 426 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 426 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 426 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 426 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 426 "error_util.m"
{
#line 957 "error_util.m"
  {
#line 957 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 957 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;

#line 958 "error_util.m"
    {
#line 958 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 960 "error_util.m"
    {
#line 960 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 960 "error_util.m"
      return;
    }
#line 957 "error_util.m"
  }
#line 426 "error_util.m"
}

#line 423 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 423 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 423 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 423 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 423 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 423 "error_util.m"
{
#line 950 "error_util.m"
  {
#line 950 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 950 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;
#line 950 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;

#line 951 "error_util.m"
    {
#line 951 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 953 "error_util.m"
    {
#line 953 "error_util.m"
      parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 953 "error_util.m"
    }
#line 953 "error_util.m"
    {
#line 953 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_17_17, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 953 "error_util.m"
      return;
    }
#line 950 "error_util.m"
  }
#line 423 "error_util.m"
}

#line 415 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 415 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 415 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 415 "error_util.m"
{
#line 944 "error_util.m"
  {
#line 944 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 944 "error_util.m"
    MR_Word parse_tree__error_util__Components_9;
#line 944 "error_util.m"
    MR_Word parse_tree__error_util__V_12_12;
#line 944 "error_util.m"
    MR_String parse_tree__error_util__V_13_13;
#line 944 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 944 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;

#line 946 "error_util.m"
    {
#line 946 "error_util.m"
      parse_tree__error_util__V_13_13 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 946 "error_util.m"
    {
#line 946 "error_util.m"
      parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 946 "error_util.m"
    }
#line 946 "error_util.m"
    {
#line 946 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__Msg_6));
#line 946 "error_util.m"
    }
#line 946 "error_util.m"
    {
#line 946 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "error_util.m"
    }
#line 946 "error_util.m"
    {
#line 946 "error_util.m"
      parse_tree__error_util__Components_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 946 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 946 "error_util.m"
    }
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__Components_9);
#line 947 "error_util.m"
      return;
    }
#line 944 "error_util.m"
  }
#line 415 "error_util.m"
}

#line 407 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 407 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 407 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 407 "error_util.m"
{
#line 938 "error_util.m"
  {
#line 938 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 938 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_8;

#line 939 "error_util.m"
    {
#line 939 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 136, &parse_tree__error_util__MaybeMaxWidth_8);
    }
#line 941 "error_util.m"
    {
#line 941 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_8, parse_tree__error_util__Components_6);
#line 941 "error_util.m"
      return;
    }
#line 938 "error_util.m"
  }
#line 407 "error_util.m"
}

#line 397 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 397 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 397 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 397 "error_util.m"
{
#line 933 "error_util.m"
  {
#line 933 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 933 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 933 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "error_util.m"
      {
#line 933 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 934 "error_util.m"
        {
#line 934 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 933 "error_util.m"
      }
#line 933 "error_util.m"
    else
#line 933 "error_util.m"
      {
#line 933 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 935 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 933 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 933 "error_util.m"
        else
#line 936 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 933 "error_util.m"
      }
#line 933 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 933 "error_util.m"
  }
#line 397 "error_util.m"
}

#line 392 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 392 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 392 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 392 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 392 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 392 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 392 "error_util.m"
{
#line 929 "error_util.m"
  {
#line 929 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 929 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 929 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 929 "error_util.m"
    else
#line 929 "error_util.m"
      {
#line 929 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 929 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 929 "error_util.m"
        else
#line 931 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 929 "error_util.m"
      }
#line 929 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 929 "error_util.m"
  }
#line 392 "error_util.m"
}

#line 384 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 384 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 384 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 384 "error_util.m"
{
#line 923 "error_util.m"
  {
#line 923 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 923 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 923 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "error_util.m"
    else
#line 923 "error_util.m"
      {
#line 923 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 923 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 923 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "error_util.m"
          {
#line 924 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 924 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 924 "error_util.m"
            {
#line 924 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[9]));
            }
#line 924 "error_util.m"
            {
#line 924 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 924 "error_util.m"
          }
#line 923 "error_util.m"
        else
#line 925 "error_util.m"
          {
#line 925 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 925 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 925 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 927 "error_util.m"
            {
#line 927 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 927 "error_util.m"
            {
#line 927 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]), parse_tree__error_util__V_24_24);
            }
#line 926 "error_util.m"
            {
#line 926 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 925 "error_util.m"
          }
#line 923 "error_util.m"
      }
#line 923 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 923 "error_util.m"
  }
#line 384 "error_util.m"
}

#line 373 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 373 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 373 "error_util.m"
{
#line 916 "error_util.m"
  {
#line 916 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 916 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 916 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 916 "error_util.m"
    else
#line 916 "error_util.m"
      {
#line 916 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 916 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 916 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "error_util.m"
          {
#line 917 "error_util.m"
            {
#line 917 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 917 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 917 "error_util.m"
            }
#line 917 "error_util.m"
          }
#line 916 "error_util.m"
        else
#line 916 "error_util.m"
          {
#line 916 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 916 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 916 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "error_util.m"
              {
#line 918 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 918 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 918 "error_util.m"
                {
#line 918 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "error_util.m"
                }
#line 918 "error_util.m"
                {
#line 918 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 918 "error_util.m"
                }
#line 918 "error_util.m"
                {
#line 918 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 918 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 918 "error_util.m"
                }
#line 918 "error_util.m"
              }
#line 916 "error_util.m"
            else
#line 919 "error_util.m"
              {
#line 919 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 919 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 920 "error_util.m"
                {
#line 920 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 920 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15])));
#line 920 "error_util.m"
                }
#line 921 "error_util.m"
                {
#line 921 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 921 "error_util.m"
                {
#line 921 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 919 "error_util.m"
              }
#line 916 "error_util.m"
          }
#line 916 "error_util.m"
      }
#line 916 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 916 "error_util.m"
  }
#line 373 "error_util.m"
}

#line 367 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 367 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 367 "error_util.m"
{
#line 908 "error_util.m"
  {
#line 908 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 908 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 908 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "error_util.m"
    else
#line 908 "error_util.m"
      {
#line 908 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 908 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 908 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 908 "error_util.m"
        else
#line 908 "error_util.m"
          {
#line 908 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 908 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 908 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "error_util.m"
              {
#line 910 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 910 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_33_33);
                }
#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 910 "error_util.m"
              }
#line 908 "error_util.m"
            else
#line 912 "error_util.m"
              {
#line 912 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 912 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 912 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 914 "error_util.m"
                {
#line 914 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 914 "error_util.m"
                {
#line 914 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15]), parse_tree__error_util__V_25_25);
                }
#line 913 "error_util.m"
                {
#line 913 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 912 "error_util.m"
              }
#line 908 "error_util.m"
          }
#line 908 "error_util.m"
      }
#line 908 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 908 "error_util.m"
  }
#line 367 "error_util.m"
}

#line 361 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 361 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 361 "error_util.m"
{
#line 902 "error_util.m"
  {
#line 902 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 902 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 902 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 902 "error_util.m"
    else
#line 902 "error_util.m"
      {
#line 902 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 902 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "error_util.m"
          {
#line 903 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 903 "error_util.m"
            {
#line 903 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "error_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 903 "error_util.m"
            }
#line 903 "error_util.m"
            {
#line 903 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 903 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "error_util.m"
            }
#line 903 "error_util.m"
          }
#line 902 "error_util.m"
        else
#line 902 "error_util.m"
          {
#line 902 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 902 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 902 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "error_util.m"
              {
#line 904 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 904 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 904 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 904 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 904 "error_util.m"
                {
#line 904 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 904 "error_util.m"
                }
#line 904 "error_util.m"
                {
#line 904 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 904 "error_util.m"
                }
#line 904 "error_util.m"
                {
#line 904 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "error_util.m"
                }
#line 904 "error_util.m"
                {
#line 904 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 904 "error_util.m"
                }
#line 904 "error_util.m"
                {
#line 904 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 904 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 904 "error_util.m"
                }
#line 904 "error_util.m"
              }
#line 902 "error_util.m"
            else
#line 905 "error_util.m"
              {
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 906 "error_util.m"
                {
#line 906 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 906 "error_util.m"
                }
#line 906 "error_util.m"
                {
#line 906 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 906 "error_util.m"
                {
#line 906 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[13])));
#line 906 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 906 "error_util.m"
                }
#line 906 "error_util.m"
                {
#line 906 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 906 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 906 "error_util.m"
                }
#line 905 "error_util.m"
              }
#line 902 "error_util.m"
          }
#line 902 "error_util.m"
      }
#line 902 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 902 "error_util.m"
  }
#line 361 "error_util.m"
}

#line 357 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 357 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 357 "error_util.m"
{
#line 896 "error_util.m"
  {
#line 896 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 896 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 896 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 896 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "error_util.m"
    else
#line 896 "error_util.m"
      {
#line 896 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 896 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "error_util.m"
          {
#line 897 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 897 "error_util.m"
            {
#line 897 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 897 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 897 "error_util.m"
            }
#line 897 "error_util.m"
            {
#line 897 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 897 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "error_util.m"
            }
#line 897 "error_util.m"
          }
#line 896 "error_util.m"
        else
#line 896 "error_util.m"
          {
#line 896 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 896 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 896 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "error_util.m"
              {
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
              }
#line 896 "error_util.m"
            else
#line 899 "error_util.m"
              {
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 899 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 900 "error_util.m"
                {
#line 900 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 900 "error_util.m"
                {
#line 900 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 900 "error_util.m"
                }
#line 900 "error_util.m"
                {
#line 900 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 900 "error_util.m"
                {
#line 900 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 900 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 900 "error_util.m"
                }
#line 899 "error_util.m"
              }
#line 896 "error_util.m"
          }
#line 896 "error_util.m"
      }
#line 896 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 896 "error_util.m"
  }
#line 357 "error_util.m"
}

#line 352 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 352 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 352 "error_util.m"
{
#line 894 "error_util.m"
  {
#line 894 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 894 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 894 "error_util.m"
    {
#line 894 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 894 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 894 "error_util.m"
    }
#line 894 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 894 "error_util.m"
  }
#line 352 "error_util.m"
}

#line 730 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 730 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 730 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7)
#line 730 "error_util.m"
{
#line 730 "error_util.m"
  {
#line 730 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 730 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21;
#line 730 "error_util.m"
    MR_Integer parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23;

#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23);
    }
#line 730 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21));
#line 730 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23));
#line 730 "error_util.m"
  }
#line 730 "error_util.m"
}

#line 691 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 691 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 691 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 691 "error_util.m"
{
#line 691 "error_util.m"
  {
#line 691 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 691 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 691 "error_util.m"
    {
#line 691 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 691 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 691 "error_util.m"
  }
#line 691 "error_util.m"
}

#line 269 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 269 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 269 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 269 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 269 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 269 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 269 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 269 "error_util.m"
{
#line 728 "error_util.m"
  {
#line 728 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 728 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33;
#line 728 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 728 "error_util.m"
    MR_Word parse_tree__error_util__V_21_21;
#line 730 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16;
#line 730 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18;
#line 730 "error_util.m"
    MR_Box parse_tree__error_util__conv3_STATE_VARIABLE_IO_20;

#line 691 "error_util.m"
    {
#line 691 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      parse_tree__error_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 730 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 730 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 730 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 730 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 730 "error_util.m"
    }
#line 16048 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      mercury__list__foldl3_8_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_21_21, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15)), &parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17)), &parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv3_STATE_VARIABLE_IO_20);
    }
#line 730 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_16 = ((MR_Integer) parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16);
#line 730 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_18 = ((MR_Integer) parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18);
#line 728 "error_util.m"
  }
#line 269 "error_util.m"
}

#line 267 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 267 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 267 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 267 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14,
#line 267 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_15,
#line 267 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16,
#line 267 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_17)
#line 267 "error_util.m"
{
#line 726 "error_util.m"
  {
#line 726 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 726 "error_util.m"
    {
#line 726 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14, parse_tree__error_util__STATE_VARIABLE_NumWarnings_15, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_17);
#line 726 "error_util.m"
      return;
    }
#line 726 "error_util.m"
  }
#line 267 "error_util.m"
}

#line 244 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 244 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 244 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 244 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 244 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 244 "error_util.m"
{
#line 714 "error_util.m"
  {
#line 714 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 714 "error_util.m"
    if ((parse_tree__error_util__Verbose_7 == (MR_Integer) 0))
#line 714 "error_util.m"
      *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 714 "error_util.m"
    else
#line 716 "error_util.m"
      {
#line 718 "error_util.m"
        MR_Integer parse_tree__error_util___NumWarnings_11;
#line 718 "error_util.m"
        MR_Integer parse_tree__error_util___NumErrors_12;

#line 718 "error_util.m"
        {
#line 718 "error_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
        }
#line 720 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "error_util.m"
      }
#line 714 "error_util.m"
  }
#line 244 "error_util.m"
}

#line 239 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 239 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 239 "error_util.m"
{
#line 661 "error_util.m"
  {
#line 661 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 661 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 661 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 661 "error_util.m"
    else
#line 662 "error_util.m"
      {
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 662 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 662 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 16180 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 663 "error_util.m"
        {
#line 663 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 663 "error_util.m"
        {
#line 663 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 662 "error_util.m"
      }
#line 661 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 661 "error_util.m"
  }
#line 239 "error_util.m"
}

#line 645 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 645 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 645 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 645 "error_util.m"
{
#line 645 "error_util.m"
  {
#line 645 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 645 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 645 "error_util.m"
    {
#line 645 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__645__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 645 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 645 "error_util.m"
  }
#line 645 "error_util.m"
}

#line 236 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 236 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 236 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 236 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 236 "error_util.m"
{
#line 644 "error_util.m"
  {
#line 644 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 644 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 644 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 644 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 644 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 644 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 645 "error_util.m"
    {
#line 645 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 649 "error_util.m"
    {
#line 649 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 650 "error_util.m"
    {
#line 650 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 656 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 657 "error_util.m"
      {
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 658 "error_util.m"
        {
#line 658 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 658 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 658 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 658 "error_util.m"
        }
#line 658 "error_util.m"
        {
#line 658 "error_util.m"
          MR_Word base;
#line 658 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 658 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 658 "error_util.m"
        }
#line 657 "error_util.m"
      }
#line 656 "error_util.m"
    else
#line 652 "error_util.m"
      {
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 652 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 652 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 652 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 653 "error_util.m"
        {
#line 653 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 654 "error_util.m"
        {
#line 654 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 655 "error_util.m"
        {
#line 655 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 655 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 655 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 655 "error_util.m"
        }
#line 655 "error_util.m"
        {
#line 655 "error_util.m"
          MR_Word base;
#line 655 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 655 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 655 "error_util.m"
        }
#line 652 "error_util.m"
      }
#line 644 "error_util.m"
  }
#line 236 "error_util.m"
}

#line 234 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 234 "error_util.m"
{
#line 642 "error_util.m"
  {
#line 642 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 642 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "error_util.m"
  }
#line 234 "error_util.m"
}

#line 591 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 591 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 591 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 591 "error_util.m"
{
#line 591 "error_util.m"
  {
#line 591 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 591 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 591 "error_util.m"
    {
#line 591 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 591 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 591 "error_util.m"
  }
#line 591 "error_util.m"
}

#line 223 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 223 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 223 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 223 "error_util.m"
{
#line 590 "error_util.m"
  {
#line 590 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 591 "error_util.m"
    {
#line 591 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 591 "error_util.m"
      return;
    }
#line 590 "error_util.m"
  }
#line 223 "error_util.m"
}

#line 219 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 219 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 219 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 219 "error_util.m"
{
#line 570 "error_util.m"
  {
#line 570 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 570 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 570 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 530 "error_util.m"
    {
#line 530 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 575 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 575 "error_util.m"
    else
#line 576 "error_util.m"
      {
#line 576 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 582 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 2))
#line 584 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 582 "error_util.m"
        else
#line 581 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 576 "error_util.m"
      }
#line 570 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 570 "error_util.m"
  }
#line 219 "error_util.m"
}

#line 214 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 214 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 214 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 214 "error_util.m"
{
#line 552 "error_util.m"
  {
#line 552 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 552 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 552 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 530 "error_util.m"
    {
#line 530 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 557 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 557 "error_util.m"
    else
#line 558 "error_util.m"
      {
#line 558 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 562 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 0))
#line 561 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 562 "error_util.m"
        else
#line 566 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 558 "error_util.m"
      }
#line 552 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 552 "error_util.m"
  }
#line 214 "error_util.m"
}

#line 208 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 208 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 208 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 208 "error_util.m"
{
#line 529 "error_util.m"
  {
#line 529 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 529 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 530 "error_util.m"
    {
#line 530 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 529 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 529 "error_util.m"
  }
#line 208 "error_util.m"
}

#line 202 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 202 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 202 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 202 "error_util.m"
{
#line 504 "error_util.m"
  while (MR_TRUE)
#line 504 "error_util.m"
    {
#line 504 "error_util.m"
      /* tailcall optimized into a loop */
#line 504 "error_util.m"
      {
#line 504 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 504 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 504 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 504 "error_util.m"
          {
#line 505 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 504 "error_util.m"
          }
#line 504 "error_util.m"
        else
#line 504 "error_util.m"
          if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 510 "error_util.m"
            {
#line 511 "error_util.m"
              parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 510 "error_util.m"
            }
#line 504 "error_util.m"
          else
#line 504 "error_util.m"
            if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 507 "error_util.m"
              {
#line 508 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 507 "error_util.m"
              }
#line 504 "error_util.m"
            else
#line 514 "error_util.m"
              {
#line 514 "error_util.m"
                MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 514 "error_util.m"
                MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 514 "error_util.m"
                MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 514 "error_util.m"
                MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 514 "error_util.m"
                MR_Word parse_tree__error_util__Value_11;

#line 515 "error_util.m"
                {
#line 515 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
                }
#line 516 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 518 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 517 "error_util.m"
                  {
#line 517 "error_util.m"
                    /* direct tailcall eliminated */
#line 517 "error_util.m"
                    {
#line 517 "error_util.m"
                      MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 517 "error_util.m"
                      parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 517 "error_util.m"
                    }
#line 517 "error_util.m"
                    continue;
#line 517 "error_util.m"
                  }
#line 518 "error_util.m"
                else
#line 522 "error_util.m"
                  if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "error_util.m"
                    parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "error_util.m"
                  else
#line 523 "error_util.m"
                    {
#line 523 "error_util.m"
                      MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 524 "error_util.m"
                      /* direct tailcall eliminated */
#line 524 "error_util.m"
                      {
#line 524 "error_util.m"
                        MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 524 "error_util.m"
                        parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 524 "error_util.m"
                      }
#line 524 "error_util.m"
                      continue;
#line 523 "error_util.m"
                    }
#line 514 "error_util.m"
              }
#line 504 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 504 "error_util.m"
      }
#line 504 "error_util.m"
      break;
#line 504 "error_util.m"
    }
#line 202 "error_util.m"
}

#line 196 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 196 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 196 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 196 "error_util.m"
{
#line 483 "error_util.m"
  {
#line 483 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 483 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 483 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 0))
#line 483 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 484 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 483 "error_util.m"
      else
#line 483 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 488 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 483 "error_util.m"
        else
#line 486 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 483 "error_util.m"
    else
#line 483 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 2))
#line 483 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 496 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 483 "error_util.m"
        else
#line 483 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 500 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 483 "error_util.m"
          else
#line 498 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 483 "error_util.m"
      else
#line 483 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 490 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 483 "error_util.m"
        else
#line 483 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 494 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 483 "error_util.m"
          else
#line 492 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 483 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 483 "error_util.m"
  }
#line 196 "error_util.m"
}

#line 189 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 189 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 189 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 189 "error_util.m"
{
#line 16780 "parse_tree.error_util.c"
  {
#line 16782 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 16784 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16786 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 16789 "parse_tree.error_util.c"
    {
#line 16791 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 16794 "parse_tree.error_util.c"
  }
#line 189 "error_util.m"
}

void mercury__parse_tree__error_util__init(void)
{
}

void mercury__parse_tree__error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_actual_severity_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_components_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_printed_something_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_word_0);
}

void mercury__parse_tree__error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.error_util. */
