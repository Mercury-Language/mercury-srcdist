/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "mdbcomp.sym_name.mih"
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




#line 135 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 138 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 141 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 144 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 147 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 150 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 153 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 156 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 159 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 162 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 165 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 168 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 171 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 174 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 177 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 180 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 183 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 186 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 189 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 192 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 195 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 198 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 201 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 204 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 207 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 210 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 213 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 216 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 219 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 222 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 225 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 228 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 231 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1];

#line 234 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 237 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 240 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 243 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 246 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 249 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 252 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 255 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 258 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 261 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 264 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 267 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 270 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 273 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 276 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 279 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 282 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 285 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 288 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 291 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 294 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 297 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 300 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 303 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 306 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 309 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 312 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 315 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 318 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 321 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 324 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 327 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 330 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 333 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 336 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 339 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 342 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 345 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 348 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 351 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 354 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 357 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 360 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 363 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 366 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 369 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 372 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 375 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 378 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 381 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 384 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 387 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 390 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 393 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 396 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 399 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 402 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 405 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 408 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 411 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 414 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 417 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 420 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 423 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 426 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 429 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 432 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 435 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 438 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 441 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 444 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 447 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 450 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 453 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1];

#line 456 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 459 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 462 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 465 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 468 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 471 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 474 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 477 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 480 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 483 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 486 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 489 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 492 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 495 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 498 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 501 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 504 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 507 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 510 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 513 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 516 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 519 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 522 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 525 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 528 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 531 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 534 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 537 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 540 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[14];

#line 543 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 546 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[19];

#line 549 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[19];

#line 552 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 555 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 558 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 561 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 564 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 567 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 570 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 573 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 576 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 579 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 582 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 585 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 588 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 591 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 594 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 597 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 600 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 603 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 606 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 609 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 612 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 615 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 618 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 621 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 624 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 627 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 630 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 633 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 636 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 639 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 642 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 645 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 648 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 651 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 654 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 657 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 660 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 663 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 666 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 669 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 672 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 675 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 678 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 681 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 684 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 687 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 690 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 693 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 696 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 699 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 702 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 705 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 708 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 711 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 714 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 717 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 720 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 723 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 726 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 729 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 732 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 734 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 737 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 740 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 742 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 744 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 747 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 750 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 752 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 755 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 758 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 760 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 762 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 765 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 768 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 770 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 773 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 776 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 778 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 780 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 783 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 786 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 788 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 791 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 794 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 796 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 798 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 801 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 804 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 806 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 809 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 812 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 814 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 816 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 819 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 822 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 824 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 827 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 830 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 832 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 834 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 837 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 840 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 842 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 845 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 848 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 850 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 852 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 855 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 858 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 860 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 863 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 866 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 868 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 870 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 873 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 876 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 878 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 881 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 884 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 886 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 888 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 891 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 894 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 896 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 899 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 902 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 904 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 906 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 909 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 912 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 914 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 917 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 920 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 922 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 924 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 927 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 930 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 932 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 935 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 938 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 940 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 942 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 945 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 948 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 950 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 953 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 956 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 958 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 960 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 963 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 966 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 968 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 971 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 974 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 976 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 978 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 981 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 984 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 986 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 989 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 992 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 994 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 996 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 999 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1002 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1004 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1007 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1010 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1012 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1014 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1017 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1020 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1022 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1025 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1028 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1030 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1032 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1035 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1038 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1040 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1043 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1046 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1048 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1050 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 646 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__646__1_1_p_0(
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1179 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1179 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1179 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1279 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1279 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1279 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1161 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1161 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1161 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 773 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 773 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 773 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 777 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 777 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 777 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 891 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 891 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 891 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1429 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1429 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1429 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1519 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1519 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1519 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1519 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1519 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1519 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1519 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1494 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1494 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1494 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1494 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1494 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1446 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1446 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1446 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1414 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1414 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1414 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1414 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1404 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1404 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1404 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1404 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1391 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1391 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1391 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1386 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1386 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1386 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1386 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1381 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1381 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1376 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1376 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1335 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1335 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1290 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1284 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1284 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1185 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1185 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1148 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1148 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1148 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1148 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1135 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1135 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1050 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1050 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1050 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1039 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1039 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1012 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1012 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1012 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1012 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 964 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 964 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 809 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 809 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 809 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 809 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8);

#line 781 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 781 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5);

#line 734 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 734 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 734 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 734 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 734 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 734 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 734 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23);

#line 694 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 694 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 694 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 694 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 608 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 608 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 608 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 608 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 594 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 594 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 533 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 533 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 731 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7);

#line 692 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 692 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 646 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 646 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 646 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 592 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 592 "error_util.m"
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



#line 1723 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1729 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1735 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1741 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1748 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1755 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1762 "parse_tree.error_util.c"
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

#line 1783 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1791 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1797 "parse_tree.error_util.c"
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

#line 1812 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1817 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1826 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1831 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1836 "parse_tree.error_util.c"
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

#line 1857 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1865 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1871 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 1877 "parse_tree.error_util.c"
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

#line 1892 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1900 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1908 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 1916 "parse_tree.error_util.c"
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

#line 1931 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1936 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 1941 "parse_tree.error_util.c"
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

#line 1955 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1961 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1967 "parse_tree.error_util.c"
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

#line 1988 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1996 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2001 "parse_tree.error_util.c"
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

#line 2016 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2023 "parse_tree.error_util.c"
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

#line 2042 "parse_tree.error_util.c"
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

#line 2057 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2062 "parse_tree.error_util.c"
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

#line 2077 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2083 "parse_tree.error_util.c"
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

#line 2098 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2103 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2111 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2116 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2124 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2133 "parse_tree.error_util.c"
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

#line 2148 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2153 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2158 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2163 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2169 "parse_tree.error_util.c"
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

#line 2193 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2202 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2211 "parse_tree.error_util.c"
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

#line 2232 "parse_tree.error_util.c"
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

#line 2247 "parse_tree.error_util.c"
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

#line 2262 "parse_tree.error_util.c"
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

#line 2277 "parse_tree.error_util.c"
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

#line 2292 "parse_tree.error_util.c"
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

#line 2307 "parse_tree.error_util.c"
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

#line 2322 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2327 "parse_tree.error_util.c"
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

#line 2342 "parse_tree.error_util.c"
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

#line 2357 "parse_tree.error_util.c"
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

#line 2372 "parse_tree.error_util.c"
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

#line 2387 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2392 "parse_tree.error_util.c"
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

#line 2407 "parse_tree.error_util.c"
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

#line 2422 "parse_tree.error_util.c"
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

#line 2437 "parse_tree.error_util.c"
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

#line 2452 "parse_tree.error_util.c"
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

#line 2467 "parse_tree.error_util.c"
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

#line 2482 "parse_tree.error_util.c"
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

#line 2497 "parse_tree.error_util.c"
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

#line 2516 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2521 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2526 "parse_tree.error_util.c"
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

#line 2545 "parse_tree.error_util.c"
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

#line 2566 "parse_tree.error_util.c"
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

#line 2587 "parse_tree.error_util.c"
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

#line 2608 "parse_tree.error_util.c"
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

#line 2623 "parse_tree.error_util.c"
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

#line 2638 "parse_tree.error_util.c"
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

#line 2653 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2661 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2669 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2677 "parse_tree.error_util.c"
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

#line 2692 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2699 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2704 "parse_tree.error_util.c"
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

#line 2718 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2726 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2734 "parse_tree.error_util.c"
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

#line 2755 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2763 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2770 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2777 "parse_tree.error_util.c"
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

#line 2792 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2797 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2806 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2811 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2816 "parse_tree.error_util.c"
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

#line 2837 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2845 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2854 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2862 "parse_tree.error_util.c"
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

#line 2883 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2888 "parse_tree.error_util.c"
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

#line 2903 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2908 "parse_tree.error_util.c"
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

#line 2923 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2928 "parse_tree.error_util.c"
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

#line 2943 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2948 "parse_tree.error_util.c"
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

#line 2963 "parse_tree.error_util.c"
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

#line 2978 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2983 "parse_tree.error_util.c"
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

#line 2998 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3003 "parse_tree.error_util.c"
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

#line 3018 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3023 "parse_tree.error_util.c"
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

#line 3038 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3043 "parse_tree.error_util.c"
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

#line 3058 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3063 "parse_tree.error_util.c"
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

#line 3078 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3083 "parse_tree.error_util.c"
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

#line 3098 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3103 "parse_tree.error_util.c"
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

#line 3118 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3123 "parse_tree.error_util.c"
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

#line 3138 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3143 "parse_tree.error_util.c"
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

#line 3158 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3163 "parse_tree.error_util.c"
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

#line 3178 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3183 "parse_tree.error_util.c"
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

#line 3198 "parse_tree.error_util.c"
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

#line 3213 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3218 "parse_tree.error_util.c"
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

#line 3233 "parse_tree.error_util.c"
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

#line 3248 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18
};

#line 3255 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3260 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3265 "parse_tree.error_util.c"
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

#line 3283 "parse_tree.error_util.c"
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

#line 3307 "parse_tree.error_util.c"
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

#line 3330 "parse_tree.error_util.c"
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

#line 3353 "parse_tree.error_util.c"
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

#line 3374 "parse_tree.error_util.c"
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

#line 3395 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3401 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3407 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3413 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3419 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3425 "parse_tree.error_util.c"
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

#line 3446 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3452 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3458 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3464 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3470 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3476 "parse_tree.error_util.c"
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

#line 3497 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3503 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3509 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3515 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3521 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3527 "parse_tree.error_util.c"
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

#line 3548 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3554 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3560 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3566 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3572 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3578 "parse_tree.error_util.c"
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

#line 3599 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3605 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3611 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3617 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3623 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3629 "parse_tree.error_util.c"
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

#line 3650 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3657 "parse_tree.error_util.c"
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

#line 3672 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3677 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3686 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3691 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3696 "parse_tree.error_util.c"
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

#line 3717 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3722 "parse_tree.error_util.c"
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

#line 3737 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3742 "parse_tree.error_util.c"
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

#line 3757 "parse_tree.error_util.c"
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

#line 3772 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3777 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3782 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3787 "parse_tree.error_util.c"
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

#line 3806 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3813 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3820 "parse_tree.error_util.c"
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

#line 3841 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3846 "parse_tree.error_util.c"
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

#line 3861 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3866 "parse_tree.error_util.c"
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

#line 3881 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3886 "parse_tree.error_util.c"
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

#line 3901 "parse_tree.error_util.c"
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

#line 3916 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 3921 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 3926 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 3931 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3936 "parse_tree.error_util.c"
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

#line 3960 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3968 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 3976 "parse_tree.error_util.c"
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

#line 3997 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4002 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4011 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4022 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4030 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4033 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4035 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4037 "parse_tree.error_util.c"
{
#line 4039 "parse_tree.error_util.c"
  {
#line 4041 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4044 "parse_tree.error_util.c"
    {
#line 4046 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4049 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4051 "parse_tree.error_util.c"
  }
#line 4053 "parse_tree.error_util.c"
}

#line 4056 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4059 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4061 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4063 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4065 "parse_tree.error_util.c"
{
#line 4067 "parse_tree.error_util.c"
  {
#line 4069 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4072 "parse_tree.error_util.c"
    {
#line 4074 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4077 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4079 "parse_tree.error_util.c"
  }
#line 4081 "parse_tree.error_util.c"
}

#line 4084 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4087 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4089 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4091 "parse_tree.error_util.c"
{
#line 4093 "parse_tree.error_util.c"
  {
#line 4095 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4098 "parse_tree.error_util.c"
    {
#line 4100 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4103 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4105 "parse_tree.error_util.c"
  }
#line 4107 "parse_tree.error_util.c"
}

#line 4110 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4113 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4115 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4117 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4119 "parse_tree.error_util.c"
{
#line 4121 "parse_tree.error_util.c"
  {
#line 4123 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4126 "parse_tree.error_util.c"
    {
#line 4128 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4131 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4133 "parse_tree.error_util.c"
  }
#line 4135 "parse_tree.error_util.c"
}

#line 4138 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4141 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4143 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4145 "parse_tree.error_util.c"
{
#line 4147 "parse_tree.error_util.c"
  {
#line 4149 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4152 "parse_tree.error_util.c"
    {
#line 4154 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4157 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4159 "parse_tree.error_util.c"
  }
#line 4161 "parse_tree.error_util.c"
}

#line 4164 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4167 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4169 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4171 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4173 "parse_tree.error_util.c"
{
#line 4175 "parse_tree.error_util.c"
  {
#line 4177 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4180 "parse_tree.error_util.c"
    {
#line 4182 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4185 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4187 "parse_tree.error_util.c"
  }
#line 4189 "parse_tree.error_util.c"
}

#line 4192 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4195 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4197 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4199 "parse_tree.error_util.c"
{
#line 4201 "parse_tree.error_util.c"
  {
#line 4203 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4206 "parse_tree.error_util.c"
    {
#line 4208 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4211 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4213 "parse_tree.error_util.c"
  }
#line 4215 "parse_tree.error_util.c"
}

#line 4218 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4221 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4223 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4225 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4227 "parse_tree.error_util.c"
{
#line 4229 "parse_tree.error_util.c"
  {
#line 4231 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4234 "parse_tree.error_util.c"
    {
#line 4236 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4239 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4241 "parse_tree.error_util.c"
  }
#line 4243 "parse_tree.error_util.c"
}

#line 4246 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4249 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4251 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4253 "parse_tree.error_util.c"
{
#line 4255 "parse_tree.error_util.c"
  {
#line 4257 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4260 "parse_tree.error_util.c"
    {
#line 4262 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4265 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4267 "parse_tree.error_util.c"
  }
#line 4269 "parse_tree.error_util.c"
}

#line 4272 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4275 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4277 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4279 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4281 "parse_tree.error_util.c"
{
#line 4283 "parse_tree.error_util.c"
  {
#line 4285 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4288 "parse_tree.error_util.c"
    {
#line 4290 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4293 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4295 "parse_tree.error_util.c"
  }
#line 4297 "parse_tree.error_util.c"
}

#line 4300 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4303 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4305 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4307 "parse_tree.error_util.c"
{
#line 4309 "parse_tree.error_util.c"
  {
#line 4311 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4314 "parse_tree.error_util.c"
    {
#line 4316 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4319 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4321 "parse_tree.error_util.c"
  }
#line 4323 "parse_tree.error_util.c"
}

#line 4326 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4329 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4331 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4333 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4335 "parse_tree.error_util.c"
{
#line 4337 "parse_tree.error_util.c"
  {
#line 4339 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4342 "parse_tree.error_util.c"
    {
#line 4344 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4347 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4349 "parse_tree.error_util.c"
  }
#line 4351 "parse_tree.error_util.c"
}

#line 4354 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4357 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4359 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4361 "parse_tree.error_util.c"
{
#line 4363 "parse_tree.error_util.c"
  {
#line 4365 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4368 "parse_tree.error_util.c"
    {
#line 4370 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4373 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4375 "parse_tree.error_util.c"
  }
#line 4377 "parse_tree.error_util.c"
}

#line 4380 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4383 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4385 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4387 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4389 "parse_tree.error_util.c"
{
#line 4391 "parse_tree.error_util.c"
  {
#line 4393 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4396 "parse_tree.error_util.c"
    {
#line 4398 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4401 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4403 "parse_tree.error_util.c"
  }
#line 4405 "parse_tree.error_util.c"
}

#line 4408 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4411 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4413 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4415 "parse_tree.error_util.c"
{
#line 4417 "parse_tree.error_util.c"
  {
#line 4419 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4422 "parse_tree.error_util.c"
    {
#line 4424 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4427 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4429 "parse_tree.error_util.c"
  }
#line 4431 "parse_tree.error_util.c"
}

#line 4434 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4437 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4439 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4441 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4443 "parse_tree.error_util.c"
{
#line 4445 "parse_tree.error_util.c"
  {
#line 4447 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4450 "parse_tree.error_util.c"
    {
#line 4452 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4455 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4457 "parse_tree.error_util.c"
  }
#line 4459 "parse_tree.error_util.c"
}

#line 4462 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4465 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4467 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4469 "parse_tree.error_util.c"
{
#line 4471 "parse_tree.error_util.c"
  {
#line 4473 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4476 "parse_tree.error_util.c"
    {
#line 4478 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4481 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4483 "parse_tree.error_util.c"
  }
#line 4485 "parse_tree.error_util.c"
}

#line 4488 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4491 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4493 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4495 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4497 "parse_tree.error_util.c"
{
#line 4499 "parse_tree.error_util.c"
  {
#line 4501 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4504 "parse_tree.error_util.c"
    {
#line 4506 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4509 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4511 "parse_tree.error_util.c"
  }
#line 4513 "parse_tree.error_util.c"
}

#line 4516 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4519 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4521 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4523 "parse_tree.error_util.c"
{
#line 4525 "parse_tree.error_util.c"
  {
#line 4527 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4530 "parse_tree.error_util.c"
    {
#line 4532 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4535 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4537 "parse_tree.error_util.c"
  }
#line 4539 "parse_tree.error_util.c"
}

#line 4542 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4545 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4547 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4549 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4551 "parse_tree.error_util.c"
{
#line 4553 "parse_tree.error_util.c"
  {
#line 4555 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4558 "parse_tree.error_util.c"
    {
#line 4560 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4563 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4565 "parse_tree.error_util.c"
  }
#line 4567 "parse_tree.error_util.c"
}

#line 4570 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4573 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4575 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4577 "parse_tree.error_util.c"
{
#line 4579 "parse_tree.error_util.c"
  {
#line 4581 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4584 "parse_tree.error_util.c"
    {
#line 4586 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4589 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4591 "parse_tree.error_util.c"
  }
#line 4593 "parse_tree.error_util.c"
}

#line 4596 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4599 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4601 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4603 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4605 "parse_tree.error_util.c"
{
#line 4607 "parse_tree.error_util.c"
  {
#line 4609 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4612 "parse_tree.error_util.c"
    {
#line 4614 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4617 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4619 "parse_tree.error_util.c"
  }
#line 4621 "parse_tree.error_util.c"
}

#line 4624 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4627 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4629 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4631 "parse_tree.error_util.c"
{
#line 4633 "parse_tree.error_util.c"
  {
#line 4635 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4638 "parse_tree.error_util.c"
    {
#line 4640 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4643 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4645 "parse_tree.error_util.c"
  }
#line 4647 "parse_tree.error_util.c"
}

#line 4650 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4653 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4655 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4657 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4659 "parse_tree.error_util.c"
{
#line 4661 "parse_tree.error_util.c"
  {
#line 4663 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4666 "parse_tree.error_util.c"
    {
#line 4668 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4671 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4673 "parse_tree.error_util.c"
  }
#line 4675 "parse_tree.error_util.c"
}

#line 4678 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4681 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4683 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4685 "parse_tree.error_util.c"
{
#line 4687 "parse_tree.error_util.c"
  {
#line 4689 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4692 "parse_tree.error_util.c"
    {
#line 4694 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4697 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4699 "parse_tree.error_util.c"
  }
#line 4701 "parse_tree.error_util.c"
}

#line 4704 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4707 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4709 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4711 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4713 "parse_tree.error_util.c"
{
#line 4715 "parse_tree.error_util.c"
  {
#line 4717 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4720 "parse_tree.error_util.c"
    {
#line 4722 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4725 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4727 "parse_tree.error_util.c"
  }
#line 4729 "parse_tree.error_util.c"
}

#line 4732 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4735 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4737 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4739 "parse_tree.error_util.c"
{
#line 4741 "parse_tree.error_util.c"
  {
#line 4743 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4746 "parse_tree.error_util.c"
    {
#line 4748 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4751 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4753 "parse_tree.error_util.c"
  }
#line 4755 "parse_tree.error_util.c"
}

#line 4758 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 4761 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4763 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4765 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4767 "parse_tree.error_util.c"
{
#line 4769 "parse_tree.error_util.c"
  {
#line 4771 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4774 "parse_tree.error_util.c"
    {
#line 4776 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4779 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4781 "parse_tree.error_util.c"
  }
#line 4783 "parse_tree.error_util.c"
}

#line 4786 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 4789 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4791 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4793 "parse_tree.error_util.c"
{
#line 4795 "parse_tree.error_util.c"
  {
#line 4797 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4800 "parse_tree.error_util.c"
    {
#line 4802 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4805 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4807 "parse_tree.error_util.c"
  }
#line 4809 "parse_tree.error_util.c"
}

#line 4812 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 4815 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4817 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4819 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4821 "parse_tree.error_util.c"
{
#line 4823 "parse_tree.error_util.c"
  {
#line 4825 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4828 "parse_tree.error_util.c"
    {
#line 4830 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4833 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4835 "parse_tree.error_util.c"
  }
#line 4837 "parse_tree.error_util.c"
}

#line 4840 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 4843 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4845 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4847 "parse_tree.error_util.c"
{
#line 4849 "parse_tree.error_util.c"
  {
#line 4851 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4854 "parse_tree.error_util.c"
    {
#line 4856 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4859 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4861 "parse_tree.error_util.c"
  }
#line 4863 "parse_tree.error_util.c"
}

#line 4866 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 4869 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4871 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4873 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4875 "parse_tree.error_util.c"
{
#line 4877 "parse_tree.error_util.c"
  {
#line 4879 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4882 "parse_tree.error_util.c"
    {
#line 4884 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4887 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4889 "parse_tree.error_util.c"
  }
#line 4891 "parse_tree.error_util.c"
}

#line 4894 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 4897 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4899 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4901 "parse_tree.error_util.c"
{
#line 4903 "parse_tree.error_util.c"
  {
#line 4905 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4908 "parse_tree.error_util.c"
    {
#line 4910 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4913 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4915 "parse_tree.error_util.c"
  }
#line 4917 "parse_tree.error_util.c"
}

#line 4920 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 4923 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4925 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4927 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4929 "parse_tree.error_util.c"
{
#line 4931 "parse_tree.error_util.c"
  {
#line 4933 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4936 "parse_tree.error_util.c"
    {
#line 4938 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4941 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4943 "parse_tree.error_util.c"
  }
#line 4945 "parse_tree.error_util.c"
}

#line 4948 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 4951 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4953 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4955 "parse_tree.error_util.c"
{
#line 4957 "parse_tree.error_util.c"
  {
#line 4959 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4962 "parse_tree.error_util.c"
    {
#line 4964 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4967 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4969 "parse_tree.error_util.c"
  }
#line 4971 "parse_tree.error_util.c"
}

#line 4974 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 4977 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4979 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4981 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4983 "parse_tree.error_util.c"
{
#line 4985 "parse_tree.error_util.c"
  {
#line 4987 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4990 "parse_tree.error_util.c"
    {
#line 4992 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4995 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4997 "parse_tree.error_util.c"
  }
#line 4999 "parse_tree.error_util.c"
}

#line 646 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__646__1_1_p_0(
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 646 "error_util.m"
{
#line 646 "error_util.m"
  {
#line 646 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 646 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 646 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 646 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 646 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 646 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 669 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 682 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
    else
#line 669 "error_util.m"
      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 683 "error_util.m"
        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
      else
#line 669 "error_util.m"
        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 685 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
        else
#line 669 "error_util.m"
          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 680 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
          else
#line 669 "error_util.m"
            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 677 "error_util.m"
              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
            else
#line 669 "error_util.m"
              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 672 "error_util.m"
                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
              else
#line 669 "error_util.m"
                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 674 "error_util.m"
                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                else
#line 669 "error_util.m"
                  if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 684 "error_util.m"
                    parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                  else
#line 669 "error_util.m"
                    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 678 "error_util.m"
                      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                    else
#line 669 "error_util.m"
                      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 671 "error_util.m"
                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                      else
#line 669 "error_util.m"
                        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 676 "error_util.m"
                          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                        else
#line 669 "error_util.m"
                          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 669 "error_util.m"
                            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                          else
#line 669 "error_util.m"
                            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 670 "error_util.m"
                              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                            else
#line 669 "error_util.m"
                              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 681 "error_util.m"
                                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                              else
#line 669 "error_util.m"
                                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 673 "error_util.m"
                                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 669 "error_util.m"
                                else
#line 669 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__Phase_31)) == (MR_mktag((MR_Integer) 1))))
#line 675 "error_util.m"
                                    {
#line 675 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 675 "error_util.m"
                                      {
#line 675 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 675 "error_util.m"
                                      }
#line 675 "error_util.m"
                                    }
#line 669 "error_util.m"
                                  else
#line 679 "error_util.m"
                                    {
#line 679 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 679 "error_util.m"
                                      {
#line 679 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 679 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 679 "error_util.m"
                                      }
#line 679 "error_util.m"
                                    }
#line 648 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 648 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 648 "error_util.m"
      {
#line 648 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 648 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 648 "error_util.m"
      }
#line 646 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 646 "error_util.m"
  }
#line 646 "error_util.m"
}

#line 1179 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1179 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1179 "error_util.m"
{
#line 1179 "error_util.m"
  {
#line 1179 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1179 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1179 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1179 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1179 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5191 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1179 "error_util.m"
    else
#line 1179 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1179 "error_util.m"
        else
#line 1179 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5205 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
          else
#line 1179 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5211 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
            else
#line 5215 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
      else
#line 1179 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1179 "error_util.m"
          {
#line 1179 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1179 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5228 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
            else
#line 1179 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1179 "error_util.m"
                {
#line 1179 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1179 "error_util.m"
                  {
#line 1179 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1179 "error_util.m"
                    return;
                  }
#line 1179 "error_util.m"
                }
#line 1179 "error_util.m"
              else
#line 1179 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5252 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
                else
#line 5256 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
          }
#line 1179 "error_util.m"
        else
#line 1179 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1179 "error_util.m"
            {
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1179 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5271 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
              else
#line 1179 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5277 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
                else
#line 1179 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1179 "error_util.m"
                    {
#line 1179 "error_util.m"
                      MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1179 "error_util.m"
                      {
#line 1179 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1179 "error_util.m"
                        return;
                      }
#line 1179 "error_util.m"
                    }
#line 1179 "error_util.m"
                  else
#line 5299 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
            }
#line 1179 "error_util.m"
          else
#line 1179 "error_util.m"
            {
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1179 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5312 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
              else
#line 1179 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5318 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
                else
#line 1179 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5324 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
                  else
#line 1179 "error_util.m"
                    {
#line 1179 "error_util.m"
                      MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1179 "error_util.m"
                      {
#line 1179 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1179 "error_util.m"
                        return;
                      }
#line 1179 "error_util.m"
                    }
#line 1179 "error_util.m"
            }
#line 1179 "error_util.m"
  }
#line 1179 "error_util.m"
}

#line 1179 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1179 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1179 "error_util.m"
{
#line 1179 "error_util.m"
  {
#line 1179 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1179 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1179 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1179 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1179 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1179 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1179 "error_util.m"
    else
#line 1179 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "error_util.m"
        {
#line 1179 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1179 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1179 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1179 "error_util.m"
        }
#line 1179 "error_util.m"
      else
#line 1179 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1179 "error_util.m"
          {
#line 1179 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1179 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1179 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1179 "error_util.m"
              {
#line 1179 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5407 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1179 "error_util.m"
              }
#line 1179 "error_util.m"
          }
#line 1179 "error_util.m"
        else
#line 1179 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1179 "error_util.m"
            {
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_6_6;

#line 1179 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1179 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1179 "error_util.m"
                {
#line 1179 "error_util.m"
                  parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5432 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1179 "error_util.m"
                }
#line 1179 "error_util.m"
            }
#line 1179 "error_util.m"
          else
#line 1179 "error_util.m"
            {
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "error_util.m"
              MR_String parse_tree__error_util__V_8_8;

#line 1179 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1179 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1179 "error_util.m"
                {
#line 1179 "error_util.m"
                  parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5455 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1179 "error_util.m"
                }
#line 1179 "error_util.m"
            }
#line 1179 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1179 "error_util.m"
  }
#line 1179 "error_util.m"
}

#line 1279 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1279 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1279 "error_util.m"
{
#line 1279 "error_util.m"
  {
#line 1279 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1279 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1279 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1279 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1279 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5492 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1279 "error_util.m"
    else
#line 1279 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1279 "error_util.m"
        else
#line 1279 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5506 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1279 "error_util.m"
          else
#line 5510 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1279 "error_util.m"
      else
#line 1279 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1279 "error_util.m"
          {
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1279 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5523 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1279 "error_util.m"
            else
#line 1279 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1279 "error_util.m"
                {
#line 1279 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1279 "error_util.m"
                  {
#line 1279 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1279 "error_util.m"
                    return;
                  }
#line 1279 "error_util.m"
                }
#line 1279 "error_util.m"
              else
#line 5545 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1279 "error_util.m"
          }
#line 1279 "error_util.m"
        else
#line 1279 "error_util.m"
          {
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1279 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5558 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1279 "error_util.m"
            else
#line 1279 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5564 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1279 "error_util.m"
              else
#line 1279 "error_util.m"
                {
#line 1279 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1279 "error_util.m"
                  {
#line 1279 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1279 "error_util.m"
                    return;
                  }
#line 1279 "error_util.m"
                }
#line 1279 "error_util.m"
          }
#line 1279 "error_util.m"
  }
#line 1279 "error_util.m"
}

#line 1279 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1279 "error_util.m"
{
#line 1279 "error_util.m"
  {
#line 1279 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1279 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1279 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1279 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1279 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1279 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1279 "error_util.m"
    else
#line 1279 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1279 "error_util.m"
        {
#line 1279 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1279 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1279 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1279 "error_util.m"
        }
#line 1279 "error_util.m"
      else
#line 1279 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1279 "error_util.m"
          {
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1279 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1279 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1279 "error_util.m"
              {
#line 1279 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5647 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1279 "error_util.m"
              }
#line 1279 "error_util.m"
          }
#line 1279 "error_util.m"
        else
#line 1279 "error_util.m"
          {
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1279 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1279 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1279 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1279 "error_util.m"
              {
#line 1279 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5670 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1279 "error_util.m"
              }
#line 1279 "error_util.m"
          }
#line 1279 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1279 "error_util.m"
  }
#line 1279 "error_util.m"
}

#line 1161 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1161 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1161 "error_util.m"
{
#line 1161 "error_util.m"
  {
#line 1161 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1161 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1161 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1161 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1161 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5707 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1161 "error_util.m"
    else
#line 1161 "error_util.m"
      {
#line 1161 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1161 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1161 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1161 "error_util.m"
        {
#line 1161 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 5733 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1161 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1161 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1161 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1161 "error_util.m"
        else
#line 1161 "error_util.m"
          {
#line 1161 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1161 "error_util.m"
            {
#line 1161 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 5753 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1161 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1161 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1161 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1161 "error_util.m"
            else
#line 1161 "error_util.m"
              {
#line 1161 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1161 "error_util.m"
                return;
              }
#line 1161 "error_util.m"
          }
#line 1161 "error_util.m"
      }
#line 1161 "error_util.m"
  }
#line 1161 "error_util.m"
}

#line 1161 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1161 "error_util.m"
{
#line 1161 "error_util.m"
  {
#line 1161 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1161 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1161 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1161 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1161 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1161 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1161 "error_util.m"
    else
#line 1161 "error_util.m"
      {
#line 1161 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1161 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1161 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 5820 "parse_tree.error_util.c"
        {
#line 5822 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1161 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1161 "error_util.m"
          {
#line 5829 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1161 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 5833 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1161 "error_util.m"
          }
#line 1161 "error_util.m"
      }
#line 1161 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1161 "error_util.m"
  }
#line 1161 "error_util.m"
}

#line 103 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0(
#line 103 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 103 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 103 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 103 "error_util.m"
{
#line 103 "error_util.m"
  {
#line 103 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 103 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 103 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 103 "error_util.m"
    {
#line 103 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 103 "error_util.m"
      return;
    }
#line 103 "error_util.m"
  }
#line 103 "error_util.m"
}

#line 103 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0(
#line 103 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 103 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 103 "error_util.m"
{
#line 5887 "parse_tree.error_util.c"
  {
#line 5889 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5892 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5894 "parse_tree.error_util.c"
  }
#line 103 "error_util.m"
}

#line 147 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
#line 147 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 147 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 147 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 147 "error_util.m"
{
#line 147 "error_util.m"
  {
#line 147 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 147 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 147 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 147 "error_util.m"
    {
#line 147 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 147 "error_util.m"
      return;
    }
#line 147 "error_util.m"
  }
#line 147 "error_util.m"
}

#line 147 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 147 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 147 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 147 "error_util.m"
{
#line 5940 "parse_tree.error_util.c"
  {
#line 5942 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5945 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5947 "parse_tree.error_util.c"
  }
#line 147 "error_util.m"
}

#line 773 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 773 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 773 "error_util.m"
{
#line 773 "error_util.m"
  {
#line 773 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 773 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 773 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 773 "error_util.m"
    {
#line 773 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 773 "error_util.m"
      return;
    }
#line 773 "error_util.m"
  }
#line 773 "error_util.m"
}

#line 773 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 773 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 773 "error_util.m"
{
#line 5993 "parse_tree.error_util.c"
  {
#line 5995 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5998 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6000 "parse_tree.error_util.c"
  }
#line 773 "error_util.m"
}

#line 777 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 777 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 777 "error_util.m"
{
#line 777 "error_util.m"
  {
#line 777 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 777 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 777 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 777 "error_util.m"
    {
#line 777 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 777 "error_util.m"
      return;
    }
#line 777 "error_util.m"
  }
#line 777 "error_util.m"
}

#line 777 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 777 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 777 "error_util.m"
{
#line 6046 "parse_tree.error_util.c"
  {
#line 6048 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6051 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6053 "parse_tree.error_util.c"
  }
#line 777 "error_util.m"
}

#line 891 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 891 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 891 "error_util.m"
{
#line 891 "error_util.m"
  {
#line 891 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 891 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 891 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 891 "error_util.m"
    {
#line 891 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 891 "error_util.m"
      return;
    }
#line 891 "error_util.m"
  }
#line 891 "error_util.m"
}

#line 891 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 891 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 891 "error_util.m"
{
#line 6099 "parse_tree.error_util.c"
  {
#line 6101 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6104 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6106 "parse_tree.error_util.c"
  }
#line 891 "error_util.m"
}

#line 349 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 349 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 349 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 349 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 349 "error_util.m"
{
#line 349 "error_util.m"
  {
#line 349 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 349 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 349 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 349 "error_util.m"
    {
#line 349 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 349 "error_util.m"
      return;
    }
#line 349 "error_util.m"
  }
#line 349 "error_util.m"
}

#line 349 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 349 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 349 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 349 "error_util.m"
{
#line 349 "error_util.m"
  {
#line 349 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 349 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 349 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 349 "error_util.m"
    {
#line 349 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 349 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 349 "error_util.m"
  }
#line 349 "error_util.m"
}

#line 275 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 275 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 275 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 275 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 275 "error_util.m"
{
#line 275 "error_util.m"
  {
#line 275 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 275 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 275 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 275 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 275 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6197 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 275 "error_util.m"
    else
#line 275 "error_util.m"
      {
#line 275 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 275 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 275 "error_util.m"
        {
#line 275 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 275 "error_util.m"
        {
#line 275 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 275 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 275 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6222 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "error_util.m"
        else
#line 275 "error_util.m"
          {
#line 275 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 275 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6232 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 275 "error_util.m"
            else
#line 275 "error_util.m"
              {
#line 275 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 275 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "error_util.m"
                  {
#line 275 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 275 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                  }
#line 275 "error_util.m"
                else
#line 275 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "error_util.m"
                    {
#line 275 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 275 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                    }
#line 275 "error_util.m"
                  else
#line 275 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "error_util.m"
                      {
#line 275 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 275 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                      }
#line 275 "error_util.m"
                    else
#line 275 "error_util.m"
                      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 275 "error_util.m"
                        {
#line 275 "error_util.m"
                          MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "error_util.m"
                          MR_String parse_tree__error_util__V_8_8;

#line 275 "error_util.m"
                          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 275 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                            {
#line 275 "error_util.m"
                              parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 275 "error_util.m"
                              {
#line 275 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                              }
#line 275 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                            }
#line 275 "error_util.m"
                        }
#line 275 "error_util.m"
                      else
#line 275 "error_util.m"
                        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 275 "error_util.m"
                          {
#line 275 "error_util.m"
                            MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 275 "error_util.m"
                            MR_String parse_tree__error_util__V_10_10;

#line 275 "error_util.m"
                            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 275 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                              {
#line 275 "error_util.m"
                                parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 275 "error_util.m"
                                {
#line 275 "error_util.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                                }
#line 275 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                              }
#line 275 "error_util.m"
                          }
#line 275 "error_util.m"
                        else
#line 275 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 275 "error_util.m"
                            {
#line 275 "error_util.m"
                              MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                              MR_String parse_tree__error_util__V_34_34;

#line 275 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 275 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                {
#line 275 "error_util.m"
                                  parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                  {
#line 275 "error_util.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                                  }
#line 275 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                }
#line 275 "error_util.m"
                            }
#line 275 "error_util.m"
                          else
#line 275 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 275 "error_util.m"
                              {
#line 275 "error_util.m"
                                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                MR_Integer parse_tree__error_util__V_12_12;

#line 275 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 275 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                  {
#line 275 "error_util.m"
                                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                    {
#line 275 "error_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                                    }
#line 275 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                  }
#line 275 "error_util.m"
                              }
#line 275 "error_util.m"
                            else
#line 275 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 275 "error_util.m"
                                {
#line 275 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_38_38;

#line 275 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 275 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                    {
#line 275 "error_util.m"
                                      parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                      {
#line 275 "error_util.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                                      }
#line 275 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                    }
#line 275 "error_util.m"
                                }
#line 275 "error_util.m"
                              else
#line 275 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 275 "error_util.m"
                                  {
#line 275 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_14_14;

#line 275 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 275 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                      {
#line 275 "error_util.m"
                                        parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                        {
#line 275 "error_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                                        }
#line 275 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                      }
#line 275 "error_util.m"
                                  }
#line 275 "error_util.m"
                                else
#line 275 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 275 "error_util.m"
                                    {
#line 275 "error_util.m"
                                      MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                      MR_Word parse_tree__error_util__V_30_30;
#line 275 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_57_57;
#line 275 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_58_58;

#line 275 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 275 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                        {
#line 275 "error_util.m"
                                          parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                          parse_tree__error_util__V_57_57 = (MR_Integer) parse_tree__error_util__V_29_29;
#line 275 "error_util.m"
                                          parse_tree__error_util__V_58_58 = (MR_Integer) parse_tree__error_util__V_30_30;
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_57_57, parse_tree__error_util__V_58_58);
                                          }
#line 275 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                        }
#line 275 "error_util.m"
                                    }
#line 275 "error_util.m"
                                  else
#line 275 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 275 "error_util.m"
                                      {
#line 275 "error_util.m"
                                        MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                        MR_String parse_tree__error_util__V_36_36;

#line 275 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 275 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                            {
#line 275 "error_util.m"
                                              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                                            }
#line 275 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                          }
#line 275 "error_util.m"
                                      }
#line 275 "error_util.m"
                                    else
#line 275 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 275 "error_util.m"
                                        {
#line 275 "error_util.m"
                                          MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                          MR_String parse_tree__error_util__V_16_16;

#line 275 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 275 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                            {
#line 275 "error_util.m"
                                              parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                              {
#line 275 "error_util.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                              }
#line 275 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                            }
#line 275 "error_util.m"
                                        }
#line 275 "error_util.m"
                                      else
#line 275 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                            MR_Word parse_tree__error_util__V_32_32;

#line 275 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 275 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                              {
#line 275 "error_util.m"
                                                parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                {
#line 275 "error_util.m"
                                                  parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                                                }
#line 275 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                              }
#line 275 "error_util.m"
                                          }
#line 275 "error_util.m"
                                        else
#line 275 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 275 "error_util.m"
                                            {
#line 275 "error_util.m"
                                              MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                              MR_String parse_tree__error_util__V_18_18;

#line 275 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 275 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                {
#line 275 "error_util.m"
                                                  parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                  {
#line 275 "error_util.m"
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                                  }
#line 275 "error_util.m"
                                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                }
#line 275 "error_util.m"
                                            }
#line 275 "error_util.m"
                                          else
#line 275 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 275 "error_util.m"
                                              {
#line 275 "error_util.m"
                                                MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                MR_Word parse_tree__error_util__V_24_24;

#line 275 "error_util.m"
                                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 275 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                  {
#line 275 "error_util.m"
                                                    parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                    {
#line 275 "error_util.m"
                                                      mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                                    }
#line 275 "error_util.m"
                                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                  }
#line 275 "error_util.m"
                                              }
#line 275 "error_util.m"
                                            else
#line 275 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 275 "error_util.m"
                                                {
#line 275 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_26_26;

#line 275 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 275 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                    {
#line 275 "error_util.m"
                                                      parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                      {
#line 275 "error_util.m"
                                                        parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                                      }
#line 275 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                    }
#line 275 "error_util.m"
                                                }
#line 275 "error_util.m"
                                              else
#line 275 "error_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 275 "error_util.m"
                                                  {
#line 275 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_28_28;

#line 275 "error_util.m"
                                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 275 "error_util.m"
                                                    if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                      {
#line 275 "error_util.m"
                                                        parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                        {
#line 275 "error_util.m"
                                                          parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                                                        }
#line 275 "error_util.m"
                                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                      }
#line 275 "error_util.m"
                                                  }
#line 275 "error_util.m"
                                                else
#line 275 "error_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 275 "error_util.m"
                                                    {
#line 275 "error_util.m"
                                                      MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                      MR_String parse_tree__error_util__V_20_20;

#line 275 "error_util.m"
                                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 275 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                        {
#line 275 "error_util.m"
                                                          parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                          {
#line 275 "error_util.m"
                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                                                          }
#line 275 "error_util.m"
                                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                        }
#line 275 "error_util.m"
                                                    }
#line 275 "error_util.m"
                                                  else
#line 275 "error_util.m"
                                                    {
#line 275 "error_util.m"
                                                      MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                      MR_String parse_tree__error_util__V_22_22;

#line 275 "error_util.m"
                                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 275 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                                        {
#line 275 "error_util.m"
                                                          parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 275 "error_util.m"
                                                          {
#line 275 "error_util.m"
                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                                          }
#line 275 "error_util.m"
                                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
                                                        }
#line 275 "error_util.m"
                                                    }
#line 275 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 275 "error_util.m"
                else
#line 275 "error_util.m"
                  {
#line 275 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 275 "error_util.m"
                    return;
                  }
#line 275 "error_util.m"
              }
#line 275 "error_util.m"
          }
#line 275 "error_util.m"
      }
#line 275 "error_util.m"
  }
#line 275 "error_util.m"
}

#line 275 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 275 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 275 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 275 "error_util.m"
{
#line 275 "error_util.m"
  {
#line 275 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 275 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6801 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 275 "error_util.m"
    else
#line 275 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6807 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 275 "error_util.m"
      else
#line 275 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6813 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 275 "error_util.m"
        else
#line 275 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6819 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 275 "error_util.m"
          else
#line 275 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6825 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 275 "error_util.m"
            else
#line 275 "error_util.m"
              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6831 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 275 "error_util.m"
              else
#line 275 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6837 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 275 "error_util.m"
                else
#line 275 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 6843 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 275 "error_util.m"
                  else
#line 275 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6849 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 275 "error_util.m"
                    else
#line 275 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6855 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 275 "error_util.m"
                      else
#line 275 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 6861 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 275 "error_util.m"
                        else
#line 275 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6867 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 275 "error_util.m"
                          else
#line 275 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6873 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 275 "error_util.m"
                            else
#line 275 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6879 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 275 "error_util.m"
                              else
#line 275 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6885 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 275 "error_util.m"
                                else
#line 275 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6891 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 275 "error_util.m"
                                  else
#line 275 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6897 "parse_tree.error_util.c"
                                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 275 "error_util.m"
                                    else
#line 275 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6903 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 275 "error_util.m"
                                      else
#line 6907 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 275 "error_util.m"
  }
#line 275 "error_util.m"
}

#line 275 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 275 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 275 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 275 "error_util.m"
{
#line 275 "error_util.m"
  {
#line 275 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 275 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 275 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 275 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_41 == parse_tree__error_util__CastY_42);
#line 275 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 275 "error_util.m"
    else
#line 275 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 275 "error_util.m"
        {
#line 275 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 275 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 275 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 275 "error_util.m"
        }
#line 275 "error_util.m"
      else
#line 275 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "error_util.m"
          {
#line 275 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 275 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 275 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 275 "error_util.m"
          }
#line 275 "error_util.m"
        else
#line 275 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 275 "error_util.m"
            {
#line 275 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 275 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 275 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 275 "error_util.m"
            }
#line 275 "error_util.m"
          else
#line 275 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 275 "error_util.m"
              {
#line 275 "error_util.m"
                MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 275 "error_util.m"
                parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 275 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                  {
#line 275 "error_util.m"
                    parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7002 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 275 "error_util.m"
                  }
#line 275 "error_util.m"
              }
#line 275 "error_util.m"
            else
#line 275 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 275 "error_util.m"
                {
#line 275 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 275 "error_util.m"
                  MR_String parse_tree__error_util__V_6_6;

#line 275 "error_util.m"
                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 275 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                    {
#line 275 "error_util.m"
                      parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7027 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 275 "error_util.m"
                    }
#line 275 "error_util.m"
                }
#line 275 "error_util.m"
              else
#line 275 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 275 "error_util.m"
                  {
#line 275 "error_util.m"
                    MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                    MR_String parse_tree__error_util__V_32_32;

#line 275 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 275 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                      {
#line 275 "error_util.m"
                        parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7052 "parse_tree.error_util.c"
                        parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32) == 0);
#line 275 "error_util.m"
                      }
#line 275 "error_util.m"
                  }
#line 275 "error_util.m"
                else
#line 275 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 275 "error_util.m"
                    {
#line 275 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 275 "error_util.m"
                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 275 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                        {
#line 275 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7077 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_7_7 == parse_tree__error_util__V_8_8);
#line 275 "error_util.m"
                        }
#line 275 "error_util.m"
                    }
#line 275 "error_util.m"
                  else
#line 275 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 275 "error_util.m"
                      {
#line 275 "error_util.m"
                        MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                        MR_Integer parse_tree__error_util__V_38_38;

#line 275 "error_util.m"
                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 275 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                          {
#line 275 "error_util.m"
                            parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7102 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == parse_tree__error_util__V_38_38);
#line 275 "error_util.m"
                          }
#line 275 "error_util.m"
                      }
#line 275 "error_util.m"
                    else
#line 275 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 275 "error_util.m"
                        {
#line 275 "error_util.m"
                          MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                          MR_Integer parse_tree__error_util__V_10_10;

#line 275 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 275 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                            {
#line 275 "error_util.m"
                              parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7127 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 275 "error_util.m"
                            }
#line 275 "error_util.m"
                        }
#line 275 "error_util.m"
                      else
#line 275 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 275 "error_util.m"
                          {
#line 275 "error_util.m"
                            MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                            MR_Word parse_tree__error_util__V_28_28;

#line 275 "error_util.m"
                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 275 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                              {
#line 275 "error_util.m"
                                parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7152 "parse_tree.error_util.c"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == parse_tree__error_util__V_28_28);
#line 275 "error_util.m"
                              }
#line 275 "error_util.m"
                          }
#line 275 "error_util.m"
                        else
#line 275 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 275 "error_util.m"
                            {
#line 275 "error_util.m"
                              MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                              MR_String parse_tree__error_util__V_34_34;

#line 275 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 275 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                {
#line 275 "error_util.m"
                                  parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7177 "parse_tree.error_util.c"
                                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34) == 0);
#line 275 "error_util.m"
                                }
#line 275 "error_util.m"
                            }
#line 275 "error_util.m"
                          else
#line 275 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 275 "error_util.m"
                              {
#line 275 "error_util.m"
                                MR_String parse_tree__error_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                MR_String parse_tree__error_util__V_14_14;

#line 275 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 275 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                  {
#line 275 "error_util.m"
                                    parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7202 "parse_tree.error_util.c"
                                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14) == 0);
#line 275 "error_util.m"
                                  }
#line 275 "error_util.m"
                              }
#line 275 "error_util.m"
                            else
#line 275 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 275 "error_util.m"
                                {
#line 275 "error_util.m"
                                  MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                  MR_Word parse_tree__error_util__V_30_30;

#line 275 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 275 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                    {
#line 275 "error_util.m"
                                      parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7227 "parse_tree.error_util.c"
                                      {
#line 7229 "parse_tree.error_util.c"
                                        return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                                      }
#line 275 "error_util.m"
                                    }
#line 275 "error_util.m"
                                }
#line 275 "error_util.m"
                              else
#line 275 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 275 "error_util.m"
                                  {
#line 275 "error_util.m"
                                    MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                    MR_String parse_tree__error_util__V_16_16;

#line 275 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 275 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                      {
#line 275 "error_util.m"
                                        parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7255 "parse_tree.error_util.c"
                                        parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 275 "error_util.m"
                                      }
#line 275 "error_util.m"
                                  }
#line 275 "error_util.m"
                                else
#line 275 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 275 "error_util.m"
                                    {
#line 275 "error_util.m"
                                      MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                      MR_Word parse_tree__error_util__V_22_22;

#line 275 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 275 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                        {
#line 275 "error_util.m"
                                          parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7280 "parse_tree.error_util.c"
                                          {
#line 7282 "parse_tree.error_util.c"
                                            return parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                          }
#line 275 "error_util.m"
                                        }
#line 275 "error_util.m"
                                    }
#line 275 "error_util.m"
                                  else
#line 275 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 275 "error_util.m"
                                      {
#line 275 "error_util.m"
                                        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                        MR_Word parse_tree__error_util__V_24_24;

#line 275 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 275 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7308 "parse_tree.error_util.c"
                                            {
#line 7310 "parse_tree.error_util.c"
                                              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                            }
#line 275 "error_util.m"
                                          }
#line 275 "error_util.m"
                                      }
#line 275 "error_util.m"
                                    else
#line 275 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 275 "error_util.m"
                                        {
#line 275 "error_util.m"
                                          MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                          MR_Word parse_tree__error_util__V_26_26;

#line 275 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 275 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                            {
#line 275 "error_util.m"
                                              parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7336 "parse_tree.error_util.c"
                                              {
#line 7338 "parse_tree.error_util.c"
                                                return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                              }
#line 275 "error_util.m"
                                            }
#line 275 "error_util.m"
                                        }
#line 275 "error_util.m"
                                      else
#line 275 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                            MR_String parse_tree__error_util__V_18_18;

#line 275 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 275 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                              {
#line 275 "error_util.m"
                                                parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7364 "parse_tree.error_util.c"
                                                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 275 "error_util.m"
                                              }
#line 275 "error_util.m"
                                          }
#line 275 "error_util.m"
                                        else
#line 275 "error_util.m"
                                          {
#line 275 "error_util.m"
                                            MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 275 "error_util.m"
                                            MR_String parse_tree__error_util__V_20_20;

#line 275 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 275 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 275 "error_util.m"
                                              {
#line 275 "error_util.m"
                                                parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7387 "parse_tree.error_util.c"
                                                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 275 "error_util.m"
                                              }
#line 275 "error_util.m"
                                          }
#line 275 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 275 "error_util.m"
  }
#line 275 "error_util.m"
}

#line 641 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 641 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 641 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 641 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 641 "error_util.m"
{
#line 641 "error_util.m"
  {
#line 641 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 641 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 641 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 641 "error_util.m"
    {
#line 641 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 641 "error_util.m"
      return;
    }
#line 641 "error_util.m"
  }
#line 641 "error_util.m"
}

#line 641 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 641 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 641 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 641 "error_util.m"
{
#line 641 "error_util.m"
  {
#line 641 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 641 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 641 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 641 "error_util.m"
    {
#line 641 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 641 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 641 "error_util.m"
  }
#line 641 "error_util.m"
}

#line 66 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0(
#line 66 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 66 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 66 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 66 "error_util.m"
{
#line 66 "error_util.m"
  {
#line 66 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 66 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 66 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 66 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 66 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 7486 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "error_util.m"
    else
#line 66 "error_util.m"
      {
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 66 "error_util.m"
        {
#line 66 "error_util.m"
          parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_10_10, parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
        }
#line 7512 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 66 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 66 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 66 "error_util.m"
        else
#line 66 "error_util.m"
          {
#line 66 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 66 "error_util.m"
            {
#line 66 "error_util.m"
              parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 7532 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 66 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 66 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 66 "error_util.m"
            else
#line 66 "error_util.m"
              {
#line 66 "error_util.m"
                {
#line 66 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
#line 66 "error_util.m"
                  return;
                }
#line 66 "error_util.m"
              }
#line 66 "error_util.m"
          }
#line 66 "error_util.m"
      }
#line 66 "error_util.m"
  }
#line 66 "error_util.m"
}

#line 66 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0(
#line 66 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 66 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 66 "error_util.m"
{
#line 66 "error_util.m"
  {
#line 66 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 66 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 66 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 66 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 66 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 66 "error_util.m"
    else
#line 66 "error_util.m"
      {
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_11_11;
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 7605 "parse_tree.error_util.c"
        {
#line 7607 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 66 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
          {
#line 7614 "parse_tree.error_util.c"
            {
#line 7616 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 66 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
              {
#line 7623 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 7625 "parse_tree.error_util.c"
                {
#line 7627 "parse_tree.error_util.c"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_11_11, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_8_8)));
                }
#line 66 "error_util.m"
              }
#line 66 "error_util.m"
          }
#line 66 "error_util.m"
      }
#line 66 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 66 "error_util.m"
  }
#line 66 "error_util.m"
}

#line 73 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0(
#line 73 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 73 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 73 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 73 "error_util.m"
{
#line 73 "error_util.m"
  {
#line 73 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 73 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 73 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 73 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 73 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 7667 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "error_util.m"
    else
#line 73 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "error_util.m"
        else
#line 73 "error_util.m"
          if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "error_util.m"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
          else
#line 73 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
            else
#line 7691 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
      else
#line 73 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "error_util.m"
          if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "error_util.m"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
          else
#line 73 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "error_util.m"
            else
#line 73 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
              else
#line 7715 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
        else
#line 73 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
            else
#line 73 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
              else
#line 73 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "error_util.m"
                else
#line 7739 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "error_util.m"
          else
#line 73 "error_util.m"
            {
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 73 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7756 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
              else
#line 73 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7762 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
                else
#line 73 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7768 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
                  else
#line 73 "error_util.m"
                    {
#line 73 "error_util.m"
                      MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "error_util.m"
                      MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "error_util.m"
                      MR_Word parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "error_util.m"
                      MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 73 "error_util.m"
                      MR_Word parse_tree__error_util__V_36_36;
#line 73 "error_util.m"
                      MR_Integer parse_tree__error_util__V_49_49 = (MR_Integer) parse_tree__error_util__V_48_48;
#line 73 "error_util.m"
                      MR_Integer parse_tree__error_util__V_50_50 = (MR_Integer) parse_tree__error_util__V_32_32;

#line 73 "error_util.m"
                      {
#line 73 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_36_36, parse_tree__error_util__V_49_49, parse_tree__error_util__V_50_50);
                      }
#line 7794 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 73 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 73 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_36_36;
#line 73 "error_util.m"
                      else
#line 73 "error_util.m"
                        {
#line 73 "error_util.m"
                          MR_Word parse_tree__error_util__V_37_37;
#line 73 "error_util.m"
                          MR_Integer parse_tree__error_util__V_51_51 = (MR_Integer) parse_tree__error_util__V_47_47;
#line 73 "error_util.m"
                          MR_Integer parse_tree__error_util__V_52_52 = (MR_Integer) parse_tree__error_util__V_33_33;

#line 73 "error_util.m"
                          {
#line 73 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_37_37, parse_tree__error_util__V_51_51, parse_tree__error_util__V_52_52);
                          }
#line 7818 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 73 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 73 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_37_37;
#line 73 "error_util.m"
                          else
#line 73 "error_util.m"
                            {
#line 73 "error_util.m"
                              MR_Word parse_tree__error_util__V_38_38;

#line 73 "error_util.m"
                              {
#line 73 "error_util.m"
                                parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_38_38, parse_tree__error_util__V_46_46, parse_tree__error_util__V_34_34);
                              }
#line 7838 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_38_38 == (MR_Integer) 0);
#line 73 "error_util.m"
                              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 73 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_38_38;
#line 73 "error_util.m"
                              else
#line 73 "error_util.m"
                                {
#line 73 "error_util.m"
                                  {
#line 73 "error_util.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
#line 73 "error_util.m"
                                    return;
                                  }
#line 73 "error_util.m"
                                }
#line 73 "error_util.m"
                            }
#line 73 "error_util.m"
                        }
#line 73 "error_util.m"
                    }
#line 73 "error_util.m"
            }
#line 73 "error_util.m"
  }
#line 73 "error_util.m"
}

#line 73 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0(
#line 73 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 73 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 73 "error_util.m"
{
#line 73 "error_util.m"
  {
#line 73 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 73 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 73 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 73 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_17 == parse_tree__error_util__CastY_18);
#line 73 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 73 "error_util.m"
    else
#line 73 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "error_util.m"
        {
#line 73 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 73 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 73 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 73 "error_util.m"
        }
#line 73 "error_util.m"
      else
#line 73 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "error_util.m"
          {
#line 73 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 73 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 73 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 73 "error_util.m"
          }
#line 73 "error_util.m"
        else
#line 73 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "error_util.m"
            {
#line 73 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 73 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 73 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 73 "error_util.m"
            }
#line 73 "error_util.m"
          else
#line 73 "error_util.m"
            {
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_19_19;
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_13_13;
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_14_14;
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_15_15;
#line 73 "error_util.m"
              MR_Word parse_tree__error_util__V_16_16;

#line 73 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 73 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                {
#line 73 "error_util.m"
                  parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "error_util.m"
                  parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "error_util.m"
                  parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "error_util.m"
                  parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 7978 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 73 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                    {
#line 7984 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 73 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                        {
#line 7990 "parse_tree.error_util.c"
                          {
#line 7992 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                          }
#line 73 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                            {
#line 7999 "parse_tree.error_util.c"
                              parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 8001 "parse_tree.error_util.c"
                              {
#line 8003 "parse_tree.error_util.c"
                                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_19_19, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                              }
#line 73 "error_util.m"
                            }
#line 73 "error_util.m"
                        }
#line 73 "error_util.m"
                    }
#line 73 "error_util.m"
                }
#line 73 "error_util.m"
            }
#line 73 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 73 "error_util.m"
  }
#line 73 "error_util.m"
}

#line 107 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0(
#line 107 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 107 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 107 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 107 "error_util.m"
{
#line 107 "error_util.m"
  {
#line 107 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 107 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 107 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 107 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 107 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8047 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "error_util.m"
    else
#line 107 "error_util.m"
      {
#line 107 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 107 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 107 "error_util.m"
        {
#line 107 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 107 "error_util.m"
        {
#line 107 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 107 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 107 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 8072 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "error_util.m"
        else
#line 107 "error_util.m"
          {
#line 107 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 107 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8082 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "error_util.m"
            else
#line 107 "error_util.m"
              {
#line 107 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 107 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 107 "error_util.m"
                  {
#line 107 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                  }
#line 107 "error_util.m"
                else
#line 107 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 107 "error_util.m"
                    {
#line 107 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                    }
#line 107 "error_util.m"
                  else
#line 107 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 107 "error_util.m"
                      {
#line 107 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                      }
#line 107 "error_util.m"
                    else
#line 107 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 107 "error_util.m"
                        {
#line 107 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                        }
#line 107 "error_util.m"
                      else
#line 107 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 107 "error_util.m"
                          {
#line 107 "error_util.m"
                            parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                            parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                          }
#line 107 "error_util.m"
                        else
#line 107 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 107 "error_util.m"
                            {
#line 107 "error_util.m"
                              parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                            }
#line 107 "error_util.m"
                          else
#line 107 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 107 "error_util.m"
                              {
#line 107 "error_util.m"
                                parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                              }
#line 107 "error_util.m"
                            else
#line 107 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 107 "error_util.m"
                                {
#line 107 "error_util.m"
                                  parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                }
#line 107 "error_util.m"
                              else
#line 107 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 107 "error_util.m"
                                  {
#line 107 "error_util.m"
                                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                  }
#line 107 "error_util.m"
                                else
#line 107 "error_util.m"
                                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 107 "error_util.m"
                                    {
#line 107 "error_util.m"
                                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                    }
#line 107 "error_util.m"
                                  else
#line 107 "error_util.m"
                                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 107 "error_util.m"
                                      {
#line 107 "error_util.m"
                                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                      }
#line 107 "error_util.m"
                                    else
#line 107 "error_util.m"
                                      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "error_util.m"
                                        {
#line 107 "error_util.m"
                                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                        }
#line 107 "error_util.m"
                                      else
#line 107 "error_util.m"
                                        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 107 "error_util.m"
                                          {
#line 107 "error_util.m"
                                            parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                          }
#line 107 "error_util.m"
                                        else
#line 107 "error_util.m"
                                          if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 107 "error_util.m"
                                            {
#line 107 "error_util.m"
                                              parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                            }
#line 107 "error_util.m"
                                          else
#line 107 "error_util.m"
                                            if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 107 "error_util.m"
                                              {
#line 107 "error_util.m"
                                                parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 107 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                              }
#line 107 "error_util.m"
                                            else
#line 107 "error_util.m"
                                              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 107 "error_util.m"
                                                {
#line 107 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_8_8;
#line 107 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_15_15;
#line 107 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_16_16;

#line 107 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 107 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
                                                    {
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_15_15 = (MR_Integer) parse_tree__error_util__V_7_7;
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_16_16 = (MR_Integer) parse_tree__error_util__V_8_8;
#line 107 "error_util.m"
                                                      {
#line 107 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                                      }
#line 107 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                                    }
#line 107 "error_util.m"
                                                }
#line 107 "error_util.m"
                                              else
#line 107 "error_util.m"
                                                {
#line 107 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_10_10;
#line 107 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_17_17;
#line 107 "error_util.m"
                                                  MR_Integer parse_tree__error_util__V_18_18;

#line 107 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 107 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
                                                    {
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_17_17 = (MR_Integer) parse_tree__error_util__V_9_9;
#line 107 "error_util.m"
                                                      parse_tree__error_util__V_18_18 = (MR_Integer) parse_tree__error_util__V_10_10;
#line 107 "error_util.m"
                                                      {
#line 107 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                                      }
#line 107 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
                                                    }
#line 107 "error_util.m"
                                                }
#line 107 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 107 "error_util.m"
                else
#line 107 "error_util.m"
                  {
#line 107 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 107 "error_util.m"
                    return;
                  }
#line 107 "error_util.m"
              }
#line 107 "error_util.m"
          }
#line 107 "error_util.m"
      }
#line 107 "error_util.m"
  }
#line 107 "error_util.m"
}

#line 107 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____error_phase_0_0(
#line 107 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 107 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 107 "error_util.m"
{
#line 107 "error_util.m"
  {
#line 107 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 107 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8383 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 107 "error_util.m"
    else
#line 107 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8389 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 107 "error_util.m"
      else
#line 107 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8395 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 107 "error_util.m"
        else
#line 107 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8401 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 107 "error_util.m"
          else
#line 107 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8407 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 107 "error_util.m"
            else
#line 107 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8413 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 107 "error_util.m"
              else
#line 107 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8419 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 107 "error_util.m"
                else
#line 107 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8425 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 107 "error_util.m"
                  else
#line 107 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8431 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 107 "error_util.m"
                    else
#line 107 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8437 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 107 "error_util.m"
                      else
#line 107 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8443 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 107 "error_util.m"
                        else
#line 107 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8449 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 107 "error_util.m"
                          else
#line 107 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8455 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 107 "error_util.m"
                            else
#line 107 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8461 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 107 "error_util.m"
                              else
#line 107 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8467 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 107 "error_util.m"
                                else
#line 107 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8473 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 107 "error_util.m"
                                  else
#line 8477 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 107 "error_util.m"
  }
#line 107 "error_util.m"
}

#line 107 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0(
#line 107 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 107 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 107 "error_util.m"
{
#line 107 "error_util.m"
  {
#line 107 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 107 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_37 == parse_tree__error_util__CastY_38);
#line 107 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 107 "error_util.m"
    else
#line 107 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 107 "error_util.m"
        {
#line 107 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_29 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_30 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_30 == parse_tree__error_util__CastX_29);
#line 107 "error_util.m"
        }
#line 107 "error_util.m"
      else
#line 107 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 107 "error_util.m"
          {
#line 107 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_31 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_32 == parse_tree__error_util__CastX_31);
#line 107 "error_util.m"
          }
#line 107 "error_util.m"
        else
#line 107 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 107 "error_util.m"
            {
#line 107 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 107 "error_util.m"
            }
#line 107 "error_util.m"
          else
#line 107 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 107 "error_util.m"
              {
#line 107 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_25 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_26 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_26 == parse_tree__error_util__CastX_25);
#line 107 "error_util.m"
              }
#line 107 "error_util.m"
            else
#line 107 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 107 "error_util.m"
                {
#line 107 "error_util.m"
                  MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                  MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_20 == parse_tree__error_util__CastX_19);
#line 107 "error_util.m"
                }
#line 107 "error_util.m"
              else
#line 107 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 107 "error_util.m"
                  {
#line 107 "error_util.m"
                    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 107 "error_util.m"
                  }
#line 107 "error_util.m"
                else
#line 107 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 107 "error_util.m"
                    {
#line 107 "error_util.m"
                      MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                      MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 107 "error_util.m"
                    }
#line 107 "error_util.m"
                  else
#line 107 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 107 "error_util.m"
                      {
#line 107 "error_util.m"
                        MR_Integer parse_tree__error_util__CastX_33 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                        MR_Integer parse_tree__error_util__CastY_34 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_34 == parse_tree__error_util__CastX_33);
#line 107 "error_util.m"
                      }
#line 107 "error_util.m"
                    else
#line 107 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 107 "error_util.m"
                        {
#line 107 "error_util.m"
                          MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                          MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_22 == parse_tree__error_util__CastX_21);
#line 107 "error_util.m"
                        }
#line 107 "error_util.m"
                      else
#line 107 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 107 "error_util.m"
                          {
#line 107 "error_util.m"
                            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 107 "error_util.m"
                          }
#line 107 "error_util.m"
                        else
#line 107 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 107 "error_util.m"
                            {
#line 107 "error_util.m"
                              MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                              MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_18 == parse_tree__error_util__CastX_17);
#line 107 "error_util.m"
                            }
#line 107 "error_util.m"
                          else
#line 107 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "error_util.m"
                              {
#line 107 "error_util.m"
                                MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                                MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 107 "error_util.m"
                              }
#line 107 "error_util.m"
                            else
#line 107 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 107 "error_util.m"
                                {
#line 107 "error_util.m"
                                  MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                                  MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 107 "error_util.m"
                                }
#line 107 "error_util.m"
                              else
#line 107 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 107 "error_util.m"
                                  {
#line 107 "error_util.m"
                                    MR_Integer parse_tree__error_util__CastX_27 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                                    MR_Integer parse_tree__error_util__CastY_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_28 == parse_tree__error_util__CastX_27);
#line 107 "error_util.m"
                                  }
#line 107 "error_util.m"
                                else
#line 107 "error_util.m"
                                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 107 "error_util.m"
                                    {
#line 107 "error_util.m"
                                      MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 107 "error_util.m"
                                      MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 107 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 107 "error_util.m"
                                    }
#line 107 "error_util.m"
                                  else
#line 107 "error_util.m"
                                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 107 "error_util.m"
                                      {
#line 107 "error_util.m"
                                        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "error_util.m"
                                        MR_Word parse_tree__error_util__V_16_16;

#line 107 "error_util.m"
                                        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 107 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
                                          {
#line 107 "error_util.m"
                                            parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8752 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_15_15 == parse_tree__error_util__V_16_16);
#line 107 "error_util.m"
                                          }
#line 107 "error_util.m"
                                      }
#line 107 "error_util.m"
                                    else
#line 107 "error_util.m"
                                      {
#line 107 "error_util.m"
                                        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "error_util.m"
                                        MR_Word parse_tree__error_util__V_24_24;

#line 107 "error_util.m"
                                        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 107 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 107 "error_util.m"
                                          {
#line 107 "error_util.m"
                                            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8775 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_23_23 == parse_tree__error_util__V_24_24);
#line 107 "error_util.m"
                                          }
#line 107 "error_util.m"
                                      }
#line 107 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 107 "error_util.m"
  }
#line 107 "error_util.m"
}

#line 163 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 163 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 163 "error_util.m"
{
#line 163 "error_util.m"
  {
#line 163 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 163 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_87 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 163 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_88 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 163 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_87 == parse_tree__error_util__CastY_88);
#line 163 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "error_util.m"
    else
#line 163 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
        {
#line 163 "error_util.m"
          MR_Word parse_tree__error_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
            {
#line 163 "error_util.m"
              MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_109_109)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 163 "error_util.m"
                return;
              }
#line 163 "error_util.m"
            }
#line 163 "error_util.m"
          else
#line 163 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
            else
#line 163 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
              else
#line 163 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
                else
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
        }
#line 163 "error_util.m"
      else
#line 163 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
          {
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 163 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
            else
#line 163 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
                {
#line 163 "error_util.m"
                  MR_Word parse_tree__error_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 163 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 163 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27;
#line 163 "error_util.m"
                  MR_Integer parse_tree__error_util__V_118_118 = (MR_Integer) parse_tree__error_util__V_112_112;
#line 163 "error_util.m"
                  MR_Integer parse_tree__error_util__V_119_119 = (MR_Integer) parse_tree__error_util__V_24_24;

#line 163 "error_util.m"
                  {
#line 163 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_27_27, parse_tree__error_util__V_118_118, parse_tree__error_util__V_119_119);
                  }
#line 163 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == (MR_Integer) 0);
#line 163 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 163 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_27_27;
#line 163 "error_util.m"
                  else
#line 163 "error_util.m"
                    {
#line 163 "error_util.m"
                      MR_Word parse_tree__error_util__V_28_28;
#line 163 "error_util.m"
                      MR_Integer parse_tree__error_util__V_120_120 = (MR_Integer) parse_tree__error_util__V_111_111;
#line 163 "error_util.m"
                      MR_Integer parse_tree__error_util__V_121_121 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 163 "error_util.m"
                      {
#line 163 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_120_120, parse_tree__error_util__V_121_121);
                      }
#line 163 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 163 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 163 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 163 "error_util.m"
                      else
#line 163 "error_util.m"
                        {
#line 163 "error_util.m"
                          {
#line 163 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_110_110)), ((MR_Box) (parse_tree__error_util__V_26_26)));
#line 163 "error_util.m"
                            return;
                          }
#line 163 "error_util.m"
                        }
#line 163 "error_util.m"
                    }
#line 163 "error_util.m"
                }
#line 163 "error_util.m"
              else
#line 163 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
                else
#line 163 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
                  else
#line 163 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
          }
#line 163 "error_util.m"
        else
#line 163 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
            {
#line 163 "error_util.m"
              MR_Word parse_tree__error_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
              else
#line 163 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                else
#line 163 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
                    {
#line 163 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 163 "error_util.m"
                      {
#line 163 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_117_117)), ((MR_Box) (parse_tree__error_util__V_49_49)));
#line 163 "error_util.m"
                        return;
                      }
#line 163 "error_util.m"
                    }
#line 163 "error_util.m"
                  else
#line 163 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
                    else
#line 163 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
            }
#line 163 "error_util.m"
          else
#line 163 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "error_util.m"
                MR_Box parse_tree__error_util__V_113_113 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 163 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                else
#line 163 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                  else
#line 163 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                    else
#line 163 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
                        {
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_92_92;
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_93_93;
#line 163 "error_util.m"
                          MR_Box parse_tree__error_util__V_86_86 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 9062 "parse_tree.error_util.c"
                          {
#line 9064 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_114_114, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_92_92);
                          }
#line 9067 "parse_tree.error_util.c"
                          {
#line 9069 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_93_93);
                          }
#line 163 "error_util.m"
                          {
#line 163 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_92_92, parse_tree__error_util__TypeInfo_93_93, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_113_113, parse_tree__error_util__V_86_86);
#line 163 "error_util.m"
                            return;
                          }
#line 163 "error_util.m"
                        }
#line 163 "error_util.m"
                      else
#line 163 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
              }
#line 163 "error_util.m"
            else
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 163 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                else
#line 163 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                  else
#line 163 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "error_util.m"
                    else
#line 163 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "error_util.m"
                      else
#line 163 "error_util.m"
                        {
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 163 "error_util.m"
                          MR_Word parse_tree__error_util__V_70_70;

#line 163 "error_util.m"
                          {
#line 163 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__V_70_70, ((MR_Box) (parse_tree__error_util__V_116_116)), ((MR_Box) (parse_tree__error_util__V_68_68)));
                          }
#line 163 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_70_70 == (MR_Integer) 0);
#line 163 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 163 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_70_70;
#line 163 "error_util.m"
                          else
#line 163 "error_util.m"
                            {
#line 163 "error_util.m"
                              {
#line 163 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_115_115)), ((MR_Box) (parse_tree__error_util__V_69_69)));
#line 163 "error_util.m"
                                return;
                              }
#line 163 "error_util.m"
                            }
#line 163 "error_util.m"
                        }
#line 163 "error_util.m"
              }
#line 163 "error_util.m"
  }
#line 163 "error_util.m"
}

#line 163 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 163 "error_util.m"
{
#line 163 "error_util.m"
  {
#line 163 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 163 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 163 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 163 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_19 == parse_tree__error_util__CastY_20);
#line 163 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 163 "error_util.m"
    else
#line 163 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 163 "error_util.m"
        {
#line 163 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 163 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4;

#line 163 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 163 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
            {
#line 163 "error_util.m"
              parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9209 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_26_26 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
              }
#line 163 "error_util.m"
            }
#line 163 "error_util.m"
        }
#line 163 "error_util.m"
      else
#line 163 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 163 "error_util.m"
          {
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 163 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 163 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 163 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 163 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 163 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 163 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                  {
#line 163 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 163 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                      {
#line 9265 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_27_27 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 163 "error_util.m"
                        {
#line 163 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_27_27, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 163 "error_util.m"
                      }
#line 163 "error_util.m"
                  }
#line 163 "error_util.m"
              }
#line 163 "error_util.m"
          }
#line 163 "error_util.m"
        else
#line 163 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 163 "error_util.m"
            {
#line 163 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 163 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12;

#line 163 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 163 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                {
#line 163 "error_util.m"
                  parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9301 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 163 "error_util.m"
                  {
#line 163 "error_util.m"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_11_11)), ((MR_Box) (parse_tree__error_util__V_12_12)));
                  }
#line 163 "error_util.m"
                }
#line 163 "error_util.m"
            }
#line 163 "error_util.m"
          else
#line 163 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_22;
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_24_24;
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_25_25;
#line 163 "error_util.m"
                MR_Box parse_tree__error_util__V_17_17 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 163 "error_util.m"
                MR_Box parse_tree__error_util__V_18_18;
#line 163 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_23;

#line 163 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 163 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                  {
#line 163 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "error_util.m"
                    parse_tree__error_util__V_18_18 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 9343 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_23 = (MR_Integer) 1;
#line 9345 "parse_tree.error_util.c"
                    {
#line 9347 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_21, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_24_24);
                    }
#line 9350 "parse_tree.error_util.c"
                    {
#line 9352 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_22, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_25_25);
                    }
#line 163 "error_util.m"
                    {
#line 163 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_24_24, parse_tree__error_util__TypeInfo_25_25, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                    }
#line 163 "error_util.m"
                  }
#line 163 "error_util.m"
              }
#line 163 "error_util.m"
            else
#line 163 "error_util.m"
              {
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 163 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 163 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 163 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                  {
#line 163 "error_util.m"
                    parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 9391 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 163 "error_util.m"
                    {
#line 163 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_13_13)), ((MR_Box) (parse_tree__error_util__V_15_15)));
                    }
#line 163 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 163 "error_util.m"
                      {
#line 9402 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 163 "error_util.m"
                        {
#line 163 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_14_14)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                        }
#line 163 "error_util.m"
                      }
#line 163 "error_util.m"
                  }
#line 163 "error_util.m"
              }
#line 163 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 163 "error_util.m"
  }
#line 163 "error_util.m"
}

#line 151 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 151 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 151 "error_util.m"
{
#line 151 "error_util.m"
  {
#line 151 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 151 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 151 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 151 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 151 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9446 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "error_util.m"
    else
#line 151 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 151 "error_util.m"
        {
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 151 "error_util.m"
          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 151 "error_util.m"
            {
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "error_util.m"
              MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_29_29;

#line 151 "error_util.m"
              {
#line 151 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
              }
#line 9483 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 151 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 151 "error_util.m"
              else
#line 151 "error_util.m"
                {
#line 151 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;
#line 151 "error_util.m"
                  MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 151 "error_util.m"
                  MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 151 "error_util.m"
                  {
#line 151 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                  }
#line 9507 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 151 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 151 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 151 "error_util.m"
                  else
#line 151 "error_util.m"
                    {
#line 151 "error_util.m"
                      MR_Word parse_tree__error_util__V_31_31;

#line 151 "error_util.m"
                      {
#line 151 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                      }
#line 9527 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 151 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 151 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 151 "error_util.m"
                      else
#line 151 "error_util.m"
                        {
#line 151 "error_util.m"
                          {
#line 151 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
#line 151 "error_util.m"
                            return;
                          }
#line 151 "error_util.m"
                        }
#line 151 "error_util.m"
                    }
#line 151 "error_util.m"
                }
#line 151 "error_util.m"
            }
#line 151 "error_util.m"
          else
#line 9556 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "error_util.m"
        }
#line 151 "error_util.m"
      else
#line 151 "error_util.m"
        {
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9571 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "error_util.m"
          else
#line 151 "error_util.m"
            {
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "error_util.m"
              MR_Word parse_tree__error_util__V_8_8;

#line 151 "error_util.m"
              {
#line 151 "error_util.m"
                mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
              }
#line 9589 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 151 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 151 "error_util.m"
              else
#line 151 "error_util.m"
                {
#line 151 "error_util.m"
                  {
#line 151 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 151 "error_util.m"
                    return;
                  }
#line 151 "error_util.m"
                }
#line 151 "error_util.m"
            }
#line 151 "error_util.m"
        }
#line 151 "error_util.m"
  }
#line 151 "error_util.m"
}

#line 151 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 151 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 151 "error_util.m"
{
#line 151 "error_util.m"
  {
#line 151 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 151 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 151 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 151 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 151 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 151 "error_util.m"
    else
#line 151 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 151 "error_util.m"
        {
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "error_util.m"
          MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_11_11;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_12_12;
#line 151 "error_util.m"
          MR_Integer parse_tree__error_util__V_13_13;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_14_14;

#line 151 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
            {
#line 151 "error_util.m"
              parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "error_util.m"
              parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "error_util.m"
              parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "error_util.m"
              parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 9684 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 9686 "parse_tree.error_util.c"
              {
#line 9688 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
              }
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                {
#line 9695 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 151 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                    {
#line 9701 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 151 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                        {
#line 9707 "parse_tree.error_util.c"
                          parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9709 "parse_tree.error_util.c"
                          {
#line 9711 "parse_tree.error_util.c"
                            return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                          }
#line 151 "error_util.m"
                        }
#line 151 "error_util.m"
                    }
#line 151 "error_util.m"
                }
#line 151 "error_util.m"
            }
#line 151 "error_util.m"
        }
#line 151 "error_util.m"
      else
#line 151 "error_util.m"
        {
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_5_5;
#line 151 "error_util.m"
          MR_Word parse_tree__error_util__V_6_6;

#line 151 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 151 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
            {
#line 151 "error_util.m"
              parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 151 "error_util.m"
              parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 9749 "parse_tree.error_util.c"
              {
#line 9751 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
              }
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                {
#line 9758 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9760 "parse_tree.error_util.c"
                  {
#line 9762 "parse_tree.error_util.c"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                  }
#line 151 "error_util.m"
                }
#line 151 "error_util.m"
            }
#line 151 "error_util.m"
        }
#line 151 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 151 "error_util.m"
  }
#line 151 "error_util.m"
}

#line 1429 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1429 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1429 "error_util.m"
{
#line 1429 "error_util.m"
  {
#line 1429 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1429 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1429 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1429 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1429 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9802 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1429 "error_util.m"
    else
#line 1429 "error_util.m"
      {
#line 1429 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1429 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1429 "error_util.m"
        {
#line 1429 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 9824 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1429 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1429 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1429 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1429 "error_util.m"
        else
#line 1429 "error_util.m"
          {
#line 1429 "error_util.m"
            {
#line 1429 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1429 "error_util.m"
              return;
            }
#line 1429 "error_util.m"
          }
#line 1429 "error_util.m"
      }
#line 1429 "error_util.m"
  }
#line 1429 "error_util.m"
}

#line 1429 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1429 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1429 "error_util.m"
{
#line 1429 "error_util.m"
  {
#line 1429 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1429 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1429 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1429 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1429 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1429 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1429 "error_util.m"
    else
#line 1429 "error_util.m"
      {
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1429 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1429 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1429 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 9891 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1429 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1429 "error_util.m"
          {
#line 9897 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[2];
#line 9899 "parse_tree.error_util.c"
            {
#line 9901 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1429 "error_util.m"
          }
#line 1429 "error_util.m"
      }
#line 1429 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1429 "error_util.m"
  }
#line 1429 "error_util.m"
}

#line 98 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0(
#line 98 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 98 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 98 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 98 "error_util.m"
{
#line 98 "error_util.m"
  {
#line 98 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 98 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 98 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 98 "error_util.m"
    {
#line 98 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 98 "error_util.m"
      return;
    }
#line 98 "error_util.m"
  }
#line 98 "error_util.m"
}

#line 98 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0(
#line 98 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 98 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 98 "error_util.m"
{
#line 9956 "parse_tree.error_util.c"
  {
#line 9958 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 9961 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 9963 "parse_tree.error_util.c"
  }
#line 98 "error_util.m"
}

#line 1519 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1519 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1519 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1519 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1519 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1519 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1519 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1519 "error_util.m"
{
#line 1522 "error_util.m"
  while (MR_TRUE)
#line 1522 "error_util.m"
    {
#line 1522 "error_util.m"
      /* tailcall optimized into a loop */
#line 1522 "error_util.m"
      {
#line 1522 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1522 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1522 "error_util.m"
          {
#line 1522 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1522 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "error_util.m"
          }
#line 1522 "error_util.m"
        else
#line 1523 "error_util.m"
          {
#line 1523 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1523 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1523 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1523 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1523 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1524 "error_util.m"
            {
#line 1524 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1525 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1525 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1526 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1529 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1527 "error_util.m"
              {
#line 1527 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1527 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1527 "error_util.m"
                {
#line 1527 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1527 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "error_util.m"
                }
#line 1527 "error_util.m"
                {
#line 1527 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1528 "error_util.m"
                /* direct tailcall eliminated */
#line 1528 "error_util.m"
                {
#line 1528 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1528 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1528 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1528 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1528 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1528 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1528 "error_util.m"
                }
#line 1528 "error_util.m"
                continue;
#line 1527 "error_util.m"
              }
#line 1529 "error_util.m"
            else
#line 1530 "error_util.m"
              {
#line 1530 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1531 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1530 "error_util.m"
              }
#line 1523 "error_util.m"
          }
#line 1522 "error_util.m"
      }
#line 1522 "error_util.m"
      break;
#line 1522 "error_util.m"
    }
#line 1519 "error_util.m"
}

#line 1494 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1494 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1494 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1494 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1494 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1494 "error_util.m"
{
#line 1499 "error_util.m"
  {
#line 1499 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1499 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1500 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "error_util.m"
    else
#line 1502 "error_util.m"
      {
#line 1502 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1502 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1502 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1502 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1502 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1514 "error_util.m"
        {
#line 1514 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1515 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1515 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1516 "error_util.m"
        {
#line 1516 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1516 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "error_util.m"
        }
#line 1516 "error_util.m"
        {
#line 1516 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1505 "error_util.m"
        {
#line 1505 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1505 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1505 "error_util.m"
        }
#line 1506 "error_util.m"
        {
#line 1506 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1507 "error_util.m"
        {
#line 1507 "error_util.m"
          MR_Word base;
#line 1507 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1507 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1507 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1507 "error_util.m"
        }
#line 1502 "error_util.m"
      }
#line 1499 "error_util.m"
  }
#line 1494 "error_util.m"
}

#line 1446 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1446 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1446 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1446 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1446 "error_util.m"
{
#line 1452 "error_util.m"
  {
#line 1452 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1452 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1452 "error_util.m"
    else
#line 1455 "error_util.m"
      {
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1455 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1455 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1455 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1455 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1455 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1460 "error_util.m"
        if ((parse_tree__error_util__TreatAsFirst_6 == (MR_Integer) 1))
#line 1462 "error_util.m"
          parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1460 "error_util.m"
        else
#line 1458 "error_util.m"
          {
#line 1459 "error_util.m"
            parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1458 "error_util.m"
          }
#line 1464 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1466 "error_util.m"
        {
#line 1466 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1466 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1466 "error_util.m"
        }
#line 10288 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1467 "error_util.m"
        {
#line 1467 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1472 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1469 "error_util.m"
          {
#line 1470 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1471 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1469 "error_util.m"
          }
#line 1472 "error_util.m"
        else
#line 1473 "error_util.m"
          {
#line 1473 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1473 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1474 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1484 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1485 "error_util.m"
              {
#line 1485 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1486 "error_util.m"
                {
#line 1486 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1486 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1486 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1486 "error_util.m"
                }
#line 1486 "error_util.m"
                {
#line 1486 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1486 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1486 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1486 "error_util.m"
                }
#line 1485 "error_util.m"
              }
#line 1484 "error_util.m"
            else
#line 1476 "error_util.m"
              {
#line 1476 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1476 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1476 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1476 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1476 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1476 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1476 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1476 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1476 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1514 "error_util.m"
                {
#line 1514 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1515 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1515 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1516 "error_util.m"
                {
#line 1516 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1516 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1516 "error_util.m"
                }
#line 1516 "error_util.m"
                {
#line 1516 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1479 "error_util.m"
                {
#line 1479 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1479 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1479 "error_util.m"
                }
#line 1481 "error_util.m"
                {
#line 1481 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1483 "error_util.m"
                {
#line 1483 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1483 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1483 "error_util.m"
                }
#line 1476 "error_util.m"
              }
#line 1473 "error_util.m"
          }
#line 1489 "error_util.m"
        {
#line 1489 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1491 "error_util.m"
        {
#line 1491 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1491 "error_util.m"
        {
#line 1491 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1455 "error_util.m"
      }
#line 1452 "error_util.m"
  }
#line 1446 "error_util.m"
}

#line 1414 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1414 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1414 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1414 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1414 "error_util.m"
{
#line 1423 "error_util.m"
  while (MR_TRUE)
#line 1423 "error_util.m"
    {
#line 1423 "error_util.m"
      /* tailcall optimized into a loop */
#line 1423 "error_util.m"
      {
#line 1423 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1423 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1423 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1417 "error_util.m"
        {
#line 1417 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1423 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1420 "error_util.m"
          {
#line 1418 "error_util.m"
            {
#line 1418 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1420 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1419 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1420 "error_util.m"
            else
#line 1421 "error_util.m"
              {
#line 1421 "error_util.m"
                /* direct tailcall eliminated */
#line 1421 "error_util.m"
                {
#line 1421 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1421 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1421 "error_util.m"
                }
#line 1421 "error_util.m"
                continue;
#line 1421 "error_util.m"
              }
#line 1420 "error_util.m"
          }
#line 1423 "error_util.m"
        else
#line 1424 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1423 "error_util.m"
      }
#line 1423 "error_util.m"
      break;
#line 1423 "error_util.m"
    }
#line 1414 "error_util.m"
}

#line 1404 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1404 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1404 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1404 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1404 "error_util.m"
{
#line 1406 "error_util.m"
  while (MR_TRUE)
#line 1406 "error_util.m"
    {
#line 1406 "error_util.m"
      /* tailcall optimized into a loop */
#line 1406 "error_util.m"
      {
#line 1406 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1406 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1406 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1407 "error_util.m"
        {
#line 1407 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1406 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1406 "error_util.m"
          {
#line 1408 "error_util.m"
            {
#line 1408 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1410 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1409 "error_util.m"
              {
#line 1409 "error_util.m"
                /* direct tailcall eliminated */
#line 1409 "error_util.m"
                {
#line 1409 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1409 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1409 "error_util.m"
                }
#line 1409 "error_util.m"
                continue;
#line 1409 "error_util.m"
              }
#line 1410 "error_util.m"
            else
#line 1411 "error_util.m"
              {
#line 1411 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1411 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1411 "error_util.m"
              }
#line 1406 "error_util.m"
          }
#line 1406 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1406 "error_util.m"
      }
#line 1406 "error_util.m"
      break;
#line 1406 "error_util.m"
    }
#line 1404 "error_util.m"
}

#line 1391 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1391 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1391 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1391 "error_util.m"
{
#line 1400 "error_util.m"
  while (MR_TRUE)
#line 1400 "error_util.m"
    {
#line 1400 "error_util.m"
      /* tailcall optimized into a loop */
#line 1400 "error_util.m"
      {
#line 1400 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1400 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1395 "error_util.m"
        {
#line 1395 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1400 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1396 "error_util.m"
          {
#line 1396 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1396 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1396 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1396 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1396 "error_util.m"
            {
#line 1396 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1397 "error_util.m"
            {
#line 1397 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1398 "error_util.m"
            {
#line 1398 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1398 "error_util.m"
            }
#line 1398 "error_util.m"
            {
#line 1398 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1398 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1398 "error_util.m"
            }
#line 1398 "error_util.m"
            /* direct tailcall eliminated */
#line 1398 "error_util.m"
            {
#line 1398 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1398 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1398 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1398 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1398 "error_util.m"
            }
#line 1398 "error_util.m"
            continue;
#line 1396 "error_util.m"
          }
#line 1400 "error_util.m"
        else
#line 1401 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1400 "error_util.m"
      }
#line 1400 "error_util.m"
      break;
#line 1400 "error_util.m"
    }
#line 1391 "error_util.m"
}

#line 1386 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1386 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1386 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1386 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1386 "error_util.m"
{
#line 1388 "error_util.m"
  {
#line 1388 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1389 "error_util.m"
    {
#line 1389 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1389 "error_util.m"
      return;
    }
#line 1388 "error_util.m"
  }
#line 1386 "error_util.m"
}

#line 1381 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1381 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1381 "error_util.m"
{
#line 1383 "error_util.m"
  {
#line 1383 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1383 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1383 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1383 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1384 "error_util.m"
    {
#line 1384 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1384 "error_util.m"
    {
#line 1384 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1384 "error_util.m"
    {
#line 1384 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1384 "error_util.m"
    {
#line 1384 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1383 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1383 "error_util.m"
  }
#line 1381 "error_util.m"
}

#line 1376 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1376 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1376 "error_util.m"
{
#line 1378 "error_util.m"
  {
#line 1378 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1378 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1378 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1378 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1379 "error_util.m"
    {
#line 1379 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1378 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1378 "error_util.m"
  }
#line 1376 "error_util.m"
}

#line 1335 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1335 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1335 "error_util.m"
{
#line 1337 "error_util.m"
  {
#line 1337 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1337 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1337 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1337 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1337 "error_util.m"
    else
#line 1338 "error_util.m"
      {
#line 1338 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1338 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1338 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1339 "error_util.m"
        {
#line 1339 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1343 "error_util.m"
        if ((parse_tree__error_util__Head_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "error_util.m"
          if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1356 "error_util.m"
            parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1357 "error_util.m"
          else
#line 1358 "error_util.m"
            {
#line 1358 "error_util.m"
              MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1358 "error_util.m"
              MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1358 "error_util.m"
              MR_String parse_tree__error_util__V_13_13;
#line 1372 "error_util.m"
              MR_Char parse_tree__error_util__First_17;
#line 1372 "error_util.m"
              MR_String parse_tree__error_util__Rest_18;

#line 1367 "error_util.m"
              {
#line 1367 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
              }
#line 1367 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1368 "error_util.m"
                {
#line 1368 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                }
#line 1372 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1370 "error_util.m"
                {
#line 1370 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1370 "error_util.m"
                  {
#line 1370 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                  }
#line 1371 "error_util.m"
                  {
#line 1371 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                  }
#line 1370 "error_util.m"
                }
#line 1372 "error_util.m"
              else
#line 1373 "error_util.m"
                parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1359 "error_util.m"
              {
#line 1359 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1359 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1359 "error_util.m"
              }
#line 1358 "error_util.m"
            }
#line 1343 "error_util.m"
        else
#line 1343 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__Head_3)) == (MR_mktag((MR_Integer) 1))))
#line 1341 "error_util.m"
            {
#line 1341 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1342 "error_util.m"
              {
#line 1342 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1342 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1342 "error_util.m"
              }
#line 1341 "error_util.m"
            }
#line 1343 "error_util.m"
          else
#line 1344 "error_util.m"
            {
#line 1344 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1348 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "error_util.m"
                {
#line 1350 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1350 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1350 "error_util.m"
                }
#line 1348 "error_util.m"
              else
#line 1346 "error_util.m"
                {
#line 1346 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1346 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1346 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1347 "error_util.m"
                  {
#line 1347 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1347 "error_util.m"
                  {
#line 1347 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1347 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1347 "error_util.m"
                  }
#line 1346 "error_util.m"
                }
#line 1344 "error_util.m"
            }
#line 1338 "error_util.m"
      }
#line 1337 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1337 "error_util.m"
  }
#line 1335 "error_util.m"
}

#line 1290 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1290 "error_util.m"
{
#line 1292 "error_util.m"
  while (MR_TRUE)
#line 1292 "error_util.m"
    {
#line 1292 "error_util.m"
      /* tailcall optimized into a loop */
#line 1292 "error_util.m"
      {
#line 1292 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1292 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1292 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1292 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1292 "error_util.m"
        else
#line 1293 "error_util.m"
          {
#line 1293 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1293 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1297 "error_util.m"
            if ((parse_tree__error_util__Word_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1298 "error_util.m"
              {
#line 1298 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1299 "error_util.m"
                {
#line 1299 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1299 "error_util.m"
                {
#line 1299 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1299 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1299 "error_util.m"
                }
#line 1298 "error_util.m"
              }
#line 1297 "error_util.m"
            else
#line 1297 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 1))))
#line 1295 "error_util.m"
                {
#line 1295 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1295 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1295 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1296 "error_util.m"
                  {
#line 1296 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1296 "error_util.m"
                  }
#line 1296 "error_util.m"
                  {
#line 1296 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1296 "error_util.m"
                  {
#line 1296 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1296 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1296 "error_util.m"
                  }
#line 1295 "error_util.m"
                }
#line 1297 "error_util.m"
              else
#line 1297 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 2))))
#line 1301 "error_util.m"
                  {
#line 1301 "error_util.m"
                    MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1301 "error_util.m"
                    MR_Word parse_tree__error_util__V_29_29;
#line 1301 "error_util.m"
                    MR_Word parse_tree__error_util__V_30_30;

#line 1302 "error_util.m"
                    {
#line 1302 "error_util.m"
                      parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "error_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1302 "error_util.m"
                    }
#line 1302 "error_util.m"
                    {
#line 1302 "error_util.m"
                      parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                    }
#line 1302 "error_util.m"
                    {
#line 1302 "error_util.m"
                      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1302 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1302 "error_util.m"
                    }
#line 1301 "error_util.m"
                  }
#line 1297 "error_util.m"
                else
#line 1304 "error_util.m"
                  {
#line 1304 "error_util.m"
                    MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1308 "error_util.m"
                    if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "error_util.m"
                      {
#line 1306 "error_util.m"
                        MR_Word parse_tree__error_util__V_27_27;

#line 1307 "error_util.m"
                        {
#line 1307 "error_util.m"
                          parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1307 "error_util.m"
                        }
#line 1307 "error_util.m"
                        {
#line 1307 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1307 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1307 "error_util.m"
                        }
#line 1306 "error_util.m"
                      }
#line 1308 "error_util.m"
                    else
#line 1308 "error_util.m"
                      {
#line 1308 "error_util.m"
                        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1308 "error_util.m"
                        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1308 "error_util.m"
                        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1313 "error_util.m"
                          {
#line 1313 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1313 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1313 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1372 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1372 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1367 "error_util.m"
                            {
#line 1367 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1367 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1368 "error_util.m"
                              {
#line 1368 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1372 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1370 "error_util.m"
                              {
#line 1370 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1370 "error_util.m"
                                {
#line 1370 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1371 "error_util.m"
                                {
#line 1371 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1370 "error_util.m"
                              }
#line 1372 "error_util.m"
                            else
#line 1373 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1318 "error_util.m"
                            {
#line 1318 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1318 "error_util.m"
                            }
#line 1318 "error_util.m"
                            {
#line 1318 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1318 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1318 "error_util.m"
                            }
#line 1319 "error_util.m"
                            /* direct tailcall eliminated */
#line 1319 "error_util.m"
                            {
#line 1319 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1319 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1319 "error_util.m"
                            }
#line 1319 "error_util.m"
                            continue;
#line 1313 "error_util.m"
                          }
#line 1308 "error_util.m"
                        else
#line 1308 "error_util.m"
                          if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1309 "error_util.m"
                            {
#line 1309 "error_util.m"
                              MR_Word parse_tree__error_util__V_24_24;
#line 1309 "error_util.m"
                              MR_String parse_tree__error_util__V_25_25;
#line 1309 "error_util.m"
                              MR_Word parse_tree__error_util__V_26_26;
#line 1309 "error_util.m"
                              MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1310 "error_util.m"
                              {
#line 1310 "error_util.m"
                                parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                              }
#line 1310 "error_util.m"
                              {
#line 1310 "error_util.m"
                                parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1310 "error_util.m"
                              }
#line 1311 "error_util.m"
                              {
#line 1311 "error_util.m"
                                parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                              }
#line 1311 "error_util.m"
                              {
#line 1311 "error_util.m"
                                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1311 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1311 "error_util.m"
                              }
#line 1309 "error_util.m"
                            }
#line 1308 "error_util.m"
                          else
#line 1308 "error_util.m"
                            if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 2))))
#line 1321 "error_util.m"
                              {
#line 1321 "error_util.m"
                                MR_Word parse_tree__error_util__V_17_17;
#line 1321 "error_util.m"
                                MR_String parse_tree__error_util__V_18_18;
#line 1321 "error_util.m"
                                MR_Word parse_tree__error_util__V_19_19;
#line 1321 "error_util.m"
                                MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1326 "error_util.m"
                                {
#line 1326 "error_util.m"
                                  parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                                }
#line 1326 "error_util.m"
                                {
#line 1326 "error_util.m"
                                  parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1326 "error_util.m"
                                }
#line 1327 "error_util.m"
                                {
#line 1327 "error_util.m"
                                  parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                                }
#line 1327 "error_util.m"
                                {
#line 1327 "error_util.m"
                                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1327 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1327 "error_util.m"
                                }
#line 1321 "error_util.m"
                              }
#line 1308 "error_util.m"
                            else
#line 1329 "error_util.m"
                              {
#line 1329 "error_util.m"
                                MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1329 "error_util.m"
                                MR_Word parse_tree__error_util__V_13_13;
#line 1329 "error_util.m"
                                MR_Word parse_tree__error_util__V_14_14;
#line 1329 "error_util.m"
                                MR_String parse_tree__error_util__V_15_15;

#line 1331 "error_util.m"
                                {
#line 1331 "error_util.m"
                                  parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                                }
#line 1331 "error_util.m"
                                {
#line 1331 "error_util.m"
                                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "error_util.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1331 "error_util.m"
                                }
#line 1331 "error_util.m"
                                {
#line 1331 "error_util.m"
                                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1331 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1331 "error_util.m"
                                }
#line 1330 "error_util.m"
                                /* direct tailcall eliminated */
#line 1330 "error_util.m"
                                {
#line 1330 "error_util.m"
                                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1330 "error_util.m"
                                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1330 "error_util.m"
                                }
#line 1330 "error_util.m"
                                continue;
#line 1329 "error_util.m"
                              }
#line 1308 "error_util.m"
                      }
#line 1304 "error_util.m"
                  }
#line 1293 "error_util.m"
          }
#line 1292 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1292 "error_util.m"
      }
#line 1292 "error_util.m"
      break;
#line 1292 "error_util.m"
    }
#line 1290 "error_util.m"
}

#line 1284 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1284 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1284 "error_util.m"
{
#line 1286 "error_util.m"
  {
#line 1286 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1286 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1286 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1286 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1287 "error_util.m"
    {
#line 1287 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1287 "error_util.m"
    {
#line 1287 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1288 "error_util.m"
    {
#line 1288 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1286 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1286 "error_util.m"
  }
#line 1284 "error_util.m"
}

#line 1185 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1185 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1185 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1185 "error_util.m"
{
#line 1189 "error_util.m"
  while (MR_TRUE)
#line 1189 "error_util.m"
    {
#line 1189 "error_util.m"
      /* tailcall optimized into a loop */
#line 1189 "error_util.m"
      {
#line 1189 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1189 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "error_util.m"
          {
#line 1189 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1189 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1190 "error_util.m"
            {
#line 1190 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1191 "error_util.m"
            {
#line 1191 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1191 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1191 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1191 "error_util.m"
            }
#line 1191 "error_util.m"
            {
#line 1191 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1189 "error_util.m"
          }
#line 1189 "error_util.m"
        else
#line 1193 "error_util.m"
          {
#line 1193 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1193 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1193 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1193 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_47_47;

#line 1197 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1271 "error_util.m"
              {
#line 1271 "error_util.m"
                MR_Word parse_tree__error_util__V_41_41;
#line 1271 "error_util.m"
                MR_Word parse_tree__error_util__Strings_92;

#line 1272 "error_util.m"
                {
#line 1272 "error_util.m"
                  parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1273 "error_util.m"
                {
#line 1273 "error_util.m"
                  parse_tree__error_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1273 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1273 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_41_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1273 "error_util.m"
                }
#line 1273 "error_util.m"
                {
#line 1273 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_41_41)));
                }
#line 1274 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "error_util.m"
              }
#line 1197 "error_util.m"
            else
#line 1197 "error_util.m"
              if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "error_util.m"
                {
#line 1217 "error_util.m"
                  if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1216 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1217 "error_util.m"
                  else
#line 1218 "error_util.m"
                    {
#line 1219 "error_util.m"
                      {
#line 1219 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1219 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1219 "error_util.m"
                      }
#line 1218 "error_util.m"
                    }
#line 1219 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1213 "error_util.m"
                }
#line 1197 "error_util.m"
              else
#line 1197 "error_util.m"
                if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1261 "error_util.m"
                  {
#line 1261 "error_util.m"
                    MR_Word parse_tree__error_util__Strings_36;
#line 1261 "error_util.m"
                    MR_Word parse_tree__error_util__V_48_48;

#line 1262 "error_util.m"
                    {
#line 1262 "error_util.m"
                      parse_tree__error_util__Strings_36 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                    }
#line 1263 "error_util.m"
                    {
#line 1263 "error_util.m"
                      parse_tree__error_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 0) = ((MR_Box) (parse_tree__error_util__Strings_36));
#line 1263 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1263 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1263 "error_util.m"
                    }
#line 1263 "error_util.m"
                    {
#line 1263 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_48_48)));
                    }
#line 1264 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1261 "error_util.m"
                  }
#line 1197 "error_util.m"
                else
#line 1197 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 1))))
#line 1201 "error_util.m"
                    {
#line 1201 "error_util.m"
                      MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1201 "error_util.m"
                      MR_Word parse_tree__error_util__V_74_74;

#line 1202 "error_util.m"
                      {
#line 1202 "error_util.m"
                        parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1202 "error_util.m"
                      }
#line 1202 "error_util.m"
                      {
#line 1202 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1202 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1202 "error_util.m"
                      }
#line 1202 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1201 "error_util.m"
                    }
#line 1197 "error_util.m"
                  else
#line 1197 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 2))))
#line 1204 "error_util.m"
                      {
#line 1204 "error_util.m"
                        MR_Word parse_tree__error_util__V_72_72;
#line 1204 "error_util.m"
                        MR_String parse_tree__error_util__V_73_73;
#line 1204 "error_util.m"
                        MR_String parse_tree__error_util__Word_79 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));

#line 1205 "error_util.m"
                        {
#line 1205 "error_util.m"
                          parse_tree__error_util__V_73_73 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_79);
                        }
#line 1205 "error_util.m"
                        {
#line 1205 "error_util.m"
                          parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1205 "error_util.m"
                        }
#line 1205 "error_util.m"
                        {
#line 1205 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1205 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1205 "error_util.m"
                        }
#line 1205 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1204 "error_util.m"
                      }
#line 1197 "error_util.m"
                    else
#line 1197 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1253 "error_util.m"
                        {
#line 1253 "error_util.m"
                          MR_String parse_tree__error_util__DeclName_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1253 "error_util.m"
                          MR_String parse_tree__error_util__V_54_54;
#line 1253 "error_util.m"
                          MR_Word parse_tree__error_util__V_56_56;
#line 1253 "error_util.m"
                          MR_String parse_tree__error_util__Word_89;

#line 1254 "error_util.m"
                          {
#line 1254 "error_util.m"
                            parse_tree__error_util__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_34);
                          }
#line 1254 "error_util.m"
                          {
#line 1254 "error_util.m"
                            parse_tree__error_util__Word_89 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_54_54);
                          }
#line 1255 "error_util.m"
                          {
#line 1255 "error_util.m"
                            parse_tree__error_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__V_56_56, 0) = ((MR_Box) (parse_tree__error_util__Word_89));
#line 1255 "error_util.m"
                          }
#line 1255 "error_util.m"
                          {
#line 1255 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_56_56));
#line 1255 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1255 "error_util.m"
                          }
#line 1255 "error_util.m"
                          parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1253 "error_util.m"
                        }
#line 1197 "error_util.m"
                      else
#line 1197 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1207 "error_util.m"
                          {
#line 1207 "error_util.m"
                            MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1207 "error_util.m"
                            MR_Word parse_tree__error_util__V_70_70;
#line 1207 "error_util.m"
                            MR_String parse_tree__error_util__V_71_71;

#line 1208 "error_util.m"
                            {
#line 1208 "error_util.m"
                              parse_tree__error_util__V_71_71 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                            }
#line 1208 "error_util.m"
                            {
#line 1208 "error_util.m"
                              parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1208 "error_util.m"
                            }
#line 1208 "error_util.m"
                            {
#line 1208 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1208 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1208 "error_util.m"
                            }
#line 1208 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1207 "error_util.m"
                          }
#line 1197 "error_util.m"
                        else
#line 1197 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1266 "error_util.m"
                            {
#line 1266 "error_util.m"
                              MR_Integer parse_tree__error_util__IndentDelta_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1266 "error_util.m"
                              MR_Word parse_tree__error_util__V_45_45;
#line 1266 "error_util.m"
                              MR_Word parse_tree__error_util__Strings_91;

#line 1267 "error_util.m"
                              {
#line 1267 "error_util.m"
                                parse_tree__error_util__Strings_91 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                              }
#line 1268 "error_util.m"
                              {
#line 1268 "error_util.m"
                                parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_91));
#line 1268 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1268 "error_util.m"
                                MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_37));
#line 1268 "error_util.m"
                              }
#line 1268 "error_util.m"
                              {
#line 1268 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                              }
#line 1269 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1266 "error_util.m"
                            }
#line 1197 "error_util.m"
                          else
#line 1197 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1210 "error_util.m"
                              {
#line 1210 "error_util.m"
                                MR_Word parse_tree__error_util__V_68_68;
#line 1210 "error_util.m"
                                MR_String parse_tree__error_util__V_69_69;
#line 1210 "error_util.m"
                                MR_Integer parse_tree__error_util__Int_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1211 "error_util.m"
                                {
#line 1211 "error_util.m"
                                  parse_tree__error_util__V_69_69 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_80);
                                }
#line 1211 "error_util.m"
                                {
#line 1211 "error_util.m"
                                  parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__V_69_69));
#line 1211 "error_util.m"
                                }
#line 1211 "error_util.m"
                                {
#line 1211 "error_util.m"
                                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1211 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1211 "error_util.m"
                                }
#line 1211 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1210 "error_util.m"
                              }
#line 1197 "error_util.m"
                            else
#line 1197 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1245 "error_util.m"
                                {
#line 1245 "error_util.m"
                                  MR_Word parse_tree__error_util__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1245 "error_util.m"
                                  MR_Word parse_tree__error_util__V_57_57;
#line 1245 "error_util.m"
                                  MR_String parse_tree__error_util__Word_87;

#line 1543 "error_util.m"
                                  if ((parse_tree__error_util__PredOrFunc_32 == (MR_Integer) 1))
#line 1544 "error_util.m"
                                    parse_tree__error_util__Word_87 = (MR_String) "function";
#line 1543 "error_util.m"
                                  else
#line 1543 "error_util.m"
                                    parse_tree__error_util__Word_87 = (MR_String) "predicate";
#line 1247 "error_util.m"
                                  {
#line 1247 "error_util.m"
                                    parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_87));
#line 1247 "error_util.m"
                                  }
#line 1247 "error_util.m"
                                  {
#line 1247 "error_util.m"
                                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1247 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1247 "error_util.m"
                                  }
#line 1247 "error_util.m"
                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1245 "error_util.m"
                                }
#line 1197 "error_util.m"
                              else
#line 1197 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1257 "error_util.m"
                                  {
#line 1257 "error_util.m"
                                    MR_String parse_tree__error_util__PragmaName_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1257 "error_util.m"
                                    MR_String parse_tree__error_util__V_51_51;
#line 1257 "error_util.m"
                                    MR_Word parse_tree__error_util__V_53_53;
#line 1257 "error_util.m"
                                    MR_String parse_tree__error_util__Word_90;

#line 1258 "error_util.m"
                                    {
#line 1258 "error_util.m"
                                      parse_tree__error_util__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_35);
                                    }
#line 1258 "error_util.m"
                                    {
#line 1258 "error_util.m"
                                      parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_51_51);
                                    }
#line 1259 "error_util.m"
                                    {
#line 1259 "error_util.m"
                                      parse_tree__error_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_53_53, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1259 "error_util.m"
                                    }
#line 1259 "error_util.m"
                                    {
#line 1259 "error_util.m"
                                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_53_53));
#line 1259 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1259 "error_util.m"
                                    }
#line 1259 "error_util.m"
                                    parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1257 "error_util.m"
                                  }
#line 1197 "error_util.m"
                                else
#line 1197 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1222 "error_util.m"
                                    {
#line 1222 "error_util.m"
                                      MR_Word parse_tree__error_util__V_66_66;
#line 1222 "error_util.m"
                                      MR_String parse_tree__error_util__Word_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1223 "error_util.m"
                                      {
#line 1223 "error_util.m"
                                        parse_tree__error_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "error_util.m"
                                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_66_66, 0) = ((MR_Box) (parse_tree__error_util__Word_81));
#line 1223 "error_util.m"
                                      }
#line 1223 "error_util.m"
                                      {
#line 1223 "error_util.m"
                                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1223 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1223 "error_util.m"
                                      }
#line 1223 "error_util.m"
                                      parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1222 "error_util.m"
                                    }
#line 1197 "error_util.m"
                                  else
#line 1197 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1249 "error_util.m"
                                      {
#line 1249 "error_util.m"
                                        MR_Word parse_tree__error_util__SimpleCallId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1249 "error_util.m"
                                        MR_String parse_tree__error_util__WordsStr_88;

#line 1250 "error_util.m"
                                        {
#line 1250 "error_util.m"
                                          parse_tree__error_util__WordsStr_88 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_33);
                                        }
#line 1251 "error_util.m"
                                        {
#line 1251 "error_util.m"
                                          parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_88, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                        }
#line 1251 "error_util.m"
                                        parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1249 "error_util.m"
                                      }
#line 1197 "error_util.m"
                                    else
#line 1197 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1225 "error_util.m"
                                        {
#line 1225 "error_util.m"
                                          MR_Word parse_tree__error_util__V_65_65;
#line 1225 "error_util.m"
                                          MR_String parse_tree__error_util__Word_82 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1226 "error_util.m"
                                          {
#line 1226 "error_util.m"
                                            parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "error_util.m"
                                            MR_hl_field(MR_mktag(3), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__Word_82));
#line 1226 "error_util.m"
                                          }
#line 1226 "error_util.m"
                                          {
#line 1226 "error_util.m"
                                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1226 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1226 "error_util.m"
                                          }
#line 1226 "error_util.m"
                                          parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1225 "error_util.m"
                                        }
#line 1197 "error_util.m"
                                      else
#line 1197 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1228 "error_util.m"
                                          {
#line 1228 "error_util.m"
                                            MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1228 "error_util.m"
                                            MR_Word parse_tree__error_util__V_63_63;
#line 1228 "error_util.m"
                                            MR_String parse_tree__error_util__V_64_64;

#line 1229 "error_util.m"
                                            {
#line 1229 "error_util.m"
                                              parse_tree__error_util__V_64_64 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                                            }
#line 1229 "error_util.m"
                                            {
#line 1229 "error_util.m"
                                              parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1229 "error_util.m"
                                            }
#line 1229 "error_util.m"
                                            {
#line 1229 "error_util.m"
                                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1229 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1229 "error_util.m"
                                            }
#line 1229 "error_util.m"
                                            parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1228 "error_util.m"
                                          }
#line 1197 "error_util.m"
                                        else
#line 1197 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1231 "error_util.m"
                                            {
#line 1231 "error_util.m"
                                              MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1231 "error_util.m"
                                              MR_Word parse_tree__error_util__V_62_62;
#line 1231 "error_util.m"
                                              MR_String parse_tree__error_util__Word_83;

#line 1232 "error_util.m"
                                              {
#line 1232 "error_util.m"
                                                parse_tree__error_util__Word_83 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                                              }
#line 1233 "error_util.m"
                                              {
#line 1233 "error_util.m"
                                                parse_tree__error_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_62_62, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1233 "error_util.m"
                                              }
#line 1233 "error_util.m"
                                              {
#line 1233 "error_util.m"
                                                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1233 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1233 "error_util.m"
                                              }
#line 1233 "error_util.m"
                                              parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1231 "error_util.m"
                                            }
#line 1197 "error_util.m"
                                          else
#line 1197 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1235 "error_util.m"
                                              {
#line 1235 "error_util.m"
                                                MR_Word parse_tree__error_util__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1241 "error_util.m"
                                                MR_Word parse_tree__error_util__TypeCtor_28;

#line 1236 "error_util.m"
                                                {
#line 1236 "error_util.m"
                                                  parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_27, &parse_tree__error_util__TypeCtor_28);
                                                }
#line 1241 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1237 "error_util.m"
                                                  {
#line 1237 "error_util.m"
                                                    MR_Word parse_tree__error_util__TypeCtorName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 0)));
#line 1237 "error_util.m"
                                                    MR_Integer parse_tree__error_util__TypeCtorArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 1)));
#line 1237 "error_util.m"
                                                    MR_Word parse_tree__error_util__NewWord_31;
#line 1237 "error_util.m"
                                                    MR_String parse_tree__error_util__V_58_58;
#line 1237 "error_util.m"
                                                    MR_Word parse_tree__error_util__SymName_84;

#line 1238 "error_util.m"
                                                    {
#line 1238 "error_util.m"
                                                      parse_tree__error_util__SymName_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1238 "error_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_84, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_29));
#line 1238 "error_util.m"
                                                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_84, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_30));
#line 1238 "error_util.m"
                                                    }
#line 1239 "error_util.m"
                                                    {
#line 1239 "error_util.m"
                                                      parse_tree__error_util__V_58_58 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_84);
                                                    }
#line 1239 "error_util.m"
                                                    {
#line 1239 "error_util.m"
                                                      parse_tree__error_util__NewWord_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_31, 0) = ((MR_Box) (parse_tree__error_util__V_58_58));
#line 1239 "error_util.m"
                                                    }
#line 1240 "error_util.m"
                                                    {
#line 1240 "error_util.m"
                                                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_31));
#line 1240 "error_util.m"
                                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1240 "error_util.m"
                                                    }
#line 1237 "error_util.m"
                                                  }
#line 1241 "error_util.m"
                                                else
#line 1242 "error_util.m"
                                                  {
#line 1242 "error_util.m"
                                                    {
#line 1242 "error_util.m"
                                                      mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "predicate \140parse_tree.error_util.convert_components_to_paragraphs_acc\'/5", (MR_String) "type is variable");
#line 1242 "error_util.m"
                                                      return;
                                                    }
#line 1242 "error_util.m"
                                                  }
#line 1242 "error_util.m"
                                                parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1235 "error_util.m"
                                              }
#line 1197 "error_util.m"
                                            else
#line 1197 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1195 "error_util.m"
                                                {
#line 1195 "error_util.m"
                                                  MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1196 "error_util.m"
                                                  {
#line 1196 "error_util.m"
                                                    parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                  }
#line 1196 "error_util.m"
                                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1195 "error_util.m"
                                                }
#line 1197 "error_util.m"
                                              else
#line 1198 "error_util.m"
                                                {
#line 1198 "error_util.m"
                                                  MR_String parse_tree__error_util__V_75_75;
#line 1198 "error_util.m"
                                                  MR_String parse_tree__error_util__WordsStr_78 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1199 "error_util.m"
                                                  {
#line 1199 "error_util.m"
                                                    parse_tree__error_util__V_75_75 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_78);
                                                  }
#line 1199 "error_util.m"
                                                  {
#line 1199 "error_util.m"
                                                    parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_75_75, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                  }
#line 1199 "error_util.m"
                                                  parse_tree__error_util__STATE_VARIABLE_Paras_47_47 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1198 "error_util.m"
                                                }
#line 1276 "error_util.m"
            /* direct tailcall eliminated */
#line 1276 "error_util.m"
            {
#line 1276 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1276 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1276 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_47_47;

#line 1276 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1276 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1276 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1276 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1276 "error_util.m"
            }
#line 1276 "error_util.m"
            continue;
#line 1193 "error_util.m"
          }
#line 1189 "error_util.m"
      }
#line 1189 "error_util.m"
      break;
#line 1189 "error_util.m"
    }
#line 1185 "error_util.m"
}

#line 1148 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1148 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1148 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1148 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1148 "error_util.m"
{
#line 1153 "error_util.m"
  {
#line 1153 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1153 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1153 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1152 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1153 "error_util.m"
    else
#line 1155 "error_util.m"
      {
#line 1153 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1153 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1153 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1153 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1153 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1153 "error_util.m"
          {
#line 1153 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1153 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1153 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1153 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1153 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1153 "error_util.m"
          }
#line 1155 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1154 "error_util.m"
          {
#line 1154 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1155 "error_util.m"
        else
#line 1156 "error_util.m"
          {
#line 1156 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1156 "error_util.m"
            {
#line 1156 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1156 "error_util.m"
            {
#line 1156 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1156 "error_util.m"
          }
#line 1155 "error_util.m"
      }
#line 1153 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1153 "error_util.m"
  }
#line 1148 "error_util.m"
}

#line 1135 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1135 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1135 "error_util.m"
{
#line 1137 "error_util.m"
  {
#line 1137 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1137 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1137 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1139 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "first";
#line 1137 "error_util.m"
    else
#line 1137 "error_util.m"
      {
#line 1140 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1137 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1141 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "second";
#line 1137 "error_util.m"
        else
#line 1137 "error_util.m"
          {
#line 1142 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1137 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1143 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_String) "third";
#line 1137 "error_util.m"
            else
#line 1145 "error_util.m"
              {
#line 1145 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 1145 "error_util.m"
                {
#line 1145 "error_util.m"
                  parse_tree__error_util__V_4_4 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                }
#line 1145 "error_util.m"
                {
#line 1145 "error_util.m"
                  return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "th");
                }
#line 1145 "error_util.m"
              }
#line 1137 "error_util.m"
          }
#line 1137 "error_util.m"
      }
#line 1137 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1137 "error_util.m"
  }
#line 1135 "error_util.m"
}

#line 1050 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1050 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1050 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1050 "error_util.m"
{
#line 1053 "error_util.m"
  {
#line 1053 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1053 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1053 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1053 "error_util.m"
    else
#line 1054 "error_util.m"
      {
#line 1054 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1054 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1054 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1055 "error_util.m"
        {
#line 1055 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1059 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1131 "error_util.m"
          {
#line 1132 "error_util.m"
            {
#line 1132 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
            }
#line 1131 "error_util.m"
          }
#line 1059 "error_util.m"
        else
#line 1059 "error_util.m"
          if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "error_util.m"
            if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1078 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1079 "error_util.m"
            else
#line 1372 "error_util.m"
              {
#line 1372 "error_util.m"
                MR_Char parse_tree__error_util__First_62;
#line 1372 "error_util.m"
                MR_String parse_tree__error_util__Rest_63;

#line 1367 "error_util.m"
                {
#line 1367 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_62, &parse_tree__error_util__Rest_63);
                }
#line 1367 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1368 "error_util.m"
                  {
#line 1368 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_62);
                  }
#line 1372 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1370 "error_util.m"
                  {
#line 1370 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_64;

#line 1370 "error_util.m"
                    {
#line 1370 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_62, &parse_tree__error_util__LoweredFirst_64);
                    }
#line 1371 "error_util.m"
                    {
#line 1371 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_64, parse_tree__error_util__Rest_63);
                    }
#line 1370 "error_util.m"
                  }
#line 1372 "error_util.m"
                else
#line 1373 "error_util.m"
                  parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1372 "error_util.m"
              }
#line 1059 "error_util.m"
          else
#line 1059 "error_util.m"
            if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1124 "error_util.m"
              {
#line 1125 "error_util.m"
                {
#line 1125 "error_util.m"
                  return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                }
#line 1124 "error_util.m"
              }
#line 1059 "error_util.m"
            else
#line 1059 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1063 "error_util.m"
                {
#line 1063 "error_util.m"
                  MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1064 "error_util.m"
                  {
#line 1064 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1063 "error_util.m"
                }
#line 1059 "error_util.m"
              else
#line 1059 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1066 "error_util.m"
                  {
#line 1066 "error_util.m"
                    MR_String parse_tree__error_util__V_39_39;
#line 1066 "error_util.m"
                    MR_String parse_tree__error_util__Word_42 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));
#line 1066 "error_util.m"
                    MR_String parse_tree__error_util__V_74_74;

#line 1546 "error_util.m"
                    {
#line 1546 "error_util.m"
                      parse_tree__error_util__V_74_74 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_42, (MR_String) "\'");
                    }
#line 1546 "error_util.m"
                    {
#line 1546 "error_util.m"
                      parse_tree__error_util__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_74_74);
                    }
#line 1067 "error_util.m"
                    {
#line 1067 "error_util.m"
                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                    }
#line 1066 "error_util.m"
                  }
#line 1059 "error_util.m"
                else
#line 1059 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1106 "error_util.m"
                    {
#line 1106 "error_util.m"
                      MR_String parse_tree__error_util__Decl_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1106 "error_util.m"
                      MR_String parse_tree__error_util__V_35_35;
#line 1106 "error_util.m"
                      MR_String parse_tree__error_util__Word_48;
#line 1106 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;

#line 1107 "error_util.m"
                      {
#line 1107 "error_util.m"
                        parse_tree__error_util__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_19);
                      }
#line 1546 "error_util.m"
                      {
#line 1546 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_35_35, (MR_String) "\'");
                      }
#line 1546 "error_util.m"
                      {
#line 1546 "error_util.m"
                        parse_tree__error_util__Word_48 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_58_58);
                      }
#line 1108 "error_util.m"
                      {
#line 1108 "error_util.m"
                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                      }
#line 1106 "error_util.m"
                    }
#line 1059 "error_util.m"
                  else
#line 1059 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1069 "error_util.m"
                      {
#line 1069 "error_util.m"
                        MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1069 "error_util.m"
                        MR_String parse_tree__error_util__V_38_38;

#line 1070 "error_util.m"
                        {
#line 1070 "error_util.m"
                          parse_tree__error_util__V_38_38 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                        }
#line 1070 "error_util.m"
                        {
#line 1070 "error_util.m"
                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                        }
#line 1069 "error_util.m"
                      }
#line 1059 "error_util.m"
                    else
#line 1059 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1127 "error_util.m"
                        {
#line 1129 "error_util.m"
                          {
#line 1129 "error_util.m"
                            return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                          }
#line 1127 "error_util.m"
                        }
#line 1059 "error_util.m"
                      else
#line 1059 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1072 "error_util.m"
                          {
#line 1072 "error_util.m"
                            MR_String parse_tree__error_util__V_37_37;
#line 1072 "error_util.m"
                            MR_Integer parse_tree__error_util__Int_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1138 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 1);
#line 1137 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1139 "error_util.m"
                              parse_tree__error_util__V_37_37 = (MR_String) "first";
#line 1137 "error_util.m"
                            else
#line 1137 "error_util.m"
                              {
#line 1140 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 2);
#line 1137 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 1141 "error_util.m"
                                  parse_tree__error_util__V_37_37 = (MR_String) "second";
#line 1137 "error_util.m"
                                else
#line 1137 "error_util.m"
                                  {
#line 1142 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__Int_43 == (MR_Integer) 3);
#line 1137 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 1143 "error_util.m"
                                      parse_tree__error_util__V_37_37 = (MR_String) "third";
#line 1137 "error_util.m"
                                    else
#line 1145 "error_util.m"
                                      {
#line 1145 "error_util.m"
                                        MR_String parse_tree__error_util__V_66_66;

#line 1145 "error_util.m"
                                        {
#line 1145 "error_util.m"
                                          parse_tree__error_util__V_66_66 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_43);
                                        }
#line 1145 "error_util.m"
                                        {
#line 1145 "error_util.m"
                                          parse_tree__error_util__V_37_37 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_66_66, (MR_String) "th");
                                        }
#line 1145 "error_util.m"
                                      }
#line 1137 "error_util.m"
                                  }
#line 1137 "error_util.m"
                              }
#line 1073 "error_util.m"
                            {
#line 1073 "error_util.m"
                              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_37_37, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                            }
#line 1072 "error_util.m"
                          }
#line 1059 "error_util.m"
                        else
#line 1059 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1098 "error_util.m"
                            {
#line 1098 "error_util.m"
                              MR_Word parse_tree__error_util__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1098 "error_util.m"
                              MR_String parse_tree__error_util__Word_46;

#line 1543 "error_util.m"
                              if ((parse_tree__error_util__PredOrFunc_17 == (MR_Integer) 1))
#line 1544 "error_util.m"
                                parse_tree__error_util__Word_46 = (MR_String) "function";
#line 1543 "error_util.m"
                              else
#line 1543 "error_util.m"
                                parse_tree__error_util__Word_46 = (MR_String) "predicate";
#line 1100 "error_util.m"
                              {
#line 1100 "error_util.m"
                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                              }
#line 1098 "error_util.m"
                            }
#line 1059 "error_util.m"
                          else
#line 1059 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1110 "error_util.m"
                              {
#line 1110 "error_util.m"
                                MR_String parse_tree__error_util__PragmaName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1110 "error_util.m"
                                MR_String parse_tree__error_util__V_33_33;
#line 1110 "error_util.m"
                                MR_String parse_tree__error_util__Word_49;
#line 1110 "error_util.m"
                                MR_String parse_tree__error_util__V_70_70;

#line 1111 "error_util.m"
                                {
#line 1111 "error_util.m"
                                  parse_tree__error_util__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_20);
                                }
#line 1546 "error_util.m"
                                {
#line 1546 "error_util.m"
                                  parse_tree__error_util__V_70_70 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_33_33, (MR_String) "\'");
                                }
#line 1546 "error_util.m"
                                {
#line 1546 "error_util.m"
                                  parse_tree__error_util__Word_49 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_70_70);
                                }
#line 1112 "error_util.m"
                                {
#line 1112 "error_util.m"
                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                }
#line 1110 "error_util.m"
                              }
#line 1059 "error_util.m"
                            else
#line 1059 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1084 "error_util.m"
                                {
#line 1084 "error_util.m"
                                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1085 "error_util.m"
                                  {
#line 1085 "error_util.m"
                                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                                  }
#line 1084 "error_util.m"
                                }
#line 1059 "error_util.m"
                              else
#line 1059 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1102 "error_util.m"
                                  {
#line 1102 "error_util.m"
                                    MR_Word parse_tree__error_util__SimpleCallId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1102 "error_util.m"
                                    MR_String parse_tree__error_util__Word_47;

#line 1103 "error_util.m"
                                    {
#line 1103 "error_util.m"
                                      parse_tree__error_util__Word_47 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_18);
                                    }
#line 1104 "error_util.m"
                                    {
#line 1104 "error_util.m"
                                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                    }
#line 1102 "error_util.m"
                                  }
#line 1059 "error_util.m"
                                else
#line 1059 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1087 "error_util.m"
                                    {
#line 1087 "error_util.m"
                                      MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1088 "error_util.m"
                                      {
#line 1088 "error_util.m"
                                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                      }
#line 1087 "error_util.m"
                                    }
#line 1059 "error_util.m"
                                  else
#line 1059 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1090 "error_util.m"
                                      {
#line 1090 "error_util.m"
                                        MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1090 "error_util.m"
                                        MR_String parse_tree__error_util__Word_44;
#line 1090 "error_util.m"
                                        MR_String parse_tree__error_util__V_77_77;
#line 1090 "error_util.m"
                                        MR_String parse_tree__error_util__V_80_80;

#line 1379 "error_util.m"
                                        {
#line 1379 "error_util.m"
                                          parse_tree__error_util__V_77_77 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                                        }
#line 1546 "error_util.m"
                                        {
#line 1546 "error_util.m"
                                          parse_tree__error_util__V_80_80 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_77_77, (MR_String) "\'");
                                        }
#line 1546 "error_util.m"
                                        {
#line 1546 "error_util.m"
                                          parse_tree__error_util__Word_44 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_80_80);
                                        }
#line 1092 "error_util.m"
                                        {
#line 1092 "error_util.m"
                                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_44, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                        }
#line 1090 "error_util.m"
                                      }
#line 1059 "error_util.m"
                                    else
#line 1059 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1094 "error_util.m"
                                        {
#line 1094 "error_util.m"
                                          MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__Word_45;
#line 1094 "error_util.m"
                                          MR_Word parse_tree__error_util__SymName_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1094 "error_util.m"
                                          MR_Integer parse_tree__error_util__Arity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__V_84_84;
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__V_85_85;
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__V_86_86;
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__V_88_88;
#line 1094 "error_util.m"
                                          MR_String parse_tree__error_util__V_91_91;

#line 1384 "error_util.m"
                                          {
#line 1384 "error_util.m"
                                            parse_tree__error_util__V_85_85 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_82);
                                          }
#line 1546 "error_util.m"
                                          {
#line 1546 "error_util.m"
                                            parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_85_85, (MR_String) "\'");
                                          }
#line 1546 "error_util.m"
                                          {
#line 1546 "error_util.m"
                                            parse_tree__error_util__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_91_91);
                                          }
#line 1384 "error_util.m"
                                          {
#line 1384 "error_util.m"
                                            parse_tree__error_util__V_88_88 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_83);
                                          }
#line 1384 "error_util.m"
                                          {
#line 1384 "error_util.m"
                                            parse_tree__error_util__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_88_88);
                                          }
#line 1384 "error_util.m"
                                          {
#line 1384 "error_util.m"
                                            parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_84_84, parse_tree__error_util__V_86_86);
                                          }
#line 1096 "error_util.m"
                                          {
#line 1096 "error_util.m"
                                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                          }
#line 1094 "error_util.m"
                                        }
#line 1059 "error_util.m"
                                      else
#line 1059 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1114 "error_util.m"
                                          {
#line 1114 "error_util.m"
                                            MR_Word parse_tree__error_util__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1120 "error_util.m"
                                            MR_Word parse_tree__error_util__TypeCtor_22;

#line 1115 "error_util.m"
                                            {
#line 1115 "error_util.m"
                                              parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_21, &parse_tree__error_util__TypeCtor_22);
                                            }
#line 1120 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1116 "error_util.m"
                                              {
#line 1116 "error_util.m"
                                                MR_Word parse_tree__error_util__TypeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 0)));
#line 1116 "error_util.m"
                                                MR_Integer parse_tree__error_util__TypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 1)));
#line 1116 "error_util.m"
                                                MR_String parse_tree__error_util__Word_50;
#line 1116 "error_util.m"
                                                MR_Word parse_tree__error_util__SymName_51;

#line 1117 "error_util.m"
                                                {
#line 1117 "error_util.m"
                                                  parse_tree__error_util__SymName_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_51, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_23));
#line 1117 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_51, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_24));
#line 1117 "error_util.m"
                                                }
#line 1118 "error_util.m"
                                                {
#line 1118 "error_util.m"
                                                  parse_tree__error_util__Word_50 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_51);
                                                }
#line 1119 "error_util.m"
                                                {
#line 1119 "error_util.m"
                                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                                }
#line 1116 "error_util.m"
                                              }
#line 1120 "error_util.m"
                                            else
#line 1121 "error_util.m"
                                              {
#line 1121 "error_util.m"
                                                {
#line 1121 "error_util.m"
                                                  mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "function \140parse_tree.error_util.error_pieces_to_string_2\'/2", (MR_String) "type is variable");
                                                }
#line 1121 "error_util.m"
                                              }
#line 1114 "error_util.m"
                                          }
#line 1059 "error_util.m"
                                        else
#line 1059 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1057 "error_util.m"
                                            {
#line 1057 "error_util.m"
                                              MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1058 "error_util.m"
                                              {
#line 1058 "error_util.m"
                                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                              }
#line 1057 "error_util.m"
                                            }
#line 1059 "error_util.m"
                                          else
#line 1060 "error_util.m"
                                            {
#line 1060 "error_util.m"
                                              MR_String parse_tree__error_util__V_40_40;
#line 1060 "error_util.m"
                                              MR_String parse_tree__error_util__Words_41 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1060 "error_util.m"
                                              MR_String parse_tree__error_util__V_95_95;

#line 1546 "error_util.m"
                                              {
#line 1546 "error_util.m"
                                                parse_tree__error_util__V_95_95 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Words_41, (MR_String) "\'");
                                              }
#line 1546 "error_util.m"
                                              {
#line 1546 "error_util.m"
                                                parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_95_95);
                                              }
#line 1061 "error_util.m"
                                              {
#line 1061 "error_util.m"
                                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                              }
#line 1060 "error_util.m"
                                            }
#line 1054 "error_util.m"
      }
#line 1053 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1053 "error_util.m"
  }
#line 1050 "error_util.m"
}

#line 1039 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1039 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1039 "error_util.m"
{
#line 1041 "error_util.m"
  while (MR_TRUE)
#line 1041 "error_util.m"
    {
#line 1041 "error_util.m"
      /* tailcall optimized into a loop */
#line 1041 "error_util.m"
      {
#line 1041 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1041 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "error_util.m"
          {
#line 1041 "error_util.m"
          }
#line 1041 "error_util.m"
        else
#line 1042 "error_util.m"
          {
#line 1042 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1042 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1043 "error_util.m"
            {
#line 1043 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1044 "error_util.m"
            {
#line 1044 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1045 "error_util.m"
            /* direct tailcall eliminated */
#line 1045 "error_util.m"
            {
#line 1045 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1045 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1045 "error_util.m"
            }
#line 1045 "error_util.m"
            continue;
#line 1042 "error_util.m"
          }
#line 1041 "error_util.m"
      }
#line 1041 "error_util.m"
      break;
#line 1041 "error_util.m"
    }
#line 1039 "error_util.m"
}

#line 1012 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1012 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1012 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1012 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1012 "error_util.m"
{
#line 1015 "error_util.m"
  while (MR_TRUE)
#line 1015 "error_util.m"
    {
#line 1015 "error_util.m"
      /* tailcall optimized into a loop */
#line 1015 "error_util.m"
      {
#line 1015 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1015 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "error_util.m"
          {
#line 1015 "error_util.m"
          }
#line 1015 "error_util.m"
        else
#line 1016 "error_util.m"
          {
#line 1016 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1016 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1016 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1016 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1016 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1020 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "error_util.m"
              {
#line 1021 "error_util.m"
              }
#line 1020 "error_util.m"
            else
#line 1018 "error_util.m"
              {
#line 1018 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1019 "error_util.m"
                {
#line 1019 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1018 "error_util.m"
              }
#line 1023 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1023 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1024 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1024 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1025 "error_util.m"
            {
#line 1025 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1026 "error_util.m"
            {
#line 1026 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1032 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "error_util.m"
              {
#line 1033 "error_util.m"
                {
#line 1033 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1032 "error_util.m"
              }
#line 1032 "error_util.m"
            else
#line 1034 "error_util.m"
              {
#line 1034 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1034 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1035 "error_util.m"
                {
#line 1035 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1036 "error_util.m"
                {
#line 1036 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1037 "error_util.m"
                {
#line 1037 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1034 "error_util.m"
              }
#line 1028 "error_util.m"
            /* direct tailcall eliminated */
#line 1028 "error_util.m"
            {
#line 1028 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1028 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1028 "error_util.m"
            }
#line 1028 "error_util.m"
            continue;
#line 1016 "error_util.m"
          }
#line 1015 "error_util.m"
      }
#line 1015 "error_util.m"
      break;
#line 1015 "error_util.m"
    }
#line 1012 "error_util.m"
}

#line 964 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 964 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 964 "error_util.m"
{
#line 969 "error_util.m"
  {
#line 969 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_9_43;
#line 969 "error_util.m"
    MR_Integer parse_tree__error_util__ContextLength_21;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__Paragraphs_22;
#line 969 "error_util.m"
    MR_Integer parse_tree__error_util__FirstIndent_23;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__MaybeRemain_26;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__Lines_27;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__ParasCord_39;
#line 969 "error_util.m"
    MR_Word parse_tree__error_util__V_42_42;

#line 990 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "error_util.m"
      parse_tree__error_util__ContextLength_21 = (MR_Integer) 0;
#line 990 "error_util.m"
    else
#line 978 "error_util.m"
      {
#line 978 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, (MR_Integer) 0)));
#line 978 "error_util.m"
        MR_String parse_tree__error_util__FileName_15;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_16;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__FileNameLength_17;
#line 978 "error_util.m"
        MR_String parse_tree__error_util__LineNumberStr_18;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength0_19;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength_20;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__V_31_31;
#line 978 "error_util.m"
        MR_Integer parse_tree__error_util__V_32_32;

#line 979 "error_util.m"
        {
#line 979 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__FileName_15);
        }
#line 980 "error_util.m"
        {
#line 980 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__LineNumber_16);
        }
#line 981 "error_util.m"
        {
#line 981 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_15, &parse_tree__error_util__FileNameLength_17);
        }
#line 982 "error_util.m"
        {
#line 982 "error_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_16, &parse_tree__error_util__LineNumberStr_18);
        }
#line 983 "error_util.m"
        {
#line 983 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_18, &parse_tree__error_util__LineNumberStrLength0_19);
        }
#line 984 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_19 < (MR_Integer) 3);
#line 986 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 985 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = (MR_Integer) 3;
#line 986 "error_util.m"
        else
#line 987 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = parse_tree__error_util__LineNumberStrLength0_19;
#line 989 "error_util.m"
        parse_tree__error_util__V_32_32 = (parse_tree__error_util__FileNameLength_17 + (MR_Integer) 1);
#line 989 "error_util.m"
        parse_tree__error_util__V_31_31 = (parse_tree__error_util__V_32_32 + parse_tree__error_util__LineNumberStrLength_20);
#line 989 "error_util.m"
        parse_tree__error_util__ContextLength_21 = (parse_tree__error_util__V_31_31 + (MR_Integer) 2);
#line 978 "error_util.m"
      }
#line 13417 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_9_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1176 "error_util.m"
    {
#line 1176 "error_util.m"
      parse_tree__error_util__V_42_42 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_43);
    }
#line 1175 "error_util.m"
    {
#line 1175 "error_util.m"
      parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_42_42, &parse_tree__error_util__ParasCord_39);
    }
#line 1177 "error_util.m"
    {
#line 1177 "error_util.m"
      parse_tree__error_util__Paragraphs_22 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_43, parse_tree__error_util__ParasCord_39);
    }
#line 995 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_8 == (MR_Integer) 0);
#line 995 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 995 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 0;
#line 995 "error_util.m"
    else
#line 995 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 1;
#line 1000 "error_util.m"
    if ((parse_tree__error_util__MaybeMaxWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "error_util.m"
      parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1000 "error_util.m"
    else
#line 997 "error_util.m"
      {
#line 997 "error_util.m"
        MR_Integer parse_tree__error_util__MaxWidth_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_11, (MR_Integer) 0)));
#line 997 "error_util.m"
        MR_Integer parse_tree__error_util__Remain_25;
#line 997 "error_util.m"
        MR_Integer parse_tree__error_util__V_35_35 = (parse_tree__error_util__ContextLength_21 + parse_tree__error_util__FixedIndent_10);

#line 998 "error_util.m"
        parse_tree__error_util__Remain_25 = (parse_tree__error_util__MaxWidth_24 - parse_tree__error_util__V_35_35);
#line 999 "error_util.m"
        {
#line 999 "error_util.m"
          parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_26, 0) = ((MR_Box) (parse_tree__error_util__Remain_25));
#line 999 "error_util.m"
        }
#line 997 "error_util.m"
      }
#line 1004 "error_util.m"
    {
#line 1004 "error_util.m"
      parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__FirstIndent_23, parse_tree__error_util__Paragraphs_22, parse_tree__error_util__MaybeRemain_26, &parse_tree__error_util__Lines_27);
    }
#line 1006 "error_util.m"
    {
#line 1006 "error_util.m"
      parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_27, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10);
#line 1006 "error_util.m"
      return;
    }
#line 969 "error_util.m"
  }
#line 964 "error_util.m"
}

#line 809 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 809 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 809 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 809 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 809 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8)
#line 809 "error_util.m"
{
#line 815 "error_util.m"
  while (MR_TRUE)
#line 815 "error_util.m"
    {
#line 815 "error_util.m"
      /* tailcall optimized into a loop */
#line 815 "error_util.m"
      {
#line 815 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 815 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "error_util.m"
          {
#line 815 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 815 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 815 "error_util.m"
          }
#line 815 "error_util.m"
        else
#line 817 "error_util.m"
          {
#line 817 "error_util.m"
            MR_Word parse_tree__error_util__Component_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 817 "error_util.m"
            MR_Word parse_tree__error_util__Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 817 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 817 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 826 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 0))))
#line 819 "error_util.m"
              {
#line 819 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_23, (MR_Integer) 0)));
#line 819 "error_util.m"
                MR_Word parse_tree__error_util__MaybeMaxWidth_32;

#line 820 "error_util.m"
                {
#line 820 "error_util.m"
                  libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_32);
                }
#line 822 "error_util.m"
                {
#line 822 "error_util.m"
                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_32, parse_tree__error_util__ComponentPieces_31);
                }
#line 824 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 825 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 819 "error_util.m"
              }
#line 826 "error_util.m"
            else
#line 826 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 1))))
#line 827 "error_util.m"
                {
#line 827 "error_util.m"
                  MR_Word parse_tree__error_util__Option_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 827 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 827 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 827 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_36;

#line 828 "error_util.m"
                  {
#line 828 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_33, &parse_tree__error_util__OptionValue_36);
                  }
#line 829 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_36 == parse_tree__error_util__RequiredValue_34);
#line 832 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 830 "error_util.m"
                    {
#line 830 "error_util.m"
                      parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__EmbeddedComponents_35, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_70_70, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71);
                    }
#line 832 "error_util.m"
                  else
#line 833 "error_util.m"
                    {
#line 833 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 833 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 833 "error_util.m"
                    }
#line 827 "error_util.m"
                }
#line 826 "error_util.m"
              else
#line 826 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 2))))
#line 836 "error_util.m"
                  {
#line 836 "error_util.m"
                    MR_Word parse_tree__error_util__VerboseErrors_37;
#line 836 "error_util.m"
                    MR_Word parse_tree__error_util__ComponentPieces_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_23, (MR_Integer) 0)));

#line 837 "error_util.m"
                    {
#line 837 "error_util.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_37);
                    }
#line 846 "error_util.m"
                    if ((parse_tree__error_util__VerboseErrors_37 == (MR_Integer) 0))
#line 847 "error_util.m"
                      {
#line 848 "error_util.m"
                        {
#line 848 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 848 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 848 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 847 "error_util.m"
                      }
#line 846 "error_util.m"
                    else
#line 839 "error_util.m"
                      {
#line 839 "error_util.m"
                        MR_Word parse_tree__error_util__MaybeMaxWidth_75;

#line 840 "error_util.m"
                        {
#line 840 "error_util.m"
                          libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_75);
                        }
#line 842 "error_util.m"
                        {
#line 842 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_75, parse_tree__error_util__ComponentPieces_77);
                        }
#line 844 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 845 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 839 "error_util.m"
                      }
#line 836 "error_util.m"
                  }
#line 826 "error_util.m"
                else
#line 826 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 868 "error_util.m"
                    {
#line 868 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 868 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_40 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2));
#line 13675 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13677 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69;

#line 13680 "parse_tree.error_util.c"
                      {
#line 13682 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_81), parse_tree__error_util__Anything_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69);
                      }
#line 870 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 871 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 868 "error_util.m"
                    }
#line 826 "error_util.m"
                  else
#line 851 "error_util.m"
                    {
#line 851 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 851 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2)));
#line 851 "error_util.m"
                      MR_Word parse_tree__error_util__MaybeMaxWidth_79;
#line 851 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_80;

#line 852 "error_util.m"
                      {
#line 852 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_80);
                      }
#line 853 "error_util.m"
                      {
#line 853 "error_util.m"
                        libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_79);
                      }
#line 859 "error_util.m"
                      if ((parse_tree__error_util__VerboseErrors_80 == (MR_Integer) 0))
#line 860 "error_util.m"
                        {
#line 861 "error_util.m"
                          {
#line 861 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__NonVerbosePieces_39);
                          }
#line 863 "error_util.m"
                          {
#line 863 "error_util.m"
                            libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                          }
#line 860 "error_util.m"
                        }
#line 859 "error_util.m"
                      else
#line 857 "error_util.m"
                        {
#line 857 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__VerbosePieces_38);
                        }
#line 865 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 866 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 851 "error_util.m"
                    }
#line 873 "error_util.m"
            /* direct tailcall eliminated */
#line 873 "error_util.m"
            {
#line 873 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_24;
#line 873 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 873 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 873 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 873 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 873 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 873 "error_util.m"
            }
#line 873 "error_util.m"
            continue;
#line 817 "error_util.m"
          }
#line 815 "error_util.m"
      }
#line 815 "error_util.m"
      break;
#line 815 "error_util.m"
    }
#line 809 "error_util.m"
}

#line 781 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 781 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5)
#line 781 "error_util.m"
{
#line 786 "error_util.m"
  while (MR_TRUE)
#line 786 "error_util.m"
    {
#line 786 "error_util.m"
      /* tailcall optimized into a loop */
#line 786 "error_util.m"
      {
#line 786 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 786 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 786 "error_util.m"
        else
#line 787 "error_util.m"
          {
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__Msg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__Components_23;
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_24;
#line 787 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_26;
#line 787 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_27;
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_33_33;
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 787 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 13828 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_16)) == (MR_mktag((MR_Integer) 1))))
#line 13830 "parse_tree.error_util.c"
              {
#line 13832 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_25;

#line 794 "error_util.m"
                parse_tree__error_util__MaybeContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 0)));
#line 794 "error_util.m"
                parse_tree__error_util__TreatAsFirst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 794 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 2)));
#line 794 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 3)));
#line 800 "error_util.m"
                if ((parse_tree__error_util__TreatAsFirst_25 == (MR_Integer) 1))
#line 801 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 800 "error_util.m"
                else
#line 799 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = (MR_Integer) 0;
#line 13851 "parse_tree.error_util.c"
              }
#line 13853 "parse_tree.error_util.c"
            else
#line 13855 "parse_tree.error_util.c"
              {
#line 13857 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 0)));

#line 789 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 790 "error_util.m"
                {
#line 790 "error_util.m"
                  parse_tree__error_util__MaybeContext_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 790 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_24, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_22));
#line 790 "error_util.m"
                }
#line 792 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = (MR_Integer) 0;
#line 801 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 13874 "parse_tree.error_util.c"
              }
#line 804 "error_util.m"
            parse_tree__error_util__Indent_27 = (parse_tree__error_util__ExtraIndentLevel_26 * (MR_Integer) 2);
#line 805 "error_util.m"
            {
#line 805 "error_util.m"
              parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__Components_23, parse_tree__error_util__MaybeContext_24, parse_tree__error_util__Indent_27, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_33_33, &parse_tree__error_util__STATE_VARIABLE_First_35_35, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36);
            }
#line 807 "error_util.m"
            /* direct tailcall eliminated */
#line 807 "error_util.m"
            {
#line 807 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_17;
#line 807 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 807 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 807 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 807 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 807 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 807 "error_util.m"
            }
#line 807 "error_util.m"
            continue;
#line 787 "error_util.m"
          }
#line 786 "error_util.m"
      }
#line 786 "error_util.m"
      break;
#line 786 "error_util.m"
    }
#line 781 "error_util.m"
}

#line 734 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 734 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 734 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 734 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 734 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 734 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 734 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23)
#line 734 "error_util.m"
{
#line 737 "error_util.m"
  {
#line 737 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__Severity_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_17;
#line 737 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_18;
#line 738 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));

#line 739 "error_util.m"
    {
#line 739 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_7_p_0(parse_tree__error_util__Msgs_16, parse_tree__error_util__Globals_9, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_17);
    }
#line 741 "error_util.m"
    {
#line 741 "error_util.m"
      parse_tree__error_util__MaybeActual_18 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_9, parse_tree__error_util__Severity_14);
    }
#line 752 "error_util.m"
    if ((parse_tree__error_util__PrintedSome_17 == (MR_Integer) 1))
#line 743 "error_util.m"
      {
#line 743 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 743 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 743 "error_util.m"
      }
#line 752 "error_util.m"
    else
#line 767 "error_util.m"
      if ((parse_tree__error_util__MaybeActual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 768 "error_util.m"
        {
#line 769 "error_util.m"
          {
#line 769 "error_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/8", (MR_String) "MaybeActual is no");
#line 769 "error_util.m"
            return;
          }
#line 768 "error_util.m"
        }
#line 767 "error_util.m"
      else
#line 755 "error_util.m"
        {
#line 755 "error_util.m"
          MR_Word parse_tree__error_util__Actual_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_18, (MR_Integer) 0)));

#line 760 "error_util.m"
          if ((parse_tree__error_util__Actual_19 == (MR_Integer) 0))
#line 757 "error_util.m"
            {
#line 758 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22 + (MR_Integer) 1);
#line 759 "error_util.m"
              {
#line 759 "error_util.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 759 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 757 "error_util.m"
            }
#line 760 "error_util.m"
          else
#line 760 "error_util.m"
            if ((parse_tree__error_util__Actual_19 == (MR_Integer) 2))
#line 765 "error_util.m"
              {
#line 765 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 765 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 765 "error_util.m"
              }
#line 760 "error_util.m"
            else
#line 761 "error_util.m"
              {
#line 762 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20 + (MR_Integer) 1);
#line 763 "error_util.m"
                {
#line 763 "error_util.m"
                  libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_9);
                }
#line 763 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 761 "error_util.m"
              }
#line 755 "error_util.m"
        }
#line 737 "error_util.m"
  }
#line 734 "error_util.m"
}

#line 694 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 694 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 694 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 694 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 694 "error_util.m"
{
#line 697 "error_util.m"
  {
#line 697 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 697 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 698 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 698 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 699 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 699 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 700 "error_util.m"
    {
#line 700 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 701 "error_util.m"
    {
#line 701 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 702 "error_util.m"
    {
#line 702 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 703 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 705 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 704 "error_util.m"
      {
#line 704 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 704 "error_util.m"
        return;
      }
#line 705 "error_util.m"
    else
#line 706 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 697 "error_util.m"
  }
#line 694 "error_util.m"
}

#line 608 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 608 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 608 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 608 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 608 "error_util.m"
{
#line 611 "error_util.m"
  {
#line 611 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 611 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 611 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 611 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 629 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 629 "error_util.m"
      {
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 632 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 632 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 632 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 629 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "error_util.m"
        else
#line 633 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 629 "error_util.m"
      }
#line 629 "error_util.m"
    else
#line 629 "error_util.m"
      {
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 630 "error_util.m"
        {
#line 630 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 630 "error_util.m"
        }
#line 629 "error_util.m"
      }
#line 629 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 629 "error_util.m"
      {
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 632 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 632 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 632 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 629 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 629 "error_util.m"
        else
#line 633 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 629 "error_util.m"
      }
#line 629 "error_util.m"
    else
#line 629 "error_util.m"
      {
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 629 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 630 "error_util.m"
        {
#line 630 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 630 "error_util.m"
        }
#line 629 "error_util.m"
      }
#line 614 "error_util.m"
    {
#line 614 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 618 "error_util.m"
    if ((parse_tree__error_util__ContextResult_9 == (MR_Integer) 0))
#line 617 "error_util.m"
      {
#line 617 "error_util.m"
        parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 617 "error_util.m"
        return;
      }
#line 618 "error_util.m"
    else
#line 622 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 611 "error_util.m"
  }
#line 608 "error_util.m"
}

#line 594 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 594 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 594 "error_util.m"
{
#line 596 "error_util.m"
  {
#line 596 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 596 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 596 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "error_util.m"
    else
#line 597 "error_util.m"
      {
#line 597 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 598 "error_util.m"
        {
#line 598 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 14270 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 14272 "parse_tree.error_util.c"
          {
#line 14274 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 632 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 632 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 632 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 14283 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 14287 "parse_tree.error_util.c"
            else
#line 14289 "parse_tree.error_util.c"
              {
#line 14291 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 602 "error_util.m"
                {
#line 602 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 602 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 602 "error_util.m"
                }
#line 14304 "parse_tree.error_util.c"
              }
#line 14306 "parse_tree.error_util.c"
          }
#line 14308 "parse_tree.error_util.c"
        else
#line 14310 "parse_tree.error_util.c"
          {
#line 14312 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 629 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 602 "error_util.m"
            {
#line 602 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 602 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 602 "error_util.m"
            }
#line 14327 "parse_tree.error_util.c"
          }
#line 597 "error_util.m"
      }
#line 596 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 596 "error_util.m"
  }
#line 594 "error_util.m"
}

#line 533 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 533 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 533 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 533 "error_util.m"
{
#line 536 "error_util.m"
  while (MR_TRUE)
#line 536 "error_util.m"
    {
#line 536 "error_util.m"
      /* tailcall optimized into a loop */
#line 536 "error_util.m"
      {
#line 536 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 536 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 536 "error_util.m"
        else
#line 537 "error_util.m"
          {
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 537 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 538 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 538 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 539 "error_util.m"
            {
#line 539 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 543 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 541 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 543 "error_util.m"
            else
#line 543 "error_util.m"
              {
#line 543 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 543 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 543 "error_util.m"
                else
#line 547 "error_util.m"
                  {
#line 547 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 547 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 549 "error_util.m"
                    {
#line 549 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 549 "error_util.m"
                    {
#line 549 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 549 "error_util.m"
                    }
#line 547 "error_util.m"
                  }
#line 543 "error_util.m"
              }
#line 551 "error_util.m"
            /* direct tailcall eliminated */
#line 551 "error_util.m"
            {
#line 551 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 551 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 551 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 551 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 551 "error_util.m"
            }
#line 551 "error_util.m"
            continue;
#line 537 "error_util.m"
          }
#line 536 "error_util.m"
      }
#line 536 "error_util.m"
      break;
#line 536 "error_util.m"
    }
#line 533 "error_util.m"
}

#line 461 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 461 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 461 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 461 "error_util.m"
{
#line 1569 "error_util.m"
  {
#line 1569 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1569 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1569 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1570 "error_util.m"
    {
#line 1570 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1571 "error_util.m"
    {
#line 1571 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1572 "error_util.m"
    {
#line 1572 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1573 "error_util.m"
    {
#line 1573 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1574 "error_util.m"
    {
#line 1574 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1574 "error_util.m"
    {
#line 1574 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1575 "error_util.m"
    {
#line 1575 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1577 "error_util.m"
    {
#line 1577 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1577 "error_util.m"
      return;
    }
#line 1569 "error_util.m"
  }
#line 461 "error_util.m"
}

#line 453 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 453 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 453 "error_util.m"
{
#line 1563 "error_util.m"
  {
#line 1563 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1563 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_23;
#line 1563 "error_util.m"
    MR_Word parse_tree__error_util__V_26_26;

#line 1564 "error_util.m"
    {
#line 1564 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 952 "error_util.m"
    {
#line 952 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_23);
    }
#line 954 "error_util.m"
    {
#line 954 "error_util.m"
      parse_tree__error_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_26_26, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 954 "error_util.m"
    }
#line 954 "error_util.m"
    {
#line 954 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_26_26, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_23, parse_tree__error_util__Components_10);
#line 954 "error_util.m"
      return;
    }
#line 1563 "error_util.m"
  }
#line 453 "error_util.m"
}

#line 448 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 448 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 448 "error_util.m"
{
#line 1548 "error_util.m"
  {
#line 1548 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1548 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1548 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1557 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1557 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1551 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1549 "error_util.m"
    {
#line 1549 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1551 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1551 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1551 "error_util.m"
      {
#line 1551 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1551 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1552 "error_util.m"
        {
#line 1552 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1551 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1551 "error_util.m"
          {
#line 1553 "error_util.m"
            {
#line 1553 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1553 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1551 "error_util.m"
          }
#line 1551 "error_util.m"
      }
#line 1557 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1555 "error_util.m"
      {
#line 1555 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1555 "error_util.m"
        {
#line 1555 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1555 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1555 "error_util.m"
        }
#line 1556 "error_util.m"
        {
#line 1556 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1555 "error_util.m"
      }
#line 1557 "error_util.m"
    else
#line 1558 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1548 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1548 "error_util.m"
  }
#line 448 "error_util.m"
}

#line 443 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 443 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 443 "error_util.m"
{
#line 1546 "error_util.m"
  {
#line 1546 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1546 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1546 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1546 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1546 "error_util.m"
  }
#line 443 "error_util.m"
}

#line 439 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 439 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 439 "error_util.m"
{
#line 1543 "error_util.m"
  {
#line 1543 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1543 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1543 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 1))
#line 1544 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1543 "error_util.m"
    else
#line 1543 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1543 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1543 "error_util.m"
  }
#line 439 "error_util.m"
}

#line 437 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 437 "error_util.m"
{
#line 1536 "error_util.m"
  {
#line 1536 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1536 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1536 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1536 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1536 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1536 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1536 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1536 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1536 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1536 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1538 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1538 "error_util.m"
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1537 "error_util.m"
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1537 "error_util.m"
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1537 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1537 "error_util.m"
    }
#line 1537 "error_util.m"
    {
#line 1537 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1536 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1536 "error_util.m"
  }
#line 437 "error_util.m"
}

#line 435 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 435 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 435 "error_util.m"
{
#line 1540 "error_util.m"
  {
#line 1540 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1540 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1540 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1540 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1540 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1541 "error_util.m"
    {
#line 1541 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1541 "error_util.m"
    {
#line 1541 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1541 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1541 "error_util.m"
    }
#line 1541 "error_util.m"
    {
#line 1541 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1541 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1541 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1541 "error_util.m"
    }
#line 1541 "error_util.m"
    {
#line 1541 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1540 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1540 "error_util.m"
  }
#line 435 "error_util.m"
}

#line 431 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 431 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 431 "error_util.m"
{
#line 1047 "error_util.m"
  {
#line 1047 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1047 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1048 "error_util.m"
    {
#line 1048 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1047 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1047 "error_util.m"
  }
#line 431 "error_util.m"
}

#line 427 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 427 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 427 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 427 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 427 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 427 "error_util.m"
{
#line 958 "error_util.m"
  {
#line 958 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 958 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;

#line 959 "error_util.m"
    {
#line 959 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 961 "error_util.m"
    {
#line 961 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 961 "error_util.m"
      return;
    }
#line 958 "error_util.m"
  }
#line 427 "error_util.m"
}

#line 424 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 424 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 424 "error_util.m"
{
#line 951 "error_util.m"
  {
#line 951 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 951 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;
#line 951 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;

#line 952 "error_util.m"
    {
#line 952 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 954 "error_util.m"
    {
#line 954 "error_util.m"
      parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 954 "error_util.m"
    }
#line 954 "error_util.m"
    {
#line 954 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_17_17, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 954 "error_util.m"
      return;
    }
#line 951 "error_util.m"
  }
#line 424 "error_util.m"
}

#line 416 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 416 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 416 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 416 "error_util.m"
{
#line 945 "error_util.m"
  {
#line 945 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 945 "error_util.m"
    MR_Word parse_tree__error_util__Components_9;
#line 945 "error_util.m"
    MR_Word parse_tree__error_util__V_12_12;
#line 945 "error_util.m"
    MR_String parse_tree__error_util__V_13_13;
#line 945 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 945 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;

#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__V_13_13 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 947 "error_util.m"
    }
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__Msg_6));
#line 947 "error_util.m"
    }
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "error_util.m"
    }
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      parse_tree__error_util__Components_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 947 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 947 "error_util.m"
    }
#line 948 "error_util.m"
    {
#line 948 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__Components_9);
#line 948 "error_util.m"
      return;
    }
#line 945 "error_util.m"
  }
#line 416 "error_util.m"
}

#line 408 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 408 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 408 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 408 "error_util.m"
{
#line 939 "error_util.m"
  {
#line 939 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 939 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_8;

#line 940 "error_util.m"
    {
#line 940 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 138, &parse_tree__error_util__MaybeMaxWidth_8);
    }
#line 942 "error_util.m"
    {
#line 942 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_8, parse_tree__error_util__Components_6);
#line 942 "error_util.m"
      return;
    }
#line 939 "error_util.m"
  }
#line 408 "error_util.m"
}

#line 398 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 398 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 398 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 398 "error_util.m"
{
#line 934 "error_util.m"
  {
#line 934 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 934 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 934 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "error_util.m"
      {
#line 934 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 935 "error_util.m"
        {
#line 935 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 934 "error_util.m"
      }
#line 934 "error_util.m"
    else
#line 934 "error_util.m"
      {
#line 934 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 934 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 934 "error_util.m"
        else
#line 937 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 934 "error_util.m"
      }
#line 934 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 934 "error_util.m"
  }
#line 398 "error_util.m"
}

#line 393 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 393 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 393 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 393 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 393 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 393 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 393 "error_util.m"
{
#line 930 "error_util.m"
  {
#line 930 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 930 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 930 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 930 "error_util.m"
    else
#line 930 "error_util.m"
      {
#line 930 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 931 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 930 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 931 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 930 "error_util.m"
        else
#line 932 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 930 "error_util.m"
      }
#line 930 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 930 "error_util.m"
  }
#line 393 "error_util.m"
}

#line 385 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 385 "error_util.m"
{
#line 924 "error_util.m"
  {
#line 924 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 924 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 924 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 924 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "error_util.m"
    else
#line 924 "error_util.m"
      {
#line 924 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 924 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 924 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "error_util.m"
          {
#line 925 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 925 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 925 "error_util.m"
            {
#line 925 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[9]));
            }
#line 925 "error_util.m"
            {
#line 925 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 925 "error_util.m"
          }
#line 924 "error_util.m"
        else
#line 926 "error_util.m"
          {
#line 926 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 926 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 926 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 928 "error_util.m"
            {
#line 928 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 928 "error_util.m"
            {
#line 928 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]), parse_tree__error_util__V_24_24);
            }
#line 927 "error_util.m"
            {
#line 927 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 926 "error_util.m"
          }
#line 924 "error_util.m"
      }
#line 924 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 924 "error_util.m"
  }
#line 385 "error_util.m"
}

#line 374 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 374 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 374 "error_util.m"
{
#line 917 "error_util.m"
  {
#line 917 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 917 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 917 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 917 "error_util.m"
    else
#line 917 "error_util.m"
      {
#line 917 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 917 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "error_util.m"
          {
#line 918 "error_util.m"
            {
#line 918 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 918 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "error_util.m"
            }
#line 918 "error_util.m"
          }
#line 917 "error_util.m"
        else
#line 917 "error_util.m"
          {
#line 917 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 917 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 917 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "error_util.m"
              {
#line 919 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 919 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 919 "error_util.m"
                {
#line 919 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "error_util.m"
                }
#line 919 "error_util.m"
                {
#line 919 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 919 "error_util.m"
                }
#line 919 "error_util.m"
                {
#line 919 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 919 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 919 "error_util.m"
                }
#line 919 "error_util.m"
              }
#line 917 "error_util.m"
            else
#line 920 "error_util.m"
              {
#line 920 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 920 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 921 "error_util.m"
                {
#line 921 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 921 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15])));
#line 921 "error_util.m"
                }
#line 922 "error_util.m"
                {
#line 922 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 922 "error_util.m"
                {
#line 922 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 920 "error_util.m"
              }
#line 917 "error_util.m"
          }
#line 917 "error_util.m"
      }
#line 917 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 917 "error_util.m"
  }
#line 374 "error_util.m"
}

#line 368 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 368 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 368 "error_util.m"
{
#line 909 "error_util.m"
  {
#line 909 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 909 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 909 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "error_util.m"
    else
#line 909 "error_util.m"
      {
#line 909 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 909 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 909 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 909 "error_util.m"
        else
#line 909 "error_util.m"
          {
#line 909 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 909 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 909 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "error_util.m"
              {
#line 911 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 911 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 912 "error_util.m"
                {
#line 912 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_33_33);
                }
#line 912 "error_util.m"
                {
#line 912 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 911 "error_util.m"
              }
#line 909 "error_util.m"
            else
#line 913 "error_util.m"
              {
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15]), parse_tree__error_util__V_25_25);
                }
#line 914 "error_util.m"
                {
#line 914 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 913 "error_util.m"
              }
#line 909 "error_util.m"
          }
#line 909 "error_util.m"
      }
#line 909 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 909 "error_util.m"
  }
#line 368 "error_util.m"
}

#line 362 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 362 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 362 "error_util.m"
{
#line 903 "error_util.m"
  {
#line 903 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 903 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 903 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "error_util.m"
    else
#line 903 "error_util.m"
      {
#line 903 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 903 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "error_util.m"
          {
#line 904 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 904 "error_util.m"
            {
#line 904 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 904 "error_util.m"
            }
#line 904 "error_util.m"
            {
#line 904 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 904 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "error_util.m"
            }
#line 904 "error_util.m"
          }
#line 903 "error_util.m"
        else
#line 903 "error_util.m"
          {
#line 903 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 903 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 903 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 905 "error_util.m"
              {
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 905 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 905 "error_util.m"
                {
#line 905 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 905 "error_util.m"
                }
#line 905 "error_util.m"
                {
#line 905 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 905 "error_util.m"
                }
#line 905 "error_util.m"
                {
#line 905 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "error_util.m"
                }
#line 905 "error_util.m"
                {
#line 905 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 905 "error_util.m"
                }
#line 905 "error_util.m"
                {
#line 905 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 905 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 905 "error_util.m"
                }
#line 905 "error_util.m"
              }
#line 903 "error_util.m"
            else
#line 906 "error_util.m"
              {
#line 906 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 906 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 906 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 907 "error_util.m"
                {
#line 907 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 907 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 907 "error_util.m"
                }
#line 907 "error_util.m"
                {
#line 907 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 907 "error_util.m"
                {
#line 907 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[13])));
#line 907 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 907 "error_util.m"
                }
#line 907 "error_util.m"
                {
#line 907 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 907 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 907 "error_util.m"
                }
#line 906 "error_util.m"
              }
#line 903 "error_util.m"
          }
#line 903 "error_util.m"
      }
#line 903 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 903 "error_util.m"
  }
#line 362 "error_util.m"
}

#line 358 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 358 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 358 "error_util.m"
{
#line 897 "error_util.m"
  {
#line 897 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 897 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 897 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 897 "error_util.m"
    else
#line 897 "error_util.m"
      {
#line 897 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 897 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "error_util.m"
          {
#line 898 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 898 "error_util.m"
            {
#line 898 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 898 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 898 "error_util.m"
            }
#line 898 "error_util.m"
            {
#line 898 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 898 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "error_util.m"
            }
#line 898 "error_util.m"
          }
#line 897 "error_util.m"
        else
#line 897 "error_util.m"
          {
#line 897 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 897 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 897 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "error_util.m"
              {
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 899 "error_util.m"
                }
#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 899 "error_util.m"
                }
#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 899 "error_util.m"
                }
#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 899 "error_util.m"
                }
#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 899 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 899 "error_util.m"
                }
#line 899 "error_util.m"
              }
#line 897 "error_util.m"
            else
#line 900 "error_util.m"
              {
#line 900 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 900 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 900 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 901 "error_util.m"
                }
#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 901 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 901 "error_util.m"
                }
#line 900 "error_util.m"
              }
#line 897 "error_util.m"
          }
#line 897 "error_util.m"
      }
#line 897 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 897 "error_util.m"
  }
#line 358 "error_util.m"
}

#line 353 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 353 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 353 "error_util.m"
{
#line 895 "error_util.m"
  {
#line 895 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 895 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 895 "error_util.m"
    {
#line 895 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 895 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 895 "error_util.m"
    }
#line 895 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 895 "error_util.m"
  }
#line 353 "error_util.m"
}

#line 731 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 731 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 731 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7)
#line 731 "error_util.m"
{
#line 731 "error_util.m"
  {
#line 731 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 731 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21;
#line 731 "error_util.m"
    MR_Integer parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23;

#line 731 "error_util.m"
    {
#line 731 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23);
    }
#line 731 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21));
#line 731 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23));
#line 731 "error_util.m"
  }
#line 731 "error_util.m"
}

#line 692 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 692 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 692 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 692 "error_util.m"
{
#line 692 "error_util.m"
  {
#line 692 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 692 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 692 "error_util.m"
    {
#line 692 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 692 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 692 "error_util.m"
  }
#line 692 "error_util.m"
}

#line 270 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 270 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 270 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 270 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 270 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 270 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 270 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 270 "error_util.m"
{
#line 729 "error_util.m"
  {
#line 729 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 729 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33;
#line 729 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 729 "error_util.m"
    MR_Word parse_tree__error_util__V_21_21;
#line 731 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16;
#line 731 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18;
#line 731 "error_util.m"
    MR_Box parse_tree__error_util__conv3_STATE_VARIABLE_IO_20;

#line 692 "error_util.m"
    {
#line 692 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 731 "error_util.m"
    {
#line 731 "error_util.m"
      parse_tree__error_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 731 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 731 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 731 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 731 "error_util.m"
    }
#line 16049 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 731 "error_util.m"
    {
#line 731 "error_util.m"
      mercury__list__foldl3_8_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_21_21, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15)), &parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17)), &parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv3_STATE_VARIABLE_IO_20);
    }
#line 731 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_16 = ((MR_Integer) parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16);
#line 731 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_18 = ((MR_Integer) parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18);
#line 729 "error_util.m"
  }
#line 270 "error_util.m"
}

#line 268 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 268 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 268 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 268 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14,
#line 268 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_15,
#line 268 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16,
#line 268 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_17)
#line 268 "error_util.m"
{
#line 727 "error_util.m"
  {
#line 727 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 727 "error_util.m"
    {
#line 727 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14, parse_tree__error_util__STATE_VARIABLE_NumWarnings_15, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_17);
#line 727 "error_util.m"
      return;
    }
#line 727 "error_util.m"
  }
#line 268 "error_util.m"
}

#line 245 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 245 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 245 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 245 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 245 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 245 "error_util.m"
{
#line 715 "error_util.m"
  {
#line 715 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 715 "error_util.m"
    if ((parse_tree__error_util__Verbose_7 == (MR_Integer) 0))
#line 715 "error_util.m"
      *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 715 "error_util.m"
    else
#line 717 "error_util.m"
      {
#line 719 "error_util.m"
        MR_Integer parse_tree__error_util___NumWarnings_11;
#line 719 "error_util.m"
        MR_Integer parse_tree__error_util___NumErrors_12;

#line 719 "error_util.m"
        {
#line 719 "error_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
        }
#line 721 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "error_util.m"
      }
#line 715 "error_util.m"
  }
#line 245 "error_util.m"
}

#line 240 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 240 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 240 "error_util.m"
{
#line 662 "error_util.m"
  {
#line 662 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 662 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 662 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 662 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "error_util.m"
    else
#line 663 "error_util.m"
      {
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 663 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 663 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 16181 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 664 "error_util.m"
        {
#line 664 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 664 "error_util.m"
        {
#line 664 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 663 "error_util.m"
      }
#line 662 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 662 "error_util.m"
  }
#line 240 "error_util.m"
}

#line 646 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 646 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 646 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 646 "error_util.m"
{
#line 646 "error_util.m"
  {
#line 646 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 646 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 646 "error_util.m"
    {
#line 646 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__646__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 646 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 646 "error_util.m"
  }
#line 646 "error_util.m"
}

#line 237 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 237 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 237 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 237 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 237 "error_util.m"
{
#line 645 "error_util.m"
  {
#line 645 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 645 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 646 "error_util.m"
    {
#line 646 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 650 "error_util.m"
    {
#line 650 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 651 "error_util.m"
    {
#line 651 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 657 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "error_util.m"
      {
#line 658 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 659 "error_util.m"
        {
#line 659 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 659 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 659 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 659 "error_util.m"
        }
#line 659 "error_util.m"
        {
#line 659 "error_util.m"
          MR_Word base;
#line 659 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 659 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 659 "error_util.m"
        }
#line 658 "error_util.m"
      }
#line 657 "error_util.m"
    else
#line 653 "error_util.m"
      {
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 653 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 653 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 653 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 654 "error_util.m"
        {
#line 654 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 655 "error_util.m"
        {
#line 655 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 656 "error_util.m"
        {
#line 656 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 656 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 656 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 656 "error_util.m"
        }
#line 656 "error_util.m"
        {
#line 656 "error_util.m"
          MR_Word base;
#line 656 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 656 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 656 "error_util.m"
        }
#line 653 "error_util.m"
      }
#line 645 "error_util.m"
  }
#line 237 "error_util.m"
}

#line 235 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 235 "error_util.m"
{
#line 643 "error_util.m"
  {
#line 643 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 643 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "error_util.m"
  }
#line 235 "error_util.m"
}

#line 592 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 592 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 592 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 592 "error_util.m"
{
#line 592 "error_util.m"
  {
#line 592 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 592 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 592 "error_util.m"
    {
#line 592 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 592 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 592 "error_util.m"
  }
#line 592 "error_util.m"
}

#line 224 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 224 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 224 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 224 "error_util.m"
{
#line 591 "error_util.m"
  {
#line 591 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 592 "error_util.m"
    {
#line 592 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 592 "error_util.m"
      return;
    }
#line 591 "error_util.m"
  }
#line 224 "error_util.m"
}

#line 220 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 220 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 220 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 220 "error_util.m"
{
#line 571 "error_util.m"
  {
#line 571 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 571 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 571 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 531 "error_util.m"
    {
#line 531 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 576 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 576 "error_util.m"
    else
#line 577 "error_util.m"
      {
#line 577 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 583 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 2))
#line 585 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 583 "error_util.m"
        else
#line 582 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 577 "error_util.m"
      }
#line 571 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 571 "error_util.m"
  }
#line 220 "error_util.m"
}

#line 215 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 215 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 215 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 215 "error_util.m"
{
#line 553 "error_util.m"
  {
#line 553 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 553 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 553 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 531 "error_util.m"
    {
#line 531 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 558 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 558 "error_util.m"
    else
#line 559 "error_util.m"
      {
#line 559 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 563 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 0))
#line 562 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 563 "error_util.m"
        else
#line 567 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 559 "error_util.m"
      }
#line 553 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 553 "error_util.m"
  }
#line 215 "error_util.m"
}

#line 209 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 209 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 209 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 209 "error_util.m"
{
#line 530 "error_util.m"
  {
#line 530 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 530 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 531 "error_util.m"
    {
#line 531 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 530 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 530 "error_util.m"
  }
#line 209 "error_util.m"
}

#line 203 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 203 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 203 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 203 "error_util.m"
{
#line 505 "error_util.m"
  while (MR_TRUE)
#line 505 "error_util.m"
    {
#line 505 "error_util.m"
      /* tailcall optimized into a loop */
#line 505 "error_util.m"
      {
#line 505 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 505 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 505 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "error_util.m"
          {
#line 506 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 505 "error_util.m"
          }
#line 505 "error_util.m"
        else
#line 505 "error_util.m"
          if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 511 "error_util.m"
            {
#line 512 "error_util.m"
              parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 511 "error_util.m"
            }
#line 505 "error_util.m"
          else
#line 505 "error_util.m"
            if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 508 "error_util.m"
              {
#line 509 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 508 "error_util.m"
              }
#line 505 "error_util.m"
            else
#line 515 "error_util.m"
              {
#line 515 "error_util.m"
                MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 515 "error_util.m"
                MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 515 "error_util.m"
                MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 515 "error_util.m"
                MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 515 "error_util.m"
                MR_Word parse_tree__error_util__Value_11;

#line 516 "error_util.m"
                {
#line 516 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
                }
#line 517 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 519 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 518 "error_util.m"
                  {
#line 518 "error_util.m"
                    /* direct tailcall eliminated */
#line 518 "error_util.m"
                    {
#line 518 "error_util.m"
                      MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 518 "error_util.m"
                      parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 518 "error_util.m"
                    }
#line 518 "error_util.m"
                    continue;
#line 518 "error_util.m"
                  }
#line 519 "error_util.m"
                else
#line 523 "error_util.m"
                  if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "error_util.m"
                    parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "error_util.m"
                  else
#line 524 "error_util.m"
                    {
#line 524 "error_util.m"
                      MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 525 "error_util.m"
                      /* direct tailcall eliminated */
#line 525 "error_util.m"
                      {
#line 525 "error_util.m"
                        MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 525 "error_util.m"
                        parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 525 "error_util.m"
                      }
#line 525 "error_util.m"
                      continue;
#line 524 "error_util.m"
                    }
#line 515 "error_util.m"
              }
#line 505 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 505 "error_util.m"
      }
#line 505 "error_util.m"
      break;
#line 505 "error_util.m"
    }
#line 203 "error_util.m"
}

#line 197 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 197 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 197 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 197 "error_util.m"
{
#line 484 "error_util.m"
  {
#line 484 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 484 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 484 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 0))
#line 484 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 485 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 484 "error_util.m"
      else
#line 484 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 489 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 484 "error_util.m"
        else
#line 487 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 484 "error_util.m"
    else
#line 484 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 2))
#line 484 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 497 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 484 "error_util.m"
        else
#line 484 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 501 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 484 "error_util.m"
          else
#line 499 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 484 "error_util.m"
      else
#line 484 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 491 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 484 "error_util.m"
        else
#line 484 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 495 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 484 "error_util.m"
          else
#line 493 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 484 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 484 "error_util.m"
  }
#line 197 "error_util.m"
}

#line 190 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 190 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 190 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 190 "error_util.m"
{
#line 16781 "parse_tree.error_util.c"
  {
#line 16783 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 16785 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16787 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 16790 "parse_tree.error_util.c"
    {
#line 16792 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 16795 "parse_tree.error_util.c"
  }
#line 190 "error_util.m"
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
