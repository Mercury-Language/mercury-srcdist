/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 140 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 143 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 146 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 149 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 152 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 155 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 158 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 161 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 164 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 167 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 170 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 173 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 176 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 179 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 182 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 185 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 188 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 191 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 194 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 197 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 200 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 203 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 206 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 209 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 212 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 215 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 218 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 221 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 224 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 227 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 230 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 233 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 236 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 239 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2];

#line 242 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 245 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 248 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 251 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 254 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 257 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 260 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 263 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 266 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 269 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 272 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 275 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 278 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 281 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 284 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 287 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 290 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 293 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 296 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 299 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 302 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 305 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 308 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 311 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 314 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 317 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 320 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 323 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 326 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 329 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 332 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 335 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 338 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 341 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 344 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 347 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 350 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 353 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 356 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 359 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 362 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 365 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 368 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 371 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 374 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 377 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 380 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 383 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 386 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 389 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 392 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 395 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 398 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 401 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 404 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 407 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 410 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 413 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 416 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 419 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 422 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 425 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 428 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 431 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 434 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 437 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 440 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 443 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 446 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 449 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 452 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 455 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 458 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 461 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1];

#line 464 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 467 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 470 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 473 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 476 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 479 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 482 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 485 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 488 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 491 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 494 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 497 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 500 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 503 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 506 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 509 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 512 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 515 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 518 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 521 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 524 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 527 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1];

#line 530 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 533 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 536 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_18[1];

#line 539 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 542 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 545 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_20[1];

#line 548 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20;

#line 551 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 554 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 557 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 560 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[16];

#line 563 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 566 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[21];

#line 569 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[21];

#line 572 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 575 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 578 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 581 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 584 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 587 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 590 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 593 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 596 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 599 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 602 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 605 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 608 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 611 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 614 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 617 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 620 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 623 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 626 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 629 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 632 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 635 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 638 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 641 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 644 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 647 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 650 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 653 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 656 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 659 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 662 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 665 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 668 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 671 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 674 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 677 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 680 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 683 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 686 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 689 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 692 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 695 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 698 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0;

#line 701 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1;

#line 704 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2];

#line 707 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2];

#line 710 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2];

#line 713 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 716 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 719 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 722 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 725 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 728 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 731 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 734 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 737 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 740 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 743 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 746 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 749 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 752 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 755 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 758 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 761 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 764 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 769 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 772 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 775 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 777 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 779 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 782 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 785 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 787 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 790 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 793 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 795 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 797 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 800 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 805 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 808 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 811 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 813 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 815 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 818 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 823 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 826 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 829 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 831 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 833 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 836 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 839 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 841 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 844 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 847 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 849 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 851 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 854 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 859 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 862 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 865 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 867 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 869 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 872 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 877 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 880 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 883 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 885 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 887 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 890 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 893 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 895 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 898 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 901 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 903 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 905 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 908 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 913 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 916 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 919 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 921 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 923 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 926 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 931 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 934 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 937 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 939 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 941 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 944 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 947 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 949 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 952 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 955 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 957 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 959 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 962 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 967 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 970 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 973 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 975 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 977 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 980 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 985 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 988 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 991 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 993 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 995 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 998 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 1001 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1003 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1006 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 1009 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1011 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1013 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1016 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 1019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1021 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1024 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 1027 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1029 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1031 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1034 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 1037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1039 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1042 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 1045 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1047 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1049 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1052 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1055 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1057 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1060 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1063 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1065 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1067 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1070 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1073 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1075 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1078 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1081 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1083 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1085 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1088 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 1091 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1093 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1096 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 1099 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1101 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1103 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1106 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1109 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1111 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1114 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1117 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1119 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1121 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 674 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__674__1_1_p_0(
#line 674 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1311 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1311 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1311 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1419 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1419 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1419 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1293 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1293 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1293 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 817 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 817 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 817 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 821 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 821 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 821 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 951 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 951 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 951 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1569 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1569 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1569 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 825 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 825 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 825 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1659 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1659 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1659 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1659 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1659 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1634 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1634 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1634 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1634 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1634 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1586 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1586 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1586 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1554 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1554 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1554 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1554 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1544 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1544 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1544 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1544 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1531 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1531 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1531 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1531 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1531 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1526 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1526 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1526 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1526 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1521 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1521 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1516 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1516 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1475 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1475 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1430 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1430 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1424 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1424 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1317 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1317 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1280 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1280 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1280 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1280 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1267 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1267 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1174 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1163 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1136 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1136 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1136 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1136 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 1108 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1108 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2);

#line 1042 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1042 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__Components_14);

#line 1030 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1030 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 1013 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1013 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1013 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2);

#line 859 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 859 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10);

#line 827 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7);

#line 775 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 775 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 775 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 775 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 775 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 775 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);

#line 722 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 722 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 722 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 722 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 636 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 636 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 636 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 636 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 622 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 622 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 561 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 561 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 772 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9);

#line 720 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 720 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 674 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 674 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 674 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 620 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 620 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[19][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][13];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_line_number_range_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_2[0]))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[9]))
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

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[5][1] = {
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
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
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

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
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



#line 1876 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1884 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1892 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1898 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1904 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1910 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1917 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1924 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1931 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_actual_severity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____actual_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____actual_severity_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "actual_severity",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0
};

#line 1948 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1956 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_already_printed_verbose_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____already_printed_verbose_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____already_printed_verbose_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "already_printed_verbose",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1973 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1981 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1987 "parse_tree.error_util.c"
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

#line 2002 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2007 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 2016 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2021 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 2026 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_line_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_line_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_line",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0
};

#line 2043 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 2051 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2057 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 2063 "parse_tree.error_util.c"
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

#line 2078 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2086 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2094 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 2102 "parse_tree.error_util.c"
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

#line 2117 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2122 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 2127 "parse_tree.error_util.c"
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

#line 2141 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2147 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2153 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_msg_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_msg_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_msg",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0
};

#line 2170 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2175 "parse_tree.error_util.c"
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

#line 2190 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2197 "parse_tree.error_util.c"
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

#line 2216 "parse_tree.error_util.c"
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

#line 2231 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2237 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2 = {
  (MR_String) "verbose_only",
  (MR_Integer) 2,
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

#line 2252 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2258 "parse_tree.error_util.c"
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

#line 2273 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2278 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2286 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2291 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2299 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2308 "parse_tree.error_util.c"
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

#line 2323 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2328 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2333 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2338 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2344 "parse_tree.error_util.c"
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

#line 2368 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2377 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2386 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_msg_component_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_msg_component_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_msg_component",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0
};

#line 2403 "parse_tree.error_util.c"
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

#line 2418 "parse_tree.error_util.c"
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

#line 2433 "parse_tree.error_util.c"
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

#line 2448 "parse_tree.error_util.c"
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

#line 2463 "parse_tree.error_util.c"
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

#line 2478 "parse_tree.error_util.c"
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

#line 2493 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2498 "parse_tree.error_util.c"
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

#line 2513 "parse_tree.error_util.c"
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

#line 2528 "parse_tree.error_util.c"
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

#line 2543 "parse_tree.error_util.c"
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

#line 2558 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2563 "parse_tree.error_util.c"
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

#line 2578 "parse_tree.error_util.c"
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

#line 2593 "parse_tree.error_util.c"
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

#line 2608 "parse_tree.error_util.c"
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

#line 2623 "parse_tree.error_util.c"
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

#line 2638 "parse_tree.error_util.c"
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

#line 2653 "parse_tree.error_util.c"
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

#line 2668 "parse_tree.error_util.c"
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

#line 2687 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2692 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2697 "parse_tree.error_util.c"
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

#line 2716 "parse_tree.error_util.c"
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

#line 2737 "parse_tree.error_util.c"
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

#line 2758 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_phase_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_phase_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_phase",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0 },
  (MR_Integer) 17,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0
};

#line 2775 "parse_tree.error_util.c"
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

#line 2790 "parse_tree.error_util.c"
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

#line 2805 "parse_tree.error_util.c"
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

#line 2820 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2828 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2836 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2844 "parse_tree.error_util.c"
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

#line 2859 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2866 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2871 "parse_tree.error_util.c"
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

#line 2885 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2893 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2901 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_severity_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_severity_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_severity",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0
};

#line 2918 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2926 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2933 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2940 "parse_tree.error_util.c"
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

#line 2955 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2960 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2969 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2974 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2979 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0
};

#line 2996 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3004 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3013 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3021 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_accumulator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "error_spec_accumulator",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3038 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3043 "parse_tree.error_util.c"
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

#line 3058 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3063 "parse_tree.error_util.c"
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

#line 3078 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3083 "parse_tree.error_util.c"
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

#line 3098 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3103 "parse_tree.error_util.c"
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

#line 3118 "parse_tree.error_util.c"
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

#line 3133 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3138 "parse_tree.error_util.c"
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

#line 3153 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3158 "parse_tree.error_util.c"
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

#line 3173 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3178 "parse_tree.error_util.c"
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

#line 3193 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3198 "parse_tree.error_util.c"
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

#line 3213 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3218 "parse_tree.error_util.c"
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

#line 3233 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3238 "parse_tree.error_util.c"
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

#line 3253 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 3258 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11 = {
  (MR_String) "cons_id_and_maybe_arity",
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

#line 3273 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3278 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12 = {
  (MR_String) "top_ctor_of_type",
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

#line 3293 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3298 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13 = {
  (MR_String) "p_or_f",
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

#line 3313 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3318 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14 = {
  (MR_String) "simple_call",
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

#line 3333 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3338 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15 = {
  (MR_String) "decl",
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

#line 3353 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3358 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16 = {
  (MR_String) "pragma_decl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 16,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16,
  NULL,
  NULL,
  NULL
};

#line 3373 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3388 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_18[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3393 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18 = {
  (MR_String) "nl_indent_delta",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 18,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_18,
  NULL,
  NULL,
  NULL
};

#line 3408 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19 = {
  (MR_String) "blank_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3423 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_20[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3428 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20 = {
  (MR_String) "invis_order",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 20,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_20,
  NULL,
  NULL,
  NULL
};

#line 3443 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19
};

#line 3450 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3455 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3460 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[16] = {
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
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20
};

#line 3480 "parse_tree.error_util.c"
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
    (MR_Integer) 16,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3
  }
};

#line 3504 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[21] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8
};

#line 3529 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[21] = {
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 4,
  (MR_Integer) 9,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 15,
  (MR_Integer) 19,
  (MR_Integer) 20,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 1,
  (MR_Integer) 18,
  (MR_Integer) 10,
  (MR_Integer) 14,
  (MR_Integer) 2,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 3554 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____format_component_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____format_component_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "format_component",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0 },
  (MR_Integer) 21,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0
};

#line 3571 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_components_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__error_util____Unify____format_components_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____format_components_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "format_components",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3588 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3594 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3600 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3606 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3612 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3618 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_first_in_msg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_first_in_msg",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0
};

#line 3635 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3641 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3647 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3653 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3659 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3665 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_lower_next_initial_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_lower_next_initial",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0
};

#line 3682 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3688 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3694 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3700 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3706 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3712 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_printed_something_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_printed_something_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_printed_something_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_printed_something",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0
};

#line 3729 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3735 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3741 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3747 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3753 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3759 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "maybe_treat_as_first",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0
};

#line 3776 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3782 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3788 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3794 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3800 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3806 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____mode_report_control_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____mode_report_control_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "mode_report_control",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0
};

#line 3823 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3830 "parse_tree.error_util.c"
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

#line 3845 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3850 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3859 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3864 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3869 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____paragraph_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____paragraph_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "paragraph",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0
};

#line 3886 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3891 "parse_tree.error_util.c"
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

#line 3906 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3911 "parse_tree.error_util.c"
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

#line 3926 "parse_tree.error_util.c"
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

#line 3941 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3946 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3951 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3956 "parse_tree.error_util.c"
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

#line 3975 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3982 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3989 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____plain_or_prefix_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____plain_or_prefix_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "plain_or_prefix",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0
};

#line 4006 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  (MR_Integer) 0
};

#line 4012 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  (MR_Integer) 1
};

#line 4018 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4024 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4030 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4036 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "verbose_always_or_once",
  {     parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0 },
  {     parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0
};

#line 4053 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4058 "parse_tree.error_util.c"
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

#line 4073 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4078 "parse_tree.error_util.c"
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

#line 4093 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4098 "parse_tree.error_util.c"
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

#line 4113 "parse_tree.error_util.c"
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

#line 4128 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 4133 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 4138 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 4143 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4148 "parse_tree.error_util.c"
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

#line 4172 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4180 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4188 "parse_tree.error_util.c"
const MR_TypeCtorInfo_Struct parse_tree__error_util__parse_tree__error_util__type_ctor_info_word_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__error_util____Unify____word_0_0_10001)),
  ((MR_Box) (parse_tree__error_util____Compare____word_0_0_10001)),
  (MR_String) "parse_tree.error_util",
  (MR_String) "word",
  {     parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0 },
  {     parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0
};

#line 4205 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4210 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4219 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4230 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4238 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4241 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4243 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4245 "parse_tree.error_util.c"
{
#line 4247 "parse_tree.error_util.c"
  {
#line 4249 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4252 "parse_tree.error_util.c"
    {
#line 4254 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4257 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4259 "parse_tree.error_util.c"
  }
#line 4261 "parse_tree.error_util.c"
}

#line 4264 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4267 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4269 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4271 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4273 "parse_tree.error_util.c"
{
#line 4275 "parse_tree.error_util.c"
  {
#line 4277 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4280 "parse_tree.error_util.c"
    {
#line 4282 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4285 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4287 "parse_tree.error_util.c"
  }
#line 4289 "parse_tree.error_util.c"
}

#line 4292 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 4295 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4297 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4299 "parse_tree.error_util.c"
{
#line 4301 "parse_tree.error_util.c"
  {
#line 4303 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4306 "parse_tree.error_util.c"
    {
#line 4308 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____already_printed_verbose_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4311 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4313 "parse_tree.error_util.c"
  }
#line 4315 "parse_tree.error_util.c"
}

#line 4318 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 4321 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4323 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4325 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4327 "parse_tree.error_util.c"
{
#line 4329 "parse_tree.error_util.c"
  {
#line 4331 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4334 "parse_tree.error_util.c"
    {
#line 4336 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____already_printed_verbose_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4339 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4341 "parse_tree.error_util.c"
  }
#line 4343 "parse_tree.error_util.c"
}

#line 4346 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4349 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4351 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4353 "parse_tree.error_util.c"
{
#line 4355 "parse_tree.error_util.c"
  {
#line 4357 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4360 "parse_tree.error_util.c"
    {
#line 4362 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4365 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4367 "parse_tree.error_util.c"
  }
#line 4369 "parse_tree.error_util.c"
}

#line 4372 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4375 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4377 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4379 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4381 "parse_tree.error_util.c"
{
#line 4383 "parse_tree.error_util.c"
  {
#line 4385 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4388 "parse_tree.error_util.c"
    {
#line 4390 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4393 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4395 "parse_tree.error_util.c"
  }
#line 4397 "parse_tree.error_util.c"
}

#line 4400 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4403 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4405 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4407 "parse_tree.error_util.c"
{
#line 4409 "parse_tree.error_util.c"
  {
#line 4411 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4414 "parse_tree.error_util.c"
    {
#line 4416 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4419 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4421 "parse_tree.error_util.c"
  }
#line 4423 "parse_tree.error_util.c"
}

#line 4426 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4429 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4431 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4433 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4435 "parse_tree.error_util.c"
{
#line 4437 "parse_tree.error_util.c"
  {
#line 4439 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4442 "parse_tree.error_util.c"
    {
#line 4444 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4447 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4449 "parse_tree.error_util.c"
  }
#line 4451 "parse_tree.error_util.c"
}

#line 4454 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4457 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4459 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4461 "parse_tree.error_util.c"
{
#line 4463 "parse_tree.error_util.c"
  {
#line 4465 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4468 "parse_tree.error_util.c"
    {
#line 4470 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4473 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4475 "parse_tree.error_util.c"
  }
#line 4477 "parse_tree.error_util.c"
}

#line 4480 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4483 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4485 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4487 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4489 "parse_tree.error_util.c"
{
#line 4491 "parse_tree.error_util.c"
  {
#line 4493 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4496 "parse_tree.error_util.c"
    {
#line 4498 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4501 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4503 "parse_tree.error_util.c"
  }
#line 4505 "parse_tree.error_util.c"
}

#line 4508 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4511 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4513 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4515 "parse_tree.error_util.c"
{
#line 4517 "parse_tree.error_util.c"
  {
#line 4519 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4522 "parse_tree.error_util.c"
    {
#line 4524 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4527 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4529 "parse_tree.error_util.c"
  }
#line 4531 "parse_tree.error_util.c"
}

#line 4534 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4537 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4539 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4541 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4543 "parse_tree.error_util.c"
{
#line 4545 "parse_tree.error_util.c"
  {
#line 4547 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4550 "parse_tree.error_util.c"
    {
#line 4552 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4555 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4557 "parse_tree.error_util.c"
  }
#line 4559 "parse_tree.error_util.c"
}

#line 4562 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4565 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4567 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4569 "parse_tree.error_util.c"
{
#line 4571 "parse_tree.error_util.c"
  {
#line 4573 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4576 "parse_tree.error_util.c"
    {
#line 4578 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4581 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4583 "parse_tree.error_util.c"
  }
#line 4585 "parse_tree.error_util.c"
}

#line 4588 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4591 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4593 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4595 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4597 "parse_tree.error_util.c"
{
#line 4599 "parse_tree.error_util.c"
  {
#line 4601 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4604 "parse_tree.error_util.c"
    {
#line 4606 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4609 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4611 "parse_tree.error_util.c"
  }
#line 4613 "parse_tree.error_util.c"
}

#line 4616 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4619 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4621 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4623 "parse_tree.error_util.c"
{
#line 4625 "parse_tree.error_util.c"
  {
#line 4627 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4630 "parse_tree.error_util.c"
    {
#line 4632 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4635 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4637 "parse_tree.error_util.c"
  }
#line 4639 "parse_tree.error_util.c"
}

#line 4642 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4645 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4647 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4649 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4651 "parse_tree.error_util.c"
{
#line 4653 "parse_tree.error_util.c"
  {
#line 4655 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4658 "parse_tree.error_util.c"
    {
#line 4660 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4663 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4665 "parse_tree.error_util.c"
  }
#line 4667 "parse_tree.error_util.c"
}

#line 4670 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4673 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4675 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4677 "parse_tree.error_util.c"
{
#line 4679 "parse_tree.error_util.c"
  {
#line 4681 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4684 "parse_tree.error_util.c"
    {
#line 4686 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4689 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4691 "parse_tree.error_util.c"
  }
#line 4693 "parse_tree.error_util.c"
}

#line 4696 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4699 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4701 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4703 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4705 "parse_tree.error_util.c"
{
#line 4707 "parse_tree.error_util.c"
  {
#line 4709 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4712 "parse_tree.error_util.c"
    {
#line 4714 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4717 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4719 "parse_tree.error_util.c"
  }
#line 4721 "parse_tree.error_util.c"
}

#line 4724 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4727 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4729 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4731 "parse_tree.error_util.c"
{
#line 4733 "parse_tree.error_util.c"
  {
#line 4735 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4738 "parse_tree.error_util.c"
    {
#line 4740 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4743 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4745 "parse_tree.error_util.c"
  }
#line 4747 "parse_tree.error_util.c"
}

#line 4750 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4753 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4755 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4757 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4759 "parse_tree.error_util.c"
{
#line 4761 "parse_tree.error_util.c"
  {
#line 4763 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4766 "parse_tree.error_util.c"
    {
#line 4768 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4771 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4773 "parse_tree.error_util.c"
  }
#line 4775 "parse_tree.error_util.c"
}

#line 4778 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4781 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4783 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4785 "parse_tree.error_util.c"
{
#line 4787 "parse_tree.error_util.c"
  {
#line 4789 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4792 "parse_tree.error_util.c"
    {
#line 4794 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4797 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4799 "parse_tree.error_util.c"
  }
#line 4801 "parse_tree.error_util.c"
}

#line 4804 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4807 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4809 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4811 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4813 "parse_tree.error_util.c"
{
#line 4815 "parse_tree.error_util.c"
  {
#line 4817 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4820 "parse_tree.error_util.c"
    {
#line 4822 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4825 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4827 "parse_tree.error_util.c"
  }
#line 4829 "parse_tree.error_util.c"
}

#line 4832 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4835 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4837 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4839 "parse_tree.error_util.c"
{
#line 4841 "parse_tree.error_util.c"
  {
#line 4843 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4846 "parse_tree.error_util.c"
    {
#line 4848 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4851 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4853 "parse_tree.error_util.c"
  }
#line 4855 "parse_tree.error_util.c"
}

#line 4858 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4861 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4863 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4865 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4867 "parse_tree.error_util.c"
{
#line 4869 "parse_tree.error_util.c"
  {
#line 4871 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4874 "parse_tree.error_util.c"
    {
#line 4876 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4879 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4881 "parse_tree.error_util.c"
  }
#line 4883 "parse_tree.error_util.c"
}

#line 4886 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4889 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4891 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4893 "parse_tree.error_util.c"
{
#line 4895 "parse_tree.error_util.c"
  {
#line 4897 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4900 "parse_tree.error_util.c"
    {
#line 4902 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4905 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4907 "parse_tree.error_util.c"
  }
#line 4909 "parse_tree.error_util.c"
}

#line 4912 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4915 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4917 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4919 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4921 "parse_tree.error_util.c"
{
#line 4923 "parse_tree.error_util.c"
  {
#line 4925 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4928 "parse_tree.error_util.c"
    {
#line 4930 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4933 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4935 "parse_tree.error_util.c"
  }
#line 4937 "parse_tree.error_util.c"
}

#line 4940 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4943 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4945 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4947 "parse_tree.error_util.c"
{
#line 4949 "parse_tree.error_util.c"
  {
#line 4951 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4954 "parse_tree.error_util.c"
    {
#line 4956 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4959 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4961 "parse_tree.error_util.c"
  }
#line 4963 "parse_tree.error_util.c"
}

#line 4966 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4969 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4971 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4973 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4975 "parse_tree.error_util.c"
{
#line 4977 "parse_tree.error_util.c"
  {
#line 4979 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4982 "parse_tree.error_util.c"
    {
#line 4984 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4987 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4989 "parse_tree.error_util.c"
  }
#line 4991 "parse_tree.error_util.c"
}

#line 4994 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4997 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4999 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5001 "parse_tree.error_util.c"
{
#line 5003 "parse_tree.error_util.c"
  {
#line 5005 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5008 "parse_tree.error_util.c"
    {
#line 5010 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5013 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5015 "parse_tree.error_util.c"
  }
#line 5017 "parse_tree.error_util.c"
}

#line 5020 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 5023 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5025 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5027 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5029 "parse_tree.error_util.c"
{
#line 5031 "parse_tree.error_util.c"
  {
#line 5033 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5036 "parse_tree.error_util.c"
    {
#line 5038 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5041 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5043 "parse_tree.error_util.c"
  }
#line 5045 "parse_tree.error_util.c"
}

#line 5048 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 5051 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5053 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5055 "parse_tree.error_util.c"
{
#line 5057 "parse_tree.error_util.c"
  {
#line 5059 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5062 "parse_tree.error_util.c"
    {
#line 5064 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5067 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5069 "parse_tree.error_util.c"
  }
#line 5071 "parse_tree.error_util.c"
}

#line 5074 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 5077 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5079 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5081 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5083 "parse_tree.error_util.c"
{
#line 5085 "parse_tree.error_util.c"
  {
#line 5087 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5090 "parse_tree.error_util.c"
    {
#line 5092 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5095 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5097 "parse_tree.error_util.c"
  }
#line 5099 "parse_tree.error_util.c"
}

#line 5102 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 5105 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5107 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5109 "parse_tree.error_util.c"
{
#line 5111 "parse_tree.error_util.c"
  {
#line 5113 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5116 "parse_tree.error_util.c"
    {
#line 5118 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5121 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5123 "parse_tree.error_util.c"
  }
#line 5125 "parse_tree.error_util.c"
}

#line 5128 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 5131 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5133 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5135 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5137 "parse_tree.error_util.c"
{
#line 5139 "parse_tree.error_util.c"
  {
#line 5141 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5144 "parse_tree.error_util.c"
    {
#line 5146 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5149 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5151 "parse_tree.error_util.c"
  }
#line 5153 "parse_tree.error_util.c"
}

#line 5156 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 5159 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5161 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5163 "parse_tree.error_util.c"
{
#line 5165 "parse_tree.error_util.c"
  {
#line 5167 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5170 "parse_tree.error_util.c"
    {
#line 5172 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5175 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5177 "parse_tree.error_util.c"
  }
#line 5179 "parse_tree.error_util.c"
}

#line 5182 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 5185 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5187 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5189 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5191 "parse_tree.error_util.c"
{
#line 5193 "parse_tree.error_util.c"
  {
#line 5195 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5198 "parse_tree.error_util.c"
    {
#line 5200 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5203 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5205 "parse_tree.error_util.c"
  }
#line 5207 "parse_tree.error_util.c"
}

#line 5210 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 5213 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5215 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5217 "parse_tree.error_util.c"
{
#line 5219 "parse_tree.error_util.c"
  {
#line 5221 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5224 "parse_tree.error_util.c"
    {
#line 5226 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____verbose_always_or_once_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5229 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5231 "parse_tree.error_util.c"
  }
#line 5233 "parse_tree.error_util.c"
}

#line 5236 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 5239 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5241 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5243 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5245 "parse_tree.error_util.c"
{
#line 5247 "parse_tree.error_util.c"
  {
#line 5249 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5252 "parse_tree.error_util.c"
    {
#line 5254 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____verbose_always_or_once_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5257 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5259 "parse_tree.error_util.c"
  }
#line 5261 "parse_tree.error_util.c"
}

#line 5264 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 5267 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5269 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5271 "parse_tree.error_util.c"
{
#line 5273 "parse_tree.error_util.c"
  {
#line 5275 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5278 "parse_tree.error_util.c"
    {
#line 5280 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5283 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5285 "parse_tree.error_util.c"
  }
#line 5287 "parse_tree.error_util.c"
}

#line 5290 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5293 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5295 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5297 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5299 "parse_tree.error_util.c"
{
#line 5301 "parse_tree.error_util.c"
  {
#line 5303 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5306 "parse_tree.error_util.c"
    {
#line 5308 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5311 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5313 "parse_tree.error_util.c"
  }
#line 5315 "parse_tree.error_util.c"
}

#line 674 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__674__1_1_p_0(
#line 674 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 674 "error_util.m"
{
#line 674 "error_util.m"
  {
#line 674 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 674 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 674 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 674 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 674 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 674 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 710 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 711 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 713 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 708 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 705 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 700 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 702 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 712 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 706 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 699 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 704 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 698 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 709 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 701 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "error_util.m"
    else
#line 697 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__Phase_31)) == (MR_mktag((MR_Integer) 1))))
#line 703 "error_util.m"
      {
#line 703 "error_util.m"
        MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 703 "error_util.m"
        {
#line 703 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 703 "error_util.m"
        }
#line 703 "error_util.m"
      }
#line 697 "error_util.m"
    else
#line 707 "error_util.m"
      {
#line 707 "error_util.m"
        MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 707 "error_util.m"
        {
#line 707 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 707 "error_util.m"
        }
#line 707 "error_util.m"
      }
#line 676 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 676 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 676 "error_util.m"
      {
#line 676 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 676 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 676 "error_util.m"
      }
#line 674 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 674 "error_util.m"
  }
#line 674 "error_util.m"
}

#line 1311 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1311 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1311 "error_util.m"
{
#line 1311 "error_util.m"
  {
#line 1311 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1311 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1311 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1311 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1311 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5507 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1311 "error_util.m"
      else
#line 1311 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5521 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
      else
#line 1311 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5527 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
      else
#line 5531 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1311 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5544 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1311 "error_util.m"
            {
#line 1311 "error_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1311 "error_util.m"
              return;
            }
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5568 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
        else
#line 5572 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1311 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5587 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5593 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1311 "error_util.m"
            {
#line 1311 "error_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1311 "error_util.m"
              return;
            }
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
        else
#line 5615 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1311 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5628 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5634 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5640 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1311 "error_util.m"
        else
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1311 "error_util.m"
            {
#line 1311 "error_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1311 "error_util.m"
              return;
            }
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
  }
#line 1311 "error_util.m"
}

#line 1311 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1311 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1311 "error_util.m"
{
#line 1311 "error_util.m"
  {
#line 1311 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1311 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1311 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1311 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1311 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1311 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1311 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1311 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_4_4;

#line 1311 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1311 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5723 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_6_6;

#line 1311 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1311 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5748 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    else
#line 1311 "error_util.m"
      {
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1311 "error_util.m"
        MR_String parse_tree__error_util__V_8_8;

#line 1311 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1311 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1311 "error_util.m"
          {
#line 1311 "error_util.m"
            parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5771 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1311 "error_util.m"
          }
#line 1311 "error_util.m"
      }
#line 1311 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1311 "error_util.m"
  }
#line 1311 "error_util.m"
}

#line 164 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0(
#line 164 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 164 "error_util.m"
{
#line 164 "error_util.m"
  {
#line 164 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 164 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 164 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 164 "error_util.m"
    {
#line 164 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 164 "error_util.m"
      return;
    }
#line 164 "error_util.m"
  }
#line 164 "error_util.m"
}

#line 164 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0(
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 164 "error_util.m"
{
#line 5825 "parse_tree.error_util.c"
  {
#line 5827 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5830 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5832 "parse_tree.error_util.c"
  }
#line 164 "error_util.m"
}

#line 1419 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1419 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1419 "error_util.m"
{
#line 1419 "error_util.m"
  {
#line 1419 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1419 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1419 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1419 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1419 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5861 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1419 "error_util.m"
      else
#line 1419 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5875 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1419 "error_util.m"
      else
#line 5879 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1419 "error_util.m"
      {
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1419 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5892 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1419 "error_util.m"
        else
#line 1419 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1419 "error_util.m"
          {
#line 1419 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1419 "error_util.m"
            {
#line 1419 "error_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1419 "error_util.m"
              return;
            }
#line 1419 "error_util.m"
          }
#line 1419 "error_util.m"
        else
#line 5914 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1419 "error_util.m"
      }
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
      {
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1419 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5927 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1419 "error_util.m"
        else
#line 1419 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5933 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1419 "error_util.m"
        else
#line 1419 "error_util.m"
          {
#line 1419 "error_util.m"
            MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1419 "error_util.m"
            {
#line 1419 "error_util.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1419 "error_util.m"
              return;
            }
#line 1419 "error_util.m"
          }
#line 1419 "error_util.m"
      }
#line 1419 "error_util.m"
  }
#line 1419 "error_util.m"
}

#line 1419 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1419 "error_util.m"
{
#line 1419 "error_util.m"
  {
#line 1419 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1419 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1419 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1419 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1419 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1419 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "error_util.m"
      {
#line 1419 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1419 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1419 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1419 "error_util.m"
      }
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1419 "error_util.m"
      {
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_4_4;

#line 1419 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1419 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1419 "error_util.m"
          {
#line 1419 "error_util.m"
            parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6016 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1419 "error_util.m"
          }
#line 1419 "error_util.m"
      }
#line 1419 "error_util.m"
    else
#line 1419 "error_util.m"
      {
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1419 "error_util.m"
        MR_String parse_tree__error_util__V_6_6;

#line 1419 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1419 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1419 "error_util.m"
          {
#line 1419 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6039 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1419 "error_util.m"
          }
#line 1419 "error_util.m"
      }
#line 1419 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1419 "error_util.m"
  }
#line 1419 "error_util.m"
}

#line 1293 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1293 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1293 "error_util.m"
{
#line 1293 "error_util.m"
  {
#line 1293 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1293 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1293 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1293 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1293 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6076 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1293 "error_util.m"
    else
#line 1293 "error_util.m"
      {
#line 1293 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1293 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1293 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1293 "error_util.m"
        {
#line 1293 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 6102 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1293 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1293 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1293 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1293 "error_util.m"
        else
#line 1293 "error_util.m"
          {
#line 1293 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1293 "error_util.m"
            {
#line 1293 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 6122 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1293 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1293 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1293 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1293 "error_util.m"
            else
#line 1293 "error_util.m"
              {
#line 1293 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1293 "error_util.m"
                return;
              }
#line 1293 "error_util.m"
          }
#line 1293 "error_util.m"
      }
#line 1293 "error_util.m"
  }
#line 1293 "error_util.m"
}

#line 1293 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1293 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1293 "error_util.m"
{
#line 1293 "error_util.m"
  {
#line 1293 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1293 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1293 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1293 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1293 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1293 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1293 "error_util.m"
    else
#line 1293 "error_util.m"
      {
#line 1293 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1293 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1293 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 6189 "parse_tree.error_util.c"
        {
#line 6191 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1293 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1293 "error_util.m"
          {
#line 6198 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1293 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6202 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1293 "error_util.m"
          }
#line 1293 "error_util.m"
      }
#line 1293 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1293 "error_util.m"
  }
#line 1293 "error_util.m"
}

#line 104 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0(
#line 104 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 104 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 104 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 104 "error_util.m"
{
#line 104 "error_util.m"
  {
#line 104 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 104 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 104 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 104 "error_util.m"
    {
#line 104 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 104 "error_util.m"
      return;
    }
#line 104 "error_util.m"
  }
#line 104 "error_util.m"
}

#line 104 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0(
#line 104 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 104 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 104 "error_util.m"
{
#line 6256 "parse_tree.error_util.c"
  {
#line 6258 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6261 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6263 "parse_tree.error_util.c"
  }
#line 104 "error_util.m"
}

#line 148 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
#line 148 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 148 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 148 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 148 "error_util.m"
{
#line 148 "error_util.m"
  {
#line 148 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 148 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 148 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 148 "error_util.m"
    {
#line 148 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 148 "error_util.m"
      return;
    }
#line 148 "error_util.m"
  }
#line 148 "error_util.m"
}

#line 148 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 148 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 148 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 148 "error_util.m"
{
#line 6309 "parse_tree.error_util.c"
  {
#line 6311 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6314 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6316 "parse_tree.error_util.c"
  }
#line 148 "error_util.m"
}

#line 817 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 817 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 817 "error_util.m"
{
#line 817 "error_util.m"
  {
#line 817 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 817 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 817 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 817 "error_util.m"
    {
#line 817 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 817 "error_util.m"
      return;
    }
#line 817 "error_util.m"
  }
#line 817 "error_util.m"
}

#line 817 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 817 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 817 "error_util.m"
{
#line 6362 "parse_tree.error_util.c"
  {
#line 6364 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6367 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6369 "parse_tree.error_util.c"
  }
#line 817 "error_util.m"
}

#line 821 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 821 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 821 "error_util.m"
{
#line 821 "error_util.m"
  {
#line 821 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 821 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 821 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 821 "error_util.m"
    {
#line 821 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 821 "error_util.m"
      return;
    }
#line 821 "error_util.m"
  }
#line 821 "error_util.m"
}

#line 821 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 821 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 821 "error_util.m"
{
#line 6415 "parse_tree.error_util.c"
  {
#line 6417 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6420 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6422 "parse_tree.error_util.c"
  }
#line 821 "error_util.m"
}

#line 951 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 951 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 951 "error_util.m"
{
#line 951 "error_util.m"
  {
#line 951 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 951 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 951 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 951 "error_util.m"
    {
#line 951 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 951 "error_util.m"
      return;
    }
#line 951 "error_util.m"
  }
#line 951 "error_util.m"
}

#line 951 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 951 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 951 "error_util.m"
{
#line 6468 "parse_tree.error_util.c"
  {
#line 6470 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6473 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6475 "parse_tree.error_util.c"
  }
#line 951 "error_util.m"
}

#line 375 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 375 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 375 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 375 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 375 "error_util.m"
{
#line 375 "error_util.m"
  {
#line 375 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 375 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 375 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 375 "error_util.m"
    {
#line 375 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 375 "error_util.m"
      return;
    }
#line 375 "error_util.m"
  }
#line 375 "error_util.m"
}

#line 375 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 375 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 375 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 375 "error_util.m"
{
#line 375 "error_util.m"
  {
#line 375 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 375 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 375 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 375 "error_util.m"
    {
#line 375 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 375 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 375 "error_util.m"
  }
#line 375 "error_util.m"
}

#line 286 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 286 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 286 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 286 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 286 "error_util.m"
{
#line 286 "error_util.m"
  {
#line 286 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 286 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_43 == parse_tree__error_util__CastY_44);
#line 286 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6566 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 286 "error_util.m"
        {
#line 286 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 286 "error_util.m"
        {
#line 286 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 286 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6591 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 286 "error_util.m"
        else
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 286 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6601 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 286 "error_util.m"
            else
#line 286 "error_util.m"
              {
#line 286 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 286 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_8_8;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_10_10;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_28_28;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__prog_data____Compare____cons_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_36_36;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_12_12;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_42_42;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_41_41, parse_tree__error_util__V_42_42);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_40_40;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_14_14;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_32_32;
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_63_63;
#line 286 "error_util.m"
                    MR_Integer parse_tree__error_util__V_64_64;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        parse_tree__error_util__V_63_63 = (MR_Integer) parse_tree__error_util__V_31_31;
#line 286 "error_util.m"
                        parse_tree__error_util__V_64_64 = (MR_Integer) parse_tree__error_util__V_32_32;
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_63_63, parse_tree__error_util__V_64_64);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_38_38;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_16_16;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_34_34;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_18_18;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_24_24;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_26_26;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_Word parse_tree__error_util__V_30_30;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_20_20;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 286 "error_util.m"
                    MR_String parse_tree__error_util__V_22_22;

#line 286 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 286 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                      {
#line 286 "error_util.m"
                        parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 286 "error_util.m"
                        {
#line 286 "error_util.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                        }
#line 286 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
                      }
#line 286 "error_util.m"
                  }
#line 286 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 286 "error_util.m"
                else
#line 286 "error_util.m"
                  {
#line 286 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 286 "error_util.m"
                    return;
                  }
#line 286 "error_util.m"
              }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
  }
#line 286 "error_util.m"
}

#line 286 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 286 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 286 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 286 "error_util.m"
{
#line 286 "error_util.m"
  {
#line 286 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7230 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7236 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7242 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 7248 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 7254 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 7260 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 7266 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7272 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 7278 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 20;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 7284 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7290 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 7296 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 7302 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7308 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 7314 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7320 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 7326 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 7332 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 7338 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 7344 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 286 "error_util.m"
    else
#line 7348 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 286 "error_util.m"
  }
#line 286 "error_util.m"
}

#line 286 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 286 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 286 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 286 "error_util.m"
{
#line 286 "error_util.m"
  {
#line 286 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_45 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_46 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_45 == parse_tree__error_util__CastY_46);
#line 286 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_42 == parse_tree__error_util__CastX_41);
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_38 == parse_tree__error_util__CastX_37);
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_4_4;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7443 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_6_6;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7468 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_26_26;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7493 "parse_tree.error_util.c"
            {
#line 7495 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
            }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_34_34;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7521 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7546 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_7_7 == parse_tree__error_util__V_8_8);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_44_44;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7571 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_43_43 == parse_tree__error_util__V_44_44);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_40_40;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7596 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_39_39 == parse_tree__error_util__V_40_40);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Integer parse_tree__error_util__V_10_10;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7621 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7646 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == parse_tree__error_util__V_30_30);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_36_36;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7671 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_14_14;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7696 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7721 "parse_tree.error_util.c"
            {
#line 7723 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
            }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_16_16;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7749 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_22_22;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7774 "parse_tree.error_util.c"
            {
#line 7776 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
            }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7802 "parse_tree.error_util.c"
            {
#line 7804 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
            }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7830 "parse_tree.error_util.c"
            {
#line 7832 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
            }
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_18_18;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7858 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    else
#line 286 "error_util.m"
      {
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "error_util.m"
        MR_String parse_tree__error_util__V_20_20;

#line 286 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 286 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 286 "error_util.m"
          {
#line 286 "error_util.m"
            parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7881 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 286 "error_util.m"
          }
#line 286 "error_util.m"
      }
#line 286 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 286 "error_util.m"
  }
#line 286 "error_util.m"
}

#line 669 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 669 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 669 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 669 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 669 "error_util.m"
{
#line 669 "error_util.m"
  {
#line 669 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 669 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 669 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 669 "error_util.m"
    {
#line 669 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[10], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 669 "error_util.m"
      return;
    }
#line 669 "error_util.m"
  }
#line 669 "error_util.m"
}

#line 669 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 669 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 669 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 669 "error_util.m"
{
#line 669 "error_util.m"
  {
#line 669 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 669 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 669 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 669 "error_util.m"
    {
#line 669 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[10], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 669 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 669 "error_util.m"
  }
#line 669 "error_util.m"
}

#line 67 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0(
#line 67 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 67 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 67 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 67 "error_util.m"
{
#line 67 "error_util.m"
  {
#line 67 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 67 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 67 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 67 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 67 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 7980 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "error_util.m"
    else
#line 67 "error_util.m"
      {
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 67 "error_util.m"
        {
#line 67 "error_util.m"
          parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_10_10, parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
        }
#line 8006 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 67 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 67 "error_util.m"
        else
#line 67 "error_util.m"
          {
#line 67 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 67 "error_util.m"
            {
#line 67 "error_util.m"
              parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 8026 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 67 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 67 "error_util.m"
            else
#line 67 "error_util.m"
              {
#line 67 "error_util.m"
                {
#line 67 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
#line 67 "error_util.m"
                  return;
                }
#line 67 "error_util.m"
              }
#line 67 "error_util.m"
          }
#line 67 "error_util.m"
      }
#line 67 "error_util.m"
  }
#line 67 "error_util.m"
}

#line 67 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0(
#line 67 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 67 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 67 "error_util.m"
{
#line 67 "error_util.m"
  {
#line 67 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 67 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 67 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 67 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 67 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 67 "error_util.m"
    else
#line 67 "error_util.m"
      {
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_11_11;
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 8099 "parse_tree.error_util.c"
        {
#line 8101 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          {
#line 8108 "parse_tree.error_util.c"
            {
#line 8110 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              {
#line 8117 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[8];
#line 8119 "parse_tree.error_util.c"
                {
#line 8121 "parse_tree.error_util.c"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_11_11, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_8_8)));
                }
#line 67 "error_util.m"
              }
#line 67 "error_util.m"
          }
#line 67 "error_util.m"
      }
#line 67 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 67 "error_util.m"
  }
#line 67 "error_util.m"
}

#line 74 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0(
#line 74 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 74 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 74 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 74 "error_util.m"
{
#line 74 "error_util.m"
  {
#line 74 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 74 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 74 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 74 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 74 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8161 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
      else
#line 8185 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
      else
#line 8209 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
      else
#line 74 "error_util.m"
      if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 74 "error_util.m"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
      else
#line 8233 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
      {
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 74 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8250 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
        else
#line 74 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8256 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
        else
#line 74 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8262 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
        else
#line 74 "error_util.m"
          {
#line 74 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 74 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 74 "error_util.m"
            MR_Word parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 74 "error_util.m"
            MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 74 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 74 "error_util.m"
            MR_Integer parse_tree__error_util__V_49_49 = (MR_Integer) parse_tree__error_util__V_48_48;
#line 74 "error_util.m"
            MR_Integer parse_tree__error_util__V_50_50 = (MR_Integer) parse_tree__error_util__V_32_32;

#line 74 "error_util.m"
            {
#line 74 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_36_36, parse_tree__error_util__V_49_49, parse_tree__error_util__V_50_50);
            }
#line 8288 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 74 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 74 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_36_36;
#line 74 "error_util.m"
            else
#line 74 "error_util.m"
              {
#line 74 "error_util.m"
                MR_Word parse_tree__error_util__V_37_37;
#line 74 "error_util.m"
                MR_Integer parse_tree__error_util__V_51_51 = (MR_Integer) parse_tree__error_util__V_47_47;
#line 74 "error_util.m"
                MR_Integer parse_tree__error_util__V_52_52 = (MR_Integer) parse_tree__error_util__V_33_33;

#line 74 "error_util.m"
                {
#line 74 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_37_37, parse_tree__error_util__V_51_51, parse_tree__error_util__V_52_52);
                }
#line 8312 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 74 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 74 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_37_37;
#line 74 "error_util.m"
                else
#line 74 "error_util.m"
                  {
#line 74 "error_util.m"
                    MR_Word parse_tree__error_util__V_38_38;

#line 74 "error_util.m"
                    {
#line 74 "error_util.m"
                      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_38_38, parse_tree__error_util__V_46_46, parse_tree__error_util__V_34_34);
                    }
#line 8332 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_38_38 == (MR_Integer) 0);
#line 74 "error_util.m"
                    parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 74 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_38_38;
#line 74 "error_util.m"
                    else
#line 74 "error_util.m"
                      {
#line 74 "error_util.m"
                        {
#line 74 "error_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
#line 74 "error_util.m"
                          return;
                        }
#line 74 "error_util.m"
                      }
#line 74 "error_util.m"
                  }
#line 74 "error_util.m"
              }
#line 74 "error_util.m"
          }
#line 74 "error_util.m"
      }
#line 74 "error_util.m"
  }
#line 74 "error_util.m"
}

#line 74 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0(
#line 74 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 74 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 74 "error_util.m"
{
#line 74 "error_util.m"
  {
#line 74 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 74 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 74 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 74 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_17 == parse_tree__error_util__CastY_18);
#line 74 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 74 "error_util.m"
      {
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 74 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 74 "error_util.m"
      }
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 74 "error_util.m"
      {
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 74 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 74 "error_util.m"
      }
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 74 "error_util.m"
      {
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 74 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 74 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 74 "error_util.m"
      }
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
      {
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_19_19;
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13;
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15;
#line 74 "error_util.m"
        MR_Word parse_tree__error_util__V_16_16;

#line 74 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 74 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
          {
#line 74 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 74 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 74 "error_util.m"
            parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 74 "error_util.m"
            parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 8472 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 74 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
              {
#line 8478 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 74 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                  {
#line 8484 "parse_tree.error_util.c"
                    {
#line 8486 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                    }
#line 74 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                      {
#line 8493 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 8495 "parse_tree.error_util.c"
                        {
#line 8497 "parse_tree.error_util.c"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_19_19, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                        }
#line 74 "error_util.m"
                      }
#line 74 "error_util.m"
                  }
#line 74 "error_util.m"
              }
#line 74 "error_util.m"
          }
#line 74 "error_util.m"
      }
#line 74 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 74 "error_util.m"
  }
#line 74 "error_util.m"
}

#line 108 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0(
#line 108 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 108 "error_util.m"
{
#line 108 "error_util.m"
  {
#line 108 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 108 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 108 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8541 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 108 "error_util.m"
        {
#line 108 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 108 "error_util.m"
        {
#line 108 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 8566 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8576 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "error_util.m"
            else
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "error_util.m"
                    MR_Word parse_tree__error_util__V_8_8;
#line 108 "error_util.m"
                    MR_Integer parse_tree__error_util__V_15_15;
#line 108 "error_util.m"
                    MR_Integer parse_tree__error_util__V_16_16;

#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 108 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
                      {
#line 108 "error_util.m"
                        parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "error_util.m"
                        parse_tree__error_util__V_15_15 = (MR_Integer) parse_tree__error_util__V_7_7;
#line 108 "error_util.m"
                        parse_tree__error_util__V_16_16 = (MR_Integer) parse_tree__error_util__V_8_8;
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                        }
#line 108 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                      }
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "error_util.m"
                    MR_Word parse_tree__error_util__V_10_10;
#line 108 "error_util.m"
                    MR_Integer parse_tree__error_util__V_17_17;
#line 108 "error_util.m"
                    MR_Integer parse_tree__error_util__V_18_18;

#line 108 "error_util.m"
                    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 108 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
                      {
#line 108 "error_util.m"
                        parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "error_util.m"
                        parse_tree__error_util__V_17_17 = (MR_Integer) parse_tree__error_util__V_9_9;
#line 108 "error_util.m"
                        parse_tree__error_util__V_18_18 = (MR_Integer) parse_tree__error_util__V_10_10;
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                        }
#line 108 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                      }
#line 108 "error_util.m"
                  }
#line 108 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                  {
#line 108 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 108 "error_util.m"
                    return;
                  }
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
  }
#line 108 "error_util.m"
}

#line 108 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____error_phase_0_0(
#line 108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 108 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 108 "error_util.m"
{
#line 108 "error_util.m"
  {
#line 108 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8877 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8883 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8889 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8895 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8901 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8907 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8913 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8919 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8925 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8931 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8937 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8943 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8949 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8955 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8961 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8967 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 108 "error_util.m"
    else
#line 8971 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 108 "error_util.m"
  }
#line 108 "error_util.m"
}

#line 108 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0(
#line 108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 108 "error_util.m"
{
#line 108 "error_util.m"
  {
#line 108 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_37 == parse_tree__error_util__CastY_38);
#line 108 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_29 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_30 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_30 == parse_tree__error_util__CastX_29);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_31 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_32 == parse_tree__error_util__CastX_31);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_25 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_26 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_26 == parse_tree__error_util__CastX_25);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_20 == parse_tree__error_util__CastX_19);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_33 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_34 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_34 == parse_tree__error_util__CastX_33);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_22 == parse_tree__error_util__CastX_21);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_18 == parse_tree__error_util__CastX_17);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_27 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_28 == parse_tree__error_util__CastX_27);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
        MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
        MR_Word parse_tree__error_util__V_16_16;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9246 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_15_15 == parse_tree__error_util__V_16_16);
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
      {
#line 108 "error_util.m"
        MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 108 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 108 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9269 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_23_23 == parse_tree__error_util__V_24_24);
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 108 "error_util.m"
  }
#line 108 "error_util.m"
}

#line 170 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 170 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 170 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 170 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 170 "error_util.m"
{
#line 170 "error_util.m"
  {
#line 170 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 170 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_98 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 170 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_99 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 170 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_98 == parse_tree__error_util__CastY_99);
#line 170 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_121_121)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 170 "error_util.m"
              return;
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_28_28;
#line 170 "error_util.m"
            MR_Integer parse_tree__error_util__V_131_131 = (MR_Integer) parse_tree__error_util__V_124_124;
#line 170 "error_util.m"
            MR_Integer parse_tree__error_util__V_132_132 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_131_131, parse_tree__error_util__V_132_132);
            }
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 170 "error_util.m"
            else
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29;
#line 170 "error_util.m"
                MR_Integer parse_tree__error_util__V_133_133 = (MR_Integer) parse_tree__error_util__V_123_123;
#line 170 "error_util.m"
                MR_Integer parse_tree__error_util__V_134_134 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 170 "error_util.m"
                {
#line 170 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_29_29, parse_tree__error_util__V_133_133, parse_tree__error_util__V_134_134);
                }
#line 170 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 170 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 170 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 170 "error_util.m"
                else
#line 170 "error_util.m"
                  {
#line 170 "error_util.m"
                    {
#line 170 "error_util.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_122_122)), ((MR_Box) (parse_tree__error_util__V_27_27)));
#line 170 "error_util.m"
                      return;
                    }
#line 170 "error_util.m"
                  }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_56_56;
#line 170 "error_util.m"
            MR_Integer parse_tree__error_util__V_135_135 = (MR_Integer) parse_tree__error_util__V_130_130;
#line 170 "error_util.m"
            MR_Integer parse_tree__error_util__V_136_136 = (MR_Integer) parse_tree__error_util__V_54_54;

#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_56_56, parse_tree__error_util__V_135_135, parse_tree__error_util__V_136_136);
            }
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_56_56 == (MR_Integer) 0);
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_56_56;
#line 170 "error_util.m"
            else
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                {
#line 170 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_129_129)), ((MR_Box) (parse_tree__error_util__V_55_55)));
#line 170 "error_util.m"
                  return;
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Box parse_tree__error_util__V_125_125 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_103_103;
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_104_104;
#line 170 "error_util.m"
            MR_Box parse_tree__error_util__V_97_97 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 9585 "parse_tree.error_util.c"
            {
#line 9587 "parse_tree.error_util.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_126_126, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_103_103);
            }
#line 9590 "parse_tree.error_util.c"
            {
#line 9592 "parse_tree.error_util.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_101, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_104_104);
            }
#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_103_103, parse_tree__error_util__TypeInfo_104_104, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_125_125, parse_tree__error_util__V_97_97);
#line 170 "error_util.m"
              return;
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "error_util.m"
        else
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "error_util.m"
            MR_Word parse_tree__error_util__V_80_80;

#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_80_80, ((MR_Box) (parse_tree__error_util__V_128_128)), ((MR_Box) (parse_tree__error_util__V_78_78)));
            }
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_80_80 == (MR_Integer) 0);
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_80_80;
#line 170 "error_util.m"
            else
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                {
#line 170 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_127_127)), ((MR_Box) (parse_tree__error_util__V_79_79)));
#line 170 "error_util.m"
                  return;
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
  }
#line 170 "error_util.m"
}

#line 170 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 170 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 170 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 170 "error_util.m"
{
#line 170 "error_util.m"
  {
#line 170 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 170 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 170 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 170 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_21 == parse_tree__error_util__CastY_22);
#line 170 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4;

#line 170 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 170 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9732 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 170 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 170 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 170 "error_util.m"
            parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 170 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              {
#line 170 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 170 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
                  {
#line 9788 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 170 "error_util.m"
                    {
#line 170 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                    }
#line 170 "error_util.m"
                  }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_32_32;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;

#line 170 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 170 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_13_13);
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              {
#line 9836 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_32_32 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 170 "error_util.m"
                {
#line 170 "error_util.m"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_32_32, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_24;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 170 "error_util.m"
        MR_Box parse_tree__error_util__V_19_19 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 170 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20;
#line 170 "error_util.m"
        MR_Integer parse_tree__error_util__PolyConst1_25;

#line 170 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 170 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            parse_tree__error_util__TypeClassInfo_for_print_anything_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 9880 "parse_tree.error_util.c"
            parse_tree__error_util__PolyConst1_25 = (MR_Integer) 1;
#line 9882 "parse_tree.error_util.c"
            {
#line 9884 "parse_tree.error_util.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_23, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_26_26);
            }
#line 9887 "parse_tree.error_util.c"
            {
#line 9889 "parse_tree.error_util.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_24, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_27_27);
            }
#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, parse_tree__error_util__TypeInfo_27_27, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
            }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    else
#line 170 "error_util.m"
      {
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_31_31;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_17_17;
#line 170 "error_util.m"
        MR_Word parse_tree__error_util__V_18_18;

#line 170 "error_util.m"
        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 170 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
          {
#line 170 "error_util.m"
            parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "error_util.m"
            parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 9928 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 170 "error_util.m"
            {
#line 170 "error_util.m"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_15_15)), ((MR_Box) (parse_tree__error_util__V_17_17)));
            }
#line 170 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 170 "error_util.m"
              {
#line 9939 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_31_31 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 170 "error_util.m"
                {
#line 170 "error_util.m"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_31_31, ((MR_Box) (parse_tree__error_util__V_16_16)), ((MR_Box) (parse_tree__error_util__V_18_18)));
                }
#line 170 "error_util.m"
              }
#line 170 "error_util.m"
          }
#line 170 "error_util.m"
      }
#line 170 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 170 "error_util.m"
  }
#line 170 "error_util.m"
}

#line 152 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 152 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 152 "error_util.m"
{
#line 152 "error_util.m"
  {
#line 152 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 152 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 152 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 152 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 152 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9983 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "error_util.m"
    else
#line 152 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 152 "error_util.m"
      {
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 152 "error_util.m"
        MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 152 "error_util.m"
          {
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "error_util.m"
            MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_29_29;

#line 152 "error_util.m"
            {
#line 152 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
            }
#line 10020 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 152 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 152 "error_util.m"
            else
#line 152 "error_util.m"
              {
#line 152 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;
#line 152 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 152 "error_util.m"
                MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 152 "error_util.m"
                {
#line 152 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                }
#line 10044 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 152 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 152 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 152 "error_util.m"
                else
#line 152 "error_util.m"
                  {
#line 152 "error_util.m"
                    MR_Word parse_tree__error_util__V_31_31;

#line 152 "error_util.m"
                    {
#line 152 "error_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                    }
#line 10064 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 152 "error_util.m"
                    parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 152 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 152 "error_util.m"
                    else
#line 152 "error_util.m"
                      {
#line 152 "error_util.m"
                        {
#line 152 "error_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
#line 152 "error_util.m"
                          return;
                        }
#line 152 "error_util.m"
                      }
#line 152 "error_util.m"
                  }
#line 152 "error_util.m"
              }
#line 152 "error_util.m"
          }
#line 152 "error_util.m"
        else
#line 10093 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 152 "error_util.m"
      }
#line 152 "error_util.m"
    else
#line 152 "error_util.m"
      {
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 10108 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 152 "error_util.m"
        else
#line 152 "error_util.m"
          {
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 152 "error_util.m"
            {
#line 152 "error_util.m"
              mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
            }
#line 10126 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 152 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 152 "error_util.m"
            else
#line 152 "error_util.m"
              {
#line 152 "error_util.m"
                {
#line 152 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 152 "error_util.m"
                  return;
                }
#line 152 "error_util.m"
              }
#line 152 "error_util.m"
          }
#line 152 "error_util.m"
      }
#line 152 "error_util.m"
  }
#line 152 "error_util.m"
}

#line 152 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 152 "error_util.m"
{
#line 152 "error_util.m"
  {
#line 152 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 152 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 152 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 152 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 152 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 152 "error_util.m"
    else
#line 152 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 152 "error_util.m"
      {
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12;
#line 152 "error_util.m"
        MR_Integer parse_tree__error_util__V_13_13;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;

#line 152 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 152 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
          {
#line 152 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "error_util.m"
            parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 10221 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 10223 "parse_tree.error_util.c"
            {
#line 10225 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
            }
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              {
#line 10232 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 152 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                  {
#line 10238 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 152 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                      {
#line 10244 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 10246 "parse_tree.error_util.c"
                        {
#line 10248 "parse_tree.error_util.c"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                        }
#line 152 "error_util.m"
                      }
#line 152 "error_util.m"
                  }
#line 152 "error_util.m"
              }
#line 152 "error_util.m"
          }
#line 152 "error_util.m"
      }
#line 152 "error_util.m"
    else
#line 152 "error_util.m"
      {
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5;
#line 152 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 152 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 152 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
          {
#line 152 "error_util.m"
            parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 10286 "parse_tree.error_util.c"
            {
#line 10288 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
            }
#line 152 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
              {
#line 10295 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 10297 "parse_tree.error_util.c"
                {
#line 10299 "parse_tree.error_util.c"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                }
#line 152 "error_util.m"
              }
#line 152 "error_util.m"
          }
#line 152 "error_util.m"
      }
#line 152 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 152 "error_util.m"
  }
#line 152 "error_util.m"
}

#line 1569 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1569 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1569 "error_util.m"
{
#line 1569 "error_util.m"
  {
#line 1569 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1569 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1569 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1569 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1569 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 10339 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1569 "error_util.m"
    else
#line 1569 "error_util.m"
      {
#line 1569 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1569 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1569 "error_util.m"
        {
#line 1569 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 10361 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1569 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1569 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1569 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1569 "error_util.m"
        else
#line 1569 "error_util.m"
          {
#line 1569 "error_util.m"
            {
#line 1569 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1569 "error_util.m"
              return;
            }
#line 1569 "error_util.m"
          }
#line 1569 "error_util.m"
      }
#line 1569 "error_util.m"
  }
#line 1569 "error_util.m"
}

#line 1569 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1569 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1569 "error_util.m"
{
#line 1569 "error_util.m"
  {
#line 1569 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1569 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1569 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1569 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1569 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1569 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1569 "error_util.m"
    else
#line 1569 "error_util.m"
      {
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1569 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1569 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1569 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 10428 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1569 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1569 "error_util.m"
          {
#line 10434 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 10436 "parse_tree.error_util.c"
            {
#line 10438 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1569 "error_util.m"
          }
#line 1569 "error_util.m"
      }
#line 1569 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1569 "error_util.m"
  }
#line 1569 "error_util.m"
}

#line 825 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 825 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 825 "error_util.m"
{
#line 825 "error_util.m"
  {
#line 825 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 825 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 825 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 825 "error_util.m"
    {
#line 825 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 825 "error_util.m"
      return;
    }
#line 825 "error_util.m"
  }
#line 825 "error_util.m"
}

#line 825 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 825 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 825 "error_util.m"
{
#line 825 "error_util.m"
  {
#line 825 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 825 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 825 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 825 "error_util.m"
    {
#line 825 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 825 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 825 "error_util.m"
  }
#line 825 "error_util.m"
}

#line 99 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0(
#line 99 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 99 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 99 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 99 "error_util.m"
{
#line 99 "error_util.m"
  {
#line 99 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 99 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 99 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 99 "error_util.m"
    {
#line 99 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 99 "error_util.m"
      return;
    }
#line 99 "error_util.m"
  }
#line 99 "error_util.m"
}

#line 99 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0(
#line 99 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 99 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 99 "error_util.m"
{
#line 10555 "parse_tree.error_util.c"
  {
#line 10557 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 10560 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 10562 "parse_tree.error_util.c"
  }
#line 99 "error_util.m"
}

#line 1659 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1659 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1659 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1659 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1659 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1659 "error_util.m"
{
#line 1662 "error_util.m"
  while (MR_TRUE)
#line 1662 "error_util.m"
    {
#line 1662 "error_util.m"
      /* tailcall optimized into a loop */
#line 1662 "error_util.m"
      {
#line 1662 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1662 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1662 "error_util.m"
          {
#line 1662 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1662 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1662 "error_util.m"
          }
#line 1662 "error_util.m"
        else
#line 1663 "error_util.m"
          {
#line 1663 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1663 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1663 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1663 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1663 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1664 "error_util.m"
            {
#line 1664 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1665 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1665 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1666 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1669 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1667 "error_util.m"
              {
#line 1667 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1667 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1667 "error_util.m"
                {
#line 1667 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1667 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1667 "error_util.m"
                }
#line 1667 "error_util.m"
                {
#line 1667 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1668 "error_util.m"
                /* direct tailcall eliminated */
#line 1668 "error_util.m"
                {
#line 1668 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1668 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1668 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1668 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1668 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1668 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1668 "error_util.m"
                }
#line 1668 "error_util.m"
                continue;
#line 1667 "error_util.m"
              }
#line 1669 "error_util.m"
            else
#line 1670 "error_util.m"
              {
#line 1670 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1671 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1670 "error_util.m"
              }
#line 1663 "error_util.m"
          }
#line 1662 "error_util.m"
      }
#line 1662 "error_util.m"
      break;
#line 1662 "error_util.m"
    }
#line 1659 "error_util.m"
}

#line 1634 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1634 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1634 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1634 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1634 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1634 "error_util.m"
{
#line 1639 "error_util.m"
  {
#line 1639 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1639 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1640 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1639 "error_util.m"
    else
#line 1642 "error_util.m"
      {
#line 1642 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1642 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1642 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1642 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1642 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1654 "error_util.m"
        {
#line 1654 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1655 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1655 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1656 "error_util.m"
        {
#line 1656 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1656 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1656 "error_util.m"
        }
#line 1656 "error_util.m"
        {
#line 1656 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1645 "error_util.m"
        {
#line 1645 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1645 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1645 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1645 "error_util.m"
        }
#line 1646 "error_util.m"
        {
#line 1646 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1647 "error_util.m"
        {
#line 1647 "error_util.m"
          MR_Word base;
#line 1647 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1647 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1647 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1647 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1647 "error_util.m"
        }
#line 1642 "error_util.m"
      }
#line 1639 "error_util.m"
  }
#line 1634 "error_util.m"
}

#line 1586 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1586 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1586 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1586 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1586 "error_util.m"
{
#line 1592 "error_util.m"
  {
#line 1592 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1592 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1593 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1592 "error_util.m"
    else
#line 1595 "error_util.m"
      {
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1595 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1595 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1595 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1595 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1595 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1600 "error_util.m"
        if ((parse_tree__error_util__TreatAsFirst_6 == (MR_Integer) 1))
#line 1602 "error_util.m"
          parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1600 "error_util.m"
        else
#line 1598 "error_util.m"
          {
#line 1599 "error_util.m"
            parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1598 "error_util.m"
          }
#line 1604 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1606 "error_util.m"
        {
#line 1606 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1606 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1606 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1606 "error_util.m"
        }
#line 10887 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1607 "error_util.m"
        {
#line 1607 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1612 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1609 "error_util.m"
          {
#line 1610 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1611 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1609 "error_util.m"
          }
#line 1612 "error_util.m"
        else
#line 1613 "error_util.m"
          {
#line 1613 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1613 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1614 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1624 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1625 "error_util.m"
              {
#line 1625 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1626 "error_util.m"
                {
#line 1626 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1626 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1626 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1626 "error_util.m"
                }
#line 1626 "error_util.m"
                {
#line 1626 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1626 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1626 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1626 "error_util.m"
                }
#line 1625 "error_util.m"
              }
#line 1624 "error_util.m"
            else
#line 1616 "error_util.m"
              {
#line 1616 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1616 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1616 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1616 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1616 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1616 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1616 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1616 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1616 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1654 "error_util.m"
                {
#line 1654 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1655 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1655 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1656 "error_util.m"
                {
#line 1656 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1656 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1656 "error_util.m"
                }
#line 1656 "error_util.m"
                {
#line 1656 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1619 "error_util.m"
                {
#line 1619 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1619 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1619 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1619 "error_util.m"
                }
#line 1621 "error_util.m"
                {
#line 1621 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1623 "error_util.m"
                {
#line 1623 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1623 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1623 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1623 "error_util.m"
                }
#line 1616 "error_util.m"
              }
#line 1613 "error_util.m"
          }
#line 1629 "error_util.m"
        {
#line 1629 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1631 "error_util.m"
        {
#line 1631 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1631 "error_util.m"
        {
#line 1631 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1595 "error_util.m"
      }
#line 1592 "error_util.m"
  }
#line 1586 "error_util.m"
}

#line 1554 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1554 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1554 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1554 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1554 "error_util.m"
{
#line 1563 "error_util.m"
  while (MR_TRUE)
#line 1563 "error_util.m"
    {
#line 1563 "error_util.m"
      /* tailcall optimized into a loop */
#line 1563 "error_util.m"
      {
#line 1563 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1563 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1563 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1557 "error_util.m"
        {
#line 1557 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1563 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1560 "error_util.m"
          {
#line 1558 "error_util.m"
            {
#line 1558 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1560 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1559 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1560 "error_util.m"
            else
#line 1561 "error_util.m"
              {
#line 1561 "error_util.m"
                /* direct tailcall eliminated */
#line 1561 "error_util.m"
                {
#line 1561 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1561 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1561 "error_util.m"
                }
#line 1561 "error_util.m"
                continue;
#line 1561 "error_util.m"
              }
#line 1560 "error_util.m"
          }
#line 1563 "error_util.m"
        else
#line 1564 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1563 "error_util.m"
      }
#line 1563 "error_util.m"
      break;
#line 1563 "error_util.m"
    }
#line 1554 "error_util.m"
}

#line 1544 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1544 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1544 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1544 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1544 "error_util.m"
{
#line 1546 "error_util.m"
  while (MR_TRUE)
#line 1546 "error_util.m"
    {
#line 1546 "error_util.m"
      /* tailcall optimized into a loop */
#line 1546 "error_util.m"
      {
#line 1546 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1546 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1546 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1547 "error_util.m"
        {
#line 1547 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1546 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1546 "error_util.m"
          {
#line 1548 "error_util.m"
            {
#line 1548 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1550 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1549 "error_util.m"
              {
#line 1549 "error_util.m"
                /* direct tailcall eliminated */
#line 1549 "error_util.m"
                {
#line 1549 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1549 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1549 "error_util.m"
                }
#line 1549 "error_util.m"
                continue;
#line 1549 "error_util.m"
              }
#line 1550 "error_util.m"
            else
#line 1551 "error_util.m"
              {
#line 1551 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1551 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1551 "error_util.m"
              }
#line 1546 "error_util.m"
          }
#line 1546 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1546 "error_util.m"
      }
#line 1546 "error_util.m"
      break;
#line 1546 "error_util.m"
    }
#line 1544 "error_util.m"
}

#line 1531 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1531 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1531 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1531 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1531 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1531 "error_util.m"
{
#line 1540 "error_util.m"
  while (MR_TRUE)
#line 1540 "error_util.m"
    {
#line 1540 "error_util.m"
      /* tailcall optimized into a loop */
#line 1540 "error_util.m"
      {
#line 1540 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1540 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1535 "error_util.m"
        {
#line 1535 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1540 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1536 "error_util.m"
          {
#line 1536 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1536 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1536 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1536 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1536 "error_util.m"
            {
#line 1536 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1537 "error_util.m"
            {
#line 1537 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1538 "error_util.m"
            {
#line 1538 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1538 "error_util.m"
            }
#line 1538 "error_util.m"
            {
#line 1538 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1538 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1538 "error_util.m"
            }
#line 1538 "error_util.m"
            /* direct tailcall eliminated */
#line 1538 "error_util.m"
            {
#line 1538 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1538 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1538 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1538 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1538 "error_util.m"
            }
#line 1538 "error_util.m"
            continue;
#line 1536 "error_util.m"
          }
#line 1540 "error_util.m"
        else
#line 1541 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1540 "error_util.m"
      }
#line 1540 "error_util.m"
      break;
#line 1540 "error_util.m"
    }
#line 1531 "error_util.m"
}

#line 1526 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1526 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1526 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1526 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1526 "error_util.m"
{
#line 1528 "error_util.m"
  {
#line 1528 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1529 "error_util.m"
    {
#line 1529 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1529 "error_util.m"
      return;
    }
#line 1528 "error_util.m"
  }
#line 1526 "error_util.m"
}

#line 1521 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1521 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1521 "error_util.m"
{
#line 1523 "error_util.m"
  {
#line 1523 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1523 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1523 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1523 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1524 "error_util.m"
    {
#line 1524 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1524 "error_util.m"
    {
#line 1524 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1524 "error_util.m"
    {
#line 1524 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1524 "error_util.m"
    {
#line 1524 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1523 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1523 "error_util.m"
  }
#line 1521 "error_util.m"
}

#line 1516 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1516 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1516 "error_util.m"
{
#line 1518 "error_util.m"
  {
#line 1518 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1518 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1518 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1518 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1519 "error_util.m"
    {
#line 1519 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1518 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1518 "error_util.m"
  }
#line 1516 "error_util.m"
}

#line 1475 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1475 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1475 "error_util.m"
{
#line 1477 "error_util.m"
  {
#line 1477 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1477 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1477 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1477 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1477 "error_util.m"
    else
#line 1478 "error_util.m"
      {
#line 1478 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1478 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1478 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1479 "error_util.m"
        {
#line 1479 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1483 "error_util.m"
        if ((parse_tree__error_util__Head_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1497 "error_util.m"
          if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1496 "error_util.m"
            parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1497 "error_util.m"
          else
#line 1498 "error_util.m"
            {
#line 1498 "error_util.m"
              MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1498 "error_util.m"
              MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1498 "error_util.m"
              MR_String parse_tree__error_util__V_13_13;
#line 1512 "error_util.m"
              MR_Char parse_tree__error_util__First_17;
#line 1512 "error_util.m"
              MR_String parse_tree__error_util__Rest_18;

#line 1507 "error_util.m"
              {
#line 1507 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
              }
#line 1507 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1508 "error_util.m"
                {
#line 1508 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                }
#line 1512 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1510 "error_util.m"
                {
#line 1510 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1510 "error_util.m"
                  {
#line 1510 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                  }
#line 1511 "error_util.m"
                  {
#line 1511 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                  }
#line 1510 "error_util.m"
                }
#line 1512 "error_util.m"
              else
#line 1513 "error_util.m"
                parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1499 "error_util.m"
              {
#line 1499 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1499 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1499 "error_util.m"
              }
#line 1498 "error_util.m"
            }
#line 1483 "error_util.m"
        else
#line 1483 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__Head_3)) == (MR_mktag((MR_Integer) 1))))
#line 1481 "error_util.m"
          {
#line 1481 "error_util.m"
            MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1482 "error_util.m"
            {
#line 1482 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1482 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1482 "error_util.m"
            }
#line 1481 "error_util.m"
          }
#line 1483 "error_util.m"
        else
#line 1484 "error_util.m"
          {
#line 1484 "error_util.m"
            MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1488 "error_util.m"
            if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "error_util.m"
              {
#line 1490 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1490 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1490 "error_util.m"
              }
#line 1488 "error_util.m"
            else
#line 1486 "error_util.m"
              {
#line 1486 "error_util.m"
                MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1486 "error_util.m"
                MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1486 "error_util.m"
                MR_String parse_tree__error_util__V_14_14;

#line 1487 "error_util.m"
                {
#line 1487 "error_util.m"
                  parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                }
#line 1487 "error_util.m"
                {
#line 1487 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1487 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1487 "error_util.m"
                }
#line 1486 "error_util.m"
              }
#line 1484 "error_util.m"
          }
#line 1478 "error_util.m"
      }
#line 1477 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1477 "error_util.m"
  }
#line 1475 "error_util.m"
}

#line 1430 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1430 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1430 "error_util.m"
{
#line 1432 "error_util.m"
  while (MR_TRUE)
#line 1432 "error_util.m"
    {
#line 1432 "error_util.m"
      /* tailcall optimized into a loop */
#line 1432 "error_util.m"
      {
#line 1432 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1432 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1432 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1432 "error_util.m"
        else
#line 1433 "error_util.m"
          {
#line 1433 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1433 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1437 "error_util.m"
            if ((parse_tree__error_util__Word_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1438 "error_util.m"
              {
#line 1438 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1439 "error_util.m"
                {
#line 1439 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1439 "error_util.m"
                {
#line 1439 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1439 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1439 "error_util.m"
                }
#line 1438 "error_util.m"
              }
#line 1437 "error_util.m"
            else
#line 1437 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 1))))
#line 1435 "error_util.m"
              {
#line 1435 "error_util.m"
                MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1435 "error_util.m"
                MR_Word parse_tree__error_util__V_33_33;
#line 1435 "error_util.m"
                MR_Word parse_tree__error_util__V_34_34;

#line 1436 "error_util.m"
                {
#line 1436 "error_util.m"
                  parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1436 "error_util.m"
                }
#line 1436 "error_util.m"
                {
#line 1436 "error_util.m"
                  parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1436 "error_util.m"
                {
#line 1436 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1436 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1436 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1436 "error_util.m"
                }
#line 1435 "error_util.m"
              }
#line 1437 "error_util.m"
            else
#line 1437 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 2))))
#line 1441 "error_util.m"
              {
#line 1441 "error_util.m"
                MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1441 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29;
#line 1441 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;

#line 1442 "error_util.m"
                {
#line 1442 "error_util.m"
                  parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1442 "error_util.m"
                }
#line 1442 "error_util.m"
                {
#line 1442 "error_util.m"
                  parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1442 "error_util.m"
                {
#line 1442 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1442 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1442 "error_util.m"
                }
#line 1441 "error_util.m"
              }
#line 1437 "error_util.m"
            else
#line 1444 "error_util.m"
              {
#line 1444 "error_util.m"
                MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1448 "error_util.m"
                if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1446 "error_util.m"
                  {
#line 1446 "error_util.m"
                    MR_Word parse_tree__error_util__V_27_27;

#line 1447 "error_util.m"
                    {
#line 1447 "error_util.m"
                      parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1447 "error_util.m"
                    }
#line 1447 "error_util.m"
                    {
#line 1447 "error_util.m"
                      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1447 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "error_util.m"
                    }
#line 1446 "error_util.m"
                  }
#line 1448 "error_util.m"
                else
#line 1448 "error_util.m"
                  {
#line 1448 "error_util.m"
                    MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1448 "error_util.m"
                    MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1448 "error_util.m"
                    if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "error_util.m"
                      {
#line 1453 "error_util.m"
                        MR_Word parse_tree__error_util__NewWords_10;
#line 1453 "error_util.m"
                        MR_Word parse_tree__error_util__V_21_21;
#line 1453 "error_util.m"
                        MR_String parse_tree__error_util__V_22_22;
#line 1512 "error_util.m"
                        MR_Char parse_tree__error_util__First_48;
#line 1512 "error_util.m"
                        MR_String parse_tree__error_util__Rest_49;

#line 1507 "error_util.m"
                        {
#line 1507 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                        }
#line 1507 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 1508 "error_util.m"
                          {
#line 1508 "error_util.m"
                            parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                          }
#line 1512 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 1510 "error_util.m"
                          {
#line 1510 "error_util.m"
                            MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1510 "error_util.m"
                            {
#line 1510 "error_util.m"
                              mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                            }
#line 1511 "error_util.m"
                            {
#line 1511 "error_util.m"
                              mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                            }
#line 1510 "error_util.m"
                          }
#line 1512 "error_util.m"
                        else
#line 1513 "error_util.m"
                          parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1458 "error_util.m"
                        {
#line 1458 "error_util.m"
                          parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "error_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1458 "error_util.m"
                        }
#line 1458 "error_util.m"
                        {
#line 1458 "error_util.m"
                          parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1458 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1458 "error_util.m"
                        }
#line 1459 "error_util.m"
                        /* direct tailcall eliminated */
#line 1459 "error_util.m"
                        {
#line 1459 "error_util.m"
                          MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1459 "error_util.m"
                          parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1459 "error_util.m"
                        }
#line 1459 "error_util.m"
                        continue;
#line 1453 "error_util.m"
                      }
#line 1448 "error_util.m"
                    else
#line 1448 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1449 "error_util.m"
                      {
#line 1449 "error_util.m"
                        MR_Word parse_tree__error_util__V_24_24;
#line 1449 "error_util.m"
                        MR_String parse_tree__error_util__V_25_25;
#line 1449 "error_util.m"
                        MR_Word parse_tree__error_util__V_26_26;
#line 1449 "error_util.m"
                        MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1450 "error_util.m"
                        {
#line 1450 "error_util.m"
                          parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                        }
#line 1450 "error_util.m"
                        {
#line 1450 "error_util.m"
                          parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1450 "error_util.m"
                        }
#line 1451 "error_util.m"
                        {
#line 1451 "error_util.m"
                          parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                        }
#line 1451 "error_util.m"
                        {
#line 1451 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1451 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1451 "error_util.m"
                        }
#line 1449 "error_util.m"
                      }
#line 1448 "error_util.m"
                    else
#line 1448 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 2))))
#line 1461 "error_util.m"
                      {
#line 1461 "error_util.m"
                        MR_Word parse_tree__error_util__V_17_17;
#line 1461 "error_util.m"
                        MR_String parse_tree__error_util__V_18_18;
#line 1461 "error_util.m"
                        MR_Word parse_tree__error_util__V_19_19;
#line 1461 "error_util.m"
                        MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1466 "error_util.m"
                        {
#line 1466 "error_util.m"
                          parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                        }
#line 1466 "error_util.m"
                        {
#line 1466 "error_util.m"
                          parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1466 "error_util.m"
                        }
#line 1467 "error_util.m"
                        {
#line 1467 "error_util.m"
                          parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                        }
#line 1467 "error_util.m"
                        {
#line 1467 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1467 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1467 "error_util.m"
                        }
#line 1461 "error_util.m"
                      }
#line 1448 "error_util.m"
                    else
#line 1469 "error_util.m"
                      {
#line 1469 "error_util.m"
                        MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1469 "error_util.m"
                        MR_Word parse_tree__error_util__V_13_13;
#line 1469 "error_util.m"
                        MR_Word parse_tree__error_util__V_14_14;
#line 1469 "error_util.m"
                        MR_String parse_tree__error_util__V_15_15;

#line 1471 "error_util.m"
                        {
#line 1471 "error_util.m"
                          parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                        }
#line 1471 "error_util.m"
                        {
#line 1471 "error_util.m"
                          parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "error_util.m"
                          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1471 "error_util.m"
                        }
#line 1471 "error_util.m"
                        {
#line 1471 "error_util.m"
                          parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1471 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1471 "error_util.m"
                        }
#line 1470 "error_util.m"
                        /* direct tailcall eliminated */
#line 1470 "error_util.m"
                        {
#line 1470 "error_util.m"
                          MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1470 "error_util.m"
                          parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1470 "error_util.m"
                        }
#line 1470 "error_util.m"
                        continue;
#line 1469 "error_util.m"
                      }
#line 1448 "error_util.m"
                  }
#line 1444 "error_util.m"
              }
#line 1433 "error_util.m"
          }
#line 1432 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1432 "error_util.m"
      }
#line 1432 "error_util.m"
      break;
#line 1432 "error_util.m"
    }
#line 1430 "error_util.m"
}

#line 1424 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1424 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1424 "error_util.m"
{
#line 1426 "error_util.m"
  {
#line 1426 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1426 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1426 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1426 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1427 "error_util.m"
    {
#line 1427 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1427 "error_util.m"
    {
#line 1427 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1428 "error_util.m"
    {
#line 1428 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1426 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1426 "error_util.m"
  }
#line 1424 "error_util.m"
}

#line 1317 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1317 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1317 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1317 "error_util.m"
{
#line 1321 "error_util.m"
  while (MR_TRUE)
#line 1321 "error_util.m"
    {
#line 1321 "error_util.m"
      /* tailcall optimized into a loop */
#line 1321 "error_util.m"
      {
#line 1321 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1321 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1321 "error_util.m"
          {
#line 1321 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1321 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1322 "error_util.m"
            {
#line 1322 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1323 "error_util.m"
            {
#line 1323 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1323 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1323 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1323 "error_util.m"
            }
#line 1323 "error_util.m"
            {
#line 1323 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1321 "error_util.m"
          }
#line 1321 "error_util.m"
        else
#line 1325 "error_util.m"
          {
#line 1325 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1325 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1325 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1325 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_50_50;

#line 1329 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1408 "error_util.m"
              {
#line 1408 "error_util.m"
                MR_Word parse_tree__error_util__V_44_44;
#line 1408 "error_util.m"
                MR_Word parse_tree__error_util__Strings_97;

#line 1409 "error_util.m"
                {
#line 1409 "error_util.m"
                  parse_tree__error_util__Strings_97 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1410 "error_util.m"
                {
#line 1410 "error_util.m"
                  parse_tree__error_util__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_44_44, 0) = ((MR_Box) (parse_tree__error_util__Strings_97));
#line 1410 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_44_44, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1410 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_44_44, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1410 "error_util.m"
                }
#line 1410 "error_util.m"
                {
#line 1410 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_44_44)));
                }
#line 1411 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1345 "error_util.m"
              {
#line 1349 "error_util.m"
                if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1348 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1349 "error_util.m"
                else
#line 1350 "error_util.m"
                  {
#line 1351 "error_util.m"
                    {
#line 1351 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1351 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1351 "error_util.m"
                    }
#line 1350 "error_util.m"
                  }
#line 1345 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1345 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1398 "error_util.m"
              {
#line 1398 "error_util.m"
                MR_Word parse_tree__error_util__Strings_38;
#line 1398 "error_util.m"
                MR_Word parse_tree__error_util__V_51_51;

#line 1399 "error_util.m"
                {
#line 1399 "error_util.m"
                  parse_tree__error_util__Strings_38 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1400 "error_util.m"
                {
#line 1400 "error_util.m"
                  parse_tree__error_util__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_51_51, 0) = ((MR_Box) (parse_tree__error_util__Strings_38));
#line 1400 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_51_51, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1400 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_51_51, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1400 "error_util.m"
                }
#line 1400 "error_util.m"
                {
#line 1400 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_51_51)));
                }
#line 1401 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1398 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 1))))
#line 1333 "error_util.m"
              {
#line 1333 "error_util.m"
                MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1333 "error_util.m"
                MR_Word parse_tree__error_util__V_78_78;

#line 1334 "error_util.m"
                {
#line 1334 "error_util.m"
                  parse_tree__error_util__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_78_78, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1334 "error_util.m"
                }
#line 1334 "error_util.m"
                {
#line 1334 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_78_78));
#line 1334 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1334 "error_util.m"
                }
#line 1333 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1333 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 2))))
#line 1336 "error_util.m"
              {
#line 1336 "error_util.m"
                MR_Word parse_tree__error_util__V_76_76;
#line 1336 "error_util.m"
                MR_String parse_tree__error_util__V_77_77;
#line 1336 "error_util.m"
                MR_String parse_tree__error_util__Word_83 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));

#line 1337 "error_util.m"
                {
#line 1337 "error_util.m"
                  parse_tree__error_util__V_77_77 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_83);
                }
#line 1337 "error_util.m"
                {
#line 1337 "error_util.m"
                  parse_tree__error_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_76_76, 0) = ((MR_Box) (parse_tree__error_util__V_77_77));
#line 1337 "error_util.m"
                }
#line 1337 "error_util.m"
                {
#line 1337 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1337 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_76_76));
#line 1337 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1337 "error_util.m"
                }
#line 1336 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1336 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1367 "error_util.m"
              {
#line 1367 "error_util.m"
                MR_Word parse_tree__error_util__ConsId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1367 "error_util.m"
                MR_Word parse_tree__error_util__ConsId_28;
#line 1367 "error_util.m"
                MR_Word parse_tree__error_util__V_65_65;
#line 1367 "error_util.m"
                MR_String parse_tree__error_util__Word_88;

#line 1368 "error_util.m"
                {
#line 1368 "error_util.m"
                  parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_27, &parse_tree__error_util__ConsId_28);
                }
#line 1369 "error_util.m"
                {
#line 1369 "error_util.m"
                  parse_tree__error_util__Word_88 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_28);
                }
#line 1370 "error_util.m"
                {
#line 1370 "error_util.m"
                  parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1370 "error_util.m"
                }
#line 1370 "error_util.m"
                {
#line 1370 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1370 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1370 "error_util.m"
                }
#line 1367 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1367 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1390 "error_util.m"
              {
#line 1390 "error_util.m"
                MR_String parse_tree__error_util__DeclName_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1390 "error_util.m"
                MR_String parse_tree__error_util__V_57_57;
#line 1390 "error_util.m"
                MR_Word parse_tree__error_util__V_59_59;
#line 1390 "error_util.m"
                MR_String parse_tree__error_util__Word_94;

#line 1391 "error_util.m"
                {
#line 1391 "error_util.m"
                  parse_tree__error_util__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_36);
                }
#line 1391 "error_util.m"
                {
#line 1391 "error_util.m"
                  parse_tree__error_util__Word_94 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_57_57);
                }
#line 1392 "error_util.m"
                {
#line 1392 "error_util.m"
                  parse_tree__error_util__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_59_59, 0) = ((MR_Box) (parse_tree__error_util__Word_94));
#line 1392 "error_util.m"
                }
#line 1392 "error_util.m"
                {
#line 1392 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_59_59));
#line 1392 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1392 "error_util.m"
                }
#line 1390 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1390 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1339 "error_util.m"
              {
#line 1339 "error_util.m"
                MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1339 "error_util.m"
                MR_Word parse_tree__error_util__V_74_74;
#line 1339 "error_util.m"
                MR_String parse_tree__error_util__V_75_75;

#line 1340 "error_util.m"
                {
#line 1340 "error_util.m"
                  parse_tree__error_util__V_75_75 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                }
#line 1340 "error_util.m"
                {
#line 1340 "error_util.m"
                  parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1340 "error_util.m"
                }
#line 1340 "error_util.m"
                {
#line 1340 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1340 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1340 "error_util.m"
                }
#line 1339 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1339 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1413 "error_util.m"
              {
#line 1414 "error_util.m"
                parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1413 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1413 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1403 "error_util.m"
              {
#line 1403 "error_util.m"
                MR_Integer parse_tree__error_util__IndentDelta_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1403 "error_util.m"
                MR_Word parse_tree__error_util__V_48_48;
#line 1403 "error_util.m"
                MR_Word parse_tree__error_util__Strings_96;

#line 1404 "error_util.m"
                {
#line 1404 "error_util.m"
                  parse_tree__error_util__Strings_96 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1405 "error_util.m"
                {
#line 1405 "error_util.m"
                  parse_tree__error_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1405 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 0) = ((MR_Box) (parse_tree__error_util__Strings_96));
#line 1405 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1405 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_48_48, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_39));
#line 1405 "error_util.m"
                }
#line 1405 "error_util.m"
                {
#line 1405 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_48_48)));
                }
#line 1406 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1403 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1342 "error_util.m"
              {
#line 1342 "error_util.m"
                MR_Word parse_tree__error_util__V_72_72;
#line 1342 "error_util.m"
                MR_String parse_tree__error_util__V_73_73;
#line 1342 "error_util.m"
                MR_Integer parse_tree__error_util__Int_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1343 "error_util.m"
                {
#line 1343 "error_util.m"
                  parse_tree__error_util__V_73_73 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_84);
                }
#line 1343 "error_util.m"
                {
#line 1343 "error_util.m"
                  parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1343 "error_util.m"
                }
#line 1343 "error_util.m"
                {
#line 1343 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1343 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1343 "error_util.m"
                }
#line 1342 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1342 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1382 "error_util.m"
              {
#line 1382 "error_util.m"
                MR_Word parse_tree__error_util__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1382 "error_util.m"
                MR_Word parse_tree__error_util__V_60_60;
#line 1382 "error_util.m"
                MR_String parse_tree__error_util__Word_92;

#line 1383 "error_util.m"
                {
#line 1383 "error_util.m"
                  parse_tree__error_util__Word_92 = parse_tree__error_util__pred_or_func_to_string_1_f_0(parse_tree__error_util__PredOrFunc_34);
                }
#line 1384 "error_util.m"
                {
#line 1384 "error_util.m"
                  parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__Word_92));
#line 1384 "error_util.m"
                }
#line 1384 "error_util.m"
                {
#line 1384 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1384 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1384 "error_util.m"
                }
#line 1382 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1382 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1394 "error_util.m"
              {
#line 1394 "error_util.m"
                MR_String parse_tree__error_util__PragmaName_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1394 "error_util.m"
                MR_String parse_tree__error_util__V_54_54;
#line 1394 "error_util.m"
                MR_Word parse_tree__error_util__V_56_56;
#line 1394 "error_util.m"
                MR_String parse_tree__error_util__Word_95;

#line 1395 "error_util.m"
                {
#line 1395 "error_util.m"
                  parse_tree__error_util__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_37);
                }
#line 1395 "error_util.m"
                {
#line 1395 "error_util.m"
                  parse_tree__error_util__Word_95 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_54_54);
                }
#line 1396 "error_util.m"
                {
#line 1396 "error_util.m"
                  parse_tree__error_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_56_56, 0) = ((MR_Box) (parse_tree__error_util__Word_95));
#line 1396 "error_util.m"
                }
#line 1396 "error_util.m"
                {
#line 1396 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_56_56));
#line 1396 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1396 "error_util.m"
                }
#line 1394 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1394 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1354 "error_util.m"
              {
#line 1354 "error_util.m"
                MR_Word parse_tree__error_util__V_70_70;
#line 1354 "error_util.m"
                MR_String parse_tree__error_util__Word_85 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1355 "error_util.m"
                {
#line 1355 "error_util.m"
                  parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__Word_85));
#line 1355 "error_util.m"
                }
#line 1355 "error_util.m"
                {
#line 1355 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1355 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1355 "error_util.m"
                }
#line 1354 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1354 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1386 "error_util.m"
              {
#line 1386 "error_util.m"
                MR_Word parse_tree__error_util__SimpleCallId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1386 "error_util.m"
                MR_String parse_tree__error_util__WordsStr_93;

#line 1387 "error_util.m"
                {
#line 1387 "error_util.m"
                  parse_tree__error_util__WordsStr_93 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_35);
                }
#line 1388 "error_util.m"
                {
#line 1388 "error_util.m"
                  parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_93, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                }
#line 1386 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1386 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1357 "error_util.m"
              {
#line 1357 "error_util.m"
                MR_Word parse_tree__error_util__V_69_69;
#line 1357 "error_util.m"
                MR_String parse_tree__error_util__Word_86 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1358 "error_util.m"
                {
#line 1358 "error_util.m"
                  parse_tree__error_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_69_69, 0) = ((MR_Box) (parse_tree__error_util__Word_86));
#line 1358 "error_util.m"
                }
#line 1358 "error_util.m"
                {
#line 1358 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_69_69));
#line 1358 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1358 "error_util.m"
                }
#line 1357 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1357 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1360 "error_util.m"
              {
#line 1360 "error_util.m"
                MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1360 "error_util.m"
                MR_Word parse_tree__error_util__V_67_67;
#line 1360 "error_util.m"
                MR_String parse_tree__error_util__V_68_68;

#line 1361 "error_util.m"
                {
#line 1361 "error_util.m"
                  parse_tree__error_util__V_68_68 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                }
#line 1361 "error_util.m"
                {
#line 1361 "error_util.m"
                  parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1361 "error_util.m"
                }
#line 1361 "error_util.m"
                {
#line 1361 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1361 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1361 "error_util.m"
                }
#line 1360 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1360 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1363 "error_util.m"
              {
#line 1363 "error_util.m"
                MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1363 "error_util.m"
                MR_Word parse_tree__error_util__V_66_66;
#line 1363 "error_util.m"
                MR_String parse_tree__error_util__Word_87;

#line 1364 "error_util.m"
                {
#line 1364 "error_util.m"
                  parse_tree__error_util__Word_87 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                }
#line 1365 "error_util.m"
                {
#line 1365 "error_util.m"
                  parse_tree__error_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_66_66, 0) = ((MR_Box) (parse_tree__error_util__Word_87));
#line 1365 "error_util.m"
                }
#line 1365 "error_util.m"
                {
#line 1365 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1365 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1365 "error_util.m"
                }
#line 1363 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1363 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1372 "error_util.m"
              {
#line 1372 "error_util.m"
                MR_Word parse_tree__error_util__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1378 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtor_30;

#line 1373 "error_util.m"
                {
#line 1373 "error_util.m"
                  parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_29, &parse_tree__error_util__TypeCtor_30);
                }
#line 1378 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1374 "error_util.m"
                  {
#line 1374 "error_util.m"
                    MR_Word parse_tree__error_util__TypeCtorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 0)));
#line 1374 "error_util.m"
                    MR_Integer parse_tree__error_util__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 1)));
#line 1374 "error_util.m"
                    MR_Word parse_tree__error_util__NewWord_33;
#line 1374 "error_util.m"
                    MR_String parse_tree__error_util__V_61_61;
#line 1374 "error_util.m"
                    MR_Word parse_tree__error_util__SymName_89;

#line 1375 "error_util.m"
                    {
#line 1375 "error_util.m"
                      parse_tree__error_util__SymName_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_89, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_31));
#line 1375 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_89, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_32));
#line 1375 "error_util.m"
                    }
#line 1376 "error_util.m"
                    {
#line 1376 "error_util.m"
                      parse_tree__error_util__V_61_61 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_89);
                    }
#line 1376 "error_util.m"
                    {
#line 1376 "error_util.m"
                      parse_tree__error_util__NewWord_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_33, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1376 "error_util.m"
                    }
#line 1377 "error_util.m"
                    {
#line 1377 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_33));
#line 1377 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1377 "error_util.m"
                    }
#line 1374 "error_util.m"
                  }
#line 1378 "error_util.m"
                else
#line 1379 "error_util.m"
                  {
#line 1379 "error_util.m"
                    {
#line 1379 "error_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "predicate \140parse_tree.error_util.convert_components_to_paragraphs_acc\'/5", (MR_String) "type is variable");
#line 1379 "error_util.m"
                      return;
                    }
#line 1379 "error_util.m"
                  }
#line 1372 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1372 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1329 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1327 "error_util.m"
              {
#line 1327 "error_util.m"
                MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1328 "error_util.m"
                {
#line 1328 "error_util.m"
                  parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                }
#line 1327 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1327 "error_util.m"
              }
#line 1329 "error_util.m"
            else
#line 1330 "error_util.m"
              {
#line 1330 "error_util.m"
                MR_String parse_tree__error_util__V_79_79;
#line 1330 "error_util.m"
                MR_String parse_tree__error_util__WordsStr_82 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1331 "error_util.m"
                {
#line 1331 "error_util.m"
                  parse_tree__error_util__V_79_79 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_82);
                }
#line 1331 "error_util.m"
                {
#line 1331 "error_util.m"
                  parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_79_79, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                }
#line 1330 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_Paras_50_50 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1330 "error_util.m"
              }
#line 1416 "error_util.m"
            /* direct tailcall eliminated */
#line 1416 "error_util.m"
            {
#line 1416 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1416 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1416 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_50_50;

#line 1416 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1416 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1416 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1416 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1416 "error_util.m"
            }
#line 1416 "error_util.m"
            continue;
#line 1325 "error_util.m"
          }
#line 1321 "error_util.m"
      }
#line 1321 "error_util.m"
      break;
#line 1321 "error_util.m"
    }
#line 1317 "error_util.m"
}

#line 1280 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1280 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1280 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1280 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1280 "error_util.m"
{
#line 1285 "error_util.m"
  {
#line 1285 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1285 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1285 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1284 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1285 "error_util.m"
    else
#line 1287 "error_util.m"
      {
#line 1285 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1285 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1285 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1285 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1285 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1285 "error_util.m"
          {
#line 1285 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1285 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1285 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1285 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1285 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1285 "error_util.m"
          }
#line 1287 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1286 "error_util.m"
          {
#line 1286 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1287 "error_util.m"
        else
#line 1288 "error_util.m"
          {
#line 1288 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1288 "error_util.m"
            {
#line 1288 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1288 "error_util.m"
            {
#line 1288 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1288 "error_util.m"
          }
#line 1287 "error_util.m"
      }
#line 1285 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1285 "error_util.m"
  }
#line 1280 "error_util.m"
}

#line 1267 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1267 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1267 "error_util.m"
{
#line 1269 "error_util.m"
  {
#line 1269 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1269 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1269 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1271 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "first";
#line 1269 "error_util.m"
    else
#line 1274 "error_util.m"
      {
#line 1272 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1274 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1273 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "second";
#line 1274 "error_util.m"
        else
#line 1276 "error_util.m"
          {
#line 1274 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1276 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1275 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_String) "third";
#line 1276 "error_util.m"
            else
#line 1277 "error_util.m"
              {
#line 1277 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 1277 "error_util.m"
                {
#line 1277 "error_util.m"
                  parse_tree__error_util__V_4_4 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                }
#line 1277 "error_util.m"
                {
#line 1277 "error_util.m"
                  return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "th");
                }
#line 1277 "error_util.m"
              }
#line 1276 "error_util.m"
          }
#line 1274 "error_util.m"
      }
#line 1269 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1269 "error_util.m"
  }
#line 1267 "error_util.m"
}

#line 1174 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1174 "error_util.m"
{
#line 1177 "error_util.m"
  {
#line 1177 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1177 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1177 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1177 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1177 "error_util.m"
    else
#line 1178 "error_util.m"
      {
#line 1178 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1178 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1178 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1179 "error_util.m"
        {
#line 1179 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1183 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1260 "error_util.m"
          {
#line 1261 "error_util.m"
            {
#line 1261 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
            }
#line 1260 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "error_util.m"
          if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1202 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1203 "error_util.m"
          else
#line 1512 "error_util.m"
            {
#line 1512 "error_util.m"
              MR_Char parse_tree__error_util__First_66;
#line 1512 "error_util.m"
              MR_String parse_tree__error_util__Rest_67;

#line 1507 "error_util.m"
              {
#line 1507 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_66, &parse_tree__error_util__Rest_67);
              }
#line 1507 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1508 "error_util.m"
                {
#line 1508 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_66);
                }
#line 1512 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1510 "error_util.m"
                {
#line 1510 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_68;

#line 1510 "error_util.m"
                  {
#line 1510 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_66, &parse_tree__error_util__LoweredFirst_68);
                  }
#line 1511 "error_util.m"
                  {
#line 1511 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_68, parse_tree__error_util__Rest_67);
                  }
#line 1510 "error_util.m"
                }
#line 1512 "error_util.m"
              else
#line 1513 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1512 "error_util.m"
            }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1253 "error_util.m"
          {
#line 1254 "error_util.m"
            {
#line 1254 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
            }
#line 1253 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1187 "error_util.m"
          {
#line 1187 "error_util.m"
            MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1188 "error_util.m"
            {
#line 1188 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1187 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1190 "error_util.m"
          {
#line 1190 "error_util.m"
            MR_String parse_tree__error_util__V_42_42;
#line 1190 "error_util.m"
            MR_String parse_tree__error_util__Word_45 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));
#line 1190 "error_util.m"
            MR_String parse_tree__error_util__V_78_78;

#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_78_78 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_45, (MR_String) "\'");
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_78_78);
            }
#line 1191 "error_util.m"
            {
#line 1191 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_42_42, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1190 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1222 "error_util.m"
          {
#line 1222 "error_util.m"
            MR_Word parse_tree__error_util__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1222 "error_util.m"
            MR_Word parse_tree__error_util__ConsId_18;
#line 1222 "error_util.m"
            MR_String parse_tree__error_util__Word_49;

#line 1223 "error_util.m"
            {
#line 1223 "error_util.m"
              parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_17, &parse_tree__error_util__ConsId_18);
            }
#line 1224 "error_util.m"
            {
#line 1224 "error_util.m"
              parse_tree__error_util__Word_49 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_18);
            }
#line 1225 "error_util.m"
            {
#line 1225 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1222 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1235 "error_util.m"
          {
#line 1235 "error_util.m"
            MR_String parse_tree__error_util__Decl_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1235 "error_util.m"
            MR_String parse_tree__error_util__V_38_38;
#line 1235 "error_util.m"
            MR_String parse_tree__error_util__Word_52;
#line 1235 "error_util.m"
            MR_String parse_tree__error_util__V_62_62;

#line 1236 "error_util.m"
            {
#line 1236 "error_util.m"
              parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_21);
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_62_62 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_38_38, (MR_String) "\'");
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__Word_52 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_62_62);
            }
#line 1237 "error_util.m"
            {
#line 1237 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_52, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1235 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1193 "error_util.m"
          {
#line 1193 "error_util.m"
            MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1193 "error_util.m"
            MR_String parse_tree__error_util__V_41_41;

#line 1194 "error_util.m"
            {
#line 1194 "error_util.m"
              parse_tree__error_util__V_41_41 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
            }
#line 1194 "error_util.m"
            {
#line 1194 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1193 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1264 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1256 "error_util.m"
          {
#line 1258 "error_util.m"
            {
#line 1258 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
            }
#line 1256 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1196 "error_util.m"
          {
#line 1196 "error_util.m"
            MR_String parse_tree__error_util__V_40_40;
#line 1196 "error_util.m"
            MR_Integer parse_tree__error_util__Int_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1270 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__Int_46 == (MR_Integer) 1);
#line 1269 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1271 "error_util.m"
              parse_tree__error_util__V_40_40 = (MR_String) "first";
#line 1269 "error_util.m"
            else
#line 1274 "error_util.m"
              {
#line 1272 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Int_46 == (MR_Integer) 2);
#line 1274 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1273 "error_util.m"
                  parse_tree__error_util__V_40_40 = (MR_String) "second";
#line 1274 "error_util.m"
                else
#line 1276 "error_util.m"
                  {
#line 1274 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__Int_46 == (MR_Integer) 3);
#line 1276 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 1275 "error_util.m"
                      parse_tree__error_util__V_40_40 = (MR_String) "third";
#line 1276 "error_util.m"
                    else
#line 1277 "error_util.m"
                      {
#line 1277 "error_util.m"
                        MR_String parse_tree__error_util__V_70_70;

#line 1277 "error_util.m"
                        {
#line 1277 "error_util.m"
                          parse_tree__error_util__V_70_70 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_46);
                        }
#line 1277 "error_util.m"
                        {
#line 1277 "error_util.m"
                          parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_70_70, (MR_String) "th");
                        }
#line 1277 "error_util.m"
                      }
#line 1276 "error_util.m"
                  }
#line 1274 "error_util.m"
              }
#line 1197 "error_util.m"
            {
#line 1197 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1196 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1227 "error_util.m"
          {
#line 1227 "error_util.m"
            MR_Word parse_tree__error_util__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1227 "error_util.m"
            MR_String parse_tree__error_util__Word_50;

#line 1683 "error_util.m"
            if ((parse_tree__error_util__PredOrFunc_19 == (MR_Integer) 1))
#line 1684 "error_util.m"
              parse_tree__error_util__Word_50 = (MR_String) "function";
#line 1683 "error_util.m"
            else
#line 1683 "error_util.m"
              parse_tree__error_util__Word_50 = (MR_String) "predicate";
#line 1229 "error_util.m"
            {
#line 1229 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1227 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1239 "error_util.m"
          {
#line 1239 "error_util.m"
            MR_String parse_tree__error_util__PragmaName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1239 "error_util.m"
            MR_String parse_tree__error_util__V_36_36;
#line 1239 "error_util.m"
            MR_String parse_tree__error_util__Word_53;
#line 1239 "error_util.m"
            MR_String parse_tree__error_util__V_74_74;

#line 1240 "error_util.m"
            {
#line 1240 "error_util.m"
              parse_tree__error_util__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_22);
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_74_74 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_36_36, (MR_String) "\'");
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__Word_53 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_74_74);
            }
#line 1241 "error_util.m"
            {
#line 1241 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_53, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1239 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1208 "error_util.m"
          {
#line 1208 "error_util.m"
            MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1209 "error_util.m"
            {
#line 1209 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
            }
#line 1208 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1231 "error_util.m"
          {
#line 1231 "error_util.m"
            MR_Word parse_tree__error_util__SimpleCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1231 "error_util.m"
            MR_String parse_tree__error_util__Word_51;

#line 1232 "error_util.m"
            {
#line 1232 "error_util.m"
              parse_tree__error_util__Word_51 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_20);
            }
#line 1233 "error_util.m"
            {
#line 1233 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1231 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1211 "error_util.m"
          {
#line 1211 "error_util.m"
            MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1212 "error_util.m"
            {
#line 1212 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1211 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1214 "error_util.m"
          {
#line 1214 "error_util.m"
            MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1214 "error_util.m"
            MR_String parse_tree__error_util__Word_47;
#line 1214 "error_util.m"
            MR_String parse_tree__error_util__V_81_81;
#line 1214 "error_util.m"
            MR_String parse_tree__error_util__V_84_84;

#line 1519 "error_util.m"
            {
#line 1519 "error_util.m"
              parse_tree__error_util__V_81_81 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_84_84 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_81_81, (MR_String) "\'");
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__Word_47 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_84_84);
            }
#line 1216 "error_util.m"
            {
#line 1216 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1214 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1218 "error_util.m"
          {
#line 1218 "error_util.m"
            MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__Word_48;
#line 1218 "error_util.m"
            MR_Word parse_tree__error_util__SymName_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1218 "error_util.m"
            MR_Integer parse_tree__error_util__Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__V_88_88;
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__V_89_89;
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__V_90_90;
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__V_92_92;
#line 1218 "error_util.m"
            MR_String parse_tree__error_util__V_95_95;

#line 1524 "error_util.m"
            {
#line 1524 "error_util.m"
              parse_tree__error_util__V_89_89 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_86);
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_95_95 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_89_89, (MR_String) "\'");
            }
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__V_88_88 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_95_95);
            }
#line 1524 "error_util.m"
            {
#line 1524 "error_util.m"
              parse_tree__error_util__V_92_92 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_87);
            }
#line 1524 "error_util.m"
            {
#line 1524 "error_util.m"
              parse_tree__error_util__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_92_92);
            }
#line 1524 "error_util.m"
            {
#line 1524 "error_util.m"
              parse_tree__error_util__Word_48 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_88_88, parse_tree__error_util__V_90_90);
            }
#line 1220 "error_util.m"
            {
#line 1220 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1218 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1243 "error_util.m"
          {
#line 1243 "error_util.m"
            MR_Word parse_tree__error_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1249 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtor_24;

#line 1244 "error_util.m"
            {
#line 1244 "error_util.m"
              parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_23, &parse_tree__error_util__TypeCtor_24);
            }
#line 1249 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1245 "error_util.m"
              {
#line 1245 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 0)));
#line 1245 "error_util.m"
                MR_Integer parse_tree__error_util__TypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 1)));
#line 1245 "error_util.m"
                MR_String parse_tree__error_util__Word_54;
#line 1245 "error_util.m"
                MR_Word parse_tree__error_util__SymName_55;

#line 1246 "error_util.m"
                {
#line 1246 "error_util.m"
                  parse_tree__error_util__SymName_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_55, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_25));
#line 1246 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_55, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_26));
#line 1246 "error_util.m"
                }
#line 1247 "error_util.m"
                {
#line 1247 "error_util.m"
                  parse_tree__error_util__Word_54 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_55);
                }
#line 1248 "error_util.m"
                {
#line 1248 "error_util.m"
                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_54, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                }
#line 1245 "error_util.m"
              }
#line 1249 "error_util.m"
            else
#line 1250 "error_util.m"
              {
#line 1250 "error_util.m"
                {
#line 1250 "error_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "function \140parse_tree.error_util.error_pieces_to_string_2\'/2", (MR_String) "type is variable");
                }
#line 1250 "error_util.m"
              }
#line 1243 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1183 "error_util.m"
        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1181 "error_util.m"
          {
#line 1181 "error_util.m"
            MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1182 "error_util.m"
            {
#line 1182 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1181 "error_util.m"
          }
#line 1183 "error_util.m"
        else
#line 1184 "error_util.m"
          {
#line 1184 "error_util.m"
            MR_String parse_tree__error_util__V_43_43;
#line 1184 "error_util.m"
            MR_String parse_tree__error_util__Words_44 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1185 "error_util.m"
            {
#line 1185 "error_util.m"
              parse_tree__error_util__V_43_43 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Words_44);
            }
#line 1185 "error_util.m"
            {
#line 1185 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_43_43, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
            }
#line 1184 "error_util.m"
          }
#line 1178 "error_util.m"
      }
#line 1177 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1177 "error_util.m"
  }
#line 1174 "error_util.m"
}

#line 1163 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1163 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1163 "error_util.m"
{
#line 1165 "error_util.m"
  while (MR_TRUE)
#line 1165 "error_util.m"
    {
#line 1165 "error_util.m"
      /* tailcall optimized into a loop */
#line 1165 "error_util.m"
      {
#line 1165 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1165 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "error_util.m"
          {
#line 1165 "error_util.m"
          }
#line 1165 "error_util.m"
        else
#line 1166 "error_util.m"
          {
#line 1166 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1166 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1167 "error_util.m"
            {
#line 1167 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1168 "error_util.m"
            {
#line 1168 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1169 "error_util.m"
            /* direct tailcall eliminated */
#line 1169 "error_util.m"
            {
#line 1169 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1169 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1169 "error_util.m"
            }
#line 1169 "error_util.m"
            continue;
#line 1166 "error_util.m"
          }
#line 1165 "error_util.m"
      }
#line 1165 "error_util.m"
      break;
#line 1165 "error_util.m"
    }
#line 1163 "error_util.m"
}

#line 1136 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1136 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1136 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1136 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1136 "error_util.m"
{
#line 1139 "error_util.m"
  while (MR_TRUE)
#line 1139 "error_util.m"
    {
#line 1139 "error_util.m"
      /* tailcall optimized into a loop */
#line 1139 "error_util.m"
      {
#line 1139 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1139 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "error_util.m"
          {
#line 1139 "error_util.m"
          }
#line 1139 "error_util.m"
        else
#line 1140 "error_util.m"
          {
#line 1140 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1140 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1140 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1140 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1140 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1140 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1140 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1144 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "error_util.m"
              {
#line 1145 "error_util.m"
              }
#line 1144 "error_util.m"
            else
#line 1142 "error_util.m"
              {
#line 1142 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1143 "error_util.m"
                {
#line 1143 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1142 "error_util.m"
              }
#line 1147 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1147 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1148 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1148 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1149 "error_util.m"
            {
#line 1149 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1150 "error_util.m"
            {
#line 1150 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1156 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "error_util.m"
              {
#line 1157 "error_util.m"
                {
#line 1157 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1156 "error_util.m"
              }
#line 1156 "error_util.m"
            else
#line 1158 "error_util.m"
              {
#line 1158 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1158 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1159 "error_util.m"
                {
#line 1159 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1160 "error_util.m"
                {
#line 1160 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1161 "error_util.m"
                {
#line 1161 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1158 "error_util.m"
              }
#line 1152 "error_util.m"
            /* direct tailcall eliminated */
#line 1152 "error_util.m"
            {
#line 1152 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1152 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1152 "error_util.m"
            }
#line 1152 "error_util.m"
            continue;
#line 1140 "error_util.m"
          }
#line 1139 "error_util.m"
      }
#line 1139 "error_util.m"
      break;
#line 1139 "error_util.m"
    }
#line 1136 "error_util.m"
}

#line 1108 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1108 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1108 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2)
#line 1108 "error_util.m"
{
#line 1110 "error_util.m"
  while (MR_TRUE)
#line 1110 "error_util.m"
    {
#line 1110 "error_util.m"
      /* tailcall optimized into a loop */
#line 1110 "error_util.m"
      {
#line 1110 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1110 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1110 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 1110 "error_util.m"
        else
#line 1111 "error_util.m"
          {
#line 1111 "error_util.m"
            MR_Word parse_tree__error_util__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1111 "error_util.m"
            MR_Word parse_tree__error_util__Ranges_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1111 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 0)));
#line 1111 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMax_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 1)));

#line 1116 "error_util.m"
            if ((parse_tree__error_util__MaybeMin_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1115 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1116 "error_util.m"
            else
#line 1117 "error_util.m"
              {
#line 1117 "error_util.m"
                MR_Integer parse_tree__error_util__Min_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMin_9, (MR_Integer) 0)));

#line 1118 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Min_11 <= parse_tree__error_util__LineNumber_2);
#line 1117 "error_util.m"
              }
#line 1119 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1122 "error_util.m"
              {
#line 1122 "error_util.m"
                if ((parse_tree__error_util__MaybeMax_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "error_util.m"
                  parse_tree__error_util__succeeded = MR_TRUE;
#line 1122 "error_util.m"
                else
#line 1123 "error_util.m"
                  {
#line 1123 "error_util.m"
                    MR_Integer parse_tree__error_util__Max_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_10, (MR_Integer) 0)));

#line 1124 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumber_2 <= parse_tree__error_util__Max_12);
#line 1123 "error_util.m"
                  }
#line 1122 "error_util.m"
              }
#line 1128 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1127 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1128 "error_util.m"
            else
#line 1129 "error_util.m"
              {
#line 1129 "error_util.m"
                /* direct tailcall eliminated */
#line 1129 "error_util.m"
                {
#line 1129 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Ranges_6;

#line 1129 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1129 "error_util.m"
                }
#line 1129 "error_util.m"
                continue;
#line 1129 "error_util.m"
              }
#line 1111 "error_util.m"
          }
#line 1110 "error_util.m"
        return parse_tree__error_util__HeadVar__3_3;
#line 1110 "error_util.m"
      }
#line 1110 "error_util.m"
      break;
#line 1110 "error_util.m"
    }
#line 1108 "error_util.m"
}

#line 1042 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1042 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1042 "error_util.m"
  MR_Word parse_tree__error_util__Components_14)
#line 1042 "error_util.m"
{
#line 1048 "error_util.m"
  {
#line 1048 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1048 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextLength_20;

#line 1084 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "error_util.m"
      {
#line 1086 "error_util.m"
        parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[4]);
#line 1085 "error_util.m"
      }
#line 1084 "error_util.m"
    else
#line 1057 "error_util.m"
      {
#line 1057 "error_util.m"
        MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_10, (MR_Integer) 0)));
#line 1057 "error_util.m"
        MR_String parse_tree__error_util__FileName_17;
#line 1057 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_18;

#line 1058 "error_util.m"
        {
#line 1058 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__FileName_17);
        }
#line 1059 "error_util.m"
        {
#line 1059 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__LineNumber_18);
        }
#line 1062 "error_util.m"
        {
#line 1062 "error_util.m"
          MR_Word parse_tree__error_util__LineNumberRanges_19;
#line 1062 "error_util.m"
          MR_Word parse_tree__error_util__V_37_37;
#line 1062 "error_util.m"
          MR_Box parse_tree__error_util__conv0_LineNumberRanges_19;

#line 1062 "error_util.m"
          {
#line 1062 "error_util.m"
            parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) (parse_tree__error_util__FileName_17)), &parse_tree__error_util__conv0_LineNumberRanges_19);
          }
#line 1062 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1062 "error_util.m"
            {
#line 1062 "error_util.m"
              parse_tree__error_util__LineNumberRanges_19 = ((MR_Word) parse_tree__error_util__conv0_LineNumberRanges_19);
#line 1062 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1062 "error_util.m"
            }
#line 1062 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1062 "error_util.m"
            {
#line 1063 "error_util.m"
              {
#line 1063 "error_util.m"
                parse_tree__error_util__V_37_37 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_19, parse_tree__error_util__LineNumber_18);
              }
#line 1063 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 1062 "error_util.m"
            }
#line 1062 "error_util.m"
        }
#line 1064 "error_util.m"
        if (!(parse_tree__error_util__succeeded))
#line 1066 "error_util.m"
          {
#line 1066 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 1066 "error_util.m"
            MR_Word parse_tree__error_util__LineNumberRanges_48;
#line 1066 "error_util.m"
            MR_Box parse_tree__error_util__conv1_LineNumberRanges_48;

#line 1066 "error_util.m"
            {
#line 1066 "error_util.m"
              parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) ((MR_String) "")), &parse_tree__error_util__conv1_LineNumberRanges_48);
            }
#line 1066 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1066 "error_util.m"
              {
#line 1066 "error_util.m"
                parse_tree__error_util__LineNumberRanges_48 = ((MR_Word) parse_tree__error_util__conv1_LineNumberRanges_48);
#line 1066 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1066 "error_util.m"
              }
#line 1066 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1066 "error_util.m"
              {
#line 1067 "error_util.m"
                {
#line 1067 "error_util.m"
                  parse_tree__error_util__V_36_36 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_48, parse_tree__error_util__LineNumber_18);
                }
#line 1067 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 1066 "error_util.m"
              }
#line 1066 "error_util.m"
          }
#line 1072 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1070 "error_util.m"
          {
#line 1070 "error_util.m"
            {
#line 1070 "error_util.m"
              libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
            }
#line 1071 "error_util.m"
            parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1070 "error_util.m"
          }
#line 1072 "error_util.m"
        else
#line 1073 "error_util.m"
          {
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__FileNameLength_21;
#line 1073 "error_util.m"
            MR_String parse_tree__error_util__LineNumberStr_22;
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength0_23;
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength_24;
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__V_41_41;
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1073 "error_util.m"
            MR_Integer parse_tree__error_util__V_43_43;

#line 1073 "error_util.m"
            {
#line 1073 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_17, &parse_tree__error_util__FileNameLength_21);
            }
#line 1074 "error_util.m"
            {
#line 1074 "error_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_18, &parse_tree__error_util__LineNumberStr_22);
            }
#line 1075 "error_util.m"
            {
#line 1075 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_22, &parse_tree__error_util__LineNumberStrLength0_23);
            }
#line 1076 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_23 < (MR_Integer) 3);
#line 1078 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1077 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = (MR_Integer) 3;
#line 1078 "error_util.m"
            else
#line 1079 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = parse_tree__error_util__LineNumberStrLength0_23;
#line 1082 "error_util.m"
            parse_tree__error_util__V_43_43 = (parse_tree__error_util__FileNameLength_21 + (MR_Integer) 1);
#line 1082 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__V_43_43 + parse_tree__error_util__LineNumberStrLength_24);
#line 1082 "error_util.m"
            parse_tree__error_util__V_41_41 = (parse_tree__error_util__V_42_42 + (MR_Integer) 2);
#line 1082 "error_util.m"
            {
#line 1082 "error_util.m"
              parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, 0) = ((MR_Box) (parse_tree__error_util__V_41_41));
#line 1082 "error_util.m"
            }
#line 1073 "error_util.m"
          }
#line 1057 "error_util.m"
      }
#line 1091 "error_util.m"
    if ((parse_tree__error_util__MaybeContextLength_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "error_util.m"
      {
#line 1089 "error_util.m"
      }
#line 1091 "error_util.m"
    else
#line 1092 "error_util.m"
      {
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1092 "error_util.m"
        MR_Integer parse_tree__error_util__ContextLength_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, (MR_Integer) 0)));
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__Paragraphs_26;
#line 1092 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndent_27;
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__MaybeRemain_30;
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__Lines_31;
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__ParasCord_55;
#line 1092 "error_util.m"
        MR_Word parse_tree__error_util__V_58_58;

#line 1308 "error_util.m"
        {
#line 1308 "error_util.m"
          parse_tree__error_util__V_58_58 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_59);
        }
#line 1307 "error_util.m"
        {
#line 1307 "error_util.m"
          parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_58_58, &parse_tree__error_util__ParasCord_55);
        }
#line 1309 "error_util.m"
        {
#line 1309 "error_util.m"
          parse_tree__error_util__Paragraphs_26 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_59, parse_tree__error_util__ParasCord_55);
        }
#line 1094 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_9 == (MR_Integer) 0);
#line 1094 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1094 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 0;
#line 1094 "error_util.m"
        else
#line 1094 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 1;
#line 1099 "error_util.m"
        if ((parse_tree__error_util__MaybeMaxWidth_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1101 "error_util.m"
          parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "error_util.m"
        else
#line 1096 "error_util.m"
          {
#line 1096 "error_util.m"
            MR_Integer parse_tree__error_util__MaxWidth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_12, (MR_Integer) 0)));
#line 1096 "error_util.m"
            MR_Integer parse_tree__error_util__Remain_29;
#line 1096 "error_util.m"
            MR_Integer parse_tree__error_util__V_46_46 = (parse_tree__error_util__ContextLength_25 + parse_tree__error_util__FixedIndent_11);

#line 1097 "error_util.m"
            parse_tree__error_util__Remain_29 = (parse_tree__error_util__MaxWidth_28 - parse_tree__error_util__V_46_46);
#line 1098 "error_util.m"
            {
#line 1098 "error_util.m"
              parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_30, 0) = ((MR_Box) (parse_tree__error_util__Remain_29));
#line 1098 "error_util.m"
            }
#line 1096 "error_util.m"
          }
#line 1103 "error_util.m"
        {
#line 1103 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_9, parse_tree__error_util__FirstIndent_27, parse_tree__error_util__Paragraphs_26, parse_tree__error_util__MaybeRemain_30, &parse_tree__error_util__Lines_31);
        }
#line 1105 "error_util.m"
        {
#line 1105 "error_util.m"
          parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_31, parse_tree__error_util__MaybeContext_10, parse_tree__error_util__FixedIndent_11);
#line 1105 "error_util.m"
          return;
        }
#line 1092 "error_util.m"
      }
#line 1048 "error_util.m"
  }
#line 1042 "error_util.m"
}

#line 1030 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1030 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1030 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 1030 "error_util.m"
{
#line 1035 "error_util.m"
  {
#line 1035 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1035 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_14;
#line 1035 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_15;

#line 1036 "error_util.m"
    {
#line 1036 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_11, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_14);
    }
#line 1038 "error_util.m"
    {
#line 1038 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_11, &parse_tree__error_util__LimitErrorContextsMap_15);
    }
#line 1039 "error_util.m"
    {
#line 1039 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10, parse_tree__error_util__MaybeMaxWidth_14, parse_tree__error_util__LimitErrorContextsMap_15, parse_tree__error_util__Components_12);
#line 1039 "error_util.m"
      return;
    }
#line 1035 "error_util.m"
  }
#line 1030 "error_util.m"
}

#line 1013 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1013 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1013 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2)
#line 1013 "error_util.m"
{
#line 1016 "error_util.m"
  {
#line 1016 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1016 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "error_util.m"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "error_util.m"
    else
#line 1017 "error_util.m"
      {
#line 1017 "error_util.m"
        MR_String parse_tree__error_util__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1017 "error_util.m"
        MR_Word parse_tree__error_util__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1017 "error_util.m"
        MR_Word parse_tree__error_util__TailPieces_6;
#line 1017 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7;
#line 1017 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1018 "error_util.m"
        {
#line 1018 "error_util.m"
          parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__Lines_4, &parse_tree__error_util__TailPieces_6);
        }
#line 1019 "error_util.m"
        {
#line 1019 "error_util.m"
          parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__Line_3));
#line 1019 "error_util.m"
        }
#line 1019 "error_util.m"
        {
#line 1019 "error_util.m"
          parse_tree__error_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 1) = ((MR_Box) (parse_tree__error_util__TailPieces_6));
#line 1019 "error_util.m"
        }
#line 1019 "error_util.m"
        {
#line 1019 "error_util.m"
          MR_Word base;
#line 1019 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "error_util.m"
          *parse_tree__error_util__HeadVar__2_2 = base;
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1019 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1019 "error_util.m"
        }
#line 1017 "error_util.m"
      }
#line 1016 "error_util.m"
  }
#line 1013 "error_util.m"
}

#line 859 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 859 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 859 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 859 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10)
#line 859 "error_util.m"
{
#line 866 "error_util.m"
  while (MR_TRUE)
#line 866 "error_util.m"
    {
#line 866 "error_util.m"
      /* tailcall optimized into a loop */
#line 866 "error_util.m"
      {
#line 866 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 866 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 866 "error_util.m"
          {
#line 867 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 866 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 866 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 866 "error_util.m"
          }
#line 866 "error_util.m"
        else
#line 869 "error_util.m"
          {
#line 869 "error_util.m"
            MR_Word parse_tree__error_util__Component_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 869 "error_util.m"
            MR_Word parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 869 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;
#line 869 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 869 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;

#line 876 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_28)) == (MR_mktag((MR_Integer) 0))))
#line 871 "error_util.m"
              {
#line 871 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_28, (MR_Integer) 0)));

#line 872 "error_util.m"
                {
#line 872 "error_util.m"
                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_37);
                }
#line 874 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 875 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 871 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 871 "error_util.m"
              }
#line 876 "error_util.m"
            else
#line 876 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_28)) == (MR_mktag((MR_Integer) 1))))
#line 877 "error_util.m"
              {
#line 877 "error_util.m"
                MR_Word parse_tree__error_util__Option_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 877 "error_util.m"
                MR_Word parse_tree__error_util__RequiredValue_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 877 "error_util.m"
                MR_Word parse_tree__error_util__EmbeddedComponents_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 877 "error_util.m"
                MR_Word parse_tree__error_util__OptionValue_41;

#line 878 "error_util.m"
                {
#line 878 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_38, &parse_tree__error_util__OptionValue_41);
                }
#line 879 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_41 == parse_tree__error_util__RequiredValue_39);
#line 882 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 880 "error_util.m"
                  {
#line 880 "error_util.m"
                    parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__EmbeddedComponents_40, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_80_80, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                  }
#line 882 "error_util.m"
                else
#line 883 "error_util.m"
                  {
#line 883 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 883 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 883 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 883 "error_util.m"
                  }
#line 877 "error_util.m"
              }
#line 876 "error_util.m"
            else
#line 876 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_28)) == (MR_mktag((MR_Integer) 2))))
#line 886 "error_util.m"
              {
#line 886 "error_util.m"
                MR_Word parse_tree__error_util__AlwaysOrOnce_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 0)));
#line 886 "error_util.m"
                MR_Word parse_tree__error_util__VerboseErrors_43;
#line 886 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 1)));

#line 887 "error_util.m"
                {
#line 887 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_43);
                }
#line 908 "error_util.m"
                if ((parse_tree__error_util__VerboseErrors_43 == (MR_Integer) 0))
#line 909 "error_util.m"
                  {
#line 910 "error_util.m"
                    {
#line 910 "error_util.m"
                      libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                    }
#line 909 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 909 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 909 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 909 "error_util.m"
                  }
#line 908 "error_util.m"
                else
#line 896 "error_util.m"
                if ((parse_tree__error_util__AlwaysOrOnce_42 == (MR_Integer) 0))
#line 891 "error_util.m"
                  {
#line 892 "error_util.m"
                    {
#line 892 "error_util.m"
                      parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                    }
#line 894 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 895 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 891 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 891 "error_util.m"
                  }
#line 896 "error_util.m"
                else
#line 900 "error_util.m"
                  {
#line 898 "error_util.m"
                    {
#line 898 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, ((MR_Box) (parse_tree__error_util__ComponentPieces_86)));
                    }
#line 900 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 899 "error_util.m"
                      {
#line 899 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 899 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 899 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 899 "error_util.m"
                      }
#line 900 "error_util.m"
                    else
#line 902 "error_util.m"
                      {
#line 901 "error_util.m"
                        {
#line 901 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                        }
#line 903 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 904 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 905 "error_util.m"
                        {
#line 905 "error_util.m"
                          mercury__set__insert_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__ComponentPieces_86)), parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                        }
#line 902 "error_util.m"
                      }
#line 900 "error_util.m"
                  }
#line 886 "error_util.m"
              }
#line 876 "error_util.m"
            else
#line 876 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 928 "error_util.m"
              {
#line 928 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 928 "error_util.m"
                MR_Box parse_tree__error_util__Anything_46 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2));
#line 14772 "parse_tree.error_util.c"
                void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14774 "parse_tree.error_util.c"
                MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79;

#line 14777 "parse_tree.error_util.c"
                {
#line 14779 "parse_tree.error_util.c"
                  parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_90), parse_tree__error_util__Anything_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79);
                }
#line 930 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 931 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 928 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 928 "error_util.m"
              }
#line 876 "error_util.m"
            else
#line 913 "error_util.m"
              {
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__VerbosePieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__NonVerbosePieces_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2)));
#line 913 "error_util.m"
                MR_Word parse_tree__error_util__VerboseErrors_87;

#line 914 "error_util.m"
                {
#line 914 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_87);
                }
#line 919 "error_util.m"
                if ((parse_tree__error_util__VerboseErrors_87 == (MR_Integer) 0))
#line 920 "error_util.m"
                  {
#line 921 "error_util.m"
                    {
#line 921 "error_util.m"
                      parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__NonVerbosePieces_45);
                    }
#line 923 "error_util.m"
                    {
#line 923 "error_util.m"
                      libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                    }
#line 920 "error_util.m"
                  }
#line 919 "error_util.m"
                else
#line 917 "error_util.m"
                  {
#line 917 "error_util.m"
                    parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__VerbosePieces_44);
                  }
#line 925 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 926 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 913 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 913 "error_util.m"
              }
#line 933 "error_util.m"
            /* direct tailcall eliminated */
#line 933 "error_util.m"
            {
#line 933 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_29;
#line 933 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 933 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;
#line 933 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;

#line 933 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9;
#line 933 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 933 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 933 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 933 "error_util.m"
            }
#line 933 "error_util.m"
            continue;
#line 869 "error_util.m"
          }
#line 866 "error_util.m"
      }
#line 866 "error_util.m"
      break;
#line 866 "error_util.m"
    }
#line 859 "error_util.m"
}

#line 827 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 827 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 827 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7)
#line 827 "error_util.m"
{
#line 833 "error_util.m"
  while (MR_TRUE)
#line 833 "error_util.m"
    {
#line 833 "error_util.m"
      /* tailcall optimized into a loop */
#line 833 "error_util.m"
      {
#line 833 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 833 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "error_util.m"
          {
#line 834 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6;
#line 833 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 833 "error_util.m"
          }
#line 833 "error_util.m"
        else
#line 836 "error_util.m"
          {
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__Msg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__Components_29;
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_30;
#line 836 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_32;
#line 836 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_33;
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_41_41;
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 836 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 14938 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_21)) == (MR_mktag((MR_Integer) 1))))
#line 14940 "parse_tree.error_util.c"
              {
#line 14942 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_31;

#line 843 "error_util.m"
                parse_tree__error_util__MaybeContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 0)));
#line 843 "error_util.m"
                parse_tree__error_util__TreatAsFirst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 843 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 2)));
#line 843 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 3)));
#line 849 "error_util.m"
                if ((parse_tree__error_util__TreatAsFirst_31 == (MR_Integer) 1))
#line 850 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 849 "error_util.m"
                else
#line 848 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_41_41 = (MR_Integer) 0;
#line 14961 "parse_tree.error_util.c"
              }
#line 14963 "parse_tree.error_util.c"
            else
#line 14965 "parse_tree.error_util.c"
              {
#line 14967 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 0)));

#line 838 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 839 "error_util.m"
                {
#line 839 "error_util.m"
                  parse_tree__error_util__MaybeContext_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_30, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_28));
#line 839 "error_util.m"
                }
#line 841 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = (MR_Integer) 0;
#line 850 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 14984 "parse_tree.error_util.c"
              }
#line 853 "error_util.m"
            parse_tree__error_util__Indent_33 = (parse_tree__error_util__ExtraIndentLevel_32 * (MR_Integer) 2);
#line 854 "error_util.m"
            {
#line 854 "error_util.m"
              parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__Components_29, parse_tree__error_util__MaybeContext_30, parse_tree__error_util__Indent_33, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_41_41, &parse_tree__error_util__STATE_VARIABLE_First_43_43, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45);
            }
#line 856 "error_util.m"
            /* direct tailcall eliminated */
#line 856 "error_util.m"
            {
#line 856 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_22;
#line 856 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 856 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 856 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 856 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6;
#line 856 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 856 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 856 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 856 "error_util.m"
            }
#line 856 "error_util.m"
            continue;
#line 836 "error_util.m"
          }
#line 833 "error_util.m"
      }
#line 833 "error_util.m"
      break;
#line 833 "error_util.m"
    }
#line 827 "error_util.m"
}

#line 775 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 775 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 775 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 775 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 775 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 775 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 775 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28)
#line 775 "error_util.m"
{
#line 781 "error_util.m"
  {
#line 781 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 781 "error_util.m"
    MR_Word parse_tree__error_util__Severity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 0)));
#line 781 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 2)));
#line 781 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_20;
#line 781 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_21;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 1)));

#line 783 "error_util.m"
    {
#line 783 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_9_p_0(parse_tree__error_util__Msgs_19, parse_tree__error_util__Globals_11, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_20, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 785 "error_util.m"
    {
#line 785 "error_util.m"
      parse_tree__error_util__MaybeActual_21 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_11, parse_tree__error_util__Severity_17);
    }
#line 796 "error_util.m"
    if ((parse_tree__error_util__PrintedSome_20 == (MR_Integer) 1))
#line 787 "error_util.m"
      {
#line 787 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 787 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 787 "error_util.m"
      }
#line 796 "error_util.m"
    else
#line 811 "error_util.m"
    if ((parse_tree__error_util__MaybeActual_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "error_util.m"
      {
#line 813 "error_util.m"
        {
#line 813 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/10", (MR_String) "MaybeActual is no");
#line 813 "error_util.m"
          return;
        }
#line 812 "error_util.m"
      }
#line 811 "error_util.m"
    else
#line 799 "error_util.m"
      {
#line 799 "error_util.m"
        MR_Word parse_tree__error_util__Actual_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_21, (MR_Integer) 0)));

#line 804 "error_util.m"
        if ((parse_tree__error_util__Actual_22 == (MR_Integer) 0))
#line 801 "error_util.m"
          {
#line 802 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25 + (MR_Integer) 1);
#line 803 "error_util.m"
            {
#line 803 "error_util.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 801 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 801 "error_util.m"
          }
#line 804 "error_util.m"
        else
#line 804 "error_util.m"
        if ((parse_tree__error_util__Actual_22 == (MR_Integer) 2))
#line 809 "error_util.m"
          {
#line 809 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 809 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 809 "error_util.m"
          }
#line 804 "error_util.m"
        else
#line 805 "error_util.m"
          {
#line 806 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23 + (MR_Integer) 1);
#line 807 "error_util.m"
            {
#line 807 "error_util.m"
              libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_11);
            }
#line 805 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 805 "error_util.m"
          }
#line 799 "error_util.m"
      }
#line 781 "error_util.m"
  }
#line 775 "error_util.m"
}

#line 722 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 722 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 722 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 722 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 722 "error_util.m"
{
#line 725 "error_util.m"
  {
#line 725 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 726 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 726 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 727 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 727 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 728 "error_util.m"
    {
#line 728 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 729 "error_util.m"
    {
#line 729 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 730 "error_util.m"
    {
#line 730 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 731 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 733 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 732 "error_util.m"
      {
#line 732 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 732 "error_util.m"
        return;
      }
#line 733 "error_util.m"
    else
#line 734 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 725 "error_util.m"
  }
#line 722 "error_util.m"
}

#line 636 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 636 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 636 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 636 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 636 "error_util.m"
{
#line 639 "error_util.m"
  {
#line 639 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 639 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 639 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 639 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 657 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 657 "error_util.m"
      {
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 660 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 660 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 660 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 657 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "error_util.m"
        else
#line 661 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 657 "error_util.m"
      }
#line 657 "error_util.m"
    else
#line 657 "error_util.m"
      {
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 658 "error_util.m"
        {
#line 658 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 658 "error_util.m"
        }
#line 657 "error_util.m"
      }
#line 657 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 657 "error_util.m"
      {
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 660 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 660 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 660 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 657 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 657 "error_util.m"
        else
#line 661 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 657 "error_util.m"
      }
#line 657 "error_util.m"
    else
#line 657 "error_util.m"
      {
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 657 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 658 "error_util.m"
        {
#line 658 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 658 "error_util.m"
        }
#line 657 "error_util.m"
      }
#line 642 "error_util.m"
    {
#line 642 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 646 "error_util.m"
    if ((parse_tree__error_util__ContextResult_9 == (MR_Integer) 0))
#line 645 "error_util.m"
      {
#line 645 "error_util.m"
        parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 645 "error_util.m"
        return;
      }
#line 646 "error_util.m"
    else
#line 650 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 639 "error_util.m"
  }
#line 636 "error_util.m"
}

#line 622 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 622 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 622 "error_util.m"
{
#line 624 "error_util.m"
  {
#line 624 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 624 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 624 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "error_util.m"
    else
#line 625 "error_util.m"
      {
#line 625 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 625 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 626 "error_util.m"
        {
#line 626 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 15388 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 15390 "parse_tree.error_util.c"
          {
#line 15392 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 660 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 660 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 660 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 15401 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 15405 "parse_tree.error_util.c"
            else
#line 15407 "parse_tree.error_util.c"
              {
#line 15409 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 630 "error_util.m"
                {
#line 630 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 630 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 630 "error_util.m"
                }
#line 15422 "parse_tree.error_util.c"
              }
#line 15424 "parse_tree.error_util.c"
          }
#line 15426 "parse_tree.error_util.c"
        else
#line 15428 "parse_tree.error_util.c"
          {
#line 15430 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 657 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 630 "error_util.m"
            {
#line 630 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 630 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 630 "error_util.m"
            }
#line 15445 "parse_tree.error_util.c"
          }
#line 625 "error_util.m"
      }
#line 624 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 624 "error_util.m"
  }
#line 622 "error_util.m"
}

#line 561 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 561 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 561 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 561 "error_util.m"
{
#line 564 "error_util.m"
  while (MR_TRUE)
#line 564 "error_util.m"
    {
#line 564 "error_util.m"
      /* tailcall optimized into a loop */
#line 564 "error_util.m"
      {
#line 564 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 564 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 564 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 564 "error_util.m"
        else
#line 565 "error_util.m"
          {
#line 565 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 565 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 565 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 565 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 565 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 566 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 566 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 567 "error_util.m"
            {
#line 567 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 571 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 571 "error_util.m"
            else
#line 571 "error_util.m"
              {
#line 571 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 571 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 572 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 571 "error_util.m"
                else
#line 575 "error_util.m"
                  {
#line 575 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 575 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 577 "error_util.m"
                    {
#line 577 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 577 "error_util.m"
                    {
#line 577 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 577 "error_util.m"
                    }
#line 575 "error_util.m"
                  }
#line 571 "error_util.m"
              }
#line 579 "error_util.m"
            /* direct tailcall eliminated */
#line 579 "error_util.m"
            {
#line 579 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 579 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 579 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 579 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 579 "error_util.m"
            }
#line 579 "error_util.m"
            continue;
#line 565 "error_util.m"
          }
#line 564 "error_util.m"
      }
#line 564 "error_util.m"
      break;
#line 564 "error_util.m"
    }
#line 561 "error_util.m"
}

#line 487 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 487 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 487 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 487 "error_util.m"
{
#line 1709 "error_util.m"
  {
#line 1709 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1709 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1709 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1710 "error_util.m"
    {
#line 1710 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1711 "error_util.m"
    {
#line 1711 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1712 "error_util.m"
    {
#line 1712 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1713 "error_util.m"
    {
#line 1713 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1714 "error_util.m"
    {
#line 1714 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1714 "error_util.m"
    {
#line 1714 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1715 "error_util.m"
    {
#line 1715 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1717 "error_util.m"
    {
#line 1717 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1717 "error_util.m"
      return;
    }
#line 1709 "error_util.m"
  }
#line 487 "error_util.m"
}

#line 479 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 479 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 479 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 479 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 479 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 479 "error_util.m"
{
#line 1703 "error_util.m"
  {
#line 1703 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1703 "error_util.m"
    MR_Word parse_tree__error_util__V_24_24;
#line 1703 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_34;
#line 1703 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_35;

#line 1704 "error_util.m"
    {
#line 1704 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 1022 "error_util.m"
    {
#line 1022 "error_util.m"
      parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1022 "error_util.m"
    }
#line 1036 "error_util.m"
    {
#line 1036 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_34);
    }
#line 1038 "error_util.m"
    {
#line 1038 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_35);
    }
#line 1039 "error_util.m"
    {
#line 1039 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_24_24, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_34, parse_tree__error_util__LimitErrorContextsMap_35, parse_tree__error_util__Components_10);
#line 1039 "error_util.m"
      return;
    }
#line 1703 "error_util.m"
  }
#line 479 "error_util.m"
}

#line 474 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 474 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 474 "error_util.m"
{
#line 1688 "error_util.m"
  {
#line 1688 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1688 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1688 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1697 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1697 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1691 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1689 "error_util.m"
    {
#line 1689 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1691 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1691 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1691 "error_util.m"
      {
#line 1691 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1691 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1692 "error_util.m"
        {
#line 1692 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1691 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1691 "error_util.m"
          {
#line 1693 "error_util.m"
            {
#line 1693 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1693 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1691 "error_util.m"
          }
#line 1691 "error_util.m"
      }
#line 1697 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1695 "error_util.m"
      {
#line 1695 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1695 "error_util.m"
        {
#line 1695 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1695 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1695 "error_util.m"
        }
#line 1696 "error_util.m"
        {
#line 1696 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1695 "error_util.m"
      }
#line 1697 "error_util.m"
    else
#line 1698 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1688 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1688 "error_util.m"
  }
#line 474 "error_util.m"
}

#line 469 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 469 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 469 "error_util.m"
{
#line 1686 "error_util.m"
  {
#line 1686 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1686 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1686 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1686 "error_util.m"
    {
#line 1686 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1686 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1686 "error_util.m"
  }
#line 469 "error_util.m"
}

#line 465 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 465 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 465 "error_util.m"
{
#line 1683 "error_util.m"
  {
#line 1683 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1683 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1683 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 1))
#line 1684 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1683 "error_util.m"
    else
#line 1683 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1683 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1683 "error_util.m"
  }
#line 465 "error_util.m"
}

#line 463 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 463 "error_util.m"
{
#line 1676 "error_util.m"
  {
#line 1676 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1676 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1676 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1676 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1676 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1676 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1676 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1676 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1676 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1676 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1677 "error_util.m"
    {
#line 1677 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1678 "error_util.m"
    {
#line 1678 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1678 "error_util.m"
    {
#line 1678 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1678 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1678 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1678 "error_util.m"
    }
#line 1677 "error_util.m"
    {
#line 1677 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1677 "error_util.m"
    }
#line 1677 "error_util.m"
    {
#line 1677 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1677 "error_util.m"
    }
#line 1677 "error_util.m"
    {
#line 1677 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1677 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1677 "error_util.m"
    }
#line 1677 "error_util.m"
    {
#line 1677 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1676 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1676 "error_util.m"
  }
#line 463 "error_util.m"
}

#line 461 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 461 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 461 "error_util.m"
{
#line 1680 "error_util.m"
  {
#line 1680 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1680 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1680 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1680 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1680 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1681 "error_util.m"
    {
#line 1681 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1681 "error_util.m"
    {
#line 1681 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1681 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1681 "error_util.m"
    }
#line 1681 "error_util.m"
    {
#line 1681 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1681 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1681 "error_util.m"
    }
#line 1681 "error_util.m"
    {
#line 1681 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1680 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1680 "error_util.m"
  }
#line 461 "error_util.m"
}

#line 457 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 457 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 457 "error_util.m"
{
#line 1171 "error_util.m"
  {
#line 1171 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1171 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1172 "error_util.m"
    {
#line 1172 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1171 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1171 "error_util.m"
  }
#line 457 "error_util.m"
}

#line 453 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 453 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 453 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 453 "error_util.m"
{
#line 1026 "error_util.m"
  {
#line 1026 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1026 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_24;
#line 1026 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_25;

#line 1036 "error_util.m"
    {
#line 1036 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_24);
    }
#line 1038 "error_util.m"
    {
#line 1038 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_25);
    }
#line 1039 "error_util.m"
    {
#line 1039 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_24, parse_tree__error_util__LimitErrorContextsMap_25, parse_tree__error_util__Components_10);
#line 1039 "error_util.m"
      return;
    }
#line 1026 "error_util.m"
  }
#line 453 "error_util.m"
}

#line 450 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 450 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 450 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 450 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 450 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 450 "error_util.m"
{
#line 1021 "error_util.m"
  {
#line 1021 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1021 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1021 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_25;
#line 1021 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_26;

#line 1022 "error_util.m"
    {
#line 1022 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1022 "error_util.m"
    }
#line 1036 "error_util.m"
    {
#line 1036 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_25);
    }
#line 1038 "error_util.m"
    {
#line 1038 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_26);
    }
#line 1039 "error_util.m"
    {
#line 1039 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_15_15, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_25, parse_tree__error_util__LimitErrorContextsMap_26, parse_tree__error_util__Components_10);
#line 1039 "error_util.m"
      return;
    }
#line 1021 "error_util.m"
  }
#line 450 "error_util.m"
}

#line 442 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 442 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 442 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 442 "error_util.m"
{
#line 1005 "error_util.m"
  {
#line 1005 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1005 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsg_9;
#line 1005 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsgPieces_10;
#line 1005 "error_util.m"
    MR_Word parse_tree__error_util__Components_11;
#line 1005 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1005 "error_util.m"
    MR_String parse_tree__error_util__V_16_16;
#line 1005 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;

#line 1007 "error_util.m"
    {
#line 1007 "error_util.m"
      parse_tree__error_util__LinesInMsg_9 = mercury__string__split_at_char_2_f_0((MR_Char) 10, parse_tree__error_util__Msg_6);
    }
#line 1008 "error_util.m"
    {
#line 1008 "error_util.m"
      parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__LinesInMsg_9, &parse_tree__error_util__LinesInMsgPieces_10);
    }
#line 1009 "error_util.m"
    {
#line 1009 "error_util.m"
      parse_tree__error_util__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 1009 "error_util.m"
    {
#line 1009 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1009 "error_util.m"
    }
#line 1009 "error_util.m"
    {
#line 1009 "error_util.m"
      parse_tree__error_util__Components_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1009 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 1) = ((MR_Box) (parse_tree__error_util__LinesInMsgPieces_10));
#line 1009 "error_util.m"
    }
#line 1011 "error_util.m"
    {
#line 1011 "error_util.m"
      parse_tree__error_util__V_22_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2]);
    }
#line 1010 "error_util.m"
    {
#line 1010 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__V_22_22, parse_tree__error_util__Components_11);
#line 1010 "error_util.m"
      return;
    }
#line 1005 "error_util.m"
  }
#line 442 "error_util.m"
}

#line 434 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 434 "error_util.m"
{
#line 1001 "error_util.m"
  {
#line 1001 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1001 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_22;
#line 1001 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_23;

#line 1036 "error_util.m"
    {
#line 1036 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 141, &parse_tree__error_util__MaybeMaxWidth_22);
    }
#line 1038 "error_util.m"
    {
#line 1038 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_5, &parse_tree__error_util__LimitErrorContextsMap_23);
    }
#line 1039 "error_util.m"
    {
#line 1039 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_22, parse_tree__error_util__LimitErrorContextsMap_23, parse_tree__error_util__Components_6);
#line 1039 "error_util.m"
      return;
    }
#line 1001 "error_util.m"
  }
#line 434 "error_util.m"
}

#line 424 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 424 "error_util.m"
{
#line 996 "error_util.m"
  {
#line 996 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 996 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 996 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "error_util.m"
      {
#line 996 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 997 "error_util.m"
        {
#line 997 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 996 "error_util.m"
      }
#line 996 "error_util.m"
    else
#line 996 "error_util.m"
      {
#line 996 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 998 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 996 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 996 "error_util.m"
        else
#line 999 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 996 "error_util.m"
      }
#line 996 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 996 "error_util.m"
  }
#line 424 "error_util.m"
}

#line 419 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 419 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 419 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 419 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 419 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 419 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 419 "error_util.m"
{
#line 992 "error_util.m"
  {
#line 992 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 992 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 992 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 992 "error_util.m"
    else
#line 992 "error_util.m"
      {
#line 992 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 993 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 992 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 992 "error_util.m"
        else
#line 994 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 992 "error_util.m"
      }
#line 992 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 992 "error_util.m"
  }
#line 419 "error_util.m"
}

#line 411 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 411 "error_util.m"
{
#line 986 "error_util.m"
  {
#line 986 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 986 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 986 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 986 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 986 "error_util.m"
    else
#line 986 "error_util.m"
      {
#line 986 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 986 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 986 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "error_util.m"
          {
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 987 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 987 "error_util.m"
            {
#line 987 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]));
            }
#line 987 "error_util.m"
            {
#line 987 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 987 "error_util.m"
          }
#line 986 "error_util.m"
        else
#line 988 "error_util.m"
          {
#line 988 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 988 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 988 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 990 "error_util.m"
            {
#line 990 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 990 "error_util.m"
            {
#line 990 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[13]), parse_tree__error_util__V_24_24);
            }
#line 989 "error_util.m"
            {
#line 989 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 988 "error_util.m"
          }
#line 986 "error_util.m"
      }
#line 986 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 986 "error_util.m"
  }
#line 411 "error_util.m"
}

#line 400 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 400 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 400 "error_util.m"
{
#line 979 "error_util.m"
  {
#line 979 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 979 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 979 "error_util.m"
    else
#line 979 "error_util.m"
      {
#line 979 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 979 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 979 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "error_util.m"
          {
#line 980 "error_util.m"
            {
#line 980 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 980 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 980 "error_util.m"
            }
#line 980 "error_util.m"
          }
#line 979 "error_util.m"
        else
#line 979 "error_util.m"
          {
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 979 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "error_util.m"
              {
#line 981 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 981 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 981 "error_util.m"
                {
#line 981 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 981 "error_util.m"
                }
#line 981 "error_util.m"
                {
#line 981 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 981 "error_util.m"
                }
#line 981 "error_util.m"
                {
#line 981 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 981 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 981 "error_util.m"
                }
#line 981 "error_util.m"
              }
#line 979 "error_util.m"
            else
#line 982 "error_util.m"
              {
#line 982 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 982 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 983 "error_util.m"
                {
#line 983 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 983 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17])));
#line 983 "error_util.m"
                }
#line 984 "error_util.m"
                {
#line 984 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 984 "error_util.m"
                {
#line 984 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 982 "error_util.m"
              }
#line 979 "error_util.m"
          }
#line 979 "error_util.m"
      }
#line 979 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 979 "error_util.m"
  }
#line 400 "error_util.m"
}

#line 394 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 394 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 394 "error_util.m"
{
#line 971 "error_util.m"
  {
#line 971 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 971 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 971 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "error_util.m"
    else
#line 971 "error_util.m"
      {
#line 971 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 971 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 971 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 972 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 971 "error_util.m"
        else
#line 971 "error_util.m"
          {
#line 971 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 971 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 971 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "error_util.m"
              {
#line 973 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 973 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 974 "error_util.m"
                {
#line 974 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16]), parse_tree__error_util__V_33_33);
                }
#line 974 "error_util.m"
                {
#line 974 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 973 "error_util.m"
              }
#line 971 "error_util.m"
            else
#line 975 "error_util.m"
              {
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 975 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 977 "error_util.m"
                {
#line 977 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 977 "error_util.m"
                {
#line 977 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17]), parse_tree__error_util__V_25_25);
                }
#line 976 "error_util.m"
                {
#line 976 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 975 "error_util.m"
              }
#line 971 "error_util.m"
          }
#line 971 "error_util.m"
      }
#line 971 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 971 "error_util.m"
  }
#line 394 "error_util.m"
}

#line 388 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 388 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 388 "error_util.m"
{
#line 963 "error_util.m"
  {
#line 963 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 963 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 963 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 963 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "error_util.m"
    else
#line 963 "error_util.m"
      {
#line 963 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 963 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 963 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "error_util.m"
          {
#line 964 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 964 "error_util.m"
            {
#line 964 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "error_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 964 "error_util.m"
            }
#line 964 "error_util.m"
            {
#line 964 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 964 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 964 "error_util.m"
            }
#line 964 "error_util.m"
          }
#line 963 "error_util.m"
        else
#line 963 "error_util.m"
          {
#line 963 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 963 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 963 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "error_util.m"
              {
#line 965 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 965 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 965 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 965 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 966 "error_util.m"
                {
#line 966 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 966 "error_util.m"
                }
#line 966 "error_util.m"
                {
#line 966 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 966 "error_util.m"
                }
#line 966 "error_util.m"
                {
#line 966 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "error_util.m"
                }
#line 966 "error_util.m"
                {
#line 966 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 966 "error_util.m"
                }
#line 966 "error_util.m"
                {
#line 966 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 966 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 966 "error_util.m"
                }
#line 965 "error_util.m"
              }
#line 963 "error_util.m"
            else
#line 967 "error_util.m"
              {
#line 967 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 967 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 967 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 968 "error_util.m"
                {
#line 968 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 968 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 968 "error_util.m"
                }
#line 969 "error_util.m"
                {
#line 969 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 968 "error_util.m"
                {
#line 968 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 968 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 968 "error_util.m"
                }
#line 968 "error_util.m"
                {
#line 968 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 968 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 968 "error_util.m"
                }
#line 967 "error_util.m"
              }
#line 963 "error_util.m"
          }
#line 963 "error_util.m"
      }
#line 963 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 963 "error_util.m"
  }
#line 388 "error_util.m"
}

#line 384 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 384 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 384 "error_util.m"
{
#line 957 "error_util.m"
  {
#line 957 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 957 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 957 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "error_util.m"
    else
#line 957 "error_util.m"
      {
#line 957 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 957 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 957 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "error_util.m"
          {
#line 958 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 958 "error_util.m"
            {
#line 958 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 958 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 958 "error_util.m"
            }
#line 958 "error_util.m"
            {
#line 958 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 958 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "error_util.m"
            }
#line 958 "error_util.m"
          }
#line 957 "error_util.m"
        else
#line 957 "error_util.m"
          {
#line 957 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 957 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 957 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "error_util.m"
              {
#line 959 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 959 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 959 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 959 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 959 "error_util.m"
                {
#line 959 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 959 "error_util.m"
                }
#line 959 "error_util.m"
                {
#line 959 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 959 "error_util.m"
                }
#line 959 "error_util.m"
                {
#line 959 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 959 "error_util.m"
                }
#line 959 "error_util.m"
                {
#line 959 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14])));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 959 "error_util.m"
                }
#line 959 "error_util.m"
                {
#line 959 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 959 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 959 "error_util.m"
                }
#line 959 "error_util.m"
              }
#line 957 "error_util.m"
            else
#line 960 "error_util.m"
              {
#line 960 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 960 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 960 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 961 "error_util.m"
                {
#line 961 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 961 "error_util.m"
                {
#line 961 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 961 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 961 "error_util.m"
                }
#line 961 "error_util.m"
                {
#line 961 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 961 "error_util.m"
                {
#line 961 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 961 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 961 "error_util.m"
                }
#line 960 "error_util.m"
              }
#line 957 "error_util.m"
          }
#line 957 "error_util.m"
      }
#line 957 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 957 "error_util.m"
  }
#line 384 "error_util.m"
}

#line 379 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 379 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 379 "error_util.m"
{
#line 955 "error_util.m"
  {
#line 955 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 955 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 955 "error_util.m"
    {
#line 955 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 955 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 955 "error_util.m"
    }
#line 955 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 955 "error_util.m"
  }
#line 379 "error_util.m"
}

#line 772 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 772 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 772 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9)
#line 772 "error_util.m"
{
#line 772 "error_util.m"
  {
#line 772 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 772 "error_util.m"
    MR_Integer parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24;
#line 772 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26;
#line 772 "error_util.m"
    MR_Word parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28;

#line 772 "error_util.m"
    {
#line 772 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26, ((MR_Word) parse_tree__error_util__wrapper_arg_6), &parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 772 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv3_STATE_VARIABLE_NumWarnings_24));
#line 772 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumErrors_26));
#line 772 "error_util.m"
    *parse_tree__error_util__wrapper_arg_7 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_AlreadyPrintedVerbose_28));
#line 772 "error_util.m"
  }
#line 772 "error_util.m"
}

#line 720 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 720 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 720 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 720 "error_util.m"
{
#line 720 "error_util.m"
  {
#line 720 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 720 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 720 "error_util.m"
    {
#line 720 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 720 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 720 "error_util.m"
  }
#line 720 "error_util.m"
}

#line 281 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 281 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 281 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 281 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16,
#line 281 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_17,
#line 281 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18,
#line 281 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_19)
#line 281 "error_util.m"
{
#line 770 "error_util.m"
  {
#line 770 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 770 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_38_38;
#line 770 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 770 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 770 "error_util.m"
    MR_Word parse_tree__error_util__V_25_25;
#line 772 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 772 "error_util.m"
    MR_Box parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17;
#line 772 "error_util.m"
    MR_Box parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19;
#line 772 "error_util.m"
    MR_Box parse_tree__error_util__conv5_V_15_15;
#line 772 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_IO_21;

#line 720 "error_util.m"
    {
#line 720 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 772 "error_util.m"
    {
#line 772 "error_util.m"
      parse_tree__error_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 772 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 772 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 772 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 772 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 772 "error_util.m"
    }
#line 773 "error_util.m"
    {
#line 773 "error_util.m"
      parse_tree__error_util__V_25_25 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 17211 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 772 "error_util.m"
    {
#line 772 "error_util.m"
      mercury__list__foldl4_10_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_38_38, parse_tree__error_util__TypeCtorInfo_38_38, (MR_Word) &parse_tree__error_util_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_22_22, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16)), &parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18)), &parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19, ((MR_Box) (parse_tree__error_util__V_25_25)), &parse_tree__error_util__conv5_V_15_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv4_STATE_VARIABLE_IO_21);
    }
#line 772 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_17 = ((MR_Integer) parse_tree__error_util__conv7_STATE_VARIABLE_NumWarnings_17);
#line 772 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_19 = ((MR_Integer) parse_tree__error_util__conv6_STATE_VARIABLE_NumErrors_19);
#line 772 "error_util.m"
    parse_tree__error_util__V_15_15 = ((MR_Word) parse_tree__error_util__conv5_V_15_15);
#line 770 "error_util.m"
  }
#line 281 "error_util.m"
}

#line 279 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 279 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 279 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 279 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 279 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 279 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 279 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 279 "error_util.m"
{
#line 766 "error_util.m"
  {
#line 766 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 766 "error_util.m"
    MR_Word parse_tree__error_util__V_23_23;
#line 767 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 768 "error_util.m"
    {
#line 768 "error_util.m"
      parse_tree__error_util__V_23_23 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 767 "error_util.m"
    {
#line 767 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15, parse_tree__error_util__STATE_VARIABLE_NumWarnings_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17, parse_tree__error_util__STATE_VARIABLE_NumErrors_18, parse_tree__error_util__V_23_23, &parse_tree__error_util__V_14_14);
    }
#line 766 "error_util.m"
  }
#line 279 "error_util.m"
}

#line 256 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 256 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 256 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 256 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 256 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 256 "error_util.m"
{
#line 743 "error_util.m"
  {
#line 743 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 743 "error_util.m"
    if ((parse_tree__error_util__Verbose_7 == (MR_Integer) 0))
#line 743 "error_util.m"
      *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 743 "error_util.m"
    else
#line 745 "error_util.m"
      {
#line 747 "error_util.m"
        MR_Integer parse_tree__error_util___NumWarnings_11;
#line 747 "error_util.m"
        MR_Integer parse_tree__error_util___NumErrors_12;

#line 747 "error_util.m"
        {
#line 747 "error_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
        }
#line 749 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 745 "error_util.m"
      }
#line 743 "error_util.m"
  }
#line 256 "error_util.m"
}

#line 251 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 251 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 251 "error_util.m"
{
#line 690 "error_util.m"
  {
#line 690 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 690 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 690 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 690 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 690 "error_util.m"
    else
#line 691 "error_util.m"
      {
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 691 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 691 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 17352 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 692 "error_util.m"
        {
#line 692 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 692 "error_util.m"
        {
#line 692 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 691 "error_util.m"
      }
#line 690 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 690 "error_util.m"
  }
#line 251 "error_util.m"
}

#line 674 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 674 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 674 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 674 "error_util.m"
{
#line 674 "error_util.m"
  {
#line 674 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 674 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 674 "error_util.m"
    {
#line 674 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__674__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 674 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 674 "error_util.m"
  }
#line 674 "error_util.m"
}

#line 248 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 248 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 248 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 248 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 248 "error_util.m"
{
#line 673 "error_util.m"
  {
#line 673 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 673 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 673 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 673 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 673 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 673 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 674 "error_util.m"
    {
#line 674 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 678 "error_util.m"
    {
#line 678 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 685 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "error_util.m"
      {
#line 686 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 687 "error_util.m"
        {
#line 687 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 687 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 687 "error_util.m"
        }
#line 687 "error_util.m"
        {
#line 687 "error_util.m"
          MR_Word base;
#line 687 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 687 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 687 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 687 "error_util.m"
        }
#line 686 "error_util.m"
      }
#line 685 "error_util.m"
    else
#line 681 "error_util.m"
      {
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 681 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 681 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 681 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 682 "error_util.m"
        {
#line 682 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 683 "error_util.m"
        {
#line 683 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 684 "error_util.m"
        {
#line 684 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 684 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 684 "error_util.m"
        }
#line 684 "error_util.m"
        {
#line 684 "error_util.m"
          MR_Word base;
#line 684 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 684 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 684 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 684 "error_util.m"
        }
#line 681 "error_util.m"
      }
#line 673 "error_util.m"
  }
#line 248 "error_util.m"
}

#line 246 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 246 "error_util.m"
{
#line 671 "error_util.m"
  {
#line 671 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 671 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "error_util.m"
  }
#line 246 "error_util.m"
}

#line 620 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 620 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 620 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 620 "error_util.m"
{
#line 620 "error_util.m"
  {
#line 620 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 620 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 620 "error_util.m"
    {
#line 620 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 620 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 620 "error_util.m"
  }
#line 620 "error_util.m"
}

#line 235 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 235 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 235 "error_util.m"
{
#line 619 "error_util.m"
  {
#line 619 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 620 "error_util.m"
    {
#line 620 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 620 "error_util.m"
      return;
    }
#line 619 "error_util.m"
  }
#line 235 "error_util.m"
}

#line 231 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 231 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 231 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 231 "error_util.m"
{
#line 599 "error_util.m"
  {
#line 599 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 599 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 599 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 559 "error_util.m"
    {
#line 559 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 604 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 604 "error_util.m"
    else
#line 605 "error_util.m"
      {
#line 605 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 611 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 2))
#line 613 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 611 "error_util.m"
        else
#line 610 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 605 "error_util.m"
      }
#line 599 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 599 "error_util.m"
  }
#line 231 "error_util.m"
}

#line 226 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 226 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 226 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 226 "error_util.m"
{
#line 581 "error_util.m"
  {
#line 581 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 581 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 581 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 559 "error_util.m"
    {
#line 559 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 586 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 586 "error_util.m"
    else
#line 587 "error_util.m"
      {
#line 587 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 591 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 0))
#line 590 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 591 "error_util.m"
        else
#line 595 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 587 "error_util.m"
      }
#line 581 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 581 "error_util.m"
  }
#line 226 "error_util.m"
}

#line 220 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 220 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 220 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 220 "error_util.m"
{
#line 558 "error_util.m"
  {
#line 558 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 558 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 559 "error_util.m"
    {
#line 559 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 558 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 558 "error_util.m"
  }
#line 220 "error_util.m"
}

#line 214 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 214 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 214 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 214 "error_util.m"
{
#line 533 "error_util.m"
  while (MR_TRUE)
#line 533 "error_util.m"
    {
#line 533 "error_util.m"
      /* tailcall optimized into a loop */
#line 533 "error_util.m"
      {
#line 533 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 533 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 533 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "error_util.m"
          {
#line 534 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 533 "error_util.m"
          }
#line 533 "error_util.m"
        else
#line 533 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 539 "error_util.m"
          {
#line 540 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 539 "error_util.m"
          }
#line 533 "error_util.m"
        else
#line 533 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 536 "error_util.m"
          {
#line 537 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 536 "error_util.m"
          }
#line 533 "error_util.m"
        else
#line 543 "error_util.m"
          {
#line 543 "error_util.m"
            MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 543 "error_util.m"
            MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 543 "error_util.m"
            MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 543 "error_util.m"
            MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 543 "error_util.m"
            MR_Word parse_tree__error_util__Value_11;

#line 544 "error_util.m"
            {
#line 544 "error_util.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
            }
#line 545 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 547 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 546 "error_util.m"
              {
#line 546 "error_util.m"
                /* direct tailcall eliminated */
#line 546 "error_util.m"
                {
#line 546 "error_util.m"
                  MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 546 "error_util.m"
                  parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 546 "error_util.m"
                }
#line 546 "error_util.m"
                continue;
#line 546 "error_util.m"
              }
#line 547 "error_util.m"
            else
#line 551 "error_util.m"
            if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "error_util.m"
              parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "error_util.m"
            else
#line 552 "error_util.m"
              {
#line 552 "error_util.m"
                MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 553 "error_util.m"
                /* direct tailcall eliminated */
#line 553 "error_util.m"
                {
#line 553 "error_util.m"
                  MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 553 "error_util.m"
                  parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 553 "error_util.m"
                }
#line 553 "error_util.m"
                continue;
#line 552 "error_util.m"
              }
#line 543 "error_util.m"
          }
#line 533 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 533 "error_util.m"
      }
#line 533 "error_util.m"
      break;
#line 533 "error_util.m"
    }
#line 214 "error_util.m"
}

#line 208 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 208 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 208 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 208 "error_util.m"
{
#line 512 "error_util.m"
  {
#line 512 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 512 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 512 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 0))
#line 512 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 513 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 512 "error_util.m"
      else
#line 512 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 517 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 512 "error_util.m"
      else
#line 515 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 512 "error_util.m"
    else
#line 512 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 2))
#line 512 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 525 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 512 "error_util.m"
      else
#line 512 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 529 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 512 "error_util.m"
      else
#line 527 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 512 "error_util.m"
    else
#line 512 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 519 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 512 "error_util.m"
    else
#line 512 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 523 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 512 "error_util.m"
    else
#line 521 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 512 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 512 "error_util.m"
  }
#line 208 "error_util.m"
}

#line 201 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 201 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 201 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 201 "error_util.m"
{
#line 17952 "parse_tree.error_util.c"
  {
#line 17954 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 17956 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17958 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 17961 "parse_tree.error_util.c"
    {
#line 17963 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 17966 "parse_tree.error_util.c"
  }
#line 201 "error_util.m"
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
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_already_printed_verbose_0);
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
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0);
	MR_register_type_ctor_info(&parse_tree__error_util__parse_tree__error_util__type_ctor_info_word_0);
}

void mercury__parse_tree__error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.error_util. */
