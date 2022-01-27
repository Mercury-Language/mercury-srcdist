/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 133 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 136 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 139 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 142 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 145 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 148 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 151 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 154 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 157 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 160 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 163 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 166 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 169 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 172 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 175 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 178 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 181 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 184 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 187 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 190 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 193 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 196 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 199 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 202 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 205 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 208 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 211 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 214 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 217 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 220 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 223 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 226 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 229 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1];

#line 232 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 235 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 238 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 241 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 244 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 247 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 250 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 253 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 256 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 259 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 262 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 265 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 268 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 271 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 274 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 277 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 280 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 283 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 286 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 289 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 292 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 295 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 298 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 301 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 304 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 307 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 310 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 313 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 316 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 319 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 322 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 325 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 328 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 331 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 334 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 337 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 340 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 343 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 346 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 349 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 352 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 355 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 358 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 361 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 364 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 367 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 370 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 373 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 376 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 379 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 382 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 385 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 388 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 391 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 394 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 397 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 400 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 403 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 406 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 409 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 412 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 415 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 418 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 421 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 424 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 427 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 430 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 433 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 436 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 439 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 442 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 445 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 448 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 451 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1];

#line 454 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 457 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 460 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 463 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 466 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 469 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 472 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 475 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 478 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 481 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 484 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 487 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 490 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 493 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 496 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 499 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 502 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 505 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 508 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 511 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 514 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 517 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 520 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 523 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 526 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[12];

#line 529 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 532 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[17];

#line 535 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[17];

#line 538 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 541 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 544 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 547 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 550 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 553 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 556 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 559 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 562 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 565 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 568 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 571 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 574 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 577 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 580 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 583 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 586 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 589 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 592 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 595 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 598 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 601 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 604 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 607 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 610 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 613 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 616 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 619 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 622 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 625 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 628 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 631 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 634 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 637 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 640 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 643 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 646 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 649 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 652 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 655 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 658 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 661 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 664 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 667 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 670 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 673 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 676 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 679 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 682 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 685 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 688 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 691 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 694 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 697 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 700 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 703 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 706 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 709 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 712 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 715 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 718 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 720 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 723 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 726 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 728 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 730 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 733 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 736 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 738 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 741 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 744 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 746 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 748 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 751 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 754 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 756 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 759 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 762 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 764 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 766 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 769 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 772 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 774 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 777 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 780 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 782 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 784 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 787 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 790 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 792 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 795 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 798 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 800 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 802 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 805 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 808 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 810 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 813 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 816 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 818 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 820 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 823 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 826 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 828 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 831 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 834 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 836 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 838 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 841 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 844 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 846 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 849 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 852 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 854 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 856 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 859 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 862 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 864 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 867 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 870 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 872 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 874 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 877 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 880 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 882 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 885 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 888 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 890 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 892 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 895 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 898 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 900 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 903 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 906 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 908 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 910 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 913 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 916 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 918 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 921 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 924 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 926 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 928 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 931 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 934 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 936 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 939 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 942 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 944 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 946 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 949 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 952 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 954 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 957 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 960 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 962 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 964 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 967 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 970 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 972 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 975 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 978 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 980 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 982 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 985 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 988 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 990 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 993 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 996 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 998 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1000 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1003 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1006 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1008 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1011 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1014 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1016 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1018 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1021 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1024 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1026 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1029 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1032 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1034 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1036 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 633 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__633__1_1_p_0(
#line 633 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1137 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1137 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1137 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1229 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1229 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1229 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1119 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1119 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1119 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 760 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 760 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 760 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 764 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 764 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 764 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 876 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 876 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 876 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1379 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1379 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1379 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1457 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1457 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1457 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1457 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1457 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1457 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1457 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1432 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1432 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1432 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1432 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1391 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_words_5_p_0(
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__Max_9,
#line 1391 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1364 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1364 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1364 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1364 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1354 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1354 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1354 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1354 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1341 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1341 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1341 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1341 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1341 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1336 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1336 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1336 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1336 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1331 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1331 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1326 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1326 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1285 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1285 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1240 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1240 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1234 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1234 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1143 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1143 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1106 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1106 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1106 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1106 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1016 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1016 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1016 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1005 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1005 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 978 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 978 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 978 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 978 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 938 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 938 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 938 "error_util.m"
  MR_Integer parse_tree__error_util__MaxWidth_11,
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 796 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 796 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 796 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 796 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8);

#line 768 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 768 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5);

#line 721 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 721 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 721 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 721 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 721 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 721 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 721 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23);

#line 681 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 681 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 595 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 595 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 595 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 595 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 581 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 581 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 520 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 520 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 718 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7);

#line 679 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 679 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 633 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 633 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 633 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 579 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 579 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[17][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1];

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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[14]))),
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

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[3][1] = {
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



#line 1699 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1705 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1711 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1717 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1724 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1731 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1738 "parse_tree.error_util.c"
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

#line 1759 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1767 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1773 "parse_tree.error_util.c"
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

#line 1788 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1793 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1802 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1807 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1812 "parse_tree.error_util.c"
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

#line 1833 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1841 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1847 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 1853 "parse_tree.error_util.c"
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

#line 1868 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1876 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1884 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 1892 "parse_tree.error_util.c"
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

#line 1907 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1912 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 1917 "parse_tree.error_util.c"
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

#line 1931 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1937 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1943 "parse_tree.error_util.c"
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

#line 1964 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1972 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 1977 "parse_tree.error_util.c"
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

#line 1992 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1999 "parse_tree.error_util.c"
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

#line 2018 "parse_tree.error_util.c"
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

#line 2033 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2038 "parse_tree.error_util.c"
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

#line 2053 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2059 "parse_tree.error_util.c"
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

#line 2074 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2079 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2087 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2092 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2100 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2109 "parse_tree.error_util.c"
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

#line 2124 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2129 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2134 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2139 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2145 "parse_tree.error_util.c"
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

#line 2169 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2178 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2187 "parse_tree.error_util.c"
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

#line 2208 "parse_tree.error_util.c"
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

#line 2223 "parse_tree.error_util.c"
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

#line 2238 "parse_tree.error_util.c"
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

#line 2253 "parse_tree.error_util.c"
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

#line 2268 "parse_tree.error_util.c"
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

#line 2283 "parse_tree.error_util.c"
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

#line 2298 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2303 "parse_tree.error_util.c"
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

#line 2318 "parse_tree.error_util.c"
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

#line 2333 "parse_tree.error_util.c"
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

#line 2348 "parse_tree.error_util.c"
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

#line 2363 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2368 "parse_tree.error_util.c"
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

#line 2383 "parse_tree.error_util.c"
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

#line 2398 "parse_tree.error_util.c"
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

#line 2413 "parse_tree.error_util.c"
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

#line 2428 "parse_tree.error_util.c"
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

#line 2443 "parse_tree.error_util.c"
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

#line 2458 "parse_tree.error_util.c"
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

#line 2473 "parse_tree.error_util.c"
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

#line 2492 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2497 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2502 "parse_tree.error_util.c"
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

#line 2521 "parse_tree.error_util.c"
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

#line 2542 "parse_tree.error_util.c"
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

#line 2563 "parse_tree.error_util.c"
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

#line 2584 "parse_tree.error_util.c"
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

#line 2599 "parse_tree.error_util.c"
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

#line 2614 "parse_tree.error_util.c"
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

#line 2629 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2637 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2645 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2653 "parse_tree.error_util.c"
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

#line 2668 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2675 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2680 "parse_tree.error_util.c"
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

#line 2694 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2702 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2710 "parse_tree.error_util.c"
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

#line 2731 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2739 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2746 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2753 "parse_tree.error_util.c"
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

#line 2768 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2773 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2782 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2787 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2792 "parse_tree.error_util.c"
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

#line 2813 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2821 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2830 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2838 "parse_tree.error_util.c"
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

#line 2859 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2864 "parse_tree.error_util.c"
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

#line 2879 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2884 "parse_tree.error_util.c"
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

#line 2899 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2904 "parse_tree.error_util.c"
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

#line 2919 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2924 "parse_tree.error_util.c"
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

#line 2939 "parse_tree.error_util.c"
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

#line 2954 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2959 "parse_tree.error_util.c"
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

#line 2974 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2979 "parse_tree.error_util.c"
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

#line 2994 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2999 "parse_tree.error_util.c"
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

#line 3014 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3019 "parse_tree.error_util.c"
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

#line 3034 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3039 "parse_tree.error_util.c"
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

#line 3054 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3059 "parse_tree.error_util.c"
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

#line 3074 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3079 "parse_tree.error_util.c"
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

#line 3094 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3099 "parse_tree.error_util.c"
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

#line 3114 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3119 "parse_tree.error_util.c"
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

#line 3134 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3149 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3154 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15 = {
  (MR_String) "nl_indent_delta",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 15,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15,
  NULL,
  NULL,
  NULL
};

#line 3169 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16 = {
  (MR_String) "blank_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 16,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3184 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16
};

#line 3191 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3196 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3201 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[12] = {
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
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15
};

#line 3217 "parse_tree.error_util.c"
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
    (MR_Integer) 12,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3
  }
};

#line 3241 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[17] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12,
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

#line 3262 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[17] = {
  (MR_Integer) 1,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 7,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0
};

#line 3283 "parse_tree.error_util.c"
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0
};

#line 3304 "parse_tree.error_util.c"
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

#line 3325 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3331 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3337 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3343 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3349 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3355 "parse_tree.error_util.c"
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

#line 3376 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3382 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3388 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3394 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3400 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3406 "parse_tree.error_util.c"
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

#line 3427 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3433 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3439 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3445 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3451 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3457 "parse_tree.error_util.c"
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

#line 3478 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3484 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3490 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3496 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3502 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3508 "parse_tree.error_util.c"
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

#line 3529 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3535 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3541 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3547 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3553 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3559 "parse_tree.error_util.c"
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

#line 3580 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3587 "parse_tree.error_util.c"
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

#line 3602 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3607 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3616 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3621 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3626 "parse_tree.error_util.c"
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

#line 3647 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3652 "parse_tree.error_util.c"
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

#line 3667 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3672 "parse_tree.error_util.c"
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

#line 3687 "parse_tree.error_util.c"
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

#line 3702 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3707 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3712 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3717 "parse_tree.error_util.c"
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

#line 3736 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3743 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3750 "parse_tree.error_util.c"
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

#line 3771 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3776 "parse_tree.error_util.c"
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

#line 3791 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3796 "parse_tree.error_util.c"
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

#line 3811 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3816 "parse_tree.error_util.c"
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

#line 3831 "parse_tree.error_util.c"
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

#line 3846 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 3851 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 3856 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 3861 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3866 "parse_tree.error_util.c"
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

#line 3890 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3898 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 3906 "parse_tree.error_util.c"
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

#line 3927 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 3932 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3941 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 3952 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3960 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 3963 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 3965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 3967 "parse_tree.error_util.c"
{
#line 3969 "parse_tree.error_util.c"
  {
#line 3971 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 3974 "parse_tree.error_util.c"
    {
#line 3976 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 3979 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 3981 "parse_tree.error_util.c"
  }
#line 3983 "parse_tree.error_util.c"
}

#line 3986 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 3989 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 3991 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 3993 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 3995 "parse_tree.error_util.c"
{
#line 3997 "parse_tree.error_util.c"
  {
#line 3999 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4002 "parse_tree.error_util.c"
    {
#line 4004 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4007 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4009 "parse_tree.error_util.c"
  }
#line 4011 "parse_tree.error_util.c"
}

#line 4014 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4017 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4021 "parse_tree.error_util.c"
{
#line 4023 "parse_tree.error_util.c"
  {
#line 4025 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4028 "parse_tree.error_util.c"
    {
#line 4030 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4033 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4035 "parse_tree.error_util.c"
  }
#line 4037 "parse_tree.error_util.c"
}

#line 4040 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4043 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4045 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4047 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4049 "parse_tree.error_util.c"
{
#line 4051 "parse_tree.error_util.c"
  {
#line 4053 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4056 "parse_tree.error_util.c"
    {
#line 4058 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4061 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4063 "parse_tree.error_util.c"
  }
#line 4065 "parse_tree.error_util.c"
}

#line 4068 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4071 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4073 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4075 "parse_tree.error_util.c"
{
#line 4077 "parse_tree.error_util.c"
  {
#line 4079 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4082 "parse_tree.error_util.c"
    {
#line 4084 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4087 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4089 "parse_tree.error_util.c"
  }
#line 4091 "parse_tree.error_util.c"
}

#line 4094 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4097 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4099 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4101 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4103 "parse_tree.error_util.c"
{
#line 4105 "parse_tree.error_util.c"
  {
#line 4107 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4110 "parse_tree.error_util.c"
    {
#line 4112 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4115 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4117 "parse_tree.error_util.c"
  }
#line 4119 "parse_tree.error_util.c"
}

#line 4122 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4125 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4127 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4129 "parse_tree.error_util.c"
{
#line 4131 "parse_tree.error_util.c"
  {
#line 4133 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4136 "parse_tree.error_util.c"
    {
#line 4138 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4141 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4143 "parse_tree.error_util.c"
  }
#line 4145 "parse_tree.error_util.c"
}

#line 4148 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4151 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4153 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4155 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4157 "parse_tree.error_util.c"
{
#line 4159 "parse_tree.error_util.c"
  {
#line 4161 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4164 "parse_tree.error_util.c"
    {
#line 4166 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4169 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4171 "parse_tree.error_util.c"
  }
#line 4173 "parse_tree.error_util.c"
}

#line 4176 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4179 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4181 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4183 "parse_tree.error_util.c"
{
#line 4185 "parse_tree.error_util.c"
  {
#line 4187 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4190 "parse_tree.error_util.c"
    {
#line 4192 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4195 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4197 "parse_tree.error_util.c"
  }
#line 4199 "parse_tree.error_util.c"
}

#line 4202 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4205 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4207 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4209 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4211 "parse_tree.error_util.c"
{
#line 4213 "parse_tree.error_util.c"
  {
#line 4215 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4218 "parse_tree.error_util.c"
    {
#line 4220 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4223 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4225 "parse_tree.error_util.c"
  }
#line 4227 "parse_tree.error_util.c"
}

#line 4230 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4233 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4235 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4237 "parse_tree.error_util.c"
{
#line 4239 "parse_tree.error_util.c"
  {
#line 4241 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4244 "parse_tree.error_util.c"
    {
#line 4246 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4249 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4251 "parse_tree.error_util.c"
  }
#line 4253 "parse_tree.error_util.c"
}

#line 4256 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4259 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4261 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4263 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4265 "parse_tree.error_util.c"
{
#line 4267 "parse_tree.error_util.c"
  {
#line 4269 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4272 "parse_tree.error_util.c"
    {
#line 4274 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4277 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4279 "parse_tree.error_util.c"
  }
#line 4281 "parse_tree.error_util.c"
}

#line 4284 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4287 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4289 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4291 "parse_tree.error_util.c"
{
#line 4293 "parse_tree.error_util.c"
  {
#line 4295 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4298 "parse_tree.error_util.c"
    {
#line 4300 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4303 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4305 "parse_tree.error_util.c"
  }
#line 4307 "parse_tree.error_util.c"
}

#line 4310 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4313 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4315 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4317 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4319 "parse_tree.error_util.c"
{
#line 4321 "parse_tree.error_util.c"
  {
#line 4323 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4326 "parse_tree.error_util.c"
    {
#line 4328 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4331 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4333 "parse_tree.error_util.c"
  }
#line 4335 "parse_tree.error_util.c"
}

#line 4338 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4341 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4343 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4345 "parse_tree.error_util.c"
{
#line 4347 "parse_tree.error_util.c"
  {
#line 4349 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4352 "parse_tree.error_util.c"
    {
#line 4354 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4357 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4359 "parse_tree.error_util.c"
  }
#line 4361 "parse_tree.error_util.c"
}

#line 4364 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4367 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4369 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4371 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4373 "parse_tree.error_util.c"
{
#line 4375 "parse_tree.error_util.c"
  {
#line 4377 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4380 "parse_tree.error_util.c"
    {
#line 4382 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4385 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4387 "parse_tree.error_util.c"
  }
#line 4389 "parse_tree.error_util.c"
}

#line 4392 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4395 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4397 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4399 "parse_tree.error_util.c"
{
#line 4401 "parse_tree.error_util.c"
  {
#line 4403 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4406 "parse_tree.error_util.c"
    {
#line 4408 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4411 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4413 "parse_tree.error_util.c"
  }
#line 4415 "parse_tree.error_util.c"
}

#line 4418 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4421 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4423 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4425 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4427 "parse_tree.error_util.c"
{
#line 4429 "parse_tree.error_util.c"
  {
#line 4431 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4434 "parse_tree.error_util.c"
    {
#line 4436 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4439 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4441 "parse_tree.error_util.c"
  }
#line 4443 "parse_tree.error_util.c"
}

#line 4446 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4449 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4451 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4453 "parse_tree.error_util.c"
{
#line 4455 "parse_tree.error_util.c"
  {
#line 4457 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4460 "parse_tree.error_util.c"
    {
#line 4462 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4465 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4467 "parse_tree.error_util.c"
  }
#line 4469 "parse_tree.error_util.c"
}

#line 4472 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4475 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4477 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4479 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4481 "parse_tree.error_util.c"
{
#line 4483 "parse_tree.error_util.c"
  {
#line 4485 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4488 "parse_tree.error_util.c"
    {
#line 4490 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4493 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4495 "parse_tree.error_util.c"
  }
#line 4497 "parse_tree.error_util.c"
}

#line 4500 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4503 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4505 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4507 "parse_tree.error_util.c"
{
#line 4509 "parse_tree.error_util.c"
  {
#line 4511 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4514 "parse_tree.error_util.c"
    {
#line 4516 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4519 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4521 "parse_tree.error_util.c"
  }
#line 4523 "parse_tree.error_util.c"
}

#line 4526 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4529 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4531 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4533 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4535 "parse_tree.error_util.c"
{
#line 4537 "parse_tree.error_util.c"
  {
#line 4539 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4542 "parse_tree.error_util.c"
    {
#line 4544 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4547 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4549 "parse_tree.error_util.c"
  }
#line 4551 "parse_tree.error_util.c"
}

#line 4554 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4557 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4559 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4561 "parse_tree.error_util.c"
{
#line 4563 "parse_tree.error_util.c"
  {
#line 4565 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4568 "parse_tree.error_util.c"
    {
#line 4570 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4573 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4575 "parse_tree.error_util.c"
  }
#line 4577 "parse_tree.error_util.c"
}

#line 4580 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4583 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4585 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4587 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4589 "parse_tree.error_util.c"
{
#line 4591 "parse_tree.error_util.c"
  {
#line 4593 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4596 "parse_tree.error_util.c"
    {
#line 4598 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4601 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4603 "parse_tree.error_util.c"
  }
#line 4605 "parse_tree.error_util.c"
}

#line 4608 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4611 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4613 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4615 "parse_tree.error_util.c"
{
#line 4617 "parse_tree.error_util.c"
  {
#line 4619 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4622 "parse_tree.error_util.c"
    {
#line 4624 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4627 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4629 "parse_tree.error_util.c"
  }
#line 4631 "parse_tree.error_util.c"
}

#line 4634 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4637 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4639 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4641 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4643 "parse_tree.error_util.c"
{
#line 4645 "parse_tree.error_util.c"
  {
#line 4647 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4650 "parse_tree.error_util.c"
    {
#line 4652 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4655 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4657 "parse_tree.error_util.c"
  }
#line 4659 "parse_tree.error_util.c"
}

#line 4662 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4665 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4667 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4669 "parse_tree.error_util.c"
{
#line 4671 "parse_tree.error_util.c"
  {
#line 4673 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4676 "parse_tree.error_util.c"
    {
#line 4678 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4681 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4683 "parse_tree.error_util.c"
  }
#line 4685 "parse_tree.error_util.c"
}

#line 4688 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 4691 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4693 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4695 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4697 "parse_tree.error_util.c"
{
#line 4699 "parse_tree.error_util.c"
  {
#line 4701 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4704 "parse_tree.error_util.c"
    {
#line 4706 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4709 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4711 "parse_tree.error_util.c"
  }
#line 4713 "parse_tree.error_util.c"
}

#line 4716 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 4719 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4721 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4723 "parse_tree.error_util.c"
{
#line 4725 "parse_tree.error_util.c"
  {
#line 4727 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4730 "parse_tree.error_util.c"
    {
#line 4732 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4735 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4737 "parse_tree.error_util.c"
  }
#line 4739 "parse_tree.error_util.c"
}

#line 4742 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 4745 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4747 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4749 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4751 "parse_tree.error_util.c"
{
#line 4753 "parse_tree.error_util.c"
  {
#line 4755 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4758 "parse_tree.error_util.c"
    {
#line 4760 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4763 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4765 "parse_tree.error_util.c"
  }
#line 4767 "parse_tree.error_util.c"
}

#line 4770 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 4773 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4775 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4777 "parse_tree.error_util.c"
{
#line 4779 "parse_tree.error_util.c"
  {
#line 4781 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4784 "parse_tree.error_util.c"
    {
#line 4786 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4789 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4791 "parse_tree.error_util.c"
  }
#line 4793 "parse_tree.error_util.c"
}

#line 4796 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 4799 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4801 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4805 "parse_tree.error_util.c"
{
#line 4807 "parse_tree.error_util.c"
  {
#line 4809 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4812 "parse_tree.error_util.c"
    {
#line 4814 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4817 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4819 "parse_tree.error_util.c"
  }
#line 4821 "parse_tree.error_util.c"
}

#line 4824 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 4827 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4829 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4831 "parse_tree.error_util.c"
{
#line 4833 "parse_tree.error_util.c"
  {
#line 4835 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4838 "parse_tree.error_util.c"
    {
#line 4840 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4843 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4845 "parse_tree.error_util.c"
  }
#line 4847 "parse_tree.error_util.c"
}

#line 4850 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 4853 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4855 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4859 "parse_tree.error_util.c"
{
#line 4861 "parse_tree.error_util.c"
  {
#line 4863 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4866 "parse_tree.error_util.c"
    {
#line 4868 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4871 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4873 "parse_tree.error_util.c"
  }
#line 4875 "parse_tree.error_util.c"
}

#line 4878 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 4881 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4883 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4885 "parse_tree.error_util.c"
{
#line 4887 "parse_tree.error_util.c"
  {
#line 4889 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4892 "parse_tree.error_util.c"
    {
#line 4894 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4897 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4899 "parse_tree.error_util.c"
  }
#line 4901 "parse_tree.error_util.c"
}

#line 4904 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 4907 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4909 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4913 "parse_tree.error_util.c"
{
#line 4915 "parse_tree.error_util.c"
  {
#line 4917 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4920 "parse_tree.error_util.c"
    {
#line 4922 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4925 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4927 "parse_tree.error_util.c"
  }
#line 4929 "parse_tree.error_util.c"
}

#line 633 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__633__1_1_p_0(
#line 633 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 633 "error_util.m"
{
#line 633 "error_util.m"
  {
#line 633 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 633 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 633 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 633 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 633 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 633 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 656 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 669 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
    else
#line 656 "error_util.m"
      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 670 "error_util.m"
        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
      else
#line 656 "error_util.m"
        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 672 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
        else
#line 656 "error_util.m"
          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 667 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
          else
#line 656 "error_util.m"
            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 664 "error_util.m"
              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
            else
#line 656 "error_util.m"
              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 659 "error_util.m"
                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
              else
#line 656 "error_util.m"
                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 661 "error_util.m"
                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                else
#line 656 "error_util.m"
                  if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 671 "error_util.m"
                    parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                  else
#line 656 "error_util.m"
                    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 665 "error_util.m"
                      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                    else
#line 656 "error_util.m"
                      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 658 "error_util.m"
                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                      else
#line 656 "error_util.m"
                        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 663 "error_util.m"
                          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                        else
#line 656 "error_util.m"
                          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "error_util.m"
                            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                          else
#line 656 "error_util.m"
                            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 657 "error_util.m"
                              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                            else
#line 656 "error_util.m"
                              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 668 "error_util.m"
                                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                              else
#line 656 "error_util.m"
                                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 660 "error_util.m"
                                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 656 "error_util.m"
                                else
#line 656 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__Phase_31)) == (MR_mktag((MR_Integer) 1))))
#line 662 "error_util.m"
                                    {
#line 662 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 662 "error_util.m"
                                      {
#line 662 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 662 "error_util.m"
                                      }
#line 662 "error_util.m"
                                    }
#line 656 "error_util.m"
                                  else
#line 666 "error_util.m"
                                    {
#line 666 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 666 "error_util.m"
                                      {
#line 666 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 666 "error_util.m"
                                      }
#line 666 "error_util.m"
                                    }
#line 635 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 635 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 635 "error_util.m"
      {
#line 635 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 635 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 635 "error_util.m"
      }
#line 633 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 633 "error_util.m"
  }
#line 633 "error_util.m"
}

#line 1137 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1137 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1137 "error_util.m"
{
#line 1137 "error_util.m"
  {
#line 1137 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1137 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1137 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1137 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1137 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5121 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1137 "error_util.m"
    else
#line 1137 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1137 "error_util.m"
        else
#line 1137 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5135 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
          else
#line 1137 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5141 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
            else
#line 5145 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
      else
#line 1137 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "error_util.m"
          {
#line 1137 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1137 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5158 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
            else
#line 1137 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "error_util.m"
                {
#line 1137 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1137 "error_util.m"
                  {
#line 1137 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1137 "error_util.m"
                    return;
                  }
#line 1137 "error_util.m"
                }
#line 1137 "error_util.m"
              else
#line 1137 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5182 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
                else
#line 5186 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
          }
#line 1137 "error_util.m"
        else
#line 1137 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "error_util.m"
            {
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1137 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5201 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
              else
#line 1137 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5207 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
                else
#line 1137 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "error_util.m"
                    {
#line 1137 "error_util.m"
                      MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1137 "error_util.m"
                      {
#line 1137 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1137 "error_util.m"
                        return;
                      }
#line 1137 "error_util.m"
                    }
#line 1137 "error_util.m"
                  else
#line 5229 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
            }
#line 1137 "error_util.m"
          else
#line 1137 "error_util.m"
            {
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1137 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5242 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1137 "error_util.m"
              else
#line 1137 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5248 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
                else
#line 1137 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5254 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1137 "error_util.m"
                  else
#line 1137 "error_util.m"
                    {
#line 1137 "error_util.m"
                      MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1137 "error_util.m"
                      {
#line 1137 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1137 "error_util.m"
                        return;
                      }
#line 1137 "error_util.m"
                    }
#line 1137 "error_util.m"
            }
#line 1137 "error_util.m"
  }
#line 1137 "error_util.m"
}

#line 1137 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1137 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1137 "error_util.m"
{
#line 1137 "error_util.m"
  {
#line 1137 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1137 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1137 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1137 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1137 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1137 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1137 "error_util.m"
    else
#line 1137 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "error_util.m"
        {
#line 1137 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1137 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1137 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1137 "error_util.m"
        }
#line 1137 "error_util.m"
      else
#line 1137 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "error_util.m"
          {
#line 1137 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1137 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1137 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1137 "error_util.m"
              {
#line 1137 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5337 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1137 "error_util.m"
              }
#line 1137 "error_util.m"
          }
#line 1137 "error_util.m"
        else
#line 1137 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1137 "error_util.m"
            {
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_6_6;

#line 1137 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1137 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1137 "error_util.m"
                {
#line 1137 "error_util.m"
                  parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5362 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1137 "error_util.m"
                }
#line 1137 "error_util.m"
            }
#line 1137 "error_util.m"
          else
#line 1137 "error_util.m"
            {
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "error_util.m"
              MR_String parse_tree__error_util__V_8_8;

#line 1137 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1137 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1137 "error_util.m"
                {
#line 1137 "error_util.m"
                  parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5385 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1137 "error_util.m"
                }
#line 1137 "error_util.m"
            }
#line 1137 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1137 "error_util.m"
  }
#line 1137 "error_util.m"
}

#line 1229 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1229 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1229 "error_util.m"
{
#line 1229 "error_util.m"
  {
#line 1229 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1229 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1229 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1229 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1229 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5422 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1229 "error_util.m"
    else
#line 1229 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1229 "error_util.m"
        else
#line 1229 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5436 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "error_util.m"
          else
#line 5440 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "error_util.m"
      else
#line 1229 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1229 "error_util.m"
          {
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1229 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5453 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "error_util.m"
            else
#line 1229 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1229 "error_util.m"
                {
#line 1229 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1229 "error_util.m"
                  {
#line 1229 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1229 "error_util.m"
                    return;
                  }
#line 1229 "error_util.m"
                }
#line 1229 "error_util.m"
              else
#line 5475 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "error_util.m"
          }
#line 1229 "error_util.m"
        else
#line 1229 "error_util.m"
          {
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1229 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5488 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1229 "error_util.m"
            else
#line 1229 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5494 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1229 "error_util.m"
              else
#line 1229 "error_util.m"
                {
#line 1229 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1229 "error_util.m"
                  {
#line 1229 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1229 "error_util.m"
                    return;
                  }
#line 1229 "error_util.m"
                }
#line 1229 "error_util.m"
          }
#line 1229 "error_util.m"
  }
#line 1229 "error_util.m"
}

#line 1229 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1229 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1229 "error_util.m"
{
#line 1229 "error_util.m"
  {
#line 1229 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1229 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1229 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1229 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1229 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1229 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1229 "error_util.m"
    else
#line 1229 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "error_util.m"
        {
#line 1229 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1229 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1229 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1229 "error_util.m"
        }
#line 1229 "error_util.m"
      else
#line 1229 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1229 "error_util.m"
          {
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1229 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1229 "error_util.m"
              {
#line 1229 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5577 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1229 "error_util.m"
              }
#line 1229 "error_util.m"
          }
#line 1229 "error_util.m"
        else
#line 1229 "error_util.m"
          {
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1229 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1229 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1229 "error_util.m"
              {
#line 1229 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5600 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1229 "error_util.m"
              }
#line 1229 "error_util.m"
          }
#line 1229 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1229 "error_util.m"
  }
#line 1229 "error_util.m"
}

#line 1119 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1119 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1119 "error_util.m"
{
#line 1119 "error_util.m"
  {
#line 1119 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1119 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1119 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1119 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1119 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5637 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1119 "error_util.m"
    else
#line 1119 "error_util.m"
      {
#line 1119 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1119 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1119 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1119 "error_util.m"
        {
#line 1119 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 5663 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1119 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1119 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1119 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1119 "error_util.m"
        else
#line 1119 "error_util.m"
          {
#line 1119 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1119 "error_util.m"
            {
#line 1119 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 5683 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1119 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1119 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1119 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1119 "error_util.m"
            else
#line 1119 "error_util.m"
              {
#line 1119 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1119 "error_util.m"
                return;
              }
#line 1119 "error_util.m"
          }
#line 1119 "error_util.m"
      }
#line 1119 "error_util.m"
  }
#line 1119 "error_util.m"
}

#line 1119 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1119 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1119 "error_util.m"
{
#line 1119 "error_util.m"
  {
#line 1119 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1119 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1119 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1119 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1119 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1119 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1119 "error_util.m"
    else
#line 1119 "error_util.m"
      {
#line 1119 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1119 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1119 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 5750 "parse_tree.error_util.c"
        {
#line 5752 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1119 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1119 "error_util.m"
          {
#line 5759 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1119 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 5763 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1119 "error_util.m"
          }
#line 1119 "error_util.m"
      }
#line 1119 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1119 "error_util.m"
  }
#line 1119 "error_util.m"
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
#line 5817 "parse_tree.error_util.c"
  {
#line 5819 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5822 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5824 "parse_tree.error_util.c"
  }
#line 102 "error_util.m"
}

#line 145 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
#line 145 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 145 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 145 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 145 "error_util.m"
{
#line 145 "error_util.m"
  {
#line 145 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 145 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 145 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 145 "error_util.m"
    {
#line 145 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 145 "error_util.m"
      return;
    }
#line 145 "error_util.m"
  }
#line 145 "error_util.m"
}

#line 145 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 145 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 145 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 145 "error_util.m"
{
#line 5870 "parse_tree.error_util.c"
  {
#line 5872 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5875 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5877 "parse_tree.error_util.c"
  }
#line 145 "error_util.m"
}

#line 760 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 760 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 760 "error_util.m"
{
#line 760 "error_util.m"
  {
#line 760 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 760 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 760 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 760 "error_util.m"
    {
#line 760 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 760 "error_util.m"
      return;
    }
#line 760 "error_util.m"
  }
#line 760 "error_util.m"
}

#line 760 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 760 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 760 "error_util.m"
{
#line 5923 "parse_tree.error_util.c"
  {
#line 5925 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5928 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5930 "parse_tree.error_util.c"
  }
#line 760 "error_util.m"
}

#line 764 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 764 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 764 "error_util.m"
{
#line 764 "error_util.m"
  {
#line 764 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 764 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 764 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 764 "error_util.m"
    {
#line 764 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 764 "error_util.m"
      return;
    }
#line 764 "error_util.m"
  }
#line 764 "error_util.m"
}

#line 764 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 764 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 764 "error_util.m"
{
#line 5976 "parse_tree.error_util.c"
  {
#line 5978 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5981 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5983 "parse_tree.error_util.c"
  }
#line 764 "error_util.m"
}

#line 876 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 876 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 876 "error_util.m"
{
#line 876 "error_util.m"
  {
#line 876 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 876 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 876 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 876 "error_util.m"
    {
#line 876 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 876 "error_util.m"
      return;
    }
#line 876 "error_util.m"
  }
#line 876 "error_util.m"
}

#line 876 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 876 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 876 "error_util.m"
{
#line 6029 "parse_tree.error_util.c"
  {
#line 6031 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6034 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6036 "parse_tree.error_util.c"
  }
#line 876 "error_util.m"
}

#line 340 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 340 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 340 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 340 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 340 "error_util.m"
{
#line 340 "error_util.m"
  {
#line 340 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 340 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 340 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 340 "error_util.m"
    {
#line 340 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 340 "error_util.m"
      return;
    }
#line 340 "error_util.m"
  }
#line 340 "error_util.m"
}

#line 340 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 340 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 340 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 340 "error_util.m"
{
#line 340 "error_util.m"
  {
#line 340 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 340 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 340 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 340 "error_util.m"
    {
#line 340 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 340 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 340 "error_util.m"
  }
#line 340 "error_util.m"
}

#line 273 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 273 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 273 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 273 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 273 "error_util.m"
{
#line 273 "error_util.m"
  {
#line 273 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 273 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 273 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 273 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_35 == parse_tree__error_util__CastY_36);
#line 273 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6127 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 273 "error_util.m"
    else
#line 273 "error_util.m"
      {
#line 273 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 273 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 273 "error_util.m"
        {
#line 273 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 273 "error_util.m"
        {
#line 273 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 273 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 273 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6152 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 273 "error_util.m"
        else
#line 273 "error_util.m"
          {
#line 273 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 273 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6162 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 273 "error_util.m"
            else
#line 273 "error_util.m"
              {
#line 273 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 273 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 273 "error_util.m"
                  {
#line 273 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 273 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                  }
#line 273 "error_util.m"
                else
#line 273 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "error_util.m"
                    {
#line 273 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 273 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                    }
#line 273 "error_util.m"
                  else
#line 273 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 273 "error_util.m"
                      {
#line 273 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 273 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                      }
#line 273 "error_util.m"
                    else
#line 273 "error_util.m"
                      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 273 "error_util.m"
                        {
#line 273 "error_util.m"
                          MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "error_util.m"
                          MR_String parse_tree__error_util__V_8_8;

#line 273 "error_util.m"
                          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 273 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                            {
#line 273 "error_util.m"
                              parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "error_util.m"
                              {
#line 273 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                              }
#line 273 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                            }
#line 273 "error_util.m"
                        }
#line 273 "error_util.m"
                      else
#line 273 "error_util.m"
                        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 273 "error_util.m"
                          {
#line 273 "error_util.m"
                            MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 273 "error_util.m"
                            MR_String parse_tree__error_util__V_10_10;

#line 273 "error_util.m"
                            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 273 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                              {
#line 273 "error_util.m"
                                parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 273 "error_util.m"
                                {
#line 273 "error_util.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                                }
#line 273 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                              }
#line 273 "error_util.m"
                          }
#line 273 "error_util.m"
                        else
#line 273 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 273 "error_util.m"
                            {
#line 273 "error_util.m"
                              MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                              MR_Integer parse_tree__error_util__V_12_12;

#line 273 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 273 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                {
#line 273 "error_util.m"
                                  parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                  {
#line 273 "error_util.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                                  }
#line 273 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                }
#line 273 "error_util.m"
                            }
#line 273 "error_util.m"
                          else
#line 273 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 273 "error_util.m"
                              {
#line 273 "error_util.m"
                                MR_Integer parse_tree__error_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                MR_Integer parse_tree__error_util__V_34_34;

#line 273 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 273 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                  {
#line 273 "error_util.m"
                                    parse_tree__error_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                    {
#line 273 "error_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                                    }
#line 273 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                  }
#line 273 "error_util.m"
                              }
#line 273 "error_util.m"
                            else
#line 273 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 273 "error_util.m"
                                {
#line 273 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_14_14;

#line 273 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 273 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                    {
#line 273 "error_util.m"
                                      parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                                      }
#line 273 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                    }
#line 273 "error_util.m"
                                }
#line 273 "error_util.m"
                              else
#line 273 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 273 "error_util.m"
                                  {
#line 273 "error_util.m"
                                    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                    MR_Word parse_tree__error_util__V_30_30;
#line 273 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_51_51;
#line 273 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_52_52;

#line 273 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 273 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                        parse_tree__error_util__V_51_51 = (MR_Integer) parse_tree__error_util__V_29_29;
#line 273 "error_util.m"
                                        parse_tree__error_util__V_52_52 = (MR_Integer) parse_tree__error_util__V_30_30;
#line 273 "error_util.m"
                                        {
#line 273 "error_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_51_51, parse_tree__error_util__V_52_52);
                                        }
#line 273 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                      }
#line 273 "error_util.m"
                                  }
#line 273 "error_util.m"
                                else
#line 273 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 273 "error_util.m"
                                    {
#line 273 "error_util.m"
                                      MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                      MR_String parse_tree__error_util__V_16_16;

#line 273 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 273 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                        {
#line 273 "error_util.m"
                                          parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                          {
#line 273 "error_util.m"
                                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                          }
#line 273 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                        }
#line 273 "error_util.m"
                                    }
#line 273 "error_util.m"
                                  else
#line 273 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                        MR_Word parse_tree__error_util__V_32_32;

#line 273 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 273 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                          {
#line 273 "error_util.m"
                                            parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                            {
#line 273 "error_util.m"
                                              parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                                            }
#line 273 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                          }
#line 273 "error_util.m"
                                      }
#line 273 "error_util.m"
                                    else
#line 273 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 273 "error_util.m"
                                        {
#line 273 "error_util.m"
                                          MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                          MR_String parse_tree__error_util__V_18_18;

#line 273 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 273 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                            {
#line 273 "error_util.m"
                                              parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                              {
#line 273 "error_util.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                              }
#line 273 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                            }
#line 273 "error_util.m"
                                        }
#line 273 "error_util.m"
                                      else
#line 273 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 273 "error_util.m"
                                          {
#line 273 "error_util.m"
                                            MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                            MR_Word parse_tree__error_util__V_24_24;

#line 273 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 273 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                              {
#line 273 "error_util.m"
                                                parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                {
#line 273 "error_util.m"
                                                  mdbcomp__prim_data____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                                }
#line 273 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                              }
#line 273 "error_util.m"
                                          }
#line 273 "error_util.m"
                                        else
#line 273 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 273 "error_util.m"
                                            {
#line 273 "error_util.m"
                                              MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                              MR_Word parse_tree__error_util__V_26_26;

#line 273 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 273 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                                {
#line 273 "error_util.m"
                                                  parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                  {
#line 273 "error_util.m"
                                                    parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                                  }
#line 273 "error_util.m"
                                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                                }
#line 273 "error_util.m"
                                            }
#line 273 "error_util.m"
                                          else
#line 273 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 273 "error_util.m"
                                              {
#line 273 "error_util.m"
                                                MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                MR_Word parse_tree__error_util__V_28_28;

#line 273 "error_util.m"
                                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 273 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                                  {
#line 273 "error_util.m"
                                                    parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                    {
#line 273 "error_util.m"
                                                      parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                                                    }
#line 273 "error_util.m"
                                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                                  }
#line 273 "error_util.m"
                                              }
#line 273 "error_util.m"
                                            else
#line 273 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 273 "error_util.m"
                                                {
#line 273 "error_util.m"
                                                  MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                  MR_String parse_tree__error_util__V_20_20;

#line 273 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 273 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                                    {
#line 273 "error_util.m"
                                                      parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                      {
#line 273 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                                                      }
#line 273 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                                    }
#line 273 "error_util.m"
                                                }
#line 273 "error_util.m"
                                              else
#line 273 "error_util.m"
                                                {
#line 273 "error_util.m"
                                                  MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                  MR_String parse_tree__error_util__V_22_22;

#line 273 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 273 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                                    {
#line 273 "error_util.m"
                                                      parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 273 "error_util.m"
                                                      {
#line 273 "error_util.m"
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                                      }
#line 273 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
                                                    }
#line 273 "error_util.m"
                                                }
#line 273 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 273 "error_util.m"
                else
#line 273 "error_util.m"
                  {
#line 273 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 273 "error_util.m"
                    return;
                  }
#line 273 "error_util.m"
              }
#line 273 "error_util.m"
          }
#line 273 "error_util.m"
      }
#line 273 "error_util.m"
  }
#line 273 "error_util.m"
}

#line 273 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 273 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 273 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 273 "error_util.m"
{
#line 273 "error_util.m"
  {
#line 273 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 273 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6671 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 273 "error_util.m"
    else
#line 273 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6677 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 273 "error_util.m"
      else
#line 273 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6683 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 273 "error_util.m"
        else
#line 273 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6689 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 273 "error_util.m"
          else
#line 273 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6695 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 273 "error_util.m"
            else
#line 273 "error_util.m"
              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6701 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 273 "error_util.m"
              else
#line 273 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6707 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 273 "error_util.m"
                else
#line 273 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6713 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 273 "error_util.m"
                  else
#line 273 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6719 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 273 "error_util.m"
                    else
#line 273 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6725 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 273 "error_util.m"
                      else
#line 273 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6731 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 273 "error_util.m"
                        else
#line 273 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6737 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 273 "error_util.m"
                          else
#line 273 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6743 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 273 "error_util.m"
                            else
#line 273 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6749 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 273 "error_util.m"
                              else
#line 273 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6755 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 273 "error_util.m"
                                else
#line 273 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6761 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 273 "error_util.m"
                                  else
#line 6765 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 273 "error_util.m"
  }
#line 273 "error_util.m"
}

#line 273 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 273 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 273 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 273 "error_util.m"
{
#line 273 "error_util.m"
  {
#line 273 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 273 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 273 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 273 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_37 == parse_tree__error_util__CastY_38);
#line 273 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 273 "error_util.m"
    else
#line 273 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 273 "error_util.m"
        {
#line 273 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 273 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 273 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 273 "error_util.m"
        }
#line 273 "error_util.m"
      else
#line 273 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 273 "error_util.m"
          {
#line 273 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 273 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 273 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 273 "error_util.m"
          }
#line 273 "error_util.m"
        else
#line 273 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 273 "error_util.m"
            {
#line 273 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_31 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 273 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 273 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_32 == parse_tree__error_util__CastX_31);
#line 273 "error_util.m"
            }
#line 273 "error_util.m"
          else
#line 273 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 273 "error_util.m"
              {
#line 273 "error_util.m"
                MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 273 "error_util.m"
                parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 273 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                  {
#line 273 "error_util.m"
                    parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6860 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 273 "error_util.m"
                  }
#line 273 "error_util.m"
              }
#line 273 "error_util.m"
            else
#line 273 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 273 "error_util.m"
                {
#line 273 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 273 "error_util.m"
                  MR_String parse_tree__error_util__V_6_6;

#line 273 "error_util.m"
                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 273 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                    {
#line 273 "error_util.m"
                      parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6885 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 273 "error_util.m"
                    }
#line 273 "error_util.m"
                }
#line 273 "error_util.m"
              else
#line 273 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 273 "error_util.m"
                  {
#line 273 "error_util.m"
                    MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                    MR_Integer parse_tree__error_util__V_8_8;

#line 273 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 273 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                      {
#line 273 "error_util.m"
                        parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6910 "parse_tree.error_util.c"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__V_7_7 == parse_tree__error_util__V_8_8);
#line 273 "error_util.m"
                      }
#line 273 "error_util.m"
                  }
#line 273 "error_util.m"
                else
#line 273 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 273 "error_util.m"
                    {
#line 273 "error_util.m"
                      MR_Integer parse_tree__error_util__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                      MR_Integer parse_tree__error_util__V_34_34;

#line 273 "error_util.m"
                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 273 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                        {
#line 273 "error_util.m"
                          parse_tree__error_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6935 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_33_33 == parse_tree__error_util__V_34_34);
#line 273 "error_util.m"
                        }
#line 273 "error_util.m"
                    }
#line 273 "error_util.m"
                  else
#line 273 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 273 "error_util.m"
                      {
#line 273 "error_util.m"
                        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                        MR_Integer parse_tree__error_util__V_10_10;

#line 273 "error_util.m"
                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 273 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                          {
#line 273 "error_util.m"
                            parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6960 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 273 "error_util.m"
                          }
#line 273 "error_util.m"
                      }
#line 273 "error_util.m"
                    else
#line 273 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 273 "error_util.m"
                        {
#line 273 "error_util.m"
                          MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                          MR_Word parse_tree__error_util__V_28_28;

#line 273 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 273 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                            {
#line 273 "error_util.m"
                              parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6985 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == parse_tree__error_util__V_28_28);
#line 273 "error_util.m"
                            }
#line 273 "error_util.m"
                        }
#line 273 "error_util.m"
                      else
#line 273 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 273 "error_util.m"
                          {
#line 273 "error_util.m"
                            MR_String parse_tree__error_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                            MR_String parse_tree__error_util__V_14_14;

#line 273 "error_util.m"
                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 273 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                              {
#line 273 "error_util.m"
                                parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7010 "parse_tree.error_util.c"
                                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14) == 0);
#line 273 "error_util.m"
                              }
#line 273 "error_util.m"
                          }
#line 273 "error_util.m"
                        else
#line 273 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 273 "error_util.m"
                            {
#line 273 "error_util.m"
                              MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                              MR_Word parse_tree__error_util__V_30_30;

#line 273 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 273 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                {
#line 273 "error_util.m"
                                  parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7035 "parse_tree.error_util.c"
                                  {
#line 7037 "parse_tree.error_util.c"
                                    return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                                  }
#line 273 "error_util.m"
                                }
#line 273 "error_util.m"
                            }
#line 273 "error_util.m"
                          else
#line 273 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 273 "error_util.m"
                              {
#line 273 "error_util.m"
                                MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                MR_String parse_tree__error_util__V_16_16;

#line 273 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 273 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                  {
#line 273 "error_util.m"
                                    parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7063 "parse_tree.error_util.c"
                                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 273 "error_util.m"
                                  }
#line 273 "error_util.m"
                              }
#line 273 "error_util.m"
                            else
#line 273 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 273 "error_util.m"
                                {
#line 273 "error_util.m"
                                  MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                  MR_Word parse_tree__error_util__V_22_22;

#line 273 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 273 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                    {
#line 273 "error_util.m"
                                      parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7088 "parse_tree.error_util.c"
                                      {
#line 7090 "parse_tree.error_util.c"
                                        return parse_tree__error_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                      }
#line 273 "error_util.m"
                                    }
#line 273 "error_util.m"
                                }
#line 273 "error_util.m"
                              else
#line 273 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 273 "error_util.m"
                                  {
#line 273 "error_util.m"
                                    MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                    MR_Word parse_tree__error_util__V_24_24;

#line 273 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 273 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7116 "parse_tree.error_util.c"
                                        {
#line 7118 "parse_tree.error_util.c"
                                          return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                        }
#line 273 "error_util.m"
                                      }
#line 273 "error_util.m"
                                  }
#line 273 "error_util.m"
                                else
#line 273 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 273 "error_util.m"
                                    {
#line 273 "error_util.m"
                                      MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                      MR_Word parse_tree__error_util__V_26_26;

#line 273 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 273 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                        {
#line 273 "error_util.m"
                                          parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7144 "parse_tree.error_util.c"
                                          {
#line 7146 "parse_tree.error_util.c"
                                            return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                          }
#line 273 "error_util.m"
                                        }
#line 273 "error_util.m"
                                    }
#line 273 "error_util.m"
                                  else
#line 273 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                        MR_String parse_tree__error_util__V_18_18;

#line 273 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 273 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                          {
#line 273 "error_util.m"
                                            parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7172 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 273 "error_util.m"
                                          }
#line 273 "error_util.m"
                                      }
#line 273 "error_util.m"
                                    else
#line 273 "error_util.m"
                                      {
#line 273 "error_util.m"
                                        MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 273 "error_util.m"
                                        MR_String parse_tree__error_util__V_20_20;

#line 273 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 273 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 273 "error_util.m"
                                          {
#line 273 "error_util.m"
                                            parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7195 "parse_tree.error_util.c"
                                            parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 273 "error_util.m"
                                          }
#line 273 "error_util.m"
                                      }
#line 273 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 273 "error_util.m"
  }
#line 273 "error_util.m"
}

#line 628 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 628 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 628 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 628 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 628 "error_util.m"
{
#line 628 "error_util.m"
  {
#line 628 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 628 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 628 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 628 "error_util.m"
    {
#line 628 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 628 "error_util.m"
      return;
    }
#line 628 "error_util.m"
  }
#line 628 "error_util.m"
}

#line 628 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 628 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 628 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 628 "error_util.m"
{
#line 628 "error_util.m"
  {
#line 628 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 628 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 628 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 628 "error_util.m"
    {
#line 628 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 628 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 628 "error_util.m"
  }
#line 628 "error_util.m"
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
#line 7294 "parse_tree.error_util.c"
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
#line 7320 "parse_tree.error_util.c"
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
#line 7340 "parse_tree.error_util.c"
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

#line 7413 "parse_tree.error_util.c"
        {
#line 7415 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 65 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
          {
#line 7422 "parse_tree.error_util.c"
            {
#line 7424 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 65 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 65 "error_util.m"
              {
#line 7431 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 7433 "parse_tree.error_util.c"
                {
#line 7435 "parse_tree.error_util.c"
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
#line 7475 "parse_tree.error_util.c"
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
#line 7499 "parse_tree.error_util.c"
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
#line 7523 "parse_tree.error_util.c"
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
#line 7547 "parse_tree.error_util.c"
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
#line 7564 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
              else
#line 72 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7570 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "error_util.m"
                else
#line 72 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7576 "parse_tree.error_util.c"
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
#line 7602 "parse_tree.error_util.c"
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
#line 7626 "parse_tree.error_util.c"
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
#line 7646 "parse_tree.error_util.c"
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
#line 7786 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 72 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                    {
#line 7792 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 72 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                        {
#line 7798 "parse_tree.error_util.c"
                          {
#line 7800 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                          }
#line 72 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 72 "error_util.m"
                            {
#line 7807 "parse_tree.error_util.c"
                              parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 7809 "parse_tree.error_util.c"
                              {
#line 7811 "parse_tree.error_util.c"
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
#line 7855 "parse_tree.error_util.c"
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
#line 7880 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 106 "error_util.m"
        else
#line 106 "error_util.m"
          {
#line 106 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 106 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 7890 "parse_tree.error_util.c"
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
#line 8191 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 106 "error_util.m"
    else
#line 106 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8197 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 106 "error_util.m"
      else
#line 106 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8203 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 106 "error_util.m"
        else
#line 106 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8209 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 106 "error_util.m"
          else
#line 106 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8215 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 106 "error_util.m"
            else
#line 106 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8221 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 106 "error_util.m"
              else
#line 106 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8227 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 106 "error_util.m"
                else
#line 106 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8233 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 106 "error_util.m"
                  else
#line 106 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8239 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 106 "error_util.m"
                    else
#line 106 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8245 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 106 "error_util.m"
                      else
#line 106 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8251 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 106 "error_util.m"
                        else
#line 106 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8257 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 106 "error_util.m"
                          else
#line 106 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8263 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 106 "error_util.m"
                            else
#line 106 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8269 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 106 "error_util.m"
                              else
#line 106 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8275 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 106 "error_util.m"
                                else
#line 106 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8281 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 106 "error_util.m"
                                  else
#line 8285 "parse_tree.error_util.c"
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
#line 8560 "parse_tree.error_util.c"
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
#line 8583 "parse_tree.error_util.c"
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

#line 161 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 161 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 161 "error_util.m"
{
#line 161 "error_util.m"
  {
#line 161 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 161 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_87 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 161 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_88 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 161 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_87 == parse_tree__error_util__CastY_88);
#line 161 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "error_util.m"
    else
#line 161 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
        {
#line 161 "error_util.m"
          MR_Word parse_tree__error_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 161 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
            {
#line 161 "error_util.m"
              MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_109_109)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 161 "error_util.m"
                return;
              }
#line 161 "error_util.m"
            }
#line 161 "error_util.m"
          else
#line 161 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
            else
#line 161 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
              else
#line 161 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
                else
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
        }
#line 161 "error_util.m"
      else
#line 161 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
          {
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 161 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
            else
#line 161 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
                {
#line 161 "error_util.m"
                  MR_Word parse_tree__error_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 161 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 161 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27;
#line 161 "error_util.m"
                  MR_Integer parse_tree__error_util__V_118_118 = (MR_Integer) parse_tree__error_util__V_112_112;
#line 161 "error_util.m"
                  MR_Integer parse_tree__error_util__V_119_119 = (MR_Integer) parse_tree__error_util__V_24_24;

#line 161 "error_util.m"
                  {
#line 161 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_27_27, parse_tree__error_util__V_118_118, parse_tree__error_util__V_119_119);
                  }
#line 161 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == (MR_Integer) 0);
#line 161 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 161 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_27_27;
#line 161 "error_util.m"
                  else
#line 161 "error_util.m"
                    {
#line 161 "error_util.m"
                      MR_Word parse_tree__error_util__V_28_28;
#line 161 "error_util.m"
                      MR_Integer parse_tree__error_util__V_120_120 = (MR_Integer) parse_tree__error_util__V_111_111;
#line 161 "error_util.m"
                      MR_Integer parse_tree__error_util__V_121_121 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 161 "error_util.m"
                      {
#line 161 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_120_120, parse_tree__error_util__V_121_121);
                      }
#line 161 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 161 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 161 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 161 "error_util.m"
                      else
#line 161 "error_util.m"
                        {
#line 161 "error_util.m"
                          {
#line 161 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_110_110)), ((MR_Box) (parse_tree__error_util__V_26_26)));
#line 161 "error_util.m"
                            return;
                          }
#line 161 "error_util.m"
                        }
#line 161 "error_util.m"
                    }
#line 161 "error_util.m"
                }
#line 161 "error_util.m"
              else
#line 161 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
                else
#line 161 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
                  else
#line 161 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
          }
#line 161 "error_util.m"
        else
#line 161 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
            {
#line 161 "error_util.m"
              MR_Word parse_tree__error_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 161 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
              else
#line 161 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                else
#line 161 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
                    {
#line 161 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 161 "error_util.m"
                      {
#line 161 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_117_117)), ((MR_Box) (parse_tree__error_util__V_49_49)));
#line 161 "error_util.m"
                        return;
                      }
#line 161 "error_util.m"
                    }
#line 161 "error_util.m"
                  else
#line 161 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
                    else
#line 161 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
            }
#line 161 "error_util.m"
          else
#line 161 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "error_util.m"
                MR_Box parse_tree__error_util__V_113_113 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 161 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                else
#line 161 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                  else
#line 161 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                    else
#line 161 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
                        {
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_92_92;
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_93_93;
#line 161 "error_util.m"
                          MR_Box parse_tree__error_util__V_86_86 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 8870 "parse_tree.error_util.c"
                          {
#line 8872 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_114_114, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_92_92);
                          }
#line 8875 "parse_tree.error_util.c"
                          {
#line 8877 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_93_93);
                          }
#line 161 "error_util.m"
                          {
#line 161 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_92_92, parse_tree__error_util__TypeInfo_93_93, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_113_113, parse_tree__error_util__V_86_86);
#line 161 "error_util.m"
                            return;
                          }
#line 161 "error_util.m"
                        }
#line 161 "error_util.m"
                      else
#line 161 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
              }
#line 161 "error_util.m"
            else
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 161 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                else
#line 161 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                  else
#line 161 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 161 "error_util.m"
                    else
#line 161 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 161 "error_util.m"
                      else
#line 161 "error_util.m"
                        {
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 161 "error_util.m"
                          MR_Word parse_tree__error_util__V_70_70;

#line 161 "error_util.m"
                          {
#line 161 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__V_70_70, ((MR_Box) (parse_tree__error_util__V_116_116)), ((MR_Box) (parse_tree__error_util__V_68_68)));
                          }
#line 161 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_70_70 == (MR_Integer) 0);
#line 161 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 161 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_70_70;
#line 161 "error_util.m"
                          else
#line 161 "error_util.m"
                            {
#line 161 "error_util.m"
                              {
#line 161 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_115_115)), ((MR_Box) (parse_tree__error_util__V_69_69)));
#line 161 "error_util.m"
                                return;
                              }
#line 161 "error_util.m"
                            }
#line 161 "error_util.m"
                        }
#line 161 "error_util.m"
              }
#line 161 "error_util.m"
  }
#line 161 "error_util.m"
}

#line 161 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 161 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 161 "error_util.m"
{
#line 161 "error_util.m"
  {
#line 161 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 161 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 161 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 161 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_19 == parse_tree__error_util__CastY_20);
#line 161 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 161 "error_util.m"
    else
#line 161 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 161 "error_util.m"
        {
#line 161 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 161 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4;

#line 161 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 161 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
            {
#line 161 "error_util.m"
              parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9017 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_26_26 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
              }
#line 161 "error_util.m"
            }
#line 161 "error_util.m"
        }
#line 161 "error_util.m"
      else
#line 161 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 161 "error_util.m"
          {
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 161 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 161 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 161 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 161 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 161 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 161 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                  {
#line 161 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 161 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                      {
#line 9073 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_27_27 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 161 "error_util.m"
                        {
#line 161 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_27_27, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 161 "error_util.m"
                      }
#line 161 "error_util.m"
                  }
#line 161 "error_util.m"
              }
#line 161 "error_util.m"
          }
#line 161 "error_util.m"
        else
#line 161 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 161 "error_util.m"
            {
#line 161 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 161 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12;

#line 161 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 161 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                {
#line 161 "error_util.m"
                  parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9109 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 161 "error_util.m"
                  {
#line 161 "error_util.m"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_11_11)), ((MR_Box) (parse_tree__error_util__V_12_12)));
                  }
#line 161 "error_util.m"
                }
#line 161 "error_util.m"
            }
#line 161 "error_util.m"
          else
#line 161 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_22;
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_24_24;
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_25_25;
#line 161 "error_util.m"
                MR_Box parse_tree__error_util__V_17_17 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 161 "error_util.m"
                MR_Box parse_tree__error_util__V_18_18;
#line 161 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_23;

#line 161 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 161 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                  {
#line 161 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "error_util.m"
                    parse_tree__error_util__V_18_18 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 9151 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_23 = (MR_Integer) 1;
#line 9153 "parse_tree.error_util.c"
                    {
#line 9155 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_21, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_24_24);
                    }
#line 9158 "parse_tree.error_util.c"
                    {
#line 9160 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_22, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_25_25);
                    }
#line 161 "error_util.m"
                    {
#line 161 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_24_24, parse_tree__error_util__TypeInfo_25_25, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                    }
#line 161 "error_util.m"
                  }
#line 161 "error_util.m"
              }
#line 161 "error_util.m"
            else
#line 161 "error_util.m"
              {
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 161 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 161 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 161 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                  {
#line 161 "error_util.m"
                    parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 9199 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 161 "error_util.m"
                    {
#line 161 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_13_13)), ((MR_Box) (parse_tree__error_util__V_15_15)));
                    }
#line 161 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 161 "error_util.m"
                      {
#line 9210 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 161 "error_util.m"
                        {
#line 161 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_14_14)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                        }
#line 161 "error_util.m"
                      }
#line 161 "error_util.m"
                  }
#line 161 "error_util.m"
              }
#line 161 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 161 "error_util.m"
  }
#line 161 "error_util.m"
}

#line 149 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 149 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 149 "error_util.m"
{
#line 149 "error_util.m"
  {
#line 149 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 149 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 149 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 149 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 149 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9254 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 149 "error_util.m"
    else
#line 149 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 149 "error_util.m"
        {
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 149 "error_util.m"
          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 149 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 149 "error_util.m"
            {
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 149 "error_util.m"
              MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_29_29;

#line 149 "error_util.m"
              {
#line 149 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
              }
#line 9291 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 149 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 149 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 149 "error_util.m"
              else
#line 149 "error_util.m"
                {
#line 149 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;
#line 149 "error_util.m"
                  MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 149 "error_util.m"
                  MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 149 "error_util.m"
                  {
#line 149 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                  }
#line 9315 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 149 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 149 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 149 "error_util.m"
                  else
#line 149 "error_util.m"
                    {
#line 149 "error_util.m"
                      MR_Word parse_tree__error_util__V_31_31;

#line 149 "error_util.m"
                      {
#line 149 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                      }
#line 9335 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 149 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 149 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 149 "error_util.m"
                      else
#line 149 "error_util.m"
                        {
#line 149 "error_util.m"
                          {
#line 149 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
#line 149 "error_util.m"
                            return;
                          }
#line 149 "error_util.m"
                        }
#line 149 "error_util.m"
                    }
#line 149 "error_util.m"
                }
#line 149 "error_util.m"
            }
#line 149 "error_util.m"
          else
#line 9364 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 149 "error_util.m"
        }
#line 149 "error_util.m"
      else
#line 149 "error_util.m"
        {
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 149 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 9379 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 149 "error_util.m"
          else
#line 149 "error_util.m"
            {
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 149 "error_util.m"
              MR_Word parse_tree__error_util__V_8_8;

#line 149 "error_util.m"
              {
#line 149 "error_util.m"
                mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
              }
#line 9397 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 149 "error_util.m"
              parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 149 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 149 "error_util.m"
              else
#line 149 "error_util.m"
                {
#line 149 "error_util.m"
                  {
#line 149 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 149 "error_util.m"
                    return;
                  }
#line 149 "error_util.m"
                }
#line 149 "error_util.m"
            }
#line 149 "error_util.m"
        }
#line 149 "error_util.m"
  }
#line 149 "error_util.m"
}

#line 149 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 149 "error_util.m"
{
#line 149 "error_util.m"
  {
#line 149 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 149 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 149 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 149 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 149 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 149 "error_util.m"
    else
#line 149 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 149 "error_util.m"
        {
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "error_util.m"
          MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_11_11;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_12_12;
#line 149 "error_util.m"
          MR_Integer parse_tree__error_util__V_13_13;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_14_14;

#line 149 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 149 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
            {
#line 149 "error_util.m"
              parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 149 "error_util.m"
              parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 149 "error_util.m"
              parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 149 "error_util.m"
              parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 9492 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 9494 "parse_tree.error_util.c"
              {
#line 9496 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
              }
#line 149 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                {
#line 9503 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 149 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                    {
#line 9509 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 149 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                        {
#line 9515 "parse_tree.error_util.c"
                          parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9517 "parse_tree.error_util.c"
                          {
#line 9519 "parse_tree.error_util.c"
                            return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                          }
#line 149 "error_util.m"
                        }
#line 149 "error_util.m"
                    }
#line 149 "error_util.m"
                }
#line 149 "error_util.m"
            }
#line 149 "error_util.m"
        }
#line 149 "error_util.m"
      else
#line 149 "error_util.m"
        {
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_5_5;
#line 149 "error_util.m"
          MR_Word parse_tree__error_util__V_6_6;

#line 149 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 149 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
            {
#line 149 "error_util.m"
              parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 149 "error_util.m"
              parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 9557 "parse_tree.error_util.c"
              {
#line 9559 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
              }
#line 149 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 149 "error_util.m"
                {
#line 9566 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9568 "parse_tree.error_util.c"
                  {
#line 9570 "parse_tree.error_util.c"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                  }
#line 149 "error_util.m"
                }
#line 149 "error_util.m"
            }
#line 149 "error_util.m"
        }
#line 149 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 149 "error_util.m"
  }
#line 149 "error_util.m"
}

#line 1379 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1379 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1379 "error_util.m"
{
#line 1379 "error_util.m"
  {
#line 1379 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1379 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1379 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1379 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1379 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9610 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1379 "error_util.m"
    else
#line 1379 "error_util.m"
      {
#line 1379 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1379 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1379 "error_util.m"
        {
#line 1379 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 9632 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1379 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1379 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1379 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1379 "error_util.m"
        else
#line 1379 "error_util.m"
          {
#line 1379 "error_util.m"
            {
#line 1379 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1379 "error_util.m"
              return;
            }
#line 1379 "error_util.m"
          }
#line 1379 "error_util.m"
      }
#line 1379 "error_util.m"
  }
#line 1379 "error_util.m"
}

#line 1379 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1379 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1379 "error_util.m"
{
#line 1379 "error_util.m"
  {
#line 1379 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1379 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1379 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1379 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1379 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1379 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1379 "error_util.m"
    else
#line 1379 "error_util.m"
      {
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1379 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1379 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1379 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 9699 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1379 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1379 "error_util.m"
          {
#line 9705 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[2];
#line 9707 "parse_tree.error_util.c"
            {
#line 9709 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1379 "error_util.m"
          }
#line 1379 "error_util.m"
      }
#line 1379 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1379 "error_util.m"
  }
#line 1379 "error_util.m"
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
#line 9764 "parse_tree.error_util.c"
  {
#line 9766 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 9769 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 9771 "parse_tree.error_util.c"
  }
#line 97 "error_util.m"
}

#line 1457 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1457 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1457 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1457 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1457 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1457 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1457 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1457 "error_util.m"
{
#line 1460 "error_util.m"
  while (MR_TRUE)
#line 1460 "error_util.m"
    {
#line 1460 "error_util.m"
      /* tailcall optimized into a loop */
#line 1460 "error_util.m"
      {
#line 1460 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1460 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "error_util.m"
          {
#line 1460 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1460 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "error_util.m"
          }
#line 1460 "error_util.m"
        else
#line 1461 "error_util.m"
          {
#line 1461 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1461 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1461 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1461 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1461 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1462 "error_util.m"
            {
#line 1462 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1463 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1463 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1464 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1467 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1465 "error_util.m"
              {
#line 1465 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1465 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1465 "error_util.m"
                {
#line 1465 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1465 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1465 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1465 "error_util.m"
                }
#line 1465 "error_util.m"
                {
#line 1465 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1466 "error_util.m"
                /* direct tailcall eliminated */
#line 1466 "error_util.m"
                {
#line 1466 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1466 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1466 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1466 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1466 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1466 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1466 "error_util.m"
                }
#line 1466 "error_util.m"
                continue;
#line 1465 "error_util.m"
              }
#line 1467 "error_util.m"
            else
#line 1468 "error_util.m"
              {
#line 1468 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1469 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1468 "error_util.m"
              }
#line 1461 "error_util.m"
          }
#line 1460 "error_util.m"
      }
#line 1460 "error_util.m"
      break;
#line 1460 "error_util.m"
    }
#line 1457 "error_util.m"
}

#line 1432 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1432 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1432 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1432 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1432 "error_util.m"
{
#line 1437 "error_util.m"
  {
#line 1437 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1437 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1438 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1437 "error_util.m"
    else
#line 1440 "error_util.m"
      {
#line 1440 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1440 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1440 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1440 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1440 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1452 "error_util.m"
        {
#line 1452 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1453 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1453 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1454 "error_util.m"
        {
#line 1454 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1454 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "error_util.m"
        }
#line 1454 "error_util.m"
        {
#line 1454 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1443 "error_util.m"
        {
#line 1443 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1443 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1443 "error_util.m"
        }
#line 1444 "error_util.m"
        {
#line 1444 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1445 "error_util.m"
        {
#line 1445 "error_util.m"
          MR_Word base;
#line 1445 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1445 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1445 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1445 "error_util.m"
        }
#line 1440 "error_util.m"
      }
#line 1437 "error_util.m"
  }
#line 1432 "error_util.m"
}

#line 1391 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_words_5_p_0(
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1391 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1391 "error_util.m"
  MR_Integer parse_tree__error_util__Max_9,
#line 1391 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1391 "error_util.m"
{
#line 1396 "error_util.m"
  {
#line 1396 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1396 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1397 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1396 "error_util.m"
    else
#line 1399 "error_util.m"
      {
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_33_33;
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1399 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1399 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1399 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1399 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1399 "error_util.m"
        MR_Word parse_tree__error_util__BlankLines_19;

#line 1404 "error_util.m"
        if ((parse_tree__error_util__TreatAsFirst_6 == (MR_Integer) 1))
#line 1406 "error_util.m"
          parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1404 "error_util.m"
        else
#line 1402 "error_util.m"
          {
#line 1403 "error_util.m"
            parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1402 "error_util.m"
          }
#line 1408 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1410 "error_util.m"
        {
#line 1410 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1410 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "error_util.m"
        }
#line 10088 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1411 "error_util.m"
        {
#line 1411 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__BlankLines_19);
        }
#line 1416 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1413 "error_util.m"
          {
#line 1413 "error_util.m"
            MR_Word parse_tree__error_util__RestLines_20;

#line 1414 "error_util.m"
            {
#line 1414 "error_util.m"
              parse_tree__error_util__group_words_5_p_0(parse_tree__error_util__TreatAsFirst_6, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__Max_9, &parse_tree__error_util__RestLines_20);
            }
#line 1415 "error_util.m"
            {
#line 1415 "error_util.m"
              *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__BlankLines_19, parse_tree__error_util__RestLines_20);
            }
#line 1413 "error_util.m"
          }
#line 1416 "error_util.m"
        else
#line 1417 "error_util.m"
          {
#line 1417 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_21 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_23;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__RestWords_24;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__CurLine_25;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__ParaRestLines_26;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__ParaLines_27;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__V_31_31;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__RestLines_32;
#line 1417 "error_util.m"
            MR_Integer parse_tree__error_util__FirstWordLen_40;
#line 1417 "error_util.m"
            MR_Integer parse_tree__error_util__Avail_41;
#line 1417 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1417 "error_util.m"
            MR_Word parse_tree__error_util__V_44_44;

#line 1452 "error_util.m"
            {
#line 1452 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_21, &parse_tree__error_util__FirstWordLen_40);
            }
#line 1453 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1453 "error_util.m"
            parse_tree__error_util__Avail_41 = (parse_tree__error_util__Max_9 - parse_tree__error_util__V_42_42);
#line 1454 "error_util.m"
            {
#line 1454 "error_util.m"
              parse_tree__error_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_44_44, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_21));
#line 1454 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "error_util.m"
            }
#line 1454 "error_util.m"
            {
#line 1454 "error_util.m"
              parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_22, parse_tree__error_util__FirstWordLen_40, parse_tree__error_util__Avail_41, parse_tree__error_util__V_44_44, &parse_tree__error_util__LineWords_23, &parse_tree__error_util__RestWords_24);
            }
#line 1420 "error_util.m"
            {
#line 1420 "error_util.m"
              parse_tree__error_util__CurLine_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1420 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_25, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1420 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_25, 1) = ((MR_Box) (parse_tree__error_util__LineWords_23));
#line 1420 "error_util.m"
            }
#line 1422 "error_util.m"
            {
#line 1422 "error_util.m"
              parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_24, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_9, &parse_tree__error_util__ParaRestLines_26);
            }
#line 1424 "error_util.m"
            {
#line 1424 "error_util.m"
              parse_tree__error_util__ParaLines_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1424 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__ParaLines_27, 0) = ((MR_Box) (parse_tree__error_util__CurLine_25));
#line 1424 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__ParaLines_27, 1) = ((MR_Box) (parse_tree__error_util__ParaRestLines_26));
#line 1424 "error_util.m"
            }
#line 1426 "error_util.m"
            {
#line 1426 "error_util.m"
              parse_tree__error_util__group_words_5_p_0((MR_Integer) 1, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__Max_9, &parse_tree__error_util__RestLines_32);
            }
#line 1428 "error_util.m"
            {
#line 1428 "error_util.m"
              parse_tree__error_util__V_31_31 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__BlankLines_19, parse_tree__error_util__RestLines_32);
            }
#line 1428 "error_util.m"
            {
#line 1428 "error_util.m"
              *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ParaLines_27, parse_tree__error_util__V_31_31);
            }
#line 1417 "error_util.m"
          }
#line 1399 "error_util.m"
      }
#line 1396 "error_util.m"
  }
#line 1391 "error_util.m"
}

#line 1364 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1364 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1364 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1364 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1364 "error_util.m"
{
#line 1373 "error_util.m"
  while (MR_TRUE)
#line 1373 "error_util.m"
    {
#line 1373 "error_util.m"
      /* tailcall optimized into a loop */
#line 1373 "error_util.m"
      {
#line 1373 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1373 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1373 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1367 "error_util.m"
        {
#line 1367 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1373 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1370 "error_util.m"
          {
#line 1368 "error_util.m"
            {
#line 1368 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1370 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1369 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1370 "error_util.m"
            else
#line 1371 "error_util.m"
              {
#line 1371 "error_util.m"
                /* direct tailcall eliminated */
#line 1371 "error_util.m"
                {
#line 1371 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1371 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1371 "error_util.m"
                }
#line 1371 "error_util.m"
                continue;
#line 1371 "error_util.m"
              }
#line 1370 "error_util.m"
          }
#line 1373 "error_util.m"
        else
#line 1374 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1373 "error_util.m"
      }
#line 1373 "error_util.m"
      break;
#line 1373 "error_util.m"
    }
#line 1364 "error_util.m"
}

#line 1354 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1354 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1354 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1354 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1354 "error_util.m"
{
#line 1356 "error_util.m"
  while (MR_TRUE)
#line 1356 "error_util.m"
    {
#line 1356 "error_util.m"
      /* tailcall optimized into a loop */
#line 1356 "error_util.m"
      {
#line 1356 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1356 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1356 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1357 "error_util.m"
        {
#line 1357 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1356 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1356 "error_util.m"
          {
#line 1358 "error_util.m"
            {
#line 1358 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1360 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1359 "error_util.m"
              {
#line 1359 "error_util.m"
                /* direct tailcall eliminated */
#line 1359 "error_util.m"
                {
#line 1359 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1359 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1359 "error_util.m"
                }
#line 1359 "error_util.m"
                continue;
#line 1359 "error_util.m"
              }
#line 1360 "error_util.m"
            else
#line 1361 "error_util.m"
              {
#line 1361 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1361 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1361 "error_util.m"
              }
#line 1356 "error_util.m"
          }
#line 1356 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1356 "error_util.m"
      }
#line 1356 "error_util.m"
      break;
#line 1356 "error_util.m"
    }
#line 1354 "error_util.m"
}

#line 1341 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1341 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1341 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1341 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1341 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1341 "error_util.m"
{
#line 1350 "error_util.m"
  while (MR_TRUE)
#line 1350 "error_util.m"
    {
#line 1350 "error_util.m"
      /* tailcall optimized into a loop */
#line 1350 "error_util.m"
      {
#line 1350 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1350 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1345 "error_util.m"
        {
#line 1345 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1350 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1346 "error_util.m"
          {
#line 1346 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1346 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1346 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1346 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1346 "error_util.m"
            {
#line 1346 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1347 "error_util.m"
            {
#line 1347 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1348 "error_util.m"
            {
#line 1348 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1348 "error_util.m"
            }
#line 1348 "error_util.m"
            {
#line 1348 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1348 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1348 "error_util.m"
            }
#line 1348 "error_util.m"
            /* direct tailcall eliminated */
#line 1348 "error_util.m"
            {
#line 1348 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1348 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1348 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1348 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1348 "error_util.m"
            }
#line 1348 "error_util.m"
            continue;
#line 1346 "error_util.m"
          }
#line 1350 "error_util.m"
        else
#line 1351 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1350 "error_util.m"
      }
#line 1350 "error_util.m"
      break;
#line 1350 "error_util.m"
    }
#line 1341 "error_util.m"
}

#line 1336 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1336 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1336 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1336 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1336 "error_util.m"
{
#line 1338 "error_util.m"
  {
#line 1338 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1339 "error_util.m"
    {
#line 1339 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1339 "error_util.m"
      return;
    }
#line 1338 "error_util.m"
  }
#line 1336 "error_util.m"
}

#line 1331 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1331 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1331 "error_util.m"
{
#line 1333 "error_util.m"
  {
#line 1333 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1333 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1333 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__V_10_10;
#line 1333 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1334 "error_util.m"
    {
#line 1334 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1334 "error_util.m"
    {
#line 1334 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1334 "error_util.m"
    {
#line 1334 "error_util.m"
      parse_tree__error_util__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_12_12);
    }
#line 1334 "error_util.m"
    {
#line 1334 "error_util.m"
      parse_tree__error_util__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "\'", parse_tree__error_util__V_10_10);
    }
#line 1334 "error_util.m"
    {
#line 1334 "error_util.m"
      parse_tree__error_util__V_6_6 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
    }
#line 1333 "error_util.m"
    {
#line 1333 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_6_6);
    }
#line 1333 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1333 "error_util.m"
  }
#line 1331 "error_util.m"
}

#line 1326 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1326 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1326 "error_util.m"
{
#line 1328 "error_util.m"
  {
#line 1328 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1328 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1328 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1328 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;

#line 1329 "error_util.m"
    {
#line 1329 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1329 "error_util.m"
    {
#line 1329 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1328 "error_util.m"
    {
#line 1328 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1328 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1328 "error_util.m"
  }
#line 1326 "error_util.m"
}

#line 1285 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1285 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1285 "error_util.m"
{
#line 1287 "error_util.m"
  {
#line 1287 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1287 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1287 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1287 "error_util.m"
    else
#line 1288 "error_util.m"
      {
#line 1288 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1288 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1288 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1289 "error_util.m"
        {
#line 1289 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1293 "error_util.m"
        if ((parse_tree__error_util__Head_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "error_util.m"
          if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1306 "error_util.m"
            parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1307 "error_util.m"
          else
#line 1308 "error_util.m"
            {
#line 1308 "error_util.m"
              MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1308 "error_util.m"
              MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1308 "error_util.m"
              MR_String parse_tree__error_util__V_13_13;
#line 1322 "error_util.m"
              MR_Char parse_tree__error_util__First_17;
#line 1322 "error_util.m"
              MR_String parse_tree__error_util__Rest_18;

#line 1317 "error_util.m"
              {
#line 1317 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
              }
#line 1317 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1318 "error_util.m"
                {
#line 1318 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                }
#line 1322 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1320 "error_util.m"
                {
#line 1320 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1320 "error_util.m"
                  {
#line 1320 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                  }
#line 1321 "error_util.m"
                  {
#line 1321 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                  }
#line 1320 "error_util.m"
                }
#line 1322 "error_util.m"
              else
#line 1323 "error_util.m"
                parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1309 "error_util.m"
              {
#line 1309 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1309 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1309 "error_util.m"
              }
#line 1308 "error_util.m"
            }
#line 1293 "error_util.m"
        else
#line 1293 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__Head_3)) == (MR_mktag((MR_Integer) 1))))
#line 1291 "error_util.m"
            {
#line 1291 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1292 "error_util.m"
              {
#line 1292 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1292 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1292 "error_util.m"
              }
#line 1291 "error_util.m"
            }
#line 1293 "error_util.m"
          else
#line 1294 "error_util.m"
            {
#line 1294 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1298 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1300 "error_util.m"
                {
#line 1300 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1300 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1300 "error_util.m"
                }
#line 1298 "error_util.m"
              else
#line 1296 "error_util.m"
                {
#line 1296 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1296 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1296 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1297 "error_util.m"
                  {
#line 1297 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1297 "error_util.m"
                  {
#line 1297 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1297 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1297 "error_util.m"
                  }
#line 1296 "error_util.m"
                }
#line 1294 "error_util.m"
            }
#line 1288 "error_util.m"
      }
#line 1287 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1287 "error_util.m"
  }
#line 1285 "error_util.m"
}

#line 1240 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1240 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1240 "error_util.m"
{
#line 1242 "error_util.m"
  while (MR_TRUE)
#line 1242 "error_util.m"
    {
#line 1242 "error_util.m"
      /* tailcall optimized into a loop */
#line 1242 "error_util.m"
      {
#line 1242 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1242 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1242 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1242 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "error_util.m"
        else
#line 1243 "error_util.m"
          {
#line 1243 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1243 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1247 "error_util.m"
            if ((parse_tree__error_util__Word_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "error_util.m"
              {
#line 1248 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1249 "error_util.m"
                {
#line 1249 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1249 "error_util.m"
                {
#line 1249 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1249 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1249 "error_util.m"
                }
#line 1248 "error_util.m"
              }
#line 1247 "error_util.m"
            else
#line 1247 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 1))))
#line 1245 "error_util.m"
                {
#line 1245 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1245 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1245 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1246 "error_util.m"
                  {
#line 1246 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1246 "error_util.m"
                  }
#line 1246 "error_util.m"
                  {
#line 1246 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1246 "error_util.m"
                  {
#line 1246 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1246 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1246 "error_util.m"
                  }
#line 1245 "error_util.m"
                }
#line 1247 "error_util.m"
              else
#line 1247 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 2))))
#line 1251 "error_util.m"
                  {
#line 1251 "error_util.m"
                    MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1251 "error_util.m"
                    MR_Word parse_tree__error_util__V_29_29;
#line 1251 "error_util.m"
                    MR_Word parse_tree__error_util__V_30_30;

#line 1252 "error_util.m"
                    {
#line 1252 "error_util.m"
                      parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "error_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1252 "error_util.m"
                    }
#line 1252 "error_util.m"
                    {
#line 1252 "error_util.m"
                      parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                    }
#line 1252 "error_util.m"
                    {
#line 1252 "error_util.m"
                      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1252 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1252 "error_util.m"
                    }
#line 1251 "error_util.m"
                  }
#line 1247 "error_util.m"
                else
#line 1254 "error_util.m"
                  {
#line 1254 "error_util.m"
                    MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1258 "error_util.m"
                    if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1256 "error_util.m"
                      {
#line 1256 "error_util.m"
                        MR_Word parse_tree__error_util__V_27_27;

#line 1257 "error_util.m"
                        {
#line 1257 "error_util.m"
                          parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1257 "error_util.m"
                        }
#line 1257 "error_util.m"
                        {
#line 1257 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1257 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1257 "error_util.m"
                        }
#line 1256 "error_util.m"
                      }
#line 1258 "error_util.m"
                    else
#line 1258 "error_util.m"
                      {
#line 1258 "error_util.m"
                        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1258 "error_util.m"
                        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1258 "error_util.m"
                        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "error_util.m"
                          {
#line 1263 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1263 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1263 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1322 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1322 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1317 "error_util.m"
                            {
#line 1317 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1317 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1318 "error_util.m"
                              {
#line 1318 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1322 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1320 "error_util.m"
                              {
#line 1320 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1320 "error_util.m"
                                {
#line 1320 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1321 "error_util.m"
                                {
#line 1321 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1320 "error_util.m"
                              }
#line 1322 "error_util.m"
                            else
#line 1323 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1268 "error_util.m"
                            {
#line 1268 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1268 "error_util.m"
                            }
#line 1268 "error_util.m"
                            {
#line 1268 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1268 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1268 "error_util.m"
                            }
#line 1269 "error_util.m"
                            /* direct tailcall eliminated */
#line 1269 "error_util.m"
                            {
#line 1269 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1269 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1269 "error_util.m"
                            }
#line 1269 "error_util.m"
                            continue;
#line 1263 "error_util.m"
                          }
#line 1258 "error_util.m"
                        else
#line 1258 "error_util.m"
                          if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1259 "error_util.m"
                            {
#line 1259 "error_util.m"
                              MR_Word parse_tree__error_util__V_24_24;
#line 1259 "error_util.m"
                              MR_String parse_tree__error_util__V_25_25;
#line 1259 "error_util.m"
                              MR_Word parse_tree__error_util__V_26_26;
#line 1259 "error_util.m"
                              MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1260 "error_util.m"
                              {
#line 1260 "error_util.m"
                                parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                              }
#line 1261 "error_util.m"
                              {
#line 1261 "error_util.m"
                                parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1261 "error_util.m"
                              }
#line 1261 "error_util.m"
                              {
#line 1261 "error_util.m"
                                parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                              }
#line 1260 "error_util.m"
                              {
#line 1260 "error_util.m"
                                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1260 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1260 "error_util.m"
                              }
#line 1259 "error_util.m"
                            }
#line 1258 "error_util.m"
                          else
#line 1258 "error_util.m"
                            if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 2))))
#line 1271 "error_util.m"
                              {
#line 1271 "error_util.m"
                                MR_Word parse_tree__error_util__V_17_17;
#line 1271 "error_util.m"
                                MR_String parse_tree__error_util__V_18_18;
#line 1271 "error_util.m"
                                MR_Word parse_tree__error_util__V_19_19;
#line 1271 "error_util.m"
                                MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1276 "error_util.m"
                                {
#line 1276 "error_util.m"
                                  parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                                }
#line 1277 "error_util.m"
                                {
#line 1277 "error_util.m"
                                  parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1277 "error_util.m"
                                }
#line 1277 "error_util.m"
                                {
#line 1277 "error_util.m"
                                  parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                                }
#line 1276 "error_util.m"
                                {
#line 1276 "error_util.m"
                                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1276 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1276 "error_util.m"
                                }
#line 1271 "error_util.m"
                              }
#line 1258 "error_util.m"
                            else
#line 1279 "error_util.m"
                              {
#line 1279 "error_util.m"
                                MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1279 "error_util.m"
                                MR_Word parse_tree__error_util__V_13_13;
#line 1279 "error_util.m"
                                MR_Word parse_tree__error_util__V_14_14;
#line 1279 "error_util.m"
                                MR_String parse_tree__error_util__V_15_15;

#line 1281 "error_util.m"
                                {
#line 1281 "error_util.m"
                                  parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                                }
#line 1281 "error_util.m"
                                {
#line 1281 "error_util.m"
                                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "error_util.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1281 "error_util.m"
                                }
#line 1280 "error_util.m"
                                {
#line 1280 "error_util.m"
                                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1280 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1280 "error_util.m"
                                }
#line 1280 "error_util.m"
                                /* direct tailcall eliminated */
#line 1280 "error_util.m"
                                {
#line 1280 "error_util.m"
                                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1280 "error_util.m"
                                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1280 "error_util.m"
                                }
#line 1280 "error_util.m"
                                continue;
#line 1279 "error_util.m"
                              }
#line 1258 "error_util.m"
                      }
#line 1254 "error_util.m"
                  }
#line 1243 "error_util.m"
          }
#line 1242 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1242 "error_util.m"
      }
#line 1242 "error_util.m"
      break;
#line 1242 "error_util.m"
    }
#line 1240 "error_util.m"
}

#line 1234 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1234 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1234 "error_util.m"
{
#line 1236 "error_util.m"
  {
#line 1236 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1236 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1236 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1236 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1237 "error_util.m"
    {
#line 1237 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1237 "error_util.m"
    {
#line 1237 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1238 "error_util.m"
    {
#line 1238 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1236 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1236 "error_util.m"
  }
#line 1234 "error_util.m"
}

#line 1143 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1143 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1143 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1143 "error_util.m"
{
#line 1147 "error_util.m"
  while (MR_TRUE)
#line 1147 "error_util.m"
    {
#line 1147 "error_util.m"
      /* tailcall optimized into a loop */
#line 1147 "error_util.m"
      {
#line 1147 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1147 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "error_util.m"
          {
#line 1147 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1147 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;
#line 1147 "error_util.m"
            MR_Word parse_tree__error_util__PorPs_87;
#line 1147 "error_util.m"
            MR_Word parse_tree__error_util__V_88_88;

#line 1237 "error_util.m"
            {
#line 1237 "error_util.m"
              parse_tree__error_util__V_88_88 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1237 "error_util.m"
            {
#line 1237 "error_util.m"
              parse_tree__error_util__PorPs_87 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_88_88);
            }
#line 1238 "error_util.m"
            {
#line 1238 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_87);
            }
#line 1149 "error_util.m"
            {
#line 1149 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1149 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1149 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1149 "error_util.m"
            }
#line 1149 "error_util.m"
            {
#line 1149 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1147 "error_util.m"
          }
#line 1147 "error_util.m"
        else
#line 1151 "error_util.m"
          {
#line 1151 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1151 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1151 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1151 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_45_45;

#line 1155 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1221 "error_util.m"
              {
#line 1221 "error_util.m"
                MR_Word parse_tree__error_util__V_39_39;
#line 1221 "error_util.m"
                MR_Word parse_tree__error_util__Strings_80;
#line 1221 "error_util.m"
                MR_Word parse_tree__error_util__PorPs_92;
#line 1221 "error_util.m"
                MR_Word parse_tree__error_util__V_93_93;

#line 1237 "error_util.m"
                {
#line 1237 "error_util.m"
                  parse_tree__error_util__V_93_93 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1237 "error_util.m"
                {
#line 1237 "error_util.m"
                  parse_tree__error_util__PorPs_92 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_93_93);
                }
#line 1238 "error_util.m"
                {
#line 1238 "error_util.m"
                  parse_tree__error_util__Strings_80 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_92);
                }
#line 1223 "error_util.m"
                {
#line 1223 "error_util.m"
                  parse_tree__error_util__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_39_39, 0) = ((MR_Box) (parse_tree__error_util__Strings_80));
#line 1223 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_39_39, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1223 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_39_39, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1223 "error_util.m"
                }
#line 1223 "error_util.m"
                {
#line 1223 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_39_39)));
                }
#line 1224 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "error_util.m"
              }
#line 1155 "error_util.m"
            else
#line 1155 "error_util.m"
              if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1171 "error_util.m"
                {
#line 1175 "error_util.m"
                  if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1174 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1175 "error_util.m"
                  else
#line 1176 "error_util.m"
                    {
#line 1177 "error_util.m"
                      {
#line 1177 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1177 "error_util.m"
                      }
#line 1176 "error_util.m"
                    }
#line 1177 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1171 "error_util.m"
                }
#line 1155 "error_util.m"
              else
#line 1155 "error_util.m"
                if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1211 "error_util.m"
                  {
#line 1211 "error_util.m"
                    MR_Word parse_tree__error_util__Strings_34;
#line 1211 "error_util.m"
                    MR_Word parse_tree__error_util__V_46_46;

#line 1212 "error_util.m"
                    {
#line 1212 "error_util.m"
                      parse_tree__error_util__Strings_34 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                    }
#line 1213 "error_util.m"
                    {
#line 1213 "error_util.m"
                      parse_tree__error_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__Strings_34));
#line 1213 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1213 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1213 "error_util.m"
                    }
#line 1213 "error_util.m"
                    {
#line 1213 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_46_46)));
                    }
#line 1214 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1211 "error_util.m"
                  }
#line 1155 "error_util.m"
                else
#line 1155 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 1))))
#line 1159 "error_util.m"
                    {
#line 1159 "error_util.m"
                      MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1159 "error_util.m"
                      MR_Word parse_tree__error_util__V_64_64;

#line 1160 "error_util.m"
                      {
#line 1160 "error_util.m"
                        parse_tree__error_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_64_64, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1160 "error_util.m"
                      }
#line 1160 "error_util.m"
                      {
#line 1160 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1160 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1160 "error_util.m"
                      }
#line 1160 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1159 "error_util.m"
                    }
#line 1155 "error_util.m"
                  else
#line 1155 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 2))))
#line 1162 "error_util.m"
                      {
#line 1162 "error_util.m"
                        MR_Word parse_tree__error_util__V_62_62;
#line 1162 "error_util.m"
                        MR_String parse_tree__error_util__V_63_63;
#line 1162 "error_util.m"
                        MR_String parse_tree__error_util__Word_69 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));

#line 1163 "error_util.m"
                        {
#line 1163 "error_util.m"
                          parse_tree__error_util__V_63_63 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_69);
                        }
#line 1163 "error_util.m"
                        {
#line 1163 "error_util.m"
                          parse_tree__error_util__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_62_62, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1163 "error_util.m"
                        }
#line 1163 "error_util.m"
                        {
#line 1163 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1163 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1163 "error_util.m"
                        }
#line 1163 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1162 "error_util.m"
                      }
#line 1155 "error_util.m"
                    else
#line 1155 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1165 "error_util.m"
                        {
#line 1165 "error_util.m"
                          MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1165 "error_util.m"
                          MR_Word parse_tree__error_util__V_60_60;
#line 1165 "error_util.m"
                          MR_String parse_tree__error_util__V_61_61;

#line 1166 "error_util.m"
                          {
#line 1166 "error_util.m"
                            parse_tree__error_util__V_61_61 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                          }
#line 1166 "error_util.m"
                          {
#line 1166 "error_util.m"
                            parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1166 "error_util.m"
                          }
#line 1166 "error_util.m"
                          {
#line 1166 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1166 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1166 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1166 "error_util.m"
                          }
#line 1166 "error_util.m"
                          parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1165 "error_util.m"
                        }
#line 1155 "error_util.m"
                      else
#line 1155 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1216 "error_util.m"
                          {
#line 1216 "error_util.m"
                            MR_Integer parse_tree__error_util__IndentDelta_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1216 "error_util.m"
                            MR_Word parse_tree__error_util__V_43_43;
#line 1216 "error_util.m"
                            MR_Word parse_tree__error_util__Strings_79;

#line 1217 "error_util.m"
                            {
#line 1217 "error_util.m"
                              parse_tree__error_util__Strings_79 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                            }
#line 1218 "error_util.m"
                            {
#line 1218 "error_util.m"
                              parse_tree__error_util__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "error_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_43_43, 0) = ((MR_Box) (parse_tree__error_util__Strings_79));
#line 1218 "error_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_43_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1218 "error_util.m"
                              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_43_43, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_35));
#line 1218 "error_util.m"
                            }
#line 1218 "error_util.m"
                            {
#line 1218 "error_util.m"
                              parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_43_43)));
                            }
#line 1219 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1216 "error_util.m"
                          }
#line 1155 "error_util.m"
                        else
#line 1155 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1168 "error_util.m"
                            {
#line 1168 "error_util.m"
                              MR_Word parse_tree__error_util__V_58_58;
#line 1168 "error_util.m"
                              MR_String parse_tree__error_util__V_59_59;
#line 1168 "error_util.m"
                              MR_Integer parse_tree__error_util__Int_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1096 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_70 == (MR_Integer) 1);
#line 1095 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                                parse_tree__error_util__V_59_59 = (MR_String) "first";
#line 1095 "error_util.m"
                              else
#line 1095 "error_util.m"
                                {
#line 1098 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_70 == (MR_Integer) 2);
#line 1095 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                                    parse_tree__error_util__V_59_59 = (MR_String) "second";
#line 1095 "error_util.m"
                                  else
#line 1095 "error_util.m"
                                    {
#line 1100 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_70 == (MR_Integer) 3);
#line 1095 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                                        parse_tree__error_util__V_59_59 = (MR_String) "third";
#line 1095 "error_util.m"
                                      else
#line 1103 "error_util.m"
                                        {
#line 1103 "error_util.m"
                                          MR_String parse_tree__error_util__V_96_96;

#line 1103 "error_util.m"
                                          {
#line 1103 "error_util.m"
                                            parse_tree__error_util__V_96_96 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_70);
                                          }
#line 1095 "error_util.m"
                                          {
#line 1095 "error_util.m"
                                            parse_tree__error_util__V_59_59 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_96_96, (MR_String) "th");
                                          }
#line 1103 "error_util.m"
                                        }
#line 1095 "error_util.m"
                                    }
#line 1095 "error_util.m"
                                }
#line 1169 "error_util.m"
                              {
#line 1169 "error_util.m"
                                parse_tree__error_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_58_58, 0) = ((MR_Box) (parse_tree__error_util__V_59_59));
#line 1169 "error_util.m"
                              }
#line 1169 "error_util.m"
                              {
#line 1169 "error_util.m"
                                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_58_58));
#line 1169 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1169 "error_util.m"
                              }
#line 1169 "error_util.m"
                              parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1168 "error_util.m"
                            }
#line 1155 "error_util.m"
                          else
#line 1155 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1203 "error_util.m"
                              {
#line 1203 "error_util.m"
                                MR_Word parse_tree__error_util__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1203 "error_util.m"
                                MR_Word parse_tree__error_util__V_49_49;
#line 1203 "error_util.m"
                                MR_String parse_tree__error_util__Word_77;

#line 1481 "error_util.m"
                                if ((parse_tree__error_util__PredOrFunc_32 == (MR_Integer) 1))
#line 1482 "error_util.m"
                                  parse_tree__error_util__Word_77 = (MR_String) "function";
#line 1481 "error_util.m"
                                else
#line 1481 "error_util.m"
                                  parse_tree__error_util__Word_77 = (MR_String) "predicate";
#line 1205 "error_util.m"
                                {
#line 1205 "error_util.m"
                                  parse_tree__error_util__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Word_77));
#line 1205 "error_util.m"
                                }
#line 1205 "error_util.m"
                                {
#line 1205 "error_util.m"
                                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_49_49));
#line 1205 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1205 "error_util.m"
                                }
#line 1205 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1203 "error_util.m"
                              }
#line 1155 "error_util.m"
                            else
#line 1155 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1180 "error_util.m"
                                {
#line 1180 "error_util.m"
                                  MR_Word parse_tree__error_util__V_56_56;
#line 1180 "error_util.m"
                                  MR_String parse_tree__error_util__Word_71 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1181 "error_util.m"
                                  {
#line 1181 "error_util.m"
                                    parse_tree__error_util__V_56_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "error_util.m"
                                    MR_hl_field(MR_mktag(2), parse_tree__error_util__V_56_56, 0) = ((MR_Box) (parse_tree__error_util__Word_71));
#line 1181 "error_util.m"
                                  }
#line 1181 "error_util.m"
                                  {
#line 1181 "error_util.m"
                                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_56_56));
#line 1181 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1181 "error_util.m"
                                  }
#line 1181 "error_util.m"
                                  parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1180 "error_util.m"
                                }
#line 1155 "error_util.m"
                              else
#line 1155 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1207 "error_util.m"
                                  {
#line 1207 "error_util.m"
                                    MR_Word parse_tree__error_util__SimpleCallId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1207 "error_util.m"
                                    MR_String parse_tree__error_util__WordsStr_78;

#line 1208 "error_util.m"
                                    {
#line 1208 "error_util.m"
                                      parse_tree__error_util__WordsStr_78 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_33);
                                    }
#line 1209 "error_util.m"
                                    {
#line 1209 "error_util.m"
                                      parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_78, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                    }
#line 1209 "error_util.m"
                                    parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1207 "error_util.m"
                                  }
#line 1155 "error_util.m"
                                else
#line 1155 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1183 "error_util.m"
                                    {
#line 1183 "error_util.m"
                                      MR_Word parse_tree__error_util__V_55_55;
#line 1183 "error_util.m"
                                      MR_String parse_tree__error_util__Word_72 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1184 "error_util.m"
                                      {
#line 1184 "error_util.m"
                                        parse_tree__error_util__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "error_util.m"
                                        MR_hl_field(MR_mktag(3), parse_tree__error_util__V_55_55, 0) = ((MR_Box) (parse_tree__error_util__Word_72));
#line 1184 "error_util.m"
                                      }
#line 1184 "error_util.m"
                                      {
#line 1184 "error_util.m"
                                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_55_55));
#line 1184 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1184 "error_util.m"
                                      }
#line 1184 "error_util.m"
                                      parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1183 "error_util.m"
                                    }
#line 1155 "error_util.m"
                                  else
#line 1155 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1186 "error_util.m"
                                      {
#line 1186 "error_util.m"
                                        MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1186 "error_util.m"
                                        MR_Word parse_tree__error_util__V_53_53;
#line 1186 "error_util.m"
                                        MR_String parse_tree__error_util__V_54_54;

#line 1187 "error_util.m"
                                        {
#line 1187 "error_util.m"
                                          parse_tree__error_util__V_54_54 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                                        }
#line 1187 "error_util.m"
                                        {
#line 1187 "error_util.m"
                                          parse_tree__error_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "error_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_53_53, 0) = ((MR_Box) (parse_tree__error_util__V_54_54));
#line 1187 "error_util.m"
                                        }
#line 1187 "error_util.m"
                                        {
#line 1187 "error_util.m"
                                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "error_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_53_53));
#line 1187 "error_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1187 "error_util.m"
                                        }
#line 1187 "error_util.m"
                                        parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1186 "error_util.m"
                                      }
#line 1155 "error_util.m"
                                    else
#line 1155 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1189 "error_util.m"
                                        {
#line 1189 "error_util.m"
                                          MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1189 "error_util.m"
                                          MR_Word parse_tree__error_util__V_52_52;
#line 1189 "error_util.m"
                                          MR_String parse_tree__error_util__Word_73;

#line 1190 "error_util.m"
                                          {
#line 1190 "error_util.m"
                                            parse_tree__error_util__Word_73 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                                          }
#line 1191 "error_util.m"
                                          {
#line 1191 "error_util.m"
                                            parse_tree__error_util__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__V_52_52, 0) = ((MR_Box) (parse_tree__error_util__Word_73));
#line 1191 "error_util.m"
                                          }
#line 1191 "error_util.m"
                                          {
#line 1191 "error_util.m"
                                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_52_52));
#line 1191 "error_util.m"
                                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1191 "error_util.m"
                                          }
#line 1191 "error_util.m"
                                          parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1189 "error_util.m"
                                        }
#line 1155 "error_util.m"
                                      else
#line 1155 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1193 "error_util.m"
                                          {
#line 1193 "error_util.m"
                                            MR_Word parse_tree__error_util__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1199 "error_util.m"
                                            MR_Word parse_tree__error_util__TypeCtor_28;

#line 1194 "error_util.m"
                                            {
#line 1194 "error_util.m"
                                              parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_27, &parse_tree__error_util__TypeCtor_28);
                                            }
#line 1199 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1195 "error_util.m"
                                              {
#line 1195 "error_util.m"
                                                MR_Word parse_tree__error_util__TypeCtorName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 0)));
#line 1195 "error_util.m"
                                                MR_Integer parse_tree__error_util__TypeCtorArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 1)));
#line 1195 "error_util.m"
                                                MR_Word parse_tree__error_util__NewWord_31;
#line 1195 "error_util.m"
                                                MR_String parse_tree__error_util__V_50_50;
#line 1195 "error_util.m"
                                                MR_Word parse_tree__error_util__SymName_74;

#line 1196 "error_util.m"
                                                {
#line 1196 "error_util.m"
                                                  parse_tree__error_util__SymName_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_74, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_29));
#line 1196 "error_util.m"
                                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_74, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_30));
#line 1196 "error_util.m"
                                                }
#line 1197 "error_util.m"
                                                {
#line 1197 "error_util.m"
                                                  parse_tree__error_util__V_50_50 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_74);
                                                }
#line 1197 "error_util.m"
                                                {
#line 1197 "error_util.m"
                                                  parse_tree__error_util__NewWord_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_31, 0) = ((MR_Box) (parse_tree__error_util__V_50_50));
#line 1197 "error_util.m"
                                                }
#line 1198 "error_util.m"
                                                {
#line 1198 "error_util.m"
                                                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_31));
#line 1198 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1198 "error_util.m"
                                                }
#line 1195 "error_util.m"
                                              }
#line 1199 "error_util.m"
                                            else
#line 1200 "error_util.m"
                                              {
#line 1200 "error_util.m"
                                                {
#line 1200 "error_util.m"
                                                  mercury__require__error_1_p_0((MR_String) "convert_components_to_paragraphs_acc: type is variable");
#line 1200 "error_util.m"
                                                  return;
                                                }
#line 1200 "error_util.m"
                                              }
#line 1200 "error_util.m"
                                            parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1193 "error_util.m"
                                          }
#line 1155 "error_util.m"
                                        else
#line 1155 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1153 "error_util.m"
                                            {
#line 1153 "error_util.m"
                                              MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1154 "error_util.m"
                                              {
#line 1154 "error_util.m"
                                                parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                              }
#line 1154 "error_util.m"
                                              parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1153 "error_util.m"
                                            }
#line 1155 "error_util.m"
                                          else
#line 1156 "error_util.m"
                                            {
#line 1156 "error_util.m"
                                              MR_String parse_tree__error_util__V_65_65;
#line 1156 "error_util.m"
                                              MR_String parse_tree__error_util__WordsStr_68 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1157 "error_util.m"
                                              {
#line 1157 "error_util.m"
                                                parse_tree__error_util__V_65_65 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_68);
                                              }
#line 1157 "error_util.m"
                                              {
#line 1157 "error_util.m"
                                                parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_65_65, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                              }
#line 1157 "error_util.m"
                                              parse_tree__error_util__STATE_VARIABLE_Paras_45_45 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1156 "error_util.m"
                                            }
#line 1226 "error_util.m"
            /* direct tailcall eliminated */
#line 1226 "error_util.m"
            {
#line 1226 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1226 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1226 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_45_45;

#line 1226 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1226 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1226 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1226 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1226 "error_util.m"
            }
#line 1226 "error_util.m"
            continue;
#line 1151 "error_util.m"
          }
#line 1147 "error_util.m"
      }
#line 1147 "error_util.m"
      break;
#line 1147 "error_util.m"
    }
#line 1143 "error_util.m"
}

#line 1106 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1106 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1106 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1106 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1106 "error_util.m"
{
#line 1111 "error_util.m"
  {
#line 1111 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1111 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1111 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1110 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1111 "error_util.m"
    else
#line 1113 "error_util.m"
      {
#line 1111 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1111 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1111 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1111 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1111 "error_util.m"
          {
#line 1111 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1111 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1111 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1111 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1111 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1111 "error_util.m"
          }
#line 1113 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1112 "error_util.m"
          {
#line 1112 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1113 "error_util.m"
        else
#line 1114 "error_util.m"
          {
#line 1114 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1114 "error_util.m"
            {
#line 1114 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1114 "error_util.m"
            {
#line 1114 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1114 "error_util.m"
          }
#line 1113 "error_util.m"
      }
#line 1111 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1111 "error_util.m"
  }
#line 1106 "error_util.m"
}

#line 1016 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1016 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1016 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1016 "error_util.m"
{
#line 1019 "error_util.m"
  {
#line 1019 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1019 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1019 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1019 "error_util.m"
    else
#line 1020 "error_util.m"
      {
#line 1020 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1020 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1020 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1021 "error_util.m"
        {
#line 1021 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1025 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1089 "error_util.m"
          {
#line 1090 "error_util.m"
            {
#line 1090 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
            }
#line 1089 "error_util.m"
          }
#line 1025 "error_util.m"
        else
#line 1025 "error_util.m"
          if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1045 "error_util.m"
            if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1044 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1045 "error_util.m"
            else
#line 1322 "error_util.m"
              {
#line 1322 "error_util.m"
                MR_Char parse_tree__error_util__First_48;
#line 1322 "error_util.m"
                MR_String parse_tree__error_util__Rest_49;

#line 1317 "error_util.m"
                {
#line 1317 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                }
#line 1317 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1318 "error_util.m"
                  {
#line 1318 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                  }
#line 1322 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1320 "error_util.m"
                  {
#line 1320 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1320 "error_util.m"
                    {
#line 1320 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                    }
#line 1321 "error_util.m"
                    {
#line 1321 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                    }
#line 1320 "error_util.m"
                  }
#line 1322 "error_util.m"
                else
#line 1323 "error_util.m"
                  parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1322 "error_util.m"
              }
#line 1025 "error_util.m"
          else
#line 1025 "error_util.m"
            if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1082 "error_util.m"
              {
#line 1083 "error_util.m"
                {
#line 1083 "error_util.m"
                  return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                }
#line 1082 "error_util.m"
              }
#line 1025 "error_util.m"
            else
#line 1025 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1029 "error_util.m"
                {
#line 1029 "error_util.m"
                  MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1030 "error_util.m"
                  {
#line 1030 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1029 "error_util.m"
                }
#line 1025 "error_util.m"
              else
#line 1025 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1032 "error_util.m"
                  {
#line 1032 "error_util.m"
                    MR_String parse_tree__error_util__V_31_31;
#line 1032 "error_util.m"
                    MR_String parse_tree__error_util__Word_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));
#line 1032 "error_util.m"
                    MR_String parse_tree__error_util__V_56_56;

#line 1484 "error_util.m"
                    {
#line 1484 "error_util.m"
                      parse_tree__error_util__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_34, (MR_String) "\'");
                    }
#line 1484 "error_util.m"
                    {
#line 1484 "error_util.m"
                      parse_tree__error_util__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_56_56);
                    }
#line 1033 "error_util.m"
                    {
#line 1033 "error_util.m"
                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_31_31, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                    }
#line 1032 "error_util.m"
                  }
#line 1025 "error_util.m"
                else
#line 1025 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1035 "error_util.m"
                    {
#line 1035 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1035 "error_util.m"
                      MR_String parse_tree__error_util__V_30_30;

#line 1036 "error_util.m"
                      {
#line 1036 "error_util.m"
                        parse_tree__error_util__V_30_30 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                      }
#line 1036 "error_util.m"
                      {
#line 1036 "error_util.m"
                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_30_30, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                      }
#line 1035 "error_util.m"
                    }
#line 1025 "error_util.m"
                  else
#line 1025 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1085 "error_util.m"
                      {
#line 1087 "error_util.m"
                        {
#line 1087 "error_util.m"
                          return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                        }
#line 1085 "error_util.m"
                      }
#line 1025 "error_util.m"
                    else
#line 1025 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1038 "error_util.m"
                        {
#line 1038 "error_util.m"
                          MR_String parse_tree__error_util__V_29_29;
#line 1038 "error_util.m"
                          MR_Integer parse_tree__error_util__Int_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1096 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_35 == (MR_Integer) 1);
#line 1095 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                            parse_tree__error_util__V_29_29 = (MR_String) "first";
#line 1095 "error_util.m"
                          else
#line 1095 "error_util.m"
                            {
#line 1098 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_35 == (MR_Integer) 2);
#line 1095 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                                parse_tree__error_util__V_29_29 = (MR_String) "second";
#line 1095 "error_util.m"
                              else
#line 1095 "error_util.m"
                                {
#line 1100 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_35 == (MR_Integer) 3);
#line 1095 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1095 "error_util.m"
                                    parse_tree__error_util__V_29_29 = (MR_String) "third";
#line 1095 "error_util.m"
                                  else
#line 1103 "error_util.m"
                                    {
#line 1103 "error_util.m"
                                      MR_String parse_tree__error_util__V_52_52;

#line 1103 "error_util.m"
                                      {
#line 1103 "error_util.m"
                                        parse_tree__error_util__V_52_52 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_35);
                                      }
#line 1095 "error_util.m"
                                      {
#line 1095 "error_util.m"
                                        parse_tree__error_util__V_29_29 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_52_52, (MR_String) "th");
                                      }
#line 1103 "error_util.m"
                                    }
#line 1095 "error_util.m"
                                }
#line 1095 "error_util.m"
                            }
#line 1039 "error_util.m"
                          {
#line 1039 "error_util.m"
                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_29_29, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                          }
#line 1038 "error_util.m"
                        }
#line 1025 "error_util.m"
                      else
#line 1025 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1064 "error_util.m"
                          {
#line 1064 "error_util.m"
                            MR_Word parse_tree__error_util__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1064 "error_util.m"
                            MR_String parse_tree__error_util__Word_38;

#line 1481 "error_util.m"
                            if ((parse_tree__error_util__PredOrFunc_17 == (MR_Integer) 1))
#line 1482 "error_util.m"
                              parse_tree__error_util__Word_38 = (MR_String) "function";
#line 1481 "error_util.m"
                            else
#line 1481 "error_util.m"
                              parse_tree__error_util__Word_38 = (MR_String) "predicate";
#line 1066 "error_util.m"
                            {
#line 1066 "error_util.m"
                              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                            }
#line 1064 "error_util.m"
                          }
#line 1025 "error_util.m"
                        else
#line 1025 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1050 "error_util.m"
                            {
#line 1050 "error_util.m"
                              MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1051 "error_util.m"
                              {
#line 1051 "error_util.m"
                                return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                              }
#line 1050 "error_util.m"
                            }
#line 1025 "error_util.m"
                          else
#line 1025 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1068 "error_util.m"
                              {
#line 1068 "error_util.m"
                                MR_Word parse_tree__error_util__SimpleCallId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1068 "error_util.m"
                                MR_String parse_tree__error_util__Word_39;

#line 1069 "error_util.m"
                                {
#line 1069 "error_util.m"
                                  parse_tree__error_util__Word_39 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_18);
                                }
#line 1070 "error_util.m"
                                {
#line 1070 "error_util.m"
                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                }
#line 1068 "error_util.m"
                              }
#line 1025 "error_util.m"
                            else
#line 1025 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1053 "error_util.m"
                                {
#line 1053 "error_util.m"
                                  MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1054 "error_util.m"
                                  {
#line 1054 "error_util.m"
                                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                  }
#line 1053 "error_util.m"
                                }
#line 1025 "error_util.m"
                              else
#line 1025 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1056 "error_util.m"
                                  {
#line 1056 "error_util.m"
                                    MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1056 "error_util.m"
                                    MR_String parse_tree__error_util__Word_36;
#line 1056 "error_util.m"
                                    MR_String parse_tree__error_util__V_60_60;
#line 1056 "error_util.m"
                                    MR_String parse_tree__error_util__V_61_61;

#line 1329 "error_util.m"
                                    {
#line 1329 "error_util.m"
                                      parse_tree__error_util__V_61_61 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                                    }
#line 1329 "error_util.m"
                                    {
#line 1329 "error_util.m"
                                      parse_tree__error_util__V_60_60 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_61_61, (MR_String) "\'");
                                    }
#line 1328 "error_util.m"
                                    {
#line 1328 "error_util.m"
                                      parse_tree__error_util__Word_36 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_60_60);
                                    }
#line 1058 "error_util.m"
                                    {
#line 1058 "error_util.m"
                                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_36, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                    }
#line 1056 "error_util.m"
                                  }
#line 1025 "error_util.m"
                                else
#line 1025 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1060 "error_util.m"
                                    {
#line 1060 "error_util.m"
                                      MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__Word_37;
#line 1060 "error_util.m"
                                      MR_Word parse_tree__error_util__SymName_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1060 "error_util.m"
                                      MR_Integer parse_tree__error_util__Arity_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__V_66_66;
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__V_67_67;
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__V_68_68;
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__V_70_70;
#line 1060 "error_util.m"
                                      MR_String parse_tree__error_util__V_72_72;

#line 1334 "error_util.m"
                                      {
#line 1334 "error_util.m"
                                        parse_tree__error_util__V_67_67 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_63);
                                      }
#line 1334 "error_util.m"
                                      {
#line 1334 "error_util.m"
                                        parse_tree__error_util__V_72_72 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_64);
                                      }
#line 1334 "error_util.m"
                                      {
#line 1334 "error_util.m"
                                        parse_tree__error_util__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_72_72);
                                      }
#line 1334 "error_util.m"
                                      {
#line 1334 "error_util.m"
                                        parse_tree__error_util__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "\'", parse_tree__error_util__V_70_70);
                                      }
#line 1334 "error_util.m"
                                      {
#line 1334 "error_util.m"
                                        parse_tree__error_util__V_66_66 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_67_67, parse_tree__error_util__V_68_68);
                                      }
#line 1333 "error_util.m"
                                      {
#line 1333 "error_util.m"
                                        parse_tree__error_util__Word_37 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_66_66);
                                      }
#line 1062 "error_util.m"
                                      {
#line 1062 "error_util.m"
                                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_37, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                      }
#line 1060 "error_util.m"
                                    }
#line 1025 "error_util.m"
                                  else
#line 1025 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1072 "error_util.m"
                                      {
#line 1072 "error_util.m"
                                        MR_Word parse_tree__error_util__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1078 "error_util.m"
                                        MR_Word parse_tree__error_util__TypeCtor_20;

#line 1073 "error_util.m"
                                        {
#line 1073 "error_util.m"
                                          parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_19, &parse_tree__error_util__TypeCtor_20);
                                        }
#line 1078 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 1074 "error_util.m"
                                          {
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__Word_40;
#line 1074 "error_util.m"
                                            MR_Word parse_tree__error_util__SymName_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_20, (MR_Integer) 0)));
#line 1074 "error_util.m"
                                            MR_Integer parse_tree__error_util__Arity_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_20, (MR_Integer) 1)));
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__V_76_76;
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__V_77_77;
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__V_78_78;
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__V_80_80;
#line 1074 "error_util.m"
                                            MR_String parse_tree__error_util__V_82_82;

#line 1334 "error_util.m"
                                            {
#line 1334 "error_util.m"
                                              parse_tree__error_util__V_77_77 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_73);
                                            }
#line 1334 "error_util.m"
                                            {
#line 1334 "error_util.m"
                                              parse_tree__error_util__V_82_82 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_74);
                                            }
#line 1334 "error_util.m"
                                            {
#line 1334 "error_util.m"
                                              parse_tree__error_util__V_80_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_82_82);
                                            }
#line 1334 "error_util.m"
                                            {
#line 1334 "error_util.m"
                                              parse_tree__error_util__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) "\'", parse_tree__error_util__V_80_80);
                                            }
#line 1334 "error_util.m"
                                            {
#line 1334 "error_util.m"
                                              parse_tree__error_util__V_76_76 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_77_77, parse_tree__error_util__V_78_78);
                                            }
#line 1333 "error_util.m"
                                            {
#line 1333 "error_util.m"
                                              parse_tree__error_util__Word_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_76_76);
                                            }
#line 1077 "error_util.m"
                                            {
#line 1077 "error_util.m"
                                              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                            }
#line 1074 "error_util.m"
                                          }
#line 1078 "error_util.m"
                                        else
#line 1079 "error_util.m"
                                          {
#line 1079 "error_util.m"
                                            {
#line 1079 "error_util.m"
                                              mercury__require__error_1_p_0((MR_String) "error_pieces_to_string: type is variable");
                                            }
#line 1079 "error_util.m"
                                          }
#line 1072 "error_util.m"
                                      }
#line 1025 "error_util.m"
                                    else
#line 1025 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1023 "error_util.m"
                                        {
#line 1023 "error_util.m"
                                          MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1024 "error_util.m"
                                          {
#line 1024 "error_util.m"
                                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                          }
#line 1023 "error_util.m"
                                        }
#line 1025 "error_util.m"
                                      else
#line 1026 "error_util.m"
                                        {
#line 1026 "error_util.m"
                                          MR_String parse_tree__error_util__V_32_32;
#line 1026 "error_util.m"
                                          MR_String parse_tree__error_util__Words_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1026 "error_util.m"
                                          MR_String parse_tree__error_util__V_85_85;

#line 1484 "error_util.m"
                                          {
#line 1484 "error_util.m"
                                            parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Words_33, (MR_String) "\'");
                                          }
#line 1484 "error_util.m"
                                          {
#line 1484 "error_util.m"
                                            parse_tree__error_util__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_85_85);
                                          }
#line 1027 "error_util.m"
                                          {
#line 1027 "error_util.m"
                                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_32_32, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                          }
#line 1026 "error_util.m"
                                        }
#line 1020 "error_util.m"
      }
#line 1019 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1019 "error_util.m"
  }
#line 1016 "error_util.m"
}

#line 1005 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1005 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1005 "error_util.m"
{
#line 1007 "error_util.m"
  while (MR_TRUE)
#line 1007 "error_util.m"
    {
#line 1007 "error_util.m"
      /* tailcall optimized into a loop */
#line 1007 "error_util.m"
      {
#line 1007 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1007 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1007 "error_util.m"
          {
#line 1007 "error_util.m"
          }
#line 1007 "error_util.m"
        else
#line 1008 "error_util.m"
          {
#line 1008 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1008 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1009 "error_util.m"
            {
#line 1009 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1010 "error_util.m"
            {
#line 1010 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1011 "error_util.m"
            /* direct tailcall eliminated */
#line 1011 "error_util.m"
            {
#line 1011 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1011 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1011 "error_util.m"
            }
#line 1011 "error_util.m"
            continue;
#line 1008 "error_util.m"
          }
#line 1007 "error_util.m"
      }
#line 1007 "error_util.m"
      break;
#line 1007 "error_util.m"
    }
#line 1005 "error_util.m"
}

#line 978 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 978 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 978 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 978 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 978 "error_util.m"
{
#line 981 "error_util.m"
  while (MR_TRUE)
#line 981 "error_util.m"
    {
#line 981 "error_util.m"
      /* tailcall optimized into a loop */
#line 981 "error_util.m"
      {
#line 981 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 981 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "error_util.m"
          {
#line 981 "error_util.m"
          }
#line 981 "error_util.m"
        else
#line 982 "error_util.m"
          {
#line 982 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 982 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 982 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 982 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 982 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 986 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "error_util.m"
              {
#line 987 "error_util.m"
              }
#line 986 "error_util.m"
            else
#line 984 "error_util.m"
              {
#line 984 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 985 "error_util.m"
                {
#line 985 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 984 "error_util.m"
              }
#line 989 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 989 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 990 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 990 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 991 "error_util.m"
            {
#line 991 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 992 "error_util.m"
            {
#line 992 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 998 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "error_util.m"
              {
#line 999 "error_util.m"
                {
#line 999 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 998 "error_util.m"
              }
#line 998 "error_util.m"
            else
#line 1000 "error_util.m"
              {
#line 1000 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1000 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1001 "error_util.m"
                {
#line 1001 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1002 "error_util.m"
                {
#line 1002 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1003 "error_util.m"
                {
#line 1003 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1000 "error_util.m"
              }
#line 994 "error_util.m"
            /* direct tailcall eliminated */
#line 994 "error_util.m"
            {
#line 994 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 994 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 994 "error_util.m"
            }
#line 994 "error_util.m"
            continue;
#line 982 "error_util.m"
          }
#line 981 "error_util.m"
      }
#line 981 "error_util.m"
      break;
#line 981 "error_util.m"
    }
#line 978 "error_util.m"
}

#line 938 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 938 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 938 "error_util.m"
  MR_Integer parse_tree__error_util__MaxWidth_11,
#line 938 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 938 "error_util.m"
{
#line 943 "error_util.m"
  {
#line 943 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_9_41;
#line 943 "error_util.m"
    MR_Integer parse_tree__error_util__ContextLength_21;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Paragraphs_22;
#line 943 "error_util.m"
    MR_Integer parse_tree__error_util__FirstIndent_23;
#line 943 "error_util.m"
    MR_Integer parse_tree__error_util__Remain_24;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__Lines_25;
#line 943 "error_util.m"
    MR_Integer parse_tree__error_util__V_33_33;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__ParasCord_37;
#line 943 "error_util.m"
    MR_Word parse_tree__error_util__V_40_40;

#line 964 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "error_util.m"
      parse_tree__error_util__ContextLength_21 = (MR_Integer) 0;
#line 964 "error_util.m"
    else
#line 952 "error_util.m"
      {
#line 952 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, (MR_Integer) 0)));
#line 952 "error_util.m"
        MR_String parse_tree__error_util__FileName_15;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_16;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__FileNameLength_17;
#line 952 "error_util.m"
        MR_String parse_tree__error_util__LineNumberStr_18;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength0_19;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength_20;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__V_29_29;
#line 952 "error_util.m"
        MR_Integer parse_tree__error_util__V_30_30;

#line 953 "error_util.m"
        {
#line 953 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__FileName_15);
        }
#line 954 "error_util.m"
        {
#line 954 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__LineNumber_16);
        }
#line 955 "error_util.m"
        {
#line 955 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_15, &parse_tree__error_util__FileNameLength_17);
        }
#line 956 "error_util.m"
        {
#line 956 "error_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_16, &parse_tree__error_util__LineNumberStr_18);
        }
#line 957 "error_util.m"
        {
#line 957 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_18, &parse_tree__error_util__LineNumberStrLength0_19);
        }
#line 958 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_19 < (MR_Integer) 3);
#line 960 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 959 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = (MR_Integer) 3;
#line 960 "error_util.m"
        else
#line 961 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = parse_tree__error_util__LineNumberStrLength0_19;
#line 963 "error_util.m"
        parse_tree__error_util__V_30_30 = (parse_tree__error_util__FileNameLength_17 + (MR_Integer) 1);
#line 963 "error_util.m"
        parse_tree__error_util__V_29_29 = (parse_tree__error_util__V_30_30 + parse_tree__error_util__LineNumberStrLength_20);
#line 963 "error_util.m"
        parse_tree__error_util__ContextLength_21 = (parse_tree__error_util__V_29_29 + (MR_Integer) 2);
#line 952 "error_util.m"
      }
#line 13053 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_9_41 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1133 "error_util.m"
    {
#line 1133 "error_util.m"
      parse_tree__error_util__V_40_40 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_41);
    }
#line 1133 "error_util.m"
    {
#line 1133 "error_util.m"
      parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_40_40, &parse_tree__error_util__ParasCord_37);
    }
#line 1135 "error_util.m"
    {
#line 1135 "error_util.m"
      parse_tree__error_util__Paragraphs_22 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_41, parse_tree__error_util__ParasCord_37);
    }
#line 969 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_8 == (MR_Integer) 0);
#line 969 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 969 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 0;
#line 969 "error_util.m"
    else
#line 969 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 1;
#line 970 "error_util.m"
    parse_tree__error_util__V_33_33 = (parse_tree__error_util__ContextLength_21 + parse_tree__error_util__FixedIndent_10);
#line 970 "error_util.m"
    parse_tree__error_util__Remain_24 = (parse_tree__error_util__MaxWidth_11 - parse_tree__error_util__V_33_33);
#line 971 "error_util.m"
    {
#line 971 "error_util.m"
      parse_tree__error_util__group_words_5_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__FirstIndent_23, parse_tree__error_util__Paragraphs_22, parse_tree__error_util__Remain_24, &parse_tree__error_util__Lines_25);
    }
#line 972 "error_util.m"
    {
#line 972 "error_util.m"
      parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_25, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10);
#line 972 "error_util.m"
      return;
    }
#line 943 "error_util.m"
  }
#line 938 "error_util.m"
}

#line 796 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 796 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 796 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 796 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 796 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8)
#line 796 "error_util.m"
{
#line 802 "error_util.m"
  while (MR_TRUE)
#line 802 "error_util.m"
    {
#line 802 "error_util.m"
      /* tailcall optimized into a loop */
#line 802 "error_util.m"
      {
#line 802 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 802 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "error_util.m"
          {
#line 802 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 802 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 802 "error_util.m"
          }
#line 802 "error_util.m"
        else
#line 804 "error_util.m"
          {
#line 804 "error_util.m"
            MR_Word parse_tree__error_util__Component_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 804 "error_util.m"
            MR_Word parse_tree__error_util__Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 804 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 804 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 812 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 0))))
#line 806 "error_util.m"
              {
#line 806 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_23, (MR_Integer) 0)));
#line 806 "error_util.m"
                MR_Integer parse_tree__error_util__MaxWidth_32;

#line 807 "error_util.m"
                {
#line 807 "error_util.m"
                  libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_32);
                }
#line 808 "error_util.m"
                {
#line 808 "error_util.m"
                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaxWidth_32, parse_tree__error_util__ComponentPieces_31);
                }
#line 810 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 811 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 806 "error_util.m"
              }
#line 812 "error_util.m"
            else
#line 812 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 1))))
#line 813 "error_util.m"
                {
#line 813 "error_util.m"
                  MR_Word parse_tree__error_util__Option_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 813 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 813 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 813 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_36;

#line 814 "error_util.m"
                  {
#line 814 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_33, &parse_tree__error_util__OptionValue_36);
                  }
#line 815 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_36 == parse_tree__error_util__RequiredValue_34);
#line 818 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 816 "error_util.m"
                    {
#line 816 "error_util.m"
                      parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__EmbeddedComponents_35, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_70_70, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71);
                    }
#line 818 "error_util.m"
                  else
#line 819 "error_util.m"
                    {
#line 819 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 819 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 819 "error_util.m"
                    }
#line 813 "error_util.m"
                }
#line 812 "error_util.m"
              else
#line 812 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 2))))
#line 822 "error_util.m"
                  {
#line 822 "error_util.m"
                    MR_Word parse_tree__error_util__VerboseErrors_37;
#line 822 "error_util.m"
                    MR_Word parse_tree__error_util__ComponentPieces_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_23, (MR_Integer) 0)));

#line 823 "error_util.m"
                    {
#line 823 "error_util.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_37);
                    }
#line 832 "error_util.m"
                    if ((parse_tree__error_util__VerboseErrors_37 == (MR_Integer) 0))
#line 833 "error_util.m"
                      {
#line 834 "error_util.m"
                        {
#line 834 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 834 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 834 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 833 "error_util.m"
                      }
#line 832 "error_util.m"
                    else
#line 825 "error_util.m"
                      {
#line 825 "error_util.m"
                        MR_Integer parse_tree__error_util__MaxWidth_75;

#line 826 "error_util.m"
                        {
#line 826 "error_util.m"
                          libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_75);
                        }
#line 828 "error_util.m"
                        {
#line 828 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaxWidth_75, parse_tree__error_util__ComponentPieces_77);
                        }
#line 830 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 831 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 825 "error_util.m"
                      }
#line 822 "error_util.m"
                  }
#line 812 "error_util.m"
                else
#line 812 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 853 "error_util.m"
                    {
#line 853 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 853 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_40 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2));
#line 13288 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13290 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69;

#line 13293 "parse_tree.error_util.c"
                      {
#line 13295 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_81), parse_tree__error_util__Anything_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69);
                      }
#line 855 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 856 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 853 "error_util.m"
                    }
#line 812 "error_util.m"
                  else
#line 837 "error_util.m"
                    {
#line 837 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 837 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2)));
#line 837 "error_util.m"
                      MR_Integer parse_tree__error_util__MaxWidth_79;
#line 837 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_80;

#line 838 "error_util.m"
                      {
#line 838 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 46, &parse_tree__error_util__VerboseErrors_80);
                      }
#line 839 "error_util.m"
                      {
#line 839 "error_util.m"
                        libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_79);
                      }
#line 844 "error_util.m"
                      if ((parse_tree__error_util__VerboseErrors_80 == (MR_Integer) 0))
#line 845 "error_util.m"
                        {
#line 846 "error_util.m"
                          {
#line 846 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaxWidth_79, parse_tree__error_util__NonVerbosePieces_39);
                          }
#line 848 "error_util.m"
                          {
#line 848 "error_util.m"
                            libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                          }
#line 845 "error_util.m"
                        }
#line 844 "error_util.m"
                      else
#line 842 "error_util.m"
                        {
#line 842 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaxWidth_79, parse_tree__error_util__VerbosePieces_38);
                        }
#line 850 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 851 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 837 "error_util.m"
                    }
#line 858 "error_util.m"
            /* direct tailcall eliminated */
#line 858 "error_util.m"
            {
#line 858 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_24;
#line 858 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 858 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 858 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 858 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 858 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 858 "error_util.m"
            }
#line 858 "error_util.m"
            continue;
#line 804 "error_util.m"
          }
#line 802 "error_util.m"
      }
#line 802 "error_util.m"
      break;
#line 802 "error_util.m"
    }
#line 796 "error_util.m"
}

#line 768 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 768 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 768 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5)
#line 768 "error_util.m"
{
#line 773 "error_util.m"
  while (MR_TRUE)
#line 773 "error_util.m"
    {
#line 773 "error_util.m"
      /* tailcall optimized into a loop */
#line 773 "error_util.m"
      {
#line 773 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 773 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 773 "error_util.m"
        else
#line 774 "error_util.m"
          {
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__Msg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__Components_23;
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_24;
#line 774 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_26;
#line 774 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_27;
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_33_33;
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 774 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 13441 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_16)) == (MR_mktag((MR_Integer) 1))))
#line 13443 "parse_tree.error_util.c"
              {
#line 13445 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_25;

#line 781 "error_util.m"
                parse_tree__error_util__MaybeContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 0)));
#line 781 "error_util.m"
                parse_tree__error_util__TreatAsFirst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 781 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 2)));
#line 781 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 3)));
#line 787 "error_util.m"
                if ((parse_tree__error_util__TreatAsFirst_25 == (MR_Integer) 1))
#line 788 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 787 "error_util.m"
                else
#line 786 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = (MR_Integer) 0;
#line 13464 "parse_tree.error_util.c"
              }
#line 13466 "parse_tree.error_util.c"
            else
#line 13468 "parse_tree.error_util.c"
              {
#line 13470 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 0)));

#line 776 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 777 "error_util.m"
                {
#line 777 "error_util.m"
                  parse_tree__error_util__MaybeContext_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_24, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_22));
#line 777 "error_util.m"
                }
#line 779 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = (MR_Integer) 0;
#line 788 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 13487 "parse_tree.error_util.c"
              }
#line 791 "error_util.m"
            parse_tree__error_util__Indent_27 = (parse_tree__error_util__ExtraIndentLevel_26 * (MR_Integer) 2);
#line 792 "error_util.m"
            {
#line 792 "error_util.m"
              parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__Components_23, parse_tree__error_util__MaybeContext_24, parse_tree__error_util__Indent_27, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_33_33, &parse_tree__error_util__STATE_VARIABLE_First_35_35, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36);
            }
#line 794 "error_util.m"
            /* direct tailcall eliminated */
#line 794 "error_util.m"
            {
#line 794 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_17;
#line 794 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 794 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 794 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 794 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 794 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 794 "error_util.m"
            }
#line 794 "error_util.m"
            continue;
#line 774 "error_util.m"
          }
#line 773 "error_util.m"
      }
#line 773 "error_util.m"
      break;
#line 773 "error_util.m"
    }
#line 768 "error_util.m"
}

#line 721 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 721 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 721 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 721 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 721 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 721 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 721 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23)
#line 721 "error_util.m"
{
#line 724 "error_util.m"
  {
#line 724 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 724 "error_util.m"
    MR_Word parse_tree__error_util__Severity_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 724 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));
#line 724 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_17;
#line 724 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_18;
#line 725 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));

#line 726 "error_util.m"
    {
#line 726 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_7_p_0(parse_tree__error_util__Msgs_16, parse_tree__error_util__Globals_9, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_17);
    }
#line 728 "error_util.m"
    {
#line 728 "error_util.m"
      parse_tree__error_util__MaybeActual_18 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_9, parse_tree__error_util__Severity_14);
    }
#line 739 "error_util.m"
    if ((parse_tree__error_util__PrintedSome_17 == (MR_Integer) 1))
#line 730 "error_util.m"
      {
#line 730 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 730 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 730 "error_util.m"
      }
#line 739 "error_util.m"
    else
#line 754 "error_util.m"
      if ((parse_tree__error_util__MaybeActual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "error_util.m"
        {
#line 756 "error_util.m"
          {
#line 756 "error_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/8", (MR_String) "MaybeActual is no");
#line 756 "error_util.m"
            return;
          }
#line 755 "error_util.m"
        }
#line 754 "error_util.m"
      else
#line 742 "error_util.m"
        {
#line 742 "error_util.m"
          MR_Word parse_tree__error_util__Actual_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_18, (MR_Integer) 0)));

#line 747 "error_util.m"
          if ((parse_tree__error_util__Actual_19 == (MR_Integer) 0))
#line 744 "error_util.m"
            {
#line 745 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22 + (MR_Integer) 1);
#line 746 "error_util.m"
              {
#line 746 "error_util.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 746 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 744 "error_util.m"
            }
#line 747 "error_util.m"
          else
#line 747 "error_util.m"
            if ((parse_tree__error_util__Actual_19 == (MR_Integer) 2))
#line 752 "error_util.m"
              {
#line 752 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 752 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 752 "error_util.m"
              }
#line 747 "error_util.m"
            else
#line 748 "error_util.m"
              {
#line 749 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20 + (MR_Integer) 1);
#line 750 "error_util.m"
                {
#line 750 "error_util.m"
                  libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_9);
                }
#line 750 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 748 "error_util.m"
              }
#line 742 "error_util.m"
        }
#line 724 "error_util.m"
  }
#line 721 "error_util.m"
}

#line 681 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 681 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 681 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 681 "error_util.m"
{
#line 684 "error_util.m"
  {
#line 684 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 685 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 686 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 687 "error_util.m"
    {
#line 687 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 688 "error_util.m"
    {
#line 688 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 689 "error_util.m"
    {
#line 689 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 690 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 692 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 691 "error_util.m"
      {
#line 691 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 691 "error_util.m"
        return;
      }
#line 692 "error_util.m"
    else
#line 693 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 684 "error_util.m"
  }
#line 681 "error_util.m"
}

#line 595 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 595 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 595 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 595 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 595 "error_util.m"
{
#line 598 "error_util.m"
  {
#line 598 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 598 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 598 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 598 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 616 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 616 "error_util.m"
      {
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 619 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 619 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 619 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 616 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "error_util.m"
        else
#line 620 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 616 "error_util.m"
      }
#line 616 "error_util.m"
    else
#line 616 "error_util.m"
      {
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 617 "error_util.m"
        {
#line 617 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 617 "error_util.m"
        }
#line 616 "error_util.m"
      }
#line 616 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 616 "error_util.m"
      {
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 619 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 619 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 619 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 616 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "error_util.m"
        else
#line 620 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 616 "error_util.m"
      }
#line 616 "error_util.m"
    else
#line 616 "error_util.m"
      {
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 616 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 617 "error_util.m"
        {
#line 617 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 617 "error_util.m"
        }
#line 616 "error_util.m"
      }
#line 601 "error_util.m"
    {
#line 601 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 605 "error_util.m"
    if ((parse_tree__error_util__ContextResult_9 == (MR_Integer) 0))
#line 604 "error_util.m"
      {
#line 604 "error_util.m"
        parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 604 "error_util.m"
        return;
      }
#line 605 "error_util.m"
    else
#line 609 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 598 "error_util.m"
  }
#line 595 "error_util.m"
}

#line 581 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 581 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 581 "error_util.m"
{
#line 583 "error_util.m"
  {
#line 583 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 583 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 583 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "error_util.m"
    else
#line 584 "error_util.m"
      {
#line 584 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 585 "error_util.m"
        {
#line 585 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 13883 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 13885 "parse_tree.error_util.c"
          {
#line 13887 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 619 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 619 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 619 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 13896 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 592 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 13900 "parse_tree.error_util.c"
            else
#line 13902 "parse_tree.error_util.c"
              {
#line 13904 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 589 "error_util.m"
                {
#line 589 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 589 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 589 "error_util.m"
                }
#line 13917 "parse_tree.error_util.c"
              }
#line 13919 "parse_tree.error_util.c"
          }
#line 13921 "parse_tree.error_util.c"
        else
#line 13923 "parse_tree.error_util.c"
          {
#line 13925 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 616 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 589 "error_util.m"
            {
#line 589 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 589 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 589 "error_util.m"
            }
#line 13940 "parse_tree.error_util.c"
          }
#line 584 "error_util.m"
      }
#line 583 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 583 "error_util.m"
  }
#line 581 "error_util.m"
}

#line 520 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 520 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 520 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 520 "error_util.m"
{
#line 523 "error_util.m"
  while (MR_TRUE)
#line 523 "error_util.m"
    {
#line 523 "error_util.m"
      /* tailcall optimized into a loop */
#line 523 "error_util.m"
      {
#line 523 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 523 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 523 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 523 "error_util.m"
        else
#line 524 "error_util.m"
          {
#line 524 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 524 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 524 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 524 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 524 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 525 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 525 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 526 "error_util.m"
            {
#line 526 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 530 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 530 "error_util.m"
            else
#line 530 "error_util.m"
              {
#line 530 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 530 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 530 "error_util.m"
                else
#line 534 "error_util.m"
                  {
#line 534 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 534 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 536 "error_util.m"
                    {
#line 536 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 536 "error_util.m"
                    {
#line 536 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 536 "error_util.m"
                    }
#line 534 "error_util.m"
                  }
#line 530 "error_util.m"
              }
#line 538 "error_util.m"
            /* direct tailcall eliminated */
#line 538 "error_util.m"
            {
#line 538 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 538 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 538 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 538 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 538 "error_util.m"
            }
#line 538 "error_util.m"
            continue;
#line 524 "error_util.m"
          }
#line 523 "error_util.m"
      }
#line 523 "error_util.m"
      break;
#line 523 "error_util.m"
    }
#line 520 "error_util.m"
}

#line 448 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 448 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 448 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 448 "error_util.m"
{
#line 1507 "error_util.m"
  {
#line 1507 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1507 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1507 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1508 "error_util.m"
    {
#line 1508 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1509 "error_util.m"
    {
#line 1509 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1510 "error_util.m"
    {
#line 1510 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1511 "error_util.m"
    {
#line 1511 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1512 "error_util.m"
    {
#line 1512 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1512 "error_util.m"
    {
#line 1512 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1513 "error_util.m"
    {
#line 1513 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1515 "error_util.m"
    {
#line 1515 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1515 "error_util.m"
      return;
    }
#line 1507 "error_util.m"
  }
#line 448 "error_util.m"
}

#line 440 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 440 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 440 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 440 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 440 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 440 "error_util.m"
{
#line 1501 "error_util.m"
  {
#line 1501 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1501 "error_util.m"
    MR_Integer parse_tree__error_util__MaxWidth_23;
#line 1501 "error_util.m"
    MR_Word parse_tree__error_util__V_26_26;

#line 1502 "error_util.m"
    {
#line 1502 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 928 "error_util.m"
    {
#line 928 "error_util.m"
      libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_23);
    }
#line 929 "error_util.m"
    {
#line 929 "error_util.m"
      parse_tree__error_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 929 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_26_26, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 929 "error_util.m"
    }
#line 929 "error_util.m"
    {
#line 929 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_26_26, parse_tree__error_util__Indent_9, parse_tree__error_util__MaxWidth_23, parse_tree__error_util__Components_10);
#line 929 "error_util.m"
      return;
    }
#line 1501 "error_util.m"
  }
#line 440 "error_util.m"
}

#line 435 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 435 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 435 "error_util.m"
{
#line 1486 "error_util.m"
  {
#line 1486 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1486 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1486 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1495 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1495 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1489 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1487 "error_util.m"
    {
#line 1487 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1489 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1489 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1489 "error_util.m"
      {
#line 1489 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1489 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1490 "error_util.m"
        {
#line 1490 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1489 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1489 "error_util.m"
          {
#line 1491 "error_util.m"
            {
#line 1491 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1491 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1489 "error_util.m"
          }
#line 1489 "error_util.m"
      }
#line 1495 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1493 "error_util.m"
      {
#line 1493 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1493 "error_util.m"
        {
#line 1493 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1493 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1493 "error_util.m"
        }
#line 1494 "error_util.m"
        {
#line 1494 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1493 "error_util.m"
      }
#line 1495 "error_util.m"
    else
#line 1496 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1486 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1486 "error_util.m"
  }
#line 435 "error_util.m"
}

#line 430 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 430 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 430 "error_util.m"
{
#line 1484 "error_util.m"
  {
#line 1484 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1484 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1484 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1484 "error_util.m"
    {
#line 1484 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1484 "error_util.m"
    {
#line 1484 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1484 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1484 "error_util.m"
  }
#line 430 "error_util.m"
}

#line 426 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 426 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 426 "error_util.m"
{
#line 1481 "error_util.m"
  {
#line 1481 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1481 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1481 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 1))
#line 1482 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1481 "error_util.m"
    else
#line 1481 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1481 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1481 "error_util.m"
  }
#line 426 "error_util.m"
}

#line 424 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 424 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 424 "error_util.m"
{
#line 1474 "error_util.m"
  {
#line 1474 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1474 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1474 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1474 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1474 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1474 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1474 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1474 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1474 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1474 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1475 "error_util.m"
    {
#line 1475 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1476 "error_util.m"
    {
#line 1476 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1475 "error_util.m"
    {
#line 1475 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1475 "error_util.m"
    }
#line 1475 "error_util.m"
    {
#line 1475 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1475 "error_util.m"
    }
#line 1475 "error_util.m"
    {
#line 1475 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1475 "error_util.m"
    }
#line 1475 "error_util.m"
    {
#line 1475 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1475 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1475 "error_util.m"
    }
#line 1474 "error_util.m"
    {
#line 1474 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1474 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1474 "error_util.m"
  }
#line 424 "error_util.m"
}

#line 422 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 422 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 422 "error_util.m"
{
#line 1478 "error_util.m"
  {
#line 1478 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1478 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1478 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1478 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1478 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1479 "error_util.m"
    {
#line 1479 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__prim_data__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1479 "error_util.m"
    {
#line 1479 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1479 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1479 "error_util.m"
    }
#line 1479 "error_util.m"
    {
#line 1479 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1479 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1479 "error_util.m"
    }
#line 1478 "error_util.m"
    {
#line 1478 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1478 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1478 "error_util.m"
  }
#line 422 "error_util.m"
}

#line 418 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 418 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 418 "error_util.m"
{
#line 1013 "error_util.m"
  {
#line 1013 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1013 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1013 "error_util.m"
    {
#line 1013 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1013 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1013 "error_util.m"
  }
#line 418 "error_util.m"
}

#line 414 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 414 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 414 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 414 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 414 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 414 "error_util.m"
{
#line 933 "error_util.m"
  {
#line 933 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 933 "error_util.m"
    MR_Integer parse_tree__error_util__MaxWidth_12;

#line 934 "error_util.m"
    {
#line 934 "error_util.m"
      libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_12);
    }
#line 935 "error_util.m"
    {
#line 935 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaxWidth_12, parse_tree__error_util__Components_10);
#line 935 "error_util.m"
      return;
    }
#line 933 "error_util.m"
  }
#line 414 "error_util.m"
}

#line 411 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 411 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 411 "error_util.m"
{
#line 927 "error_util.m"
  {
#line 927 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 927 "error_util.m"
    MR_Integer parse_tree__error_util__MaxWidth_12;
#line 927 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;

#line 928 "error_util.m"
    {
#line 928 "error_util.m"
      libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_12);
    }
#line 929 "error_util.m"
    {
#line 929 "error_util.m"
      parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 929 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 929 "error_util.m"
    }
#line 929 "error_util.m"
    {
#line 929 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_17_17, parse_tree__error_util__Indent_9, parse_tree__error_util__MaxWidth_12, parse_tree__error_util__Components_10);
#line 929 "error_util.m"
      return;
    }
#line 927 "error_util.m"
  }
#line 411 "error_util.m"
}

#line 403 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 403 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 403 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 403 "error_util.m"
{
#line 922 "error_util.m"
  {
#line 922 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 922 "error_util.m"
    MR_Word parse_tree__error_util__Components_9;
#line 922 "error_util.m"
    MR_Word parse_tree__error_util__V_12_12;
#line 922 "error_util.m"
    MR_String parse_tree__error_util__V_13_13;
#line 922 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 922 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;

#line 924 "error_util.m"
    {
#line 924 "error_util.m"
      parse_tree__error_util__V_13_13 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 924 "error_util.m"
    {
#line 924 "error_util.m"
      parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 924 "error_util.m"
    }
#line 924 "error_util.m"
    {
#line 924 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__Msg_6));
#line 924 "error_util.m"
    }
#line 924 "error_util.m"
    {
#line 924 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "error_util.m"
    }
#line 924 "error_util.m"
    {
#line 924 "error_util.m"
      parse_tree__error_util__Components_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 924 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 924 "error_util.m"
    }
#line 925 "error_util.m"
    {
#line 925 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 79, parse_tree__error_util__Components_9);
#line 925 "error_util.m"
      return;
    }
#line 922 "error_util.m"
  }
#line 403 "error_util.m"
}

#line 395 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 395 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 395 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 395 "error_util.m"
{
#line 918 "error_util.m"
  {
#line 918 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 918 "error_util.m"
    MR_Integer parse_tree__error_util__MaxWidth_8;

#line 919 "error_util.m"
    {
#line 919 "error_util.m"
      libs__globals__lookup_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 136, &parse_tree__error_util__MaxWidth_8);
    }
#line 920 "error_util.m"
    {
#line 920 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaxWidth_8, parse_tree__error_util__Components_6);
#line 920 "error_util.m"
      return;
    }
#line 918 "error_util.m"
  }
#line 395 "error_util.m"
}

#line 385 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 385 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 385 "error_util.m"
{
#line 913 "error_util.m"
  {
#line 913 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 913 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 913 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "error_util.m"
      {
#line 913 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 914 "error_util.m"
        {
#line 914 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 913 "error_util.m"
      }
#line 913 "error_util.m"
    else
#line 913 "error_util.m"
      {
#line 913 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 915 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 913 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 913 "error_util.m"
        else
#line 916 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 913 "error_util.m"
      }
#line 913 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 913 "error_util.m"
  }
#line 385 "error_util.m"
}

#line 380 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 380 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 380 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 380 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 380 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 380 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 380 "error_util.m"
{
#line 909 "error_util.m"
  {
#line 909 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 909 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 909 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 909 "error_util.m"
    else
#line 909 "error_util.m"
      {
#line 909 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 910 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 909 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 909 "error_util.m"
        else
#line 911 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 909 "error_util.m"
      }
#line 909 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 909 "error_util.m"
  }
#line 380 "error_util.m"
}

#line 372 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 372 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 372 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 372 "error_util.m"
{
#line 903 "error_util.m"
  {
#line 903 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 903 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 903 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 903 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 903 "error_util.m"
    else
#line 903 "error_util.m"
      {
#line 903 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 903 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 903 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 904 "error_util.m"
          {
#line 904 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 904 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 904 "error_util.m"
            {
#line 904 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[9]));
            }
#line 904 "error_util.m"
            {
#line 904 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 904 "error_util.m"
          }
#line 903 "error_util.m"
        else
#line 905 "error_util.m"
          {
#line 905 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 905 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 905 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 907 "error_util.m"
            {
#line 907 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 906 "error_util.m"
            {
#line 906 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]), parse_tree__error_util__V_24_24);
            }
#line 905 "error_util.m"
            {
#line 905 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 905 "error_util.m"
          }
#line 903 "error_util.m"
      }
#line 903 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 903 "error_util.m"
  }
#line 372 "error_util.m"
}

#line 361 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 361 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 361 "error_util.m"
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
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 896 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "error_util.m"
          {
#line 897 "error_util.m"
            {
#line 897 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
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
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 896 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "error_util.m"
              {
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 898 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
                {
#line 898 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 898 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 898 "error_util.m"
                }
#line 898 "error_util.m"
              }
#line 896 "error_util.m"
            else
#line 899 "error_util.m"
              {
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 899 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 901 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15])));
#line 901 "error_util.m"
                }
#line 901 "error_util.m"
                {
#line 901 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 899 "error_util.m"
                {
#line 899 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
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
#line 361 "error_util.m"
}

#line 355 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 355 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 355 "error_util.m"
{
#line 888 "error_util.m"
  {
#line 888 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 888 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 888 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "error_util.m"
    else
#line 888 "error_util.m"
      {
#line 888 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 888 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 888 "error_util.m"
        else
#line 888 "error_util.m"
          {
#line 888 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 888 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 888 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "error_util.m"
              {
#line 890 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 890 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 891 "error_util.m"
                {
#line 891 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[13]), parse_tree__error_util__V_33_33);
                }
#line 890 "error_util.m"
                {
#line 890 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 890 "error_util.m"
              }
#line 888 "error_util.m"
            else
#line 892 "error_util.m"
              {
#line 892 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 892 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 892 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 894 "error_util.m"
                {
#line 894 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 893 "error_util.m"
                {
#line 893 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15]), parse_tree__error_util__V_25_25);
                }
#line 892 "error_util.m"
                {
#line 892 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 892 "error_util.m"
              }
#line 888 "error_util.m"
          }
#line 888 "error_util.m"
      }
#line 888 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 888 "error_util.m"
  }
#line 355 "error_util.m"
}

#line 349 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 349 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 349 "error_util.m"
{
#line 882 "error_util.m"
  {
#line 882 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 882 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 882 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 882 "error_util.m"
    else
#line 882 "error_util.m"
      {
#line 882 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 882 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 882 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "error_util.m"
          {
#line 883 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 883 "error_util.m"
            {
#line 883 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 883 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 883 "error_util.m"
            }
#line 883 "error_util.m"
            {
#line 883 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 883 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "error_util.m"
            }
#line 883 "error_util.m"
          }
#line 882 "error_util.m"
        else
#line 882 "error_util.m"
          {
#line 882 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 882 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 882 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "error_util.m"
              {
#line 884 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 884 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 884 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 884 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 884 "error_util.m"
                {
#line 884 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 884 "error_util.m"
                }
#line 884 "error_util.m"
                {
#line 884 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 884 "error_util.m"
                }
#line 884 "error_util.m"
                {
#line 884 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "error_util.m"
                }
#line 884 "error_util.m"
                {
#line 884 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 884 "error_util.m"
                }
#line 884 "error_util.m"
                {
#line 884 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 884 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 884 "error_util.m"
                }
#line 884 "error_util.m"
              }
#line 882 "error_util.m"
            else
#line 885 "error_util.m"
              {
#line 885 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 885 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 885 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 886 "error_util.m"
                {
#line 886 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 886 "error_util.m"
                {
#line 886 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 886 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 886 "error_util.m"
                }
#line 886 "error_util.m"
                {
#line 886 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 885 "error_util.m"
                {
#line 885 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 885 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 885 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 885 "error_util.m"
                }
#line 885 "error_util.m"
              }
#line 882 "error_util.m"
          }
#line 882 "error_util.m"
      }
#line 882 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 882 "error_util.m"
  }
#line 349 "error_util.m"
}

#line 344 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 344 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 344 "error_util.m"
{
#line 880 "error_util.m"
  {
#line 880 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 880 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 880 "error_util.m"
    {
#line 880 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 880 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 880 "error_util.m"
    }
#line 880 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 880 "error_util.m"
  }
#line 344 "error_util.m"
}

#line 718 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 718 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 718 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7)
#line 718 "error_util.m"
{
#line 718 "error_util.m"
  {
#line 718 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 718 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21;
#line 718 "error_util.m"
    MR_Integer parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23;

#line 718 "error_util.m"
    {
#line 718 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23);
    }
#line 718 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21));
#line 718 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23));
#line 718 "error_util.m"
  }
#line 718 "error_util.m"
}

#line 679 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 679 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 679 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 679 "error_util.m"
{
#line 679 "error_util.m"
  {
#line 679 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 679 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 679 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 679 "error_util.m"
  }
#line 679 "error_util.m"
}

#line 268 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 268 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 268 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 268 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 268 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 268 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 268 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 268 "error_util.m"
{
#line 716 "error_util.m"
  {
#line 716 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 716 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33;
#line 716 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 716 "error_util.m"
    MR_Word parse_tree__error_util__V_21_21;
#line 718 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16;
#line 718 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18;
#line 718 "error_util.m"
    MR_Box parse_tree__error_util__conv3_STATE_VARIABLE_IO_20;

#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 718 "error_util.m"
    {
#line 718 "error_util.m"
      parse_tree__error_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 718 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 718 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 718 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 718 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 718 "error_util.m"
    }
#line 15481 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 718 "error_util.m"
    {
#line 718 "error_util.m"
      mercury__list__foldl3_8_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_21_21, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15)), &parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17)), &parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv3_STATE_VARIABLE_IO_20);
    }
#line 718 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_16 = ((MR_Integer) parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16);
#line 718 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_18 = ((MR_Integer) parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18);
#line 716 "error_util.m"
  }
#line 268 "error_util.m"
}

#line 266 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 266 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 266 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 266 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14,
#line 266 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_15,
#line 266 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16,
#line 266 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_17)
#line 266 "error_util.m"
{
#line 714 "error_util.m"
  {
#line 714 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 714 "error_util.m"
    {
#line 714 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14, parse_tree__error_util__STATE_VARIABLE_NumWarnings_15, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_17);
#line 714 "error_util.m"
      return;
    }
#line 714 "error_util.m"
  }
#line 266 "error_util.m"
}

#line 243 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 243 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 243 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 243 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 243 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 243 "error_util.m"
{
#line 702 "error_util.m"
  {
#line 702 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 702 "error_util.m"
    if ((parse_tree__error_util__Verbose_7 == (MR_Integer) 0))
#line 702 "error_util.m"
      *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 702 "error_util.m"
    else
#line 704 "error_util.m"
      {
#line 706 "error_util.m"
        MR_Integer parse_tree__error_util___NumWarnings_11;
#line 706 "error_util.m"
        MR_Integer parse_tree__error_util___NumErrors_12;

#line 706 "error_util.m"
        {
#line 706 "error_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
        }
#line 708 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "error_util.m"
      }
#line 702 "error_util.m"
  }
#line 243 "error_util.m"
}

#line 238 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 238 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 238 "error_util.m"
{
#line 649 "error_util.m"
  {
#line 649 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 649 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 649 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 649 "error_util.m"
    else
#line 650 "error_util.m"
      {
#line 650 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 650 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 650 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 650 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 650 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 650 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 650 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 15613 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 651 "error_util.m"
        {
#line 651 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 650 "error_util.m"
        {
#line 650 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 650 "error_util.m"
      }
#line 649 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 649 "error_util.m"
  }
#line 238 "error_util.m"
}

#line 633 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 633 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 633 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 633 "error_util.m"
{
#line 633 "error_util.m"
  {
#line 633 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 633 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 633 "error_util.m"
    {
#line 633 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__633__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 633 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 633 "error_util.m"
  }
#line 633 "error_util.m"
}

#line 235 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 235 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 235 "error_util.m"
{
#line 632 "error_util.m"
  {
#line 632 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 632 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 633 "error_util.m"
    {
#line 633 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 637 "error_util.m"
    {
#line 637 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 638 "error_util.m"
    {
#line 638 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 644 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "error_util.m"
      {
#line 645 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 646 "error_util.m"
        {
#line 646 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 646 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 646 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 646 "error_util.m"
        }
#line 646 "error_util.m"
        {
#line 646 "error_util.m"
          MR_Word base;
#line 646 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 646 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 646 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 646 "error_util.m"
        }
#line 645 "error_util.m"
      }
#line 644 "error_util.m"
    else
#line 640 "error_util.m"
      {
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 640 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 640 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 640 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 641 "error_util.m"
        {
#line 641 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 642 "error_util.m"
        {
#line 642 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 643 "error_util.m"
        {
#line 643 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 643 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 643 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 643 "error_util.m"
        }
#line 643 "error_util.m"
        {
#line 643 "error_util.m"
          MR_Word base;
#line 643 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 643 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 643 "error_util.m"
        }
#line 640 "error_util.m"
      }
#line 632 "error_util.m"
  }
#line 235 "error_util.m"
}

#line 233 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 233 "error_util.m"
{
#line 630 "error_util.m"
  {
#line 630 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 630 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 630 "error_util.m"
  }
#line 233 "error_util.m"
}

#line 579 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 579 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 579 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 579 "error_util.m"
{
#line 579 "error_util.m"
  {
#line 579 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 579 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 579 "error_util.m"
    {
#line 579 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 579 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 579 "error_util.m"
  }
#line 579 "error_util.m"
}

#line 222 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 222 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 222 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 222 "error_util.m"
{
#line 578 "error_util.m"
  {
#line 578 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 579 "error_util.m"
    {
#line 579 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 579 "error_util.m"
      return;
    }
#line 578 "error_util.m"
  }
#line 222 "error_util.m"
}

#line 218 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 218 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 218 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 218 "error_util.m"
{
#line 558 "error_util.m"
  {
#line 558 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 558 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 558 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 518 "error_util.m"
    {
#line 518 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 563 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 563 "error_util.m"
    else
#line 564 "error_util.m"
      {
#line 564 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 570 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 2))
#line 572 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 570 "error_util.m"
        else
#line 569 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 564 "error_util.m"
      }
#line 558 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 558 "error_util.m"
  }
#line 218 "error_util.m"
}

#line 213 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 213 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 213 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 213 "error_util.m"
{
#line 540 "error_util.m"
  {
#line 540 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 540 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 540 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 518 "error_util.m"
    {
#line 518 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 545 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 545 "error_util.m"
    else
#line 546 "error_util.m"
      {
#line 546 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 550 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 0))
#line 549 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 550 "error_util.m"
        else
#line 554 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 546 "error_util.m"
      }
#line 540 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 540 "error_util.m"
  }
#line 213 "error_util.m"
}

#line 207 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 207 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 207 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 207 "error_util.m"
{
#line 517 "error_util.m"
  {
#line 517 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 517 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 518 "error_util.m"
    {
#line 518 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 517 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 517 "error_util.m"
  }
#line 207 "error_util.m"
}

#line 201 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 201 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 201 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 201 "error_util.m"
{
#line 492 "error_util.m"
  while (MR_TRUE)
#line 492 "error_util.m"
    {
#line 492 "error_util.m"
      /* tailcall optimized into a loop */
#line 492 "error_util.m"
      {
#line 492 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 492 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 492 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "error_util.m"
          {
#line 493 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 492 "error_util.m"
          }
#line 492 "error_util.m"
        else
#line 492 "error_util.m"
          if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 498 "error_util.m"
            {
#line 499 "error_util.m"
              parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 498 "error_util.m"
            }
#line 492 "error_util.m"
          else
#line 492 "error_util.m"
            if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 495 "error_util.m"
              {
#line 496 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 495 "error_util.m"
              }
#line 492 "error_util.m"
            else
#line 502 "error_util.m"
              {
#line 502 "error_util.m"
                MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 502 "error_util.m"
                MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 502 "error_util.m"
                MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 502 "error_util.m"
                MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 502 "error_util.m"
                MR_Word parse_tree__error_util__Value_11;

#line 503 "error_util.m"
                {
#line 503 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
                }
#line 504 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 506 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 505 "error_util.m"
                  {
#line 505 "error_util.m"
                    /* direct tailcall eliminated */
#line 505 "error_util.m"
                    {
#line 505 "error_util.m"
                      MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 505 "error_util.m"
                      parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 505 "error_util.m"
                    }
#line 505 "error_util.m"
                    continue;
#line 505 "error_util.m"
                  }
#line 506 "error_util.m"
                else
#line 510 "error_util.m"
                  if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "error_util.m"
                    parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 510 "error_util.m"
                  else
#line 511 "error_util.m"
                    {
#line 511 "error_util.m"
                      MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 512 "error_util.m"
                      /* direct tailcall eliminated */
#line 512 "error_util.m"
                      {
#line 512 "error_util.m"
                        MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 512 "error_util.m"
                        parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 512 "error_util.m"
                      }
#line 512 "error_util.m"
                      continue;
#line 511 "error_util.m"
                    }
#line 502 "error_util.m"
              }
#line 492 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 492 "error_util.m"
      }
#line 492 "error_util.m"
      break;
#line 492 "error_util.m"
    }
#line 201 "error_util.m"
}

#line 195 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 195 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 195 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 195 "error_util.m"
{
#line 471 "error_util.m"
  {
#line 471 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 471 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 471 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 0))
#line 471 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 471 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 471 "error_util.m"
      else
#line 471 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 475 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 471 "error_util.m"
        else
#line 473 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 471 "error_util.m"
    else
#line 471 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 2))
#line 471 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 483 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 471 "error_util.m"
        else
#line 471 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 487 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 471 "error_util.m"
          else
#line 485 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 471 "error_util.m"
      else
#line 471 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 477 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 471 "error_util.m"
        else
#line 471 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 481 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 471 "error_util.m"
          else
#line 479 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 471 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 471 "error_util.m"
  }
#line 195 "error_util.m"
}

#line 188 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 188 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 188 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 188 "error_util.m"
{
#line 16213 "parse_tree.error_util.c"
  {
#line 16215 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 16217 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16219 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 16222 "parse_tree.error_util.c"
    {
#line 16224 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 16227 "parse_tree.error_util.c"
  }
#line 188 "error_util.m"
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
