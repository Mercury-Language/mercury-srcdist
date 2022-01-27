/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "set_tree234.mih"
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




#line 136 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 139 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 142 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 145 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 148 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 151 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 154 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 157 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 160 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 163 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 166 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 169 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 172 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 175 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 178 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 181 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 184 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 187 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 190 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 193 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 196 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 199 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 202 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 205 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 208 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 211 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 214 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 217 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 220 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 223 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 226 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 229 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 232 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1];

#line 235 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 238 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 241 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 244 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 247 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 250 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 253 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 256 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 259 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 262 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 265 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 268 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 271 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 274 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 277 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 280 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 283 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 286 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 289 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 292 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 295 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 298 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 301 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1];

#line 304 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 307 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 310 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 313 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 316 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1];

#line 319 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 322 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 325 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 328 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 331 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 334 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 337 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 340 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[15];

#line 343 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 346 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 349 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 352 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[17];

#line 355 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[17];

#line 358 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 361 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 364 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 367 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 370 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 373 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 376 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 379 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 382 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 385 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 388 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 391 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 394 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 397 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 400 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 403 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 406 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 409 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 412 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 415 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 418 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 421 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 424 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 427 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 430 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 433 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 436 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 439 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 442 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 445 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 448 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 451 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 454 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1];

#line 457 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 460 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 463 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 466 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 469 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 472 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 475 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 478 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 481 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 484 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 487 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 490 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 493 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 496 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 499 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 502 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 505 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 508 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 511 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 514 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 517 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 520 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 523 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 526 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 529 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 532 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1];

#line 535 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 538 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 541 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 544 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 547 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[15];

#line 550 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 553 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[20];

#line 556 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[20];

#line 559 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 562 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 565 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 568 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 571 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 574 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 577 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 580 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 583 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 586 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 589 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 592 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 595 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 598 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 601 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 604 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 607 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 610 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 613 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 616 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 619 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 622 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 625 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 628 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 631 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 634 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 637 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 640 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 643 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 646 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 649 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 652 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 655 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 658 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 661 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 664 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 667 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 670 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 673 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 676 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 679 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 682 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 685 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 688 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 691 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 694 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 697 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 700 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 703 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 706 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 709 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 712 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 715 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 718 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 721 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 724 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 727 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 730 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 733 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 736 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 739 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 741 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 744 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 747 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 749 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 751 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 754 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 757 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 759 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 762 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 765 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 769 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 772 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 775 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 777 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 780 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 783 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 785 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 787 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 790 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 793 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 795 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 798 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 801 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 803 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 805 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 808 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 811 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 813 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 816 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 819 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 823 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 826 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 829 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 831 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 834 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 837 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 839 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 841 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 844 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 847 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 849 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 852 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 855 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 857 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 859 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 862 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 865 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 867 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 870 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 873 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 877 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 880 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 883 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 885 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 888 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 891 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 893 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 895 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 898 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 901 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 903 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 906 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 909 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 911 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 913 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 916 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 919 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 921 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 924 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 927 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 931 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 934 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 937 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 939 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 942 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 945 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 947 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 949 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 952 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 955 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 957 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 960 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 963 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 965 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 967 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 970 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 973 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 975 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 978 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 981 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 985 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 988 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 991 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 993 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 996 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 999 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1001 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1003 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1006 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1009 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1011 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1014 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1017 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1019 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1021 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1024 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1027 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1029 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1032 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1035 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1039 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1042 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1045 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1047 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1050 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1053 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1055 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1057 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 656 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__656__1_1_p_0(
#line 656 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1192 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1192 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1192 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1295 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1295 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1295 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1174 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1174 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1174 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 783 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 783 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 783 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 787 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 787 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 787 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 901 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 901 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 901 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1445 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1445 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1445 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1535 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1535 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1535 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1535 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1535 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1510 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1510 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1510 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1510 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1462 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1462 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1462 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1430 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1430 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1430 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1430 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1420 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1420 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1420 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1420 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1407 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1407 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1407 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1407 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1407 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1402 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1402 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1402 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1402 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1397 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1397 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1392 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1392 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1351 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1351 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1306 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1300 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1300 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1198 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1198 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1161 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1161 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1161 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1148 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1148 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1060 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1060 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1060 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1049 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1022 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1022 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1022 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1022 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 974 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 974 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 819 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 819 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 819 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 819 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8);

#line 791 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 791 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5);

#line 744 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 744 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 744 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 744 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 744 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 744 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 744 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23);

#line 704 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 704 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 704 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 704 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 618 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 618 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 618 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 618 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 604 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 604 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 543 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 543 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 741 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7);

#line 702 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 702 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 656 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 656 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 656 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 602 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 602 "error_util.m"
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



#line 1730 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1736 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1742 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1748 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1755 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1762 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1769 "parse_tree.error_util.c"
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

#line 1790 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1798 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1804 "parse_tree.error_util.c"
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

#line 1819 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1824 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1833 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1838 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1843 "parse_tree.error_util.c"
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

#line 1864 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1872 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1878 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 1884 "parse_tree.error_util.c"
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

#line 1899 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1907 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1915 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 1923 "parse_tree.error_util.c"
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

#line 1938 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1943 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 1948 "parse_tree.error_util.c"
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

#line 1962 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1968 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1974 "parse_tree.error_util.c"
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

#line 1995 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 2003 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2008 "parse_tree.error_util.c"
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

#line 2023 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2030 "parse_tree.error_util.c"
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

#line 2049 "parse_tree.error_util.c"
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

#line 2064 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2069 "parse_tree.error_util.c"
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

#line 2084 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2090 "parse_tree.error_util.c"
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

#line 2105 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2110 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2118 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2123 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2131 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2140 "parse_tree.error_util.c"
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

#line 2155 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2160 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2165 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2170 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2176 "parse_tree.error_util.c"
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

#line 2200 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2209 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2218 "parse_tree.error_util.c"
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

#line 2239 "parse_tree.error_util.c"
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

#line 2254 "parse_tree.error_util.c"
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

#line 2269 "parse_tree.error_util.c"
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

#line 2284 "parse_tree.error_util.c"
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

#line 2299 "parse_tree.error_util.c"
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

#line 2314 "parse_tree.error_util.c"
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

#line 2329 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2334 "parse_tree.error_util.c"
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

#line 2349 "parse_tree.error_util.c"
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

#line 2364 "parse_tree.error_util.c"
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

#line 2379 "parse_tree.error_util.c"
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

#line 2394 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2399 "parse_tree.error_util.c"
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

#line 2414 "parse_tree.error_util.c"
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

#line 2429 "parse_tree.error_util.c"
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

#line 2444 "parse_tree.error_util.c"
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

#line 2459 "parse_tree.error_util.c"
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

#line 2474 "parse_tree.error_util.c"
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

#line 2489 "parse_tree.error_util.c"
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

#line 2504 "parse_tree.error_util.c"
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

#line 2523 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2528 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2533 "parse_tree.error_util.c"
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

#line 2552 "parse_tree.error_util.c"
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

#line 2573 "parse_tree.error_util.c"
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

#line 2594 "parse_tree.error_util.c"
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

#line 2615 "parse_tree.error_util.c"
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

#line 2630 "parse_tree.error_util.c"
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

#line 2645 "parse_tree.error_util.c"
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

#line 2660 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2668 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2676 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2684 "parse_tree.error_util.c"
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

#line 2699 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2706 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2711 "parse_tree.error_util.c"
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

#line 2725 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2733 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2741 "parse_tree.error_util.c"
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

#line 2762 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2770 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2777 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2784 "parse_tree.error_util.c"
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

#line 2799 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2804 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2813 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2818 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2823 "parse_tree.error_util.c"
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

#line 2844 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2852 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2861 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2869 "parse_tree.error_util.c"
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

#line 2890 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2895 "parse_tree.error_util.c"
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

#line 2910 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2915 "parse_tree.error_util.c"
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

#line 2930 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2935 "parse_tree.error_util.c"
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

#line 2950 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2955 "parse_tree.error_util.c"
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

#line 2970 "parse_tree.error_util.c"
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

#line 2985 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2990 "parse_tree.error_util.c"
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

#line 3005 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3010 "parse_tree.error_util.c"
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

#line 3025 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3030 "parse_tree.error_util.c"
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

#line 3045 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3050 "parse_tree.error_util.c"
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

#line 3065 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3070 "parse_tree.error_util.c"
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

#line 3085 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3090 "parse_tree.error_util.c"
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

#line 3105 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3110 "parse_tree.error_util.c"
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

#line 3125 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3130 "parse_tree.error_util.c"
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

#line 3145 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3150 "parse_tree.error_util.c"
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

#line 3165 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3170 "parse_tree.error_util.c"
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

#line 3185 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3190 "parse_tree.error_util.c"
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

#line 3205 "parse_tree.error_util.c"
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

#line 3220 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3225 "parse_tree.error_util.c"
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

#line 3240 "parse_tree.error_util.c"
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

#line 3255 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3260 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19 = {
  (MR_String) "invis_order",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 19,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19,
  NULL,
  NULL,
  NULL
};

#line 3275 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18
};

#line 3282 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3287 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3292 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[15] = {
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
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19
};

#line 3311 "parse_tree.error_util.c"
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
    (MR_Integer) 15,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3
  }
};

#line 3335 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[20] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19,
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

#line 3359 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[20] = {
  (MR_Integer) 2,
  (MR_Integer) 12,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 14,
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 9,
  (MR_Integer) 13,
  (MR_Integer) 1,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 3383 "parse_tree.error_util.c"
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
  (MR_Integer) 20,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0
};

#line 3404 "parse_tree.error_util.c"
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

#line 3425 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3431 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3437 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3443 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3449 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3455 "parse_tree.error_util.c"
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

#line 3476 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3482 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3488 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3494 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3500 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3506 "parse_tree.error_util.c"
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

#line 3527 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3533 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3539 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3545 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3551 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3557 "parse_tree.error_util.c"
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

#line 3578 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3584 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3590 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3596 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3602 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3608 "parse_tree.error_util.c"
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

#line 3629 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3635 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3641 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3647 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3653 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3659 "parse_tree.error_util.c"
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

#line 3680 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3687 "parse_tree.error_util.c"
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

#line 3702 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3707 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3716 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3721 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3726 "parse_tree.error_util.c"
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

#line 3747 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3752 "parse_tree.error_util.c"
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

#line 3767 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3772 "parse_tree.error_util.c"
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

#line 3787 "parse_tree.error_util.c"
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

#line 3802 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3807 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3812 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3817 "parse_tree.error_util.c"
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

#line 3836 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3843 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3850 "parse_tree.error_util.c"
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

#line 3871 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3876 "parse_tree.error_util.c"
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

#line 3891 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3896 "parse_tree.error_util.c"
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

#line 3911 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3916 "parse_tree.error_util.c"
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

#line 3931 "parse_tree.error_util.c"
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

#line 3946 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 3951 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 3956 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 3961 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3966 "parse_tree.error_util.c"
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

#line 3990 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3998 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4006 "parse_tree.error_util.c"
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

#line 4027 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4032 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4041 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4052 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4060 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4063 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4065 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4067 "parse_tree.error_util.c"
{
#line 4069 "parse_tree.error_util.c"
  {
#line 4071 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4074 "parse_tree.error_util.c"
    {
#line 4076 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4079 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4081 "parse_tree.error_util.c"
  }
#line 4083 "parse_tree.error_util.c"
}

#line 4086 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4089 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4091 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4093 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4095 "parse_tree.error_util.c"
{
#line 4097 "parse_tree.error_util.c"
  {
#line 4099 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4102 "parse_tree.error_util.c"
    {
#line 4104 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4107 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4109 "parse_tree.error_util.c"
  }
#line 4111 "parse_tree.error_util.c"
}

#line 4114 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4117 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4119 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4121 "parse_tree.error_util.c"
{
#line 4123 "parse_tree.error_util.c"
  {
#line 4125 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4128 "parse_tree.error_util.c"
    {
#line 4130 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4133 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4135 "parse_tree.error_util.c"
  }
#line 4137 "parse_tree.error_util.c"
}

#line 4140 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4143 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4145 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4147 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4149 "parse_tree.error_util.c"
{
#line 4151 "parse_tree.error_util.c"
  {
#line 4153 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4156 "parse_tree.error_util.c"
    {
#line 4158 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4161 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4163 "parse_tree.error_util.c"
  }
#line 4165 "parse_tree.error_util.c"
}

#line 4168 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4171 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4173 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4175 "parse_tree.error_util.c"
{
#line 4177 "parse_tree.error_util.c"
  {
#line 4179 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4182 "parse_tree.error_util.c"
    {
#line 4184 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4187 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4189 "parse_tree.error_util.c"
  }
#line 4191 "parse_tree.error_util.c"
}

#line 4194 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4197 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4199 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4201 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4203 "parse_tree.error_util.c"
{
#line 4205 "parse_tree.error_util.c"
  {
#line 4207 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4210 "parse_tree.error_util.c"
    {
#line 4212 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4215 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4217 "parse_tree.error_util.c"
  }
#line 4219 "parse_tree.error_util.c"
}

#line 4222 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4225 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4227 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4229 "parse_tree.error_util.c"
{
#line 4231 "parse_tree.error_util.c"
  {
#line 4233 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4236 "parse_tree.error_util.c"
    {
#line 4238 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4241 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4243 "parse_tree.error_util.c"
  }
#line 4245 "parse_tree.error_util.c"
}

#line 4248 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4251 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4253 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4255 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4257 "parse_tree.error_util.c"
{
#line 4259 "parse_tree.error_util.c"
  {
#line 4261 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4264 "parse_tree.error_util.c"
    {
#line 4266 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4269 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4271 "parse_tree.error_util.c"
  }
#line 4273 "parse_tree.error_util.c"
}

#line 4276 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4279 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4281 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4283 "parse_tree.error_util.c"
{
#line 4285 "parse_tree.error_util.c"
  {
#line 4287 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4290 "parse_tree.error_util.c"
    {
#line 4292 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4295 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4297 "parse_tree.error_util.c"
  }
#line 4299 "parse_tree.error_util.c"
}

#line 4302 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4305 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4307 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4309 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4311 "parse_tree.error_util.c"
{
#line 4313 "parse_tree.error_util.c"
  {
#line 4315 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4318 "parse_tree.error_util.c"
    {
#line 4320 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4323 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4325 "parse_tree.error_util.c"
  }
#line 4327 "parse_tree.error_util.c"
}

#line 4330 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4333 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4335 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4337 "parse_tree.error_util.c"
{
#line 4339 "parse_tree.error_util.c"
  {
#line 4341 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4344 "parse_tree.error_util.c"
    {
#line 4346 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4349 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4351 "parse_tree.error_util.c"
  }
#line 4353 "parse_tree.error_util.c"
}

#line 4356 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4359 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4361 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4363 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4365 "parse_tree.error_util.c"
{
#line 4367 "parse_tree.error_util.c"
  {
#line 4369 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4372 "parse_tree.error_util.c"
    {
#line 4374 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4377 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4379 "parse_tree.error_util.c"
  }
#line 4381 "parse_tree.error_util.c"
}

#line 4384 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4387 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4389 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4391 "parse_tree.error_util.c"
{
#line 4393 "parse_tree.error_util.c"
  {
#line 4395 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4398 "parse_tree.error_util.c"
    {
#line 4400 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4403 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4405 "parse_tree.error_util.c"
  }
#line 4407 "parse_tree.error_util.c"
}

#line 4410 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4413 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4415 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4417 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4419 "parse_tree.error_util.c"
{
#line 4421 "parse_tree.error_util.c"
  {
#line 4423 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4426 "parse_tree.error_util.c"
    {
#line 4428 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4431 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4433 "parse_tree.error_util.c"
  }
#line 4435 "parse_tree.error_util.c"
}

#line 4438 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4441 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4443 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4445 "parse_tree.error_util.c"
{
#line 4447 "parse_tree.error_util.c"
  {
#line 4449 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4452 "parse_tree.error_util.c"
    {
#line 4454 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4457 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4459 "parse_tree.error_util.c"
  }
#line 4461 "parse_tree.error_util.c"
}

#line 4464 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4467 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4469 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4471 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4473 "parse_tree.error_util.c"
{
#line 4475 "parse_tree.error_util.c"
  {
#line 4477 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4480 "parse_tree.error_util.c"
    {
#line 4482 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4485 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4487 "parse_tree.error_util.c"
  }
#line 4489 "parse_tree.error_util.c"
}

#line 4492 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4495 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4497 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4499 "parse_tree.error_util.c"
{
#line 4501 "parse_tree.error_util.c"
  {
#line 4503 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4506 "parse_tree.error_util.c"
    {
#line 4508 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4511 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4513 "parse_tree.error_util.c"
  }
#line 4515 "parse_tree.error_util.c"
}

#line 4518 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4521 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4523 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4525 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4527 "parse_tree.error_util.c"
{
#line 4529 "parse_tree.error_util.c"
  {
#line 4531 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4534 "parse_tree.error_util.c"
    {
#line 4536 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4539 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4541 "parse_tree.error_util.c"
  }
#line 4543 "parse_tree.error_util.c"
}

#line 4546 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4549 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4551 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4553 "parse_tree.error_util.c"
{
#line 4555 "parse_tree.error_util.c"
  {
#line 4557 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4560 "parse_tree.error_util.c"
    {
#line 4562 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4565 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4567 "parse_tree.error_util.c"
  }
#line 4569 "parse_tree.error_util.c"
}

#line 4572 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4575 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4577 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4579 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4581 "parse_tree.error_util.c"
{
#line 4583 "parse_tree.error_util.c"
  {
#line 4585 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4588 "parse_tree.error_util.c"
    {
#line 4590 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4593 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4595 "parse_tree.error_util.c"
  }
#line 4597 "parse_tree.error_util.c"
}

#line 4600 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4603 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4605 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4607 "parse_tree.error_util.c"
{
#line 4609 "parse_tree.error_util.c"
  {
#line 4611 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4614 "parse_tree.error_util.c"
    {
#line 4616 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4619 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4621 "parse_tree.error_util.c"
  }
#line 4623 "parse_tree.error_util.c"
}

#line 4626 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4629 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4631 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4633 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4635 "parse_tree.error_util.c"
{
#line 4637 "parse_tree.error_util.c"
  {
#line 4639 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4642 "parse_tree.error_util.c"
    {
#line 4644 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4647 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4649 "parse_tree.error_util.c"
  }
#line 4651 "parse_tree.error_util.c"
}

#line 4654 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4657 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4659 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4661 "parse_tree.error_util.c"
{
#line 4663 "parse_tree.error_util.c"
  {
#line 4665 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4668 "parse_tree.error_util.c"
    {
#line 4670 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4673 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4675 "parse_tree.error_util.c"
  }
#line 4677 "parse_tree.error_util.c"
}

#line 4680 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4683 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4685 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4687 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4689 "parse_tree.error_util.c"
{
#line 4691 "parse_tree.error_util.c"
  {
#line 4693 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4696 "parse_tree.error_util.c"
    {
#line 4698 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4701 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4703 "parse_tree.error_util.c"
  }
#line 4705 "parse_tree.error_util.c"
}

#line 4708 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4711 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4713 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4715 "parse_tree.error_util.c"
{
#line 4717 "parse_tree.error_util.c"
  {
#line 4719 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4722 "parse_tree.error_util.c"
    {
#line 4724 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4727 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4729 "parse_tree.error_util.c"
  }
#line 4731 "parse_tree.error_util.c"
}

#line 4734 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4737 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4739 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4741 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4743 "parse_tree.error_util.c"
{
#line 4745 "parse_tree.error_util.c"
  {
#line 4747 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4750 "parse_tree.error_util.c"
    {
#line 4752 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4755 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4757 "parse_tree.error_util.c"
  }
#line 4759 "parse_tree.error_util.c"
}

#line 4762 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4765 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4769 "parse_tree.error_util.c"
{
#line 4771 "parse_tree.error_util.c"
  {
#line 4773 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4776 "parse_tree.error_util.c"
    {
#line 4778 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4781 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4783 "parse_tree.error_util.c"
  }
#line 4785 "parse_tree.error_util.c"
}

#line 4788 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 4791 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4793 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4795 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4797 "parse_tree.error_util.c"
{
#line 4799 "parse_tree.error_util.c"
  {
#line 4801 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4804 "parse_tree.error_util.c"
    {
#line 4806 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4809 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4811 "parse_tree.error_util.c"
  }
#line 4813 "parse_tree.error_util.c"
}

#line 4816 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 4819 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4823 "parse_tree.error_util.c"
{
#line 4825 "parse_tree.error_util.c"
  {
#line 4827 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4830 "parse_tree.error_util.c"
    {
#line 4832 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4835 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4837 "parse_tree.error_util.c"
  }
#line 4839 "parse_tree.error_util.c"
}

#line 4842 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 4845 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4847 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4849 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4851 "parse_tree.error_util.c"
{
#line 4853 "parse_tree.error_util.c"
  {
#line 4855 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4858 "parse_tree.error_util.c"
    {
#line 4860 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4863 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4865 "parse_tree.error_util.c"
  }
#line 4867 "parse_tree.error_util.c"
}

#line 4870 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 4873 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4877 "parse_tree.error_util.c"
{
#line 4879 "parse_tree.error_util.c"
  {
#line 4881 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4884 "parse_tree.error_util.c"
    {
#line 4886 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4889 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4891 "parse_tree.error_util.c"
  }
#line 4893 "parse_tree.error_util.c"
}

#line 4896 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 4899 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4901 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4903 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4905 "parse_tree.error_util.c"
{
#line 4907 "parse_tree.error_util.c"
  {
#line 4909 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4912 "parse_tree.error_util.c"
    {
#line 4914 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4917 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4919 "parse_tree.error_util.c"
  }
#line 4921 "parse_tree.error_util.c"
}

#line 4924 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 4927 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4931 "parse_tree.error_util.c"
{
#line 4933 "parse_tree.error_util.c"
  {
#line 4935 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4938 "parse_tree.error_util.c"
    {
#line 4940 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4943 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4945 "parse_tree.error_util.c"
  }
#line 4947 "parse_tree.error_util.c"
}

#line 4950 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 4953 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4955 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4957 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4959 "parse_tree.error_util.c"
{
#line 4961 "parse_tree.error_util.c"
  {
#line 4963 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4966 "parse_tree.error_util.c"
    {
#line 4968 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4971 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4973 "parse_tree.error_util.c"
  }
#line 4975 "parse_tree.error_util.c"
}

#line 4978 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 4981 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4985 "parse_tree.error_util.c"
{
#line 4987 "parse_tree.error_util.c"
  {
#line 4989 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4992 "parse_tree.error_util.c"
    {
#line 4994 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4997 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4999 "parse_tree.error_util.c"
  }
#line 5001 "parse_tree.error_util.c"
}

#line 5004 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5007 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5009 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5011 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5013 "parse_tree.error_util.c"
{
#line 5015 "parse_tree.error_util.c"
  {
#line 5017 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5020 "parse_tree.error_util.c"
    {
#line 5022 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5025 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5027 "parse_tree.error_util.c"
  }
#line 5029 "parse_tree.error_util.c"
}

#line 656 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__656__1_1_p_0(
#line 656 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 656 "error_util.m"
{
#line 656 "error_util.m"
  {
#line 656 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 656 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 656 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 656 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 656 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 656 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 679 "error_util.m"
    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 692 "error_util.m"
      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
    else
#line 679 "error_util.m"
      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 693 "error_util.m"
        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
      else
#line 679 "error_util.m"
        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 695 "error_util.m"
          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
        else
#line 679 "error_util.m"
          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 690 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
          else
#line 679 "error_util.m"
            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 687 "error_util.m"
              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
            else
#line 679 "error_util.m"
              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 682 "error_util.m"
                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
              else
#line 679 "error_util.m"
                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 684 "error_util.m"
                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                else
#line 679 "error_util.m"
                  if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 694 "error_util.m"
                    parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                  else
#line 679 "error_util.m"
                    if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 688 "error_util.m"
                      parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                    else
#line 679 "error_util.m"
                      if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 681 "error_util.m"
                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                      else
#line 679 "error_util.m"
                        if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 686 "error_util.m"
                          parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                        else
#line 679 "error_util.m"
                          if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "error_util.m"
                            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                          else
#line 679 "error_util.m"
                            if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 680 "error_util.m"
                              parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                            else
#line 679 "error_util.m"
                              if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 691 "error_util.m"
                                parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                              else
#line 679 "error_util.m"
                                if ((parse_tree__error_util__Phase_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 683 "error_util.m"
                                  parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "error_util.m"
                                else
#line 679 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__Phase_31)) == (MR_mktag((MR_Integer) 1))))
#line 685 "error_util.m"
                                    {
#line 685 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 685 "error_util.m"
                                      {
#line 685 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 685 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 685 "error_util.m"
                                      }
#line 685 "error_util.m"
                                    }
#line 679 "error_util.m"
                                  else
#line 689 "error_util.m"
                                    {
#line 689 "error_util.m"
                                      MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 689 "error_util.m"
                                      {
#line 689 "error_util.m"
                                        parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 689 "error_util.m"
                                      }
#line 689 "error_util.m"
                                    }
#line 658 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 658 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 658 "error_util.m"
      {
#line 658 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 658 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 658 "error_util.m"
      }
#line 656 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 656 "error_util.m"
  }
#line 656 "error_util.m"
}

#line 1192 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1192 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1192 "error_util.m"
{
#line 1192 "error_util.m"
  {
#line 1192 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1192 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1192 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1192 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1192 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5221 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1192 "error_util.m"
    else
#line 1192 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1192 "error_util.m"
        else
#line 1192 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5235 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
          else
#line 1192 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5241 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
            else
#line 5245 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
      else
#line 1192 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1192 "error_util.m"
          {
#line 1192 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1192 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5258 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
            else
#line 1192 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1192 "error_util.m"
                {
#line 1192 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1192 "error_util.m"
                  {
#line 1192 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1192 "error_util.m"
                    return;
                  }
#line 1192 "error_util.m"
                }
#line 1192 "error_util.m"
              else
#line 1192 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5282 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
                else
#line 5286 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
          }
#line 1192 "error_util.m"
        else
#line 1192 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1192 "error_util.m"
            {
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1192 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5301 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
              else
#line 1192 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5307 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
                else
#line 1192 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1192 "error_util.m"
                    {
#line 1192 "error_util.m"
                      MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1192 "error_util.m"
                      {
#line 1192 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1192 "error_util.m"
                        return;
                      }
#line 1192 "error_util.m"
                    }
#line 1192 "error_util.m"
                  else
#line 5329 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
            }
#line 1192 "error_util.m"
          else
#line 1192 "error_util.m"
            {
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1192 "error_util.m"
              if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5342 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1192 "error_util.m"
              else
#line 1192 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5348 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
                else
#line 1192 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5354 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1192 "error_util.m"
                  else
#line 1192 "error_util.m"
                    {
#line 1192 "error_util.m"
                      MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1192 "error_util.m"
                      {
#line 1192 "error_util.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1192 "error_util.m"
                        return;
                      }
#line 1192 "error_util.m"
                    }
#line 1192 "error_util.m"
            }
#line 1192 "error_util.m"
  }
#line 1192 "error_util.m"
}

#line 1192 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1192 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1192 "error_util.m"
{
#line 1192 "error_util.m"
  {
#line 1192 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1192 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1192 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1192 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1192 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1192 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1192 "error_util.m"
    else
#line 1192 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "error_util.m"
        {
#line 1192 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1192 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1192 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1192 "error_util.m"
        }
#line 1192 "error_util.m"
      else
#line 1192 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1192 "error_util.m"
          {
#line 1192 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1192 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1192 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1192 "error_util.m"
              {
#line 1192 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5437 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1192 "error_util.m"
              }
#line 1192 "error_util.m"
          }
#line 1192 "error_util.m"
        else
#line 1192 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1192 "error_util.m"
            {
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_6_6;

#line 1192 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1192 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1192 "error_util.m"
                {
#line 1192 "error_util.m"
                  parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5462 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1192 "error_util.m"
                }
#line 1192 "error_util.m"
            }
#line 1192 "error_util.m"
          else
#line 1192 "error_util.m"
            {
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "error_util.m"
              MR_String parse_tree__error_util__V_8_8;

#line 1192 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1192 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1192 "error_util.m"
                {
#line 1192 "error_util.m"
                  parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5485 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1192 "error_util.m"
                }
#line 1192 "error_util.m"
            }
#line 1192 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1192 "error_util.m"
  }
#line 1192 "error_util.m"
}

#line 1295 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1295 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1295 "error_util.m"
{
#line 1295 "error_util.m"
  {
#line 1295 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1295 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1295 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1295 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1295 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5522 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1295 "error_util.m"
    else
#line 1295 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "error_util.m"
        if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1295 "error_util.m"
        else
#line 1295 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5536 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1295 "error_util.m"
          else
#line 5540 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1295 "error_util.m"
      else
#line 1295 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1295 "error_util.m"
          {
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1295 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5553 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1295 "error_util.m"
            else
#line 1295 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1295 "error_util.m"
                {
#line 1295 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1295 "error_util.m"
                  {
#line 1295 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1295 "error_util.m"
                    return;
                  }
#line 1295 "error_util.m"
                }
#line 1295 "error_util.m"
              else
#line 5575 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1295 "error_util.m"
          }
#line 1295 "error_util.m"
        else
#line 1295 "error_util.m"
          {
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1295 "error_util.m"
            if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5588 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1295 "error_util.m"
            else
#line 1295 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5594 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1295 "error_util.m"
              else
#line 1295 "error_util.m"
                {
#line 1295 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1295 "error_util.m"
                  {
#line 1295 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1295 "error_util.m"
                    return;
                  }
#line 1295 "error_util.m"
                }
#line 1295 "error_util.m"
          }
#line 1295 "error_util.m"
  }
#line 1295 "error_util.m"
}

#line 1295 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1295 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1295 "error_util.m"
{
#line 1295 "error_util.m"
  {
#line 1295 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1295 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1295 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1295 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1295 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1295 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1295 "error_util.m"
    else
#line 1295 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "error_util.m"
        {
#line 1295 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1295 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1295 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1295 "error_util.m"
        }
#line 1295 "error_util.m"
      else
#line 1295 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1295 "error_util.m"
          {
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1295 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1295 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1295 "error_util.m"
              {
#line 1295 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5677 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1295 "error_util.m"
              }
#line 1295 "error_util.m"
          }
#line 1295 "error_util.m"
        else
#line 1295 "error_util.m"
          {
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1295 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1295 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1295 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1295 "error_util.m"
              {
#line 1295 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5700 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1295 "error_util.m"
              }
#line 1295 "error_util.m"
          }
#line 1295 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1295 "error_util.m"
  }
#line 1295 "error_util.m"
}

#line 1174 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1174 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1174 "error_util.m"
{
#line 1174 "error_util.m"
  {
#line 1174 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1174 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1174 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1174 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1174 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5737 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1174 "error_util.m"
    else
#line 1174 "error_util.m"
      {
#line 1174 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1174 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1174 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1174 "error_util.m"
        {
#line 1174 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 5763 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1174 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1174 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1174 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1174 "error_util.m"
        else
#line 1174 "error_util.m"
          {
#line 1174 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1174 "error_util.m"
            {
#line 1174 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 5783 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1174 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1174 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1174 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1174 "error_util.m"
            else
#line 1174 "error_util.m"
              {
#line 1174 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1174 "error_util.m"
                return;
              }
#line 1174 "error_util.m"
          }
#line 1174 "error_util.m"
      }
#line 1174 "error_util.m"
  }
#line 1174 "error_util.m"
}

#line 1174 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1174 "error_util.m"
{
#line 1174 "error_util.m"
  {
#line 1174 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1174 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1174 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1174 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1174 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1174 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1174 "error_util.m"
    else
#line 1174 "error_util.m"
      {
#line 1174 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1174 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1174 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 5850 "parse_tree.error_util.c"
        {
#line 5852 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1174 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1174 "error_util.m"
          {
#line 5859 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1174 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 5863 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1174 "error_util.m"
          }
#line 1174 "error_util.m"
      }
#line 1174 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1174 "error_util.m"
  }
#line 1174 "error_util.m"
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
#line 5917 "parse_tree.error_util.c"
  {
#line 5919 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5922 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5924 "parse_tree.error_util.c"
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
#line 5970 "parse_tree.error_util.c"
  {
#line 5972 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5975 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5977 "parse_tree.error_util.c"
  }
#line 148 "error_util.m"
}

#line 783 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 783 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 783 "error_util.m"
{
#line 783 "error_util.m"
  {
#line 783 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 783 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 783 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 783 "error_util.m"
    {
#line 783 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 783 "error_util.m"
      return;
    }
#line 783 "error_util.m"
  }
#line 783 "error_util.m"
}

#line 783 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 783 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 783 "error_util.m"
{
#line 6023 "parse_tree.error_util.c"
  {
#line 6025 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6028 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6030 "parse_tree.error_util.c"
  }
#line 783 "error_util.m"
}

#line 787 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 787 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 787 "error_util.m"
{
#line 787 "error_util.m"
  {
#line 787 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 787 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 787 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 787 "error_util.m"
    {
#line 787 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 787 "error_util.m"
      return;
    }
#line 787 "error_util.m"
  }
#line 787 "error_util.m"
}

#line 787 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 787 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 787 "error_util.m"
{
#line 6076 "parse_tree.error_util.c"
  {
#line 6078 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6081 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6083 "parse_tree.error_util.c"
  }
#line 787 "error_util.m"
}

#line 901 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 901 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 901 "error_util.m"
{
#line 901 "error_util.m"
  {
#line 901 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 901 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 901 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 901 "error_util.m"
    {
#line 901 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 901 "error_util.m"
      return;
    }
#line 901 "error_util.m"
  }
#line 901 "error_util.m"
}

#line 901 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 901 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 901 "error_util.m"
{
#line 6129 "parse_tree.error_util.c"
  {
#line 6131 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6134 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6136 "parse_tree.error_util.c"
  }
#line 901 "error_util.m"
}

#line 359 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 359 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 359 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 359 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 359 "error_util.m"
{
#line 359 "error_util.m"
  {
#line 359 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 359 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 359 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 359 "error_util.m"
    {
#line 359 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 359 "error_util.m"
      return;
    }
#line 359 "error_util.m"
  }
#line 359 "error_util.m"
}

#line 359 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 359 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 359 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 359 "error_util.m"
{
#line 359 "error_util.m"
  {
#line 359 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 359 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 359 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 359 "error_util.m"
    {
#line 359 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 359 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 359 "error_util.m"
  }
#line 359 "error_util.m"
}

#line 276 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 276 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 276 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 276 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 276 "error_util.m"
{
#line 276 "error_util.m"
  {
#line 276 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 276 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 276 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 276 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_41 == parse_tree__error_util__CastY_42);
#line 276 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6227 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "error_util.m"
    else
#line 276 "error_util.m"
      {
#line 276 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 276 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 276 "error_util.m"
        {
#line 276 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 276 "error_util.m"
        {
#line 276 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 276 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 276 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6252 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 276 "error_util.m"
        else
#line 276 "error_util.m"
          {
#line 276 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 276 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6262 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 276 "error_util.m"
            else
#line 276 "error_util.m"
              {
#line 276 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 276 "error_util.m"
                if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 276 "error_util.m"
                  {
#line 276 "error_util.m"
                    parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 276 "error_util.m"
                    parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                  }
#line 276 "error_util.m"
                else
#line 276 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "error_util.m"
                    {
#line 276 "error_util.m"
                      parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 276 "error_util.m"
                      parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                    }
#line 276 "error_util.m"
                  else
#line 276 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 276 "error_util.m"
                      {
#line 276 "error_util.m"
                        parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 276 "error_util.m"
                        parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                      }
#line 276 "error_util.m"
                    else
#line 276 "error_util.m"
                      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 276 "error_util.m"
                        {
#line 276 "error_util.m"
                          MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "error_util.m"
                          MR_String parse_tree__error_util__V_8_8;

#line 276 "error_util.m"
                          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 276 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                            {
#line 276 "error_util.m"
                              parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "error_util.m"
                              {
#line 276 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                              }
#line 276 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                            }
#line 276 "error_util.m"
                        }
#line 276 "error_util.m"
                      else
#line 276 "error_util.m"
                        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 276 "error_util.m"
                          {
#line 276 "error_util.m"
                            MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "error_util.m"
                            MR_String parse_tree__error_util__V_10_10;

#line 276 "error_util.m"
                            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 276 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                              {
#line 276 "error_util.m"
                                parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "error_util.m"
                                {
#line 276 "error_util.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                                }
#line 276 "error_util.m"
                                parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                              }
#line 276 "error_util.m"
                          }
#line 276 "error_util.m"
                        else
#line 276 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 276 "error_util.m"
                            {
#line 276 "error_util.m"
                              MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                              MR_String parse_tree__error_util__V_34_34;

#line 276 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 276 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                {
#line 276 "error_util.m"
                                  parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                  {
#line 276 "error_util.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                                  }
#line 276 "error_util.m"
                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                }
#line 276 "error_util.m"
                            }
#line 276 "error_util.m"
                          else
#line 276 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 276 "error_util.m"
                              {
#line 276 "error_util.m"
                                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                MR_Integer parse_tree__error_util__V_12_12;

#line 276 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 276 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                  {
#line 276 "error_util.m"
                                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                    {
#line 276 "error_util.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                                    }
#line 276 "error_util.m"
                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                  }
#line 276 "error_util.m"
                              }
#line 276 "error_util.m"
                            else
#line 276 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 276 "error_util.m"
                                {
#line 276 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                  MR_Integer parse_tree__error_util__V_40_40;

#line 276 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 276 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                    {
#line 276 "error_util.m"
                                      parse_tree__error_util__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                      {
#line 276 "error_util.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                                      }
#line 276 "error_util.m"
                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                    }
#line 276 "error_util.m"
                                }
#line 276 "error_util.m"
                              else
#line 276 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 276 "error_util.m"
                                  {
#line 276 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                    MR_Integer parse_tree__error_util__V_38_38;

#line 276 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 276 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                      {
#line 276 "error_util.m"
                                        parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                        {
#line 276 "error_util.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                                        }
#line 276 "error_util.m"
                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                      }
#line 276 "error_util.m"
                                  }
#line 276 "error_util.m"
                                else
#line 276 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 276 "error_util.m"
                                    {
#line 276 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                      MR_Integer parse_tree__error_util__V_14_14;

#line 276 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 276 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                        {
#line 276 "error_util.m"
                                          parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                          {
#line 276 "error_util.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                                          }
#line 276 "error_util.m"
                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                        }
#line 276 "error_util.m"
                                    }
#line 276 "error_util.m"
                                  else
#line 276 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 276 "error_util.m"
                                      {
#line 276 "error_util.m"
                                        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                        MR_Word parse_tree__error_util__V_30_30;
#line 276 "error_util.m"
                                        MR_Integer parse_tree__error_util__V_60_60;
#line 276 "error_util.m"
                                        MR_Integer parse_tree__error_util__V_61_61;

#line 276 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 276 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                          {
#line 276 "error_util.m"
                                            parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                            parse_tree__error_util__V_60_60 = (MR_Integer) parse_tree__error_util__V_29_29;
#line 276 "error_util.m"
                                            parse_tree__error_util__V_61_61 = (MR_Integer) parse_tree__error_util__V_30_30;
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_60_60, parse_tree__error_util__V_61_61);
                                            }
#line 276 "error_util.m"
                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                          }
#line 276 "error_util.m"
                                      }
#line 276 "error_util.m"
                                    else
#line 276 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 276 "error_util.m"
                                        {
#line 276 "error_util.m"
                                          MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                          MR_String parse_tree__error_util__V_36_36;

#line 276 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 276 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                              {
#line 276 "error_util.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                                              }
#line 276 "error_util.m"
                                              parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                            }
#line 276 "error_util.m"
                                        }
#line 276 "error_util.m"
                                      else
#line 276 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 276 "error_util.m"
                                          {
#line 276 "error_util.m"
                                            MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                            MR_String parse_tree__error_util__V_16_16;

#line 276 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 276 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                              {
#line 276 "error_util.m"
                                                parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                {
#line 276 "error_util.m"
                                                  mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                                                }
#line 276 "error_util.m"
                                                parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                              }
#line 276 "error_util.m"
                                          }
#line 276 "error_util.m"
                                        else
#line 276 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                              MR_Word parse_tree__error_util__V_32_32;

#line 276 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 276 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                {
#line 276 "error_util.m"
                                                  parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                  {
#line 276 "error_util.m"
                                                    parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                                                  }
#line 276 "error_util.m"
                                                  parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                }
#line 276 "error_util.m"
                                            }
#line 276 "error_util.m"
                                          else
#line 276 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 276 "error_util.m"
                                              {
#line 276 "error_util.m"
                                                MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                MR_String parse_tree__error_util__V_18_18;

#line 276 "error_util.m"
                                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 276 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                  {
#line 276 "error_util.m"
                                                    parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                    {
#line 276 "error_util.m"
                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                                                    }
#line 276 "error_util.m"
                                                    parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                  }
#line 276 "error_util.m"
                                              }
#line 276 "error_util.m"
                                            else
#line 276 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 276 "error_util.m"
                                                {
#line 276 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                  MR_Word parse_tree__error_util__V_24_24;

#line 276 "error_util.m"
                                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 276 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                    {
#line 276 "error_util.m"
                                                      parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                      {
#line 276 "error_util.m"
                                                        mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                                      }
#line 276 "error_util.m"
                                                      parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                    }
#line 276 "error_util.m"
                                                }
#line 276 "error_util.m"
                                              else
#line 276 "error_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 276 "error_util.m"
                                                  {
#line 276 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                    MR_Word parse_tree__error_util__V_26_26;

#line 276 "error_util.m"
                                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 276 "error_util.m"
                                                    if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                      {
#line 276 "error_util.m"
                                                        parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                        {
#line 276 "error_util.m"
                                                          parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                                        }
#line 276 "error_util.m"
                                                        parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                      }
#line 276 "error_util.m"
                                                  }
#line 276 "error_util.m"
                                                else
#line 276 "error_util.m"
                                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 276 "error_util.m"
                                                    {
#line 276 "error_util.m"
                                                      MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                      MR_Word parse_tree__error_util__V_28_28;

#line 276 "error_util.m"
                                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 276 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                        {
#line 276 "error_util.m"
                                                          parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                          {
#line 276 "error_util.m"
                                                            parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                                                          }
#line 276 "error_util.m"
                                                          parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                        }
#line 276 "error_util.m"
                                                    }
#line 276 "error_util.m"
                                                  else
#line 276 "error_util.m"
                                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 276 "error_util.m"
                                                      {
#line 276 "error_util.m"
                                                        MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                        MR_String parse_tree__error_util__V_20_20;

#line 276 "error_util.m"
                                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 276 "error_util.m"
                                                        if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                          {
#line 276 "error_util.m"
                                                            parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                            {
#line 276 "error_util.m"
                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                                                            }
#line 276 "error_util.m"
                                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                          }
#line 276 "error_util.m"
                                                      }
#line 276 "error_util.m"
                                                    else
#line 276 "error_util.m"
                                                      {
#line 276 "error_util.m"
                                                        MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                        MR_String parse_tree__error_util__V_22_22;

#line 276 "error_util.m"
                                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 276 "error_util.m"
                                                        if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                          {
#line 276 "error_util.m"
                                                            parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "error_util.m"
                                                            {
#line 276 "error_util.m"
                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                                            }
#line 276 "error_util.m"
                                                            parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
                                                          }
#line 276 "error_util.m"
                                                      }
#line 276 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 276 "error_util.m"
                else
#line 276 "error_util.m"
                  {
#line 276 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 276 "error_util.m"
                    return;
                  }
#line 276 "error_util.m"
              }
#line 276 "error_util.m"
          }
#line 276 "error_util.m"
      }
#line 276 "error_util.m"
  }
#line 276 "error_util.m"
}

#line 276 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 276 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 276 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 276 "error_util.m"
{
#line 276 "error_util.m"
  {
#line 276 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 276 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6861 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 276 "error_util.m"
    else
#line 276 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6867 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 276 "error_util.m"
      else
#line 276 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6873 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 276 "error_util.m"
        else
#line 276 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6879 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 276 "error_util.m"
          else
#line 276 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6885 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 276 "error_util.m"
            else
#line 276 "error_util.m"
              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6891 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 276 "error_util.m"
              else
#line 276 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6897 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 276 "error_util.m"
                else
#line 276 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 6903 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 276 "error_util.m"
                  else
#line 276 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 6909 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 276 "error_util.m"
                    else
#line 276 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6915 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 276 "error_util.m"
                      else
#line 276 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6921 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 276 "error_util.m"
                        else
#line 276 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 6927 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 276 "error_util.m"
                          else
#line 276 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6933 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 276 "error_util.m"
                            else
#line 276 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6939 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 276 "error_util.m"
                              else
#line 276 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6945 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 276 "error_util.m"
                                else
#line 276 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6951 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 276 "error_util.m"
                                  else
#line 276 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6957 "parse_tree.error_util.c"
                                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 276 "error_util.m"
                                    else
#line 276 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6963 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 276 "error_util.m"
                                      else
#line 276 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6969 "parse_tree.error_util.c"
                                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 276 "error_util.m"
                                        else
#line 6973 "parse_tree.error_util.c"
                                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 276 "error_util.m"
  }
#line 276 "error_util.m"
}

#line 276 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 276 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 276 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 276 "error_util.m"
{
#line 276 "error_util.m"
  {
#line 276 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 276 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 276 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 276 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_43 == parse_tree__error_util__CastY_44);
#line 276 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 276 "error_util.m"
    else
#line 276 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 276 "error_util.m"
        {
#line 276 "error_util.m"
          MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 276 "error_util.m"
          MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 276 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 276 "error_util.m"
        }
#line 276 "error_util.m"
      else
#line 276 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "error_util.m"
          {
#line 276 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 276 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 276 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 276 "error_util.m"
          }
#line 276 "error_util.m"
        else
#line 276 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 276 "error_util.m"
            {
#line 276 "error_util.m"
              MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 276 "error_util.m"
              MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 276 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 276 "error_util.m"
            }
#line 276 "error_util.m"
          else
#line 276 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 276 "error_util.m"
              {
#line 276 "error_util.m"
                MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 276 "error_util.m"
                parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 276 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                  {
#line 276 "error_util.m"
                    parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7068 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 276 "error_util.m"
                  }
#line 276 "error_util.m"
              }
#line 276 "error_util.m"
            else
#line 276 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 276 "error_util.m"
                {
#line 276 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "error_util.m"
                  MR_String parse_tree__error_util__V_6_6;

#line 276 "error_util.m"
                  parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 276 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                    {
#line 276 "error_util.m"
                      parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7093 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 276 "error_util.m"
                    }
#line 276 "error_util.m"
                }
#line 276 "error_util.m"
              else
#line 276 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 276 "error_util.m"
                  {
#line 276 "error_util.m"
                    MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                    MR_String parse_tree__error_util__V_32_32;

#line 276 "error_util.m"
                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 276 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                      {
#line 276 "error_util.m"
                        parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7118 "parse_tree.error_util.c"
                        parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32) == 0);
#line 276 "error_util.m"
                      }
#line 276 "error_util.m"
                  }
#line 276 "error_util.m"
                else
#line 276 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 276 "error_util.m"
                    {
#line 276 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 276 "error_util.m"
                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 276 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                        {
#line 276 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7143 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_7_7 == parse_tree__error_util__V_8_8);
#line 276 "error_util.m"
                        }
#line 276 "error_util.m"
                    }
#line 276 "error_util.m"
                  else
#line 276 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 276 "error_util.m"
                      {
#line 276 "error_util.m"
                        MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                        MR_Integer parse_tree__error_util__V_42_42;

#line 276 "error_util.m"
                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 276 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                          {
#line 276 "error_util.m"
                            parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7168 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__V_41_41 == parse_tree__error_util__V_42_42);
#line 276 "error_util.m"
                          }
#line 276 "error_util.m"
                      }
#line 276 "error_util.m"
                    else
#line 276 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 276 "error_util.m"
                        {
#line 276 "error_util.m"
                          MR_Integer parse_tree__error_util__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                          MR_Integer parse_tree__error_util__V_38_38;

#line 276 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 276 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                            {
#line 276 "error_util.m"
                              parse_tree__error_util__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7193 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == parse_tree__error_util__V_38_38);
#line 276 "error_util.m"
                            }
#line 276 "error_util.m"
                        }
#line 276 "error_util.m"
                      else
#line 276 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 276 "error_util.m"
                          {
#line 276 "error_util.m"
                            MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                            MR_Integer parse_tree__error_util__V_10_10;

#line 276 "error_util.m"
                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 276 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                              {
#line 276 "error_util.m"
                                parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7218 "parse_tree.error_util.c"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 276 "error_util.m"
                              }
#line 276 "error_util.m"
                          }
#line 276 "error_util.m"
                        else
#line 276 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 276 "error_util.m"
                            {
#line 276 "error_util.m"
                              MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                              MR_Word parse_tree__error_util__V_28_28;

#line 276 "error_util.m"
                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 276 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                {
#line 276 "error_util.m"
                                  parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7243 "parse_tree.error_util.c"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == parse_tree__error_util__V_28_28);
#line 276 "error_util.m"
                                }
#line 276 "error_util.m"
                            }
#line 276 "error_util.m"
                          else
#line 276 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 276 "error_util.m"
                              {
#line 276 "error_util.m"
                                MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                MR_String parse_tree__error_util__V_34_34;

#line 276 "error_util.m"
                                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 276 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                  {
#line 276 "error_util.m"
                                    parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7268 "parse_tree.error_util.c"
                                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34) == 0);
#line 276 "error_util.m"
                                  }
#line 276 "error_util.m"
                              }
#line 276 "error_util.m"
                            else
#line 276 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 276 "error_util.m"
                                {
#line 276 "error_util.m"
                                  MR_String parse_tree__error_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                  MR_String parse_tree__error_util__V_14_14;

#line 276 "error_util.m"
                                  parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 276 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                    {
#line 276 "error_util.m"
                                      parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7293 "parse_tree.error_util.c"
                                      parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14) == 0);
#line 276 "error_util.m"
                                    }
#line 276 "error_util.m"
                                }
#line 276 "error_util.m"
                              else
#line 276 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 276 "error_util.m"
                                  {
#line 276 "error_util.m"
                                    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                    MR_Word parse_tree__error_util__V_30_30;

#line 276 "error_util.m"
                                    parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 276 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                      {
#line 276 "error_util.m"
                                        parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7318 "parse_tree.error_util.c"
                                        {
#line 7320 "parse_tree.error_util.c"
                                          return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                                        }
#line 276 "error_util.m"
                                      }
#line 276 "error_util.m"
                                  }
#line 276 "error_util.m"
                                else
#line 276 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 276 "error_util.m"
                                    {
#line 276 "error_util.m"
                                      MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                      MR_String parse_tree__error_util__V_16_16;

#line 276 "error_util.m"
                                      parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 276 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                        {
#line 276 "error_util.m"
                                          parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7346 "parse_tree.error_util.c"
                                          parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 276 "error_util.m"
                                        }
#line 276 "error_util.m"
                                    }
#line 276 "error_util.m"
                                  else
#line 276 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 276 "error_util.m"
                                      {
#line 276 "error_util.m"
                                        MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                        MR_Word parse_tree__error_util__V_22_22;

#line 276 "error_util.m"
                                        parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 276 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                          {
#line 276 "error_util.m"
                                            parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7371 "parse_tree.error_util.c"
                                            {
#line 7373 "parse_tree.error_util.c"
                                              return parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                                            }
#line 276 "error_util.m"
                                          }
#line 276 "error_util.m"
                                      }
#line 276 "error_util.m"
                                    else
#line 276 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 276 "error_util.m"
                                        {
#line 276 "error_util.m"
                                          MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                          MR_Word parse_tree__error_util__V_24_24;

#line 276 "error_util.m"
                                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 276 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7399 "parse_tree.error_util.c"
                                              {
#line 7401 "parse_tree.error_util.c"
                                                return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                                              }
#line 276 "error_util.m"
                                            }
#line 276 "error_util.m"
                                        }
#line 276 "error_util.m"
                                      else
#line 276 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 276 "error_util.m"
                                          {
#line 276 "error_util.m"
                                            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                            MR_Word parse_tree__error_util__V_26_26;

#line 276 "error_util.m"
                                            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 276 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                              {
#line 276 "error_util.m"
                                                parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7427 "parse_tree.error_util.c"
                                                {
#line 7429 "parse_tree.error_util.c"
                                                  return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                                                }
#line 276 "error_util.m"
                                              }
#line 276 "error_util.m"
                                          }
#line 276 "error_util.m"
                                        else
#line 276 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                              MR_String parse_tree__error_util__V_18_18;

#line 276 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 276 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                {
#line 276 "error_util.m"
                                                  parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7455 "parse_tree.error_util.c"
                                                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 276 "error_util.m"
                                                }
#line 276 "error_util.m"
                                            }
#line 276 "error_util.m"
                                          else
#line 276 "error_util.m"
                                            {
#line 276 "error_util.m"
                                              MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "error_util.m"
                                              MR_String parse_tree__error_util__V_20_20;

#line 276 "error_util.m"
                                              parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 276 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 276 "error_util.m"
                                                {
#line 276 "error_util.m"
                                                  parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7478 "parse_tree.error_util.c"
                                                  parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 276 "error_util.m"
                                                }
#line 276 "error_util.m"
                                            }
#line 276 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 276 "error_util.m"
  }
#line 276 "error_util.m"
}

#line 651 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 651 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 651 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 651 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 651 "error_util.m"
{
#line 651 "error_util.m"
  {
#line 651 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 651 "error_util.m"
    {
#line 651 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 651 "error_util.m"
      return;
    }
#line 651 "error_util.m"
  }
#line 651 "error_util.m"
}

#line 651 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 651 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 651 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 651 "error_util.m"
{
#line 651 "error_util.m"
  {
#line 651 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 651 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 651 "error_util.m"
    {
#line 651 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 651 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 651 "error_util.m"
  }
#line 651 "error_util.m"
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
#line 7577 "parse_tree.error_util.c"
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
#line 7603 "parse_tree.error_util.c"
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
#line 7623 "parse_tree.error_util.c"
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
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
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

#line 7696 "parse_tree.error_util.c"
        {
#line 7698 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          {
#line 7705 "parse_tree.error_util.c"
            {
#line 7707 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              {
#line 7714 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 7716 "parse_tree.error_util.c"
                {
#line 7718 "parse_tree.error_util.c"
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
#line 7758 "parse_tree.error_util.c"
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
#line 7782 "parse_tree.error_util.c"
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
#line 7806 "parse_tree.error_util.c"
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
#line 7830 "parse_tree.error_util.c"
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
#line 7847 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
              else
#line 74 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7853 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                else
#line 74 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7859 "parse_tree.error_util.c"
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
#line 7885 "parse_tree.error_util.c"
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
#line 7909 "parse_tree.error_util.c"
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
#line 7929 "parse_tree.error_util.c"
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
                                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
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
#line 8069 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 74 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                    {
#line 8075 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 74 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                        {
#line 8081 "parse_tree.error_util.c"
                          {
#line 8083 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                          }
#line 74 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                            {
#line 8090 "parse_tree.error_util.c"
                              parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 8092 "parse_tree.error_util.c"
                              {
#line 8094 "parse_tree.error_util.c"
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
#line 8138 "parse_tree.error_util.c"
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
#line 8163 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8173 "parse_tree.error_util.c"
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
#line 8474 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8480 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 108 "error_util.m"
      else
#line 108 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8486 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8492 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 108 "error_util.m"
          else
#line 108 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8498 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 108 "error_util.m"
            else
#line 108 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8504 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "error_util.m"
              else
#line 108 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8510 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 108 "error_util.m"
                else
#line 108 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8516 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 108 "error_util.m"
                  else
#line 108 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8522 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 108 "error_util.m"
                    else
#line 108 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8528 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 108 "error_util.m"
                      else
#line 108 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8534 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 108 "error_util.m"
                        else
#line 108 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8540 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "error_util.m"
                          else
#line 108 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8546 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "error_util.m"
                            else
#line 108 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8552 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 108 "error_util.m"
                              else
#line 108 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8558 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 108 "error_util.m"
                                else
#line 108 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8564 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 108 "error_util.m"
                                  else
#line 8568 "parse_tree.error_util.c"
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
#line 8843 "parse_tree.error_util.c"
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
#line 8866 "parse_tree.error_util.c"
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

#line 164 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
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
    MR_Integer parse_tree__error_util__CastX_87 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 164 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_88 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 164 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_87 == parse_tree__error_util__CastY_88);
#line 164 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 164 "error_util.m"
    else
#line 164 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
        {
#line 164 "error_util.m"
          MR_Word parse_tree__error_util__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 164 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
            {
#line 164 "error_util.m"
              MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_109_109)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 164 "error_util.m"
                return;
              }
#line 164 "error_util.m"
            }
#line 164 "error_util.m"
          else
#line 164 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
            else
#line 164 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
              else
#line 164 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
                else
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
        }
#line 164 "error_util.m"
      else
#line 164 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
          {
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_111_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_112_112 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 164 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
            else
#line 164 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
                {
#line 164 "error_util.m"
                  MR_Word parse_tree__error_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 164 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 164 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 164 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27;
#line 164 "error_util.m"
                  MR_Integer parse_tree__error_util__V_118_118 = (MR_Integer) parse_tree__error_util__V_112_112;
#line 164 "error_util.m"
                  MR_Integer parse_tree__error_util__V_119_119 = (MR_Integer) parse_tree__error_util__V_24_24;

#line 164 "error_util.m"
                  {
#line 164 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_27_27, parse_tree__error_util__V_118_118, parse_tree__error_util__V_119_119);
                  }
#line 164 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_27_27 == (MR_Integer) 0);
#line 164 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 164 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_27_27;
#line 164 "error_util.m"
                  else
#line 164 "error_util.m"
                    {
#line 164 "error_util.m"
                      MR_Word parse_tree__error_util__V_28_28;
#line 164 "error_util.m"
                      MR_Integer parse_tree__error_util__V_120_120 = (MR_Integer) parse_tree__error_util__V_111_111;
#line 164 "error_util.m"
                      MR_Integer parse_tree__error_util__V_121_121 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 164 "error_util.m"
                      {
#line 164 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_120_120, parse_tree__error_util__V_121_121);
                      }
#line 164 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 164 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 164 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 164 "error_util.m"
                      else
#line 164 "error_util.m"
                        {
#line 164 "error_util.m"
                          {
#line 164 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_110_110)), ((MR_Box) (parse_tree__error_util__V_26_26)));
#line 164 "error_util.m"
                            return;
                          }
#line 164 "error_util.m"
                        }
#line 164 "error_util.m"
                    }
#line 164 "error_util.m"
                }
#line 164 "error_util.m"
              else
#line 164 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
                else
#line 164 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
                  else
#line 164 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
          }
#line 164 "error_util.m"
        else
#line 164 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
            {
#line 164 "error_util.m"
              MR_Word parse_tree__error_util__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 164 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
              else
#line 164 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                else
#line 164 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
                    {
#line 164 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 164 "error_util.m"
                      {
#line 164 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_117_117)), ((MR_Box) (parse_tree__error_util__V_49_49)));
#line 164 "error_util.m"
                        return;
                      }
#line 164 "error_util.m"
                    }
#line 164 "error_util.m"
                  else
#line 164 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
                    else
#line 164 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
            }
#line 164 "error_util.m"
          else
#line 164 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "error_util.m"
                MR_Box parse_tree__error_util__V_113_113 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 164 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                else
#line 164 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                  else
#line 164 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                    else
#line 164 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
                        {
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_92_92;
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_93_93;
#line 164 "error_util.m"
                          MR_Box parse_tree__error_util__V_86_86 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 9153 "parse_tree.error_util.c"
                          {
#line 9155 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_114_114, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_92_92);
                          }
#line 9158 "parse_tree.error_util.c"
                          {
#line 9160 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_93_93);
                          }
#line 164 "error_util.m"
                          {
#line 164 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_92_92, parse_tree__error_util__TypeInfo_93_93, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_113_113, parse_tree__error_util__V_86_86);
#line 164 "error_util.m"
                            return;
                          }
#line 164 "error_util.m"
                        }
#line 164 "error_util.m"
                      else
#line 164 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
              }
#line 164 "error_util.m"
            else
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 164 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                else
#line 164 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                  else
#line 164 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 164 "error_util.m"
                    else
#line 164 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 164 "error_util.m"
                      else
#line 164 "error_util.m"
                        {
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 164 "error_util.m"
                          MR_Word parse_tree__error_util__V_70_70;

#line 164 "error_util.m"
                          {
#line 164 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], &parse_tree__error_util__V_70_70, ((MR_Box) (parse_tree__error_util__V_116_116)), ((MR_Box) (parse_tree__error_util__V_68_68)));
                          }
#line 164 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_70_70 == (MR_Integer) 0);
#line 164 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 164 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_70_70;
#line 164 "error_util.m"
                          else
#line 164 "error_util.m"
                            {
#line 164 "error_util.m"
                              {
#line 164 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_115_115)), ((MR_Box) (parse_tree__error_util__V_69_69)));
#line 164 "error_util.m"
                                return;
                              }
#line 164 "error_util.m"
                            }
#line 164 "error_util.m"
                        }
#line 164 "error_util.m"
              }
#line 164 "error_util.m"
  }
#line 164 "error_util.m"
}

#line 164 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 164 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 164 "error_util.m"
{
#line 164 "error_util.m"
  {
#line 164 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 164 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 164 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 164 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_19 == parse_tree__error_util__CastY_20);
#line 164 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 164 "error_util.m"
    else
#line 164 "error_util.m"
      if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 164 "error_util.m"
        {
#line 164 "error_util.m"
          MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 164 "error_util.m"
          MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "error_util.m"
          MR_Word parse_tree__error_util__V_4_4;

#line 164 "error_util.m"
          parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 164 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
            {
#line 164 "error_util.m"
              parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9300 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_26_26 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
              }
#line 164 "error_util.m"
            }
#line 164 "error_util.m"
        }
#line 164 "error_util.m"
      else
#line 164 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 164 "error_util.m"
          {
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 164 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 164 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 164 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 164 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 164 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 164 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                  {
#line 164 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 164 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                      {
#line 9356 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_27_27 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 164 "error_util.m"
                        {
#line 164 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_27_27, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 164 "error_util.m"
                      }
#line 164 "error_util.m"
                  }
#line 164 "error_util.m"
              }
#line 164 "error_util.m"
          }
#line 164 "error_util.m"
        else
#line 164 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 164 "error_util.m"
            {
#line 164 "error_util.m"
              MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 164 "error_util.m"
              MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 164 "error_util.m"
              MR_Word parse_tree__error_util__V_12_12;

#line 164 "error_util.m"
              parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 164 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                {
#line 164 "error_util.m"
                  parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9392 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 164 "error_util.m"
                  {
#line 164 "error_util.m"
                    return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_11_11)), ((MR_Box) (parse_tree__error_util__V_12_12)));
                  }
#line 164 "error_util.m"
                }
#line 164 "error_util.m"
            }
#line 164 "error_util.m"
          else
#line 164 "error_util.m"
            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_22;
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_24_24;
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_25_25;
#line 164 "error_util.m"
                MR_Box parse_tree__error_util__V_17_17 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 164 "error_util.m"
                MR_Box parse_tree__error_util__V_18_18;
#line 164 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_23;

#line 164 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 164 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                  {
#line 164 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "error_util.m"
                    parse_tree__error_util__V_18_18 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 9434 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_23 = (MR_Integer) 1;
#line 9436 "parse_tree.error_util.c"
                    {
#line 9438 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_21, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_24_24);
                    }
#line 9441 "parse_tree.error_util.c"
                    {
#line 9443 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_22, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_25_25);
                    }
#line 164 "error_util.m"
                    {
#line 164 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_24_24, parse_tree__error_util__TypeInfo_25_25, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                    }
#line 164 "error_util.m"
                  }
#line 164 "error_util.m"
              }
#line 164 "error_util.m"
            else
#line 164 "error_util.m"
              {
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 164 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 164 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 164 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                  {
#line 164 "error_util.m"
                    parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 9482 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 164 "error_util.m"
                    {
#line 164 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_13_13)), ((MR_Box) (parse_tree__error_util__V_15_15)));
                    }
#line 164 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 164 "error_util.m"
                      {
#line 9493 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[4];
#line 164 "error_util.m"
                        {
#line 164 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_14_14)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                        }
#line 164 "error_util.m"
                      }
#line 164 "error_util.m"
                  }
#line 164 "error_util.m"
              }
#line 164 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 164 "error_util.m"
  }
#line 164 "error_util.m"
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
#line 9537 "parse_tree.error_util.c"
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
                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
              }
#line 9574 "parse_tree.error_util.c"
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
#line 9598 "parse_tree.error_util.c"
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
#line 9618 "parse_tree.error_util.c"
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
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
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
#line 9647 "parse_tree.error_util.c"
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
#line 9662 "parse_tree.error_util.c"
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
#line 9680 "parse_tree.error_util.c"
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
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
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
#line 9775 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 9777 "parse_tree.error_util.c"
              {
#line 9779 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
              }
#line 152 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                {
#line 9786 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 152 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                    {
#line 9792 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 152 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                        {
#line 9798 "parse_tree.error_util.c"
                          parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9800 "parse_tree.error_util.c"
                          {
#line 9802 "parse_tree.error_util.c"
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
#line 9840 "parse_tree.error_util.c"
              {
#line 9842 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
              }
#line 152 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 152 "error_util.m"
                {
#line 9849 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9851 "parse_tree.error_util.c"
                  {
#line 9853 "parse_tree.error_util.c"
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

#line 1445 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1445 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1445 "error_util.m"
{
#line 1445 "error_util.m"
  {
#line 1445 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1445 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1445 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1445 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1445 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9893 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1445 "error_util.m"
    else
#line 1445 "error_util.m"
      {
#line 1445 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1445 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1445 "error_util.m"
        {
#line 1445 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 9915 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1445 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1445 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1445 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1445 "error_util.m"
        else
#line 1445 "error_util.m"
          {
#line 1445 "error_util.m"
            {
#line 1445 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1445 "error_util.m"
              return;
            }
#line 1445 "error_util.m"
          }
#line 1445 "error_util.m"
      }
#line 1445 "error_util.m"
  }
#line 1445 "error_util.m"
}

#line 1445 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1445 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1445 "error_util.m"
{
#line 1445 "error_util.m"
  {
#line 1445 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1445 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1445 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1445 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1445 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1445 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1445 "error_util.m"
    else
#line 1445 "error_util.m"
      {
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1445 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1445 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1445 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 9982 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1445 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1445 "error_util.m"
          {
#line 9988 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[2];
#line 9990 "parse_tree.error_util.c"
            {
#line 9992 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1445 "error_util.m"
          }
#line 1445 "error_util.m"
      }
#line 1445 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1445 "error_util.m"
  }
#line 1445 "error_util.m"
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
#line 10047 "parse_tree.error_util.c"
  {
#line 10049 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 10052 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 10054 "parse_tree.error_util.c"
  }
#line 99 "error_util.m"
}

#line 1535 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1535 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1535 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1535 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1535 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1535 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1535 "error_util.m"
{
#line 1538 "error_util.m"
  while (MR_TRUE)
#line 1538 "error_util.m"
    {
#line 1538 "error_util.m"
      /* tailcall optimized into a loop */
#line 1538 "error_util.m"
      {
#line 1538 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1538 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1538 "error_util.m"
          {
#line 1538 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1538 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1538 "error_util.m"
          }
#line 1538 "error_util.m"
        else
#line 1539 "error_util.m"
          {
#line 1539 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1539 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1539 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1539 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1539 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1540 "error_util.m"
            {
#line 1540 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1541 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1541 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1542 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1545 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1543 "error_util.m"
              {
#line 1543 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1543 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1543 "error_util.m"
                {
#line 1543 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1543 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1543 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1543 "error_util.m"
                }
#line 1543 "error_util.m"
                {
#line 1543 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1544 "error_util.m"
                /* direct tailcall eliminated */
#line 1544 "error_util.m"
                {
#line 1544 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1544 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1544 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1544 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1544 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1544 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1544 "error_util.m"
                }
#line 1544 "error_util.m"
                continue;
#line 1543 "error_util.m"
              }
#line 1545 "error_util.m"
            else
#line 1546 "error_util.m"
              {
#line 1546 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1547 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1546 "error_util.m"
              }
#line 1539 "error_util.m"
          }
#line 1538 "error_util.m"
      }
#line 1538 "error_util.m"
      break;
#line 1538 "error_util.m"
    }
#line 1535 "error_util.m"
}

#line 1510 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1510 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1510 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1510 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1510 "error_util.m"
{
#line 1515 "error_util.m"
  {
#line 1515 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1515 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1516 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1515 "error_util.m"
    else
#line 1518 "error_util.m"
      {
#line 1518 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1518 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1518 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1518 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1518 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1530 "error_util.m"
        {
#line 1530 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1531 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1531 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1532 "error_util.m"
        {
#line 1532 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1532 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "error_util.m"
        }
#line 1532 "error_util.m"
        {
#line 1532 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1521 "error_util.m"
        {
#line 1521 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1521 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1521 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1521 "error_util.m"
        }
#line 1522 "error_util.m"
        {
#line 1522 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1523 "error_util.m"
        {
#line 1523 "error_util.m"
          MR_Word base;
#line 1523 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1523 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1523 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1523 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1523 "error_util.m"
        }
#line 1518 "error_util.m"
      }
#line 1515 "error_util.m"
  }
#line 1510 "error_util.m"
}

#line 1462 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1462 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1462 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1462 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1462 "error_util.m"
{
#line 1468 "error_util.m"
  {
#line 1468 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1468 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1469 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1468 "error_util.m"
    else
#line 1471 "error_util.m"
      {
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1471 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1471 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1471 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1471 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1471 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1476 "error_util.m"
        if ((parse_tree__error_util__TreatAsFirst_6 == (MR_Integer) 1))
#line 1478 "error_util.m"
          parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1476 "error_util.m"
        else
#line 1474 "error_util.m"
          {
#line 1475 "error_util.m"
            parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1474 "error_util.m"
          }
#line 1480 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1482 "error_util.m"
        {
#line 1482 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1482 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1482 "error_util.m"
        }
#line 10379 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1483 "error_util.m"
        {
#line 1483 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1488 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1485 "error_util.m"
          {
#line 1486 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1487 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "error_util.m"
          }
#line 1488 "error_util.m"
        else
#line 1489 "error_util.m"
          {
#line 1489 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1489 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1490 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1500 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1501 "error_util.m"
              {
#line 1501 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1502 "error_util.m"
                {
#line 1502 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1502 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1502 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1502 "error_util.m"
                }
#line 1502 "error_util.m"
                {
#line 1502 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1502 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1502 "error_util.m"
                }
#line 1501 "error_util.m"
              }
#line 1500 "error_util.m"
            else
#line 1492 "error_util.m"
              {
#line 1492 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1492 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1492 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1492 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1492 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1492 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1492 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1492 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1492 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1530 "error_util.m"
                {
#line 1530 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1531 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1531 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1532 "error_util.m"
                {
#line 1532 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1532 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1532 "error_util.m"
                }
#line 1532 "error_util.m"
                {
#line 1532 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1495 "error_util.m"
                {
#line 1495 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1495 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1495 "error_util.m"
                }
#line 1497 "error_util.m"
                {
#line 1497 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1499 "error_util.m"
                {
#line 1499 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1499 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1499 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1499 "error_util.m"
                }
#line 1492 "error_util.m"
              }
#line 1489 "error_util.m"
          }
#line 1505 "error_util.m"
        {
#line 1505 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1507 "error_util.m"
        {
#line 1507 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1507 "error_util.m"
        {
#line 1507 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1471 "error_util.m"
      }
#line 1468 "error_util.m"
  }
#line 1462 "error_util.m"
}

#line 1430 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1430 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1430 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1430 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1430 "error_util.m"
{
#line 1439 "error_util.m"
  while (MR_TRUE)
#line 1439 "error_util.m"
    {
#line 1439 "error_util.m"
      /* tailcall optimized into a loop */
#line 1439 "error_util.m"
      {
#line 1439 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1439 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1439 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1433 "error_util.m"
        {
#line 1433 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1439 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1436 "error_util.m"
          {
#line 1434 "error_util.m"
            {
#line 1434 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1436 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1435 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1436 "error_util.m"
            else
#line 1437 "error_util.m"
              {
#line 1437 "error_util.m"
                /* direct tailcall eliminated */
#line 1437 "error_util.m"
                {
#line 1437 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1437 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1437 "error_util.m"
                }
#line 1437 "error_util.m"
                continue;
#line 1437 "error_util.m"
              }
#line 1436 "error_util.m"
          }
#line 1439 "error_util.m"
        else
#line 1440 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1439 "error_util.m"
      }
#line 1439 "error_util.m"
      break;
#line 1439 "error_util.m"
    }
#line 1430 "error_util.m"
}

#line 1420 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1420 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1420 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1420 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1420 "error_util.m"
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

#line 1423 "error_util.m"
        {
#line 1423 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1422 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1422 "error_util.m"
          {
#line 1424 "error_util.m"
            {
#line 1424 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1426 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1425 "error_util.m"
              {
#line 1425 "error_util.m"
                /* direct tailcall eliminated */
#line 1425 "error_util.m"
                {
#line 1425 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1425 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1425 "error_util.m"
                }
#line 1425 "error_util.m"
                continue;
#line 1425 "error_util.m"
              }
#line 1426 "error_util.m"
            else
#line 1427 "error_util.m"
              {
#line 1427 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1427 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1427 "error_util.m"
              }
#line 1422 "error_util.m"
          }
#line 1422 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1422 "error_util.m"
      }
#line 1422 "error_util.m"
      break;
#line 1422 "error_util.m"
    }
#line 1420 "error_util.m"
}

#line 1407 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1407 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1407 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1407 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1407 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1407 "error_util.m"
{
#line 1416 "error_util.m"
  while (MR_TRUE)
#line 1416 "error_util.m"
    {
#line 1416 "error_util.m"
      /* tailcall optimized into a loop */
#line 1416 "error_util.m"
      {
#line 1416 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1416 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1411 "error_util.m"
        {
#line 1411 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1416 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1412 "error_util.m"
          {
#line 1412 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1412 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1412 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1412 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1412 "error_util.m"
            {
#line 1412 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1413 "error_util.m"
            {
#line 1413 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1414 "error_util.m"
            {
#line 1414 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1414 "error_util.m"
            }
#line 1414 "error_util.m"
            {
#line 1414 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1414 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1414 "error_util.m"
            }
#line 1414 "error_util.m"
            /* direct tailcall eliminated */
#line 1414 "error_util.m"
            {
#line 1414 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1414 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1414 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1414 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1414 "error_util.m"
            }
#line 1414 "error_util.m"
            continue;
#line 1412 "error_util.m"
          }
#line 1416 "error_util.m"
        else
#line 1417 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1416 "error_util.m"
      }
#line 1416 "error_util.m"
      break;
#line 1416 "error_util.m"
    }
#line 1407 "error_util.m"
}

#line 1402 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1402 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1402 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1402 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1402 "error_util.m"
{
#line 1404 "error_util.m"
  {
#line 1404 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1405 "error_util.m"
    {
#line 1405 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1405 "error_util.m"
      return;
    }
#line 1404 "error_util.m"
  }
#line 1402 "error_util.m"
}

#line 1397 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1397 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1397 "error_util.m"
{
#line 1399 "error_util.m"
  {
#line 1399 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1399 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1399 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1399 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1400 "error_util.m"
    {
#line 1400 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1400 "error_util.m"
    {
#line 1400 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1400 "error_util.m"
    {
#line 1400 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1400 "error_util.m"
    {
#line 1400 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1399 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1399 "error_util.m"
  }
#line 1397 "error_util.m"
}

#line 1392 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1392 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1392 "error_util.m"
{
#line 1394 "error_util.m"
  {
#line 1394 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1394 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1394 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1394 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1395 "error_util.m"
    {
#line 1395 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1394 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1394 "error_util.m"
  }
#line 1392 "error_util.m"
}

#line 1351 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1351 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1351 "error_util.m"
{
#line 1353 "error_util.m"
  {
#line 1353 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1353 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1353 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1353 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1353 "error_util.m"
    else
#line 1354 "error_util.m"
      {
#line 1354 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1354 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1354 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1355 "error_util.m"
        {
#line 1355 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1359 "error_util.m"
        if ((parse_tree__error_util__Head_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "error_util.m"
          if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1372 "error_util.m"
            parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1373 "error_util.m"
          else
#line 1374 "error_util.m"
            {
#line 1374 "error_util.m"
              MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1374 "error_util.m"
              MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1374 "error_util.m"
              MR_String parse_tree__error_util__V_13_13;
#line 1388 "error_util.m"
              MR_Char parse_tree__error_util__First_17;
#line 1388 "error_util.m"
              MR_String parse_tree__error_util__Rest_18;

#line 1383 "error_util.m"
              {
#line 1383 "error_util.m"
                parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
              }
#line 1383 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1384 "error_util.m"
                {
#line 1384 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                }
#line 1388 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
                {
#line 1386 "error_util.m"
                  MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1386 "error_util.m"
                  {
#line 1386 "error_util.m"
                    mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                  }
#line 1387 "error_util.m"
                  {
#line 1387 "error_util.m"
                    mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                  }
#line 1386 "error_util.m"
                }
#line 1388 "error_util.m"
              else
#line 1389 "error_util.m"
                parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1375 "error_util.m"
              {
#line 1375 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1375 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1375 "error_util.m"
              }
#line 1374 "error_util.m"
            }
#line 1359 "error_util.m"
        else
#line 1359 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__Head_3)) == (MR_mktag((MR_Integer) 1))))
#line 1357 "error_util.m"
            {
#line 1357 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1358 "error_util.m"
              {
#line 1358 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1358 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1358 "error_util.m"
              }
#line 1357 "error_util.m"
            }
#line 1359 "error_util.m"
          else
#line 1360 "error_util.m"
            {
#line 1360 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1364 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1366 "error_util.m"
                {
#line 1366 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1366 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1366 "error_util.m"
                }
#line 1364 "error_util.m"
              else
#line 1362 "error_util.m"
                {
#line 1362 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1362 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1362 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1363 "error_util.m"
                  {
#line 1363 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1363 "error_util.m"
                  {
#line 1363 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1363 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1363 "error_util.m"
                  }
#line 1362 "error_util.m"
                }
#line 1360 "error_util.m"
            }
#line 1354 "error_util.m"
      }
#line 1353 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1353 "error_util.m"
  }
#line 1351 "error_util.m"
}

#line 1306 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1306 "error_util.m"
{
#line 1308 "error_util.m"
  while (MR_TRUE)
#line 1308 "error_util.m"
    {
#line 1308 "error_util.m"
      /* tailcall optimized into a loop */
#line 1308 "error_util.m"
      {
#line 1308 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1308 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1308 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1308 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1308 "error_util.m"
        else
#line 1309 "error_util.m"
          {
#line 1309 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1309 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1313 "error_util.m"
            if ((parse_tree__error_util__Word_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1314 "error_util.m"
              {
#line 1314 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1315 "error_util.m"
                {
#line 1315 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                }
#line 1315 "error_util.m"
                {
#line 1315 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1315 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1315 "error_util.m"
                }
#line 1314 "error_util.m"
              }
#line 1313 "error_util.m"
            else
#line 1313 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 1))))
#line 1311 "error_util.m"
                {
#line 1311 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1311 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1311 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1312 "error_util.m"
                  {
#line 1312 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1312 "error_util.m"
                  }
#line 1312 "error_util.m"
                  {
#line 1312 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1312 "error_util.m"
                  {
#line 1312 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1312 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1312 "error_util.m"
                  }
#line 1311 "error_util.m"
                }
#line 1313 "error_util.m"
              else
#line 1313 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Word_3)) == (MR_mktag((MR_Integer) 2))))
#line 1317 "error_util.m"
                  {
#line 1317 "error_util.m"
                    MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1317 "error_util.m"
                    MR_Word parse_tree__error_util__V_29_29;
#line 1317 "error_util.m"
                    MR_Word parse_tree__error_util__V_30_30;

#line 1318 "error_util.m"
                    {
#line 1318 "error_util.m"
                      parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "error_util.m"
                      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1318 "error_util.m"
                    }
#line 1318 "error_util.m"
                    {
#line 1318 "error_util.m"
                      parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                    }
#line 1318 "error_util.m"
                    {
#line 1318 "error_util.m"
                      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1318 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1318 "error_util.m"
                    }
#line 1317 "error_util.m"
                  }
#line 1313 "error_util.m"
                else
#line 1320 "error_util.m"
                  {
#line 1320 "error_util.m"
                    MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1324 "error_util.m"
                    if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "error_util.m"
                      {
#line 1322 "error_util.m"
                        MR_Word parse_tree__error_util__V_27_27;

#line 1323 "error_util.m"
                        {
#line 1323 "error_util.m"
                          parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1323 "error_util.m"
                        }
#line 1323 "error_util.m"
                        {
#line 1323 "error_util.m"
                          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1323 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1323 "error_util.m"
                        }
#line 1322 "error_util.m"
                      }
#line 1324 "error_util.m"
                    else
#line 1324 "error_util.m"
                      {
#line 1324 "error_util.m"
                        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1324 "error_util.m"
                        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1324 "error_util.m"
                        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1329 "error_util.m"
                          {
#line 1329 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1329 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1329 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1388 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1388 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1383 "error_util.m"
                            {
#line 1383 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1383 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1384 "error_util.m"
                              {
#line 1384 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1388 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
                              {
#line 1386 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1386 "error_util.m"
                                {
#line 1386 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1387 "error_util.m"
                                {
#line 1387 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1386 "error_util.m"
                              }
#line 1388 "error_util.m"
                            else
#line 1389 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1334 "error_util.m"
                            {
#line 1334 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1334 "error_util.m"
                            }
#line 1334 "error_util.m"
                            {
#line 1334 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1334 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1334 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1334 "error_util.m"
                            }
#line 1335 "error_util.m"
                            /* direct tailcall eliminated */
#line 1335 "error_util.m"
                            {
#line 1335 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1335 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1335 "error_util.m"
                            }
#line 1335 "error_util.m"
                            continue;
#line 1329 "error_util.m"
                          }
#line 1324 "error_util.m"
                        else
#line 1324 "error_util.m"
                          if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 1))))
#line 1325 "error_util.m"
                            {
#line 1325 "error_util.m"
                              MR_Word parse_tree__error_util__V_24_24;
#line 1325 "error_util.m"
                              MR_String parse_tree__error_util__V_25_25;
#line 1325 "error_util.m"
                              MR_Word parse_tree__error_util__V_26_26;
#line 1325 "error_util.m"
                              MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1326 "error_util.m"
                              {
#line 1326 "error_util.m"
                                parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                              }
#line 1326 "error_util.m"
                              {
#line 1326 "error_util.m"
                                parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1326 "error_util.m"
                              }
#line 1327 "error_util.m"
                              {
#line 1327 "error_util.m"
                                parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                              }
#line 1327 "error_util.m"
                              {
#line 1327 "error_util.m"
                                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1327 "error_util.m"
                                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1327 "error_util.m"
                              }
#line 1325 "error_util.m"
                            }
#line 1324 "error_util.m"
                          else
#line 1324 "error_util.m"
                            if (((MR_tag((MR_Word) parse_tree__error_util__V_45_45)) == (MR_mktag((MR_Integer) 2))))
#line 1337 "error_util.m"
                              {
#line 1337 "error_util.m"
                                MR_Word parse_tree__error_util__V_17_17;
#line 1337 "error_util.m"
                                MR_String parse_tree__error_util__V_18_18;
#line 1337 "error_util.m"
                                MR_Word parse_tree__error_util__V_19_19;
#line 1337 "error_util.m"
                                MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1342 "error_util.m"
                                {
#line 1342 "error_util.m"
                                  parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                                }
#line 1342 "error_util.m"
                                {
#line 1342 "error_util.m"
                                  parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1342 "error_util.m"
                                }
#line 1343 "error_util.m"
                                {
#line 1343 "error_util.m"
                                  parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                                }
#line 1343 "error_util.m"
                                {
#line 1343 "error_util.m"
                                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1343 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1343 "error_util.m"
                                }
#line 1337 "error_util.m"
                              }
#line 1324 "error_util.m"
                            else
#line 1345 "error_util.m"
                              {
#line 1345 "error_util.m"
                                MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1345 "error_util.m"
                                MR_Word parse_tree__error_util__V_13_13;
#line 1345 "error_util.m"
                                MR_Word parse_tree__error_util__V_14_14;
#line 1345 "error_util.m"
                                MR_String parse_tree__error_util__V_15_15;

#line 1347 "error_util.m"
                                {
#line 1347 "error_util.m"
                                  parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                                }
#line 1347 "error_util.m"
                                {
#line 1347 "error_util.m"
                                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "error_util.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1347 "error_util.m"
                                }
#line 1347 "error_util.m"
                                {
#line 1347 "error_util.m"
                                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1347 "error_util.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1347 "error_util.m"
                                }
#line 1346 "error_util.m"
                                /* direct tailcall eliminated */
#line 1346 "error_util.m"
                                {
#line 1346 "error_util.m"
                                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1346 "error_util.m"
                                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1346 "error_util.m"
                                }
#line 1346 "error_util.m"
                                continue;
#line 1345 "error_util.m"
                              }
#line 1324 "error_util.m"
                      }
#line 1320 "error_util.m"
                  }
#line 1309 "error_util.m"
          }
#line 1308 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1308 "error_util.m"
      }
#line 1308 "error_util.m"
      break;
#line 1308 "error_util.m"
    }
#line 1306 "error_util.m"
}

#line 1300 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1300 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1300 "error_util.m"
{
#line 1302 "error_util.m"
  {
#line 1302 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1302 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1302 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1302 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1303 "error_util.m"
    {
#line 1303 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1303 "error_util.m"
    {
#line 1303 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1304 "error_util.m"
    {
#line 1304 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1302 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1302 "error_util.m"
  }
#line 1300 "error_util.m"
}

#line 1198 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1198 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1198 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1198 "error_util.m"
{
#line 1202 "error_util.m"
  while (MR_TRUE)
#line 1202 "error_util.m"
    {
#line 1202 "error_util.m"
      /* tailcall optimized into a loop */
#line 1202 "error_util.m"
      {
#line 1202 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1202 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1202 "error_util.m"
          {
#line 1202 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1202 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1203 "error_util.m"
            {
#line 1203 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1204 "error_util.m"
            {
#line 1204 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1204 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1204 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1204 "error_util.m"
            }
#line 1204 "error_util.m"
            {
#line 1204 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1202 "error_util.m"
          }
#line 1202 "error_util.m"
        else
#line 1206 "error_util.m"
          {
#line 1206 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1206 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1206 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1206 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_48_48;

#line 1210 "error_util.m"
            if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1284 "error_util.m"
              {
#line 1284 "error_util.m"
                MR_Word parse_tree__error_util__V_42_42;
#line 1284 "error_util.m"
                MR_Word parse_tree__error_util__Strings_93;

#line 1285 "error_util.m"
                {
#line 1285 "error_util.m"
                  parse_tree__error_util__Strings_93 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                }
#line 1286 "error_util.m"
                {
#line 1286 "error_util.m"
                  parse_tree__error_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1286 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_42_42, 0) = ((MR_Box) (parse_tree__error_util__Strings_93));
#line 1286 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_42_42, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1286 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_42_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1286 "error_util.m"
                }
#line 1286 "error_util.m"
                {
#line 1286 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_42_42)));
                }
#line 1287 "error_util.m"
                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "error_util.m"
              }
#line 1210 "error_util.m"
            else
#line 1210 "error_util.m"
              if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1226 "error_util.m"
                {
#line 1230 "error_util.m"
                  if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1229 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1230 "error_util.m"
                  else
#line 1231 "error_util.m"
                    {
#line 1232 "error_util.m"
                      {
#line 1232 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1232 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1232 "error_util.m"
                      }
#line 1231 "error_util.m"
                    }
#line 1226 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1226 "error_util.m"
                }
#line 1210 "error_util.m"
              else
#line 1210 "error_util.m"
                if ((parse_tree__error_util__Component_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1274 "error_util.m"
                  {
#line 1274 "error_util.m"
                    MR_Word parse_tree__error_util__Strings_36;
#line 1274 "error_util.m"
                    MR_Word parse_tree__error_util__V_49_49;

#line 1275 "error_util.m"
                    {
#line 1275 "error_util.m"
                      parse_tree__error_util__Strings_36 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                    }
#line 1276 "error_util.m"
                    {
#line 1276 "error_util.m"
                      parse_tree__error_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Strings_36));
#line 1276 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1276 "error_util.m"
                      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1276 "error_util.m"
                    }
#line 1276 "error_util.m"
                    {
#line 1276 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_49_49)));
                    }
#line 1277 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1274 "error_util.m"
                  }
#line 1210 "error_util.m"
                else
#line 1210 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 1))))
#line 1214 "error_util.m"
                    {
#line 1214 "error_util.m"
                      MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1214 "error_util.m"
                      MR_Word parse_tree__error_util__V_75_75;

#line 1215 "error_util.m"
                      {
#line 1215 "error_util.m"
                        parse_tree__error_util__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_75_75, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1215 "error_util.m"
                      }
#line 1215 "error_util.m"
                      {
#line 1215 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1215 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1215 "error_util.m"
                      }
#line 1214 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1214 "error_util.m"
                    }
#line 1210 "error_util.m"
                  else
#line 1210 "error_util.m"
                    if (((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 2))))
#line 1217 "error_util.m"
                      {
#line 1217 "error_util.m"
                        MR_Word parse_tree__error_util__V_73_73;
#line 1217 "error_util.m"
                        MR_String parse_tree__error_util__V_74_74;
#line 1217 "error_util.m"
                        MR_String parse_tree__error_util__Word_80 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));

#line 1218 "error_util.m"
                        {
#line 1218 "error_util.m"
                          parse_tree__error_util__V_74_74 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_80);
                        }
#line 1218 "error_util.m"
                        {
#line 1218 "error_util.m"
                          parse_tree__error_util__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_73_73, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1218 "error_util.m"
                        }
#line 1218 "error_util.m"
                        {
#line 1218 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1218 "error_util.m"
                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1218 "error_util.m"
                        }
#line 1217 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1217 "error_util.m"
                      }
#line 1210 "error_util.m"
                    else
#line 1210 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1266 "error_util.m"
                        {
#line 1266 "error_util.m"
                          MR_String parse_tree__error_util__DeclName_34 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1266 "error_util.m"
                          MR_String parse_tree__error_util__V_55_55;
#line 1266 "error_util.m"
                          MR_Word parse_tree__error_util__V_57_57;
#line 1266 "error_util.m"
                          MR_String parse_tree__error_util__Word_90;

#line 1267 "error_util.m"
                          {
#line 1267 "error_util.m"
                            parse_tree__error_util__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_34);
                          }
#line 1267 "error_util.m"
                          {
#line 1267 "error_util.m"
                            parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_55_55);
                          }
#line 1268 "error_util.m"
                          {
#line 1268 "error_util.m"
                            parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1268 "error_util.m"
                          }
#line 1268 "error_util.m"
                          {
#line 1268 "error_util.m"
                            parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1268 "error_util.m"
                            MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1268 "error_util.m"
                          }
#line 1266 "error_util.m"
                          parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1266 "error_util.m"
                        }
#line 1210 "error_util.m"
                      else
#line 1210 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1220 "error_util.m"
                          {
#line 1220 "error_util.m"
                            MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1220 "error_util.m"
                            MR_Word parse_tree__error_util__V_71_71;
#line 1220 "error_util.m"
                            MR_String parse_tree__error_util__V_72_72;

#line 1221 "error_util.m"
                            {
#line 1221 "error_util.m"
                              parse_tree__error_util__V_72_72 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                            }
#line 1221 "error_util.m"
                            {
#line 1221 "error_util.m"
                              parse_tree__error_util__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_71_71, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1221 "error_util.m"
                            }
#line 1221 "error_util.m"
                            {
#line 1221 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1221 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1221 "error_util.m"
                            }
#line 1220 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1220 "error_util.m"
                          }
#line 1210 "error_util.m"
                        else
#line 1210 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1289 "error_util.m"
                            {
#line 1290 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1289 "error_util.m"
                              parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1289 "error_util.m"
                            }
#line 1210 "error_util.m"
                          else
#line 1210 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1279 "error_util.m"
                              {
#line 1279 "error_util.m"
                                MR_Integer parse_tree__error_util__IndentDelta_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1279 "error_util.m"
                                MR_Word parse_tree__error_util__V_46_46;
#line 1279 "error_util.m"
                                MR_Word parse_tree__error_util__Strings_92;

#line 1280 "error_util.m"
                                {
#line 1280 "error_util.m"
                                  parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                                }
#line 1281 "error_util.m"
                                {
#line 1281 "error_util.m"
                                  parse_tree__error_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "error_util.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1281 "error_util.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1281 "error_util.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_46_46, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_37));
#line 1281 "error_util.m"
                                }
#line 1281 "error_util.m"
                                {
#line 1281 "error_util.m"
                                  parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_46_46)));
                                }
#line 1282 "error_util.m"
                                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1279 "error_util.m"
                              }
#line 1210 "error_util.m"
                            else
#line 1210 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1223 "error_util.m"
                                {
#line 1223 "error_util.m"
                                  MR_Word parse_tree__error_util__V_69_69;
#line 1223 "error_util.m"
                                  MR_String parse_tree__error_util__V_70_70;
#line 1223 "error_util.m"
                                  MR_Integer parse_tree__error_util__Int_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1224 "error_util.m"
                                  {
#line 1224 "error_util.m"
                                    parse_tree__error_util__V_70_70 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_81);
                                  }
#line 1224 "error_util.m"
                                  {
#line 1224 "error_util.m"
                                    parse_tree__error_util__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_69_69, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1224 "error_util.m"
                                  }
#line 1224 "error_util.m"
                                  {
#line 1224 "error_util.m"
                                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_69_69));
#line 1224 "error_util.m"
                                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1224 "error_util.m"
                                  }
#line 1223 "error_util.m"
                                  parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1223 "error_util.m"
                                }
#line 1210 "error_util.m"
                              else
#line 1210 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1258 "error_util.m"
                                  {
#line 1258 "error_util.m"
                                    MR_Word parse_tree__error_util__PredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1258 "error_util.m"
                                    MR_Word parse_tree__error_util__V_58_58;
#line 1258 "error_util.m"
                                    MR_String parse_tree__error_util__Word_88;

#line 1559 "error_util.m"
                                    if ((parse_tree__error_util__PredOrFunc_32 == (MR_Integer) 1))
#line 1560 "error_util.m"
                                      parse_tree__error_util__Word_88 = (MR_String) "function";
#line 1559 "error_util.m"
                                    else
#line 1559 "error_util.m"
                                      parse_tree__error_util__Word_88 = (MR_String) "predicate";
#line 1260 "error_util.m"
                                    {
#line 1260 "error_util.m"
                                      parse_tree__error_util__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_58_58, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1260 "error_util.m"
                                    }
#line 1260 "error_util.m"
                                    {
#line 1260 "error_util.m"
                                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_58_58));
#line 1260 "error_util.m"
                                      MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1260 "error_util.m"
                                    }
#line 1258 "error_util.m"
                                    parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1258 "error_util.m"
                                  }
#line 1210 "error_util.m"
                                else
#line 1210 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1270 "error_util.m"
                                    {
#line 1270 "error_util.m"
                                      MR_String parse_tree__error_util__PragmaName_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1270 "error_util.m"
                                      MR_String parse_tree__error_util__V_52_52;
#line 1270 "error_util.m"
                                      MR_Word parse_tree__error_util__V_54_54;
#line 1270 "error_util.m"
                                      MR_String parse_tree__error_util__Word_91;

#line 1271 "error_util.m"
                                      {
#line 1271 "error_util.m"
                                        parse_tree__error_util__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_35);
                                      }
#line 1271 "error_util.m"
                                      {
#line 1271 "error_util.m"
                                        parse_tree__error_util__Word_91 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_52_52);
                                      }
#line 1272 "error_util.m"
                                      {
#line 1272 "error_util.m"
                                        parse_tree__error_util__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_54_54, 0) = ((MR_Box) (parse_tree__error_util__Word_91));
#line 1272 "error_util.m"
                                      }
#line 1272 "error_util.m"
                                      {
#line 1272 "error_util.m"
                                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_54_54));
#line 1272 "error_util.m"
                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1272 "error_util.m"
                                      }
#line 1270 "error_util.m"
                                      parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1270 "error_util.m"
                                    }
#line 1210 "error_util.m"
                                  else
#line 1210 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1235 "error_util.m"
                                      {
#line 1235 "error_util.m"
                                        MR_Word parse_tree__error_util__V_67_67;
#line 1235 "error_util.m"
                                        MR_String parse_tree__error_util__Word_82 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1236 "error_util.m"
                                        {
#line 1236 "error_util.m"
                                          parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "error_util.m"
                                          MR_hl_field(MR_mktag(2), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__Word_82));
#line 1236 "error_util.m"
                                        }
#line 1236 "error_util.m"
                                        {
#line 1236 "error_util.m"
                                          parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1236 "error_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1236 "error_util.m"
                                          MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1236 "error_util.m"
                                        }
#line 1235 "error_util.m"
                                        parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1235 "error_util.m"
                                      }
#line 1210 "error_util.m"
                                    else
#line 1210 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1262 "error_util.m"
                                        {
#line 1262 "error_util.m"
                                          MR_Word parse_tree__error_util__SimpleCallId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1262 "error_util.m"
                                          MR_String parse_tree__error_util__WordsStr_89;

#line 1263 "error_util.m"
                                          {
#line 1263 "error_util.m"
                                            parse_tree__error_util__WordsStr_89 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_33);
                                          }
#line 1264 "error_util.m"
                                          {
#line 1264 "error_util.m"
                                            parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_89, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                          }
#line 1262 "error_util.m"
                                          parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1262 "error_util.m"
                                        }
#line 1210 "error_util.m"
                                      else
#line 1210 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1238 "error_util.m"
                                          {
#line 1238 "error_util.m"
                                            MR_Word parse_tree__error_util__V_66_66;
#line 1238 "error_util.m"
                                            MR_String parse_tree__error_util__Word_83 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1239 "error_util.m"
                                            {
#line 1239 "error_util.m"
                                              parse_tree__error_util__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "error_util.m"
                                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_66_66, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1239 "error_util.m"
                                            }
#line 1239 "error_util.m"
                                            {
#line 1239 "error_util.m"
                                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1239 "error_util.m"
                                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1239 "error_util.m"
                                            }
#line 1238 "error_util.m"
                                            parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1238 "error_util.m"
                                          }
#line 1210 "error_util.m"
                                        else
#line 1210 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1241 "error_util.m"
                                            {
#line 1241 "error_util.m"
                                              MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1241 "error_util.m"
                                              MR_Word parse_tree__error_util__V_64_64;
#line 1241 "error_util.m"
                                              MR_String parse_tree__error_util__V_65_65;

#line 1242 "error_util.m"
                                              {
#line 1242 "error_util.m"
                                                parse_tree__error_util__V_65_65 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                                              }
#line 1242 "error_util.m"
                                              {
#line 1242 "error_util.m"
                                                parse_tree__error_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__V_64_64, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1242 "error_util.m"
                                              }
#line 1242 "error_util.m"
                                              {
#line 1242 "error_util.m"
                                                parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1242 "error_util.m"
                                                MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1242 "error_util.m"
                                              }
#line 1241 "error_util.m"
                                              parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1241 "error_util.m"
                                            }
#line 1210 "error_util.m"
                                          else
#line 1210 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1244 "error_util.m"
                                              {
#line 1244 "error_util.m"
                                                MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1244 "error_util.m"
                                                MR_Word parse_tree__error_util__V_63_63;
#line 1244 "error_util.m"
                                                MR_String parse_tree__error_util__Word_84;

#line 1245 "error_util.m"
                                                {
#line 1245 "error_util.m"
                                                  parse_tree__error_util__Word_84 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                                                }
#line 1246 "error_util.m"
                                                {
#line 1246 "error_util.m"
                                                  parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__Word_84));
#line 1246 "error_util.m"
                                                }
#line 1246 "error_util.m"
                                                {
#line 1246 "error_util.m"
                                                  parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1246 "error_util.m"
                                                  MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1246 "error_util.m"
                                                }
#line 1244 "error_util.m"
                                                parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1244 "error_util.m"
                                              }
#line 1210 "error_util.m"
                                            else
#line 1210 "error_util.m"
                                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1248 "error_util.m"
                                                {
#line 1248 "error_util.m"
                                                  MR_Word parse_tree__error_util__Type_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1254 "error_util.m"
                                                  MR_Word parse_tree__error_util__TypeCtor_28;

#line 1249 "error_util.m"
                                                  {
#line 1249 "error_util.m"
                                                    parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_27, &parse_tree__error_util__TypeCtor_28);
                                                  }
#line 1254 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 1250 "error_util.m"
                                                    {
#line 1250 "error_util.m"
                                                      MR_Word parse_tree__error_util__TypeCtorName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 0)));
#line 1250 "error_util.m"
                                                      MR_Integer parse_tree__error_util__TypeCtorArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_28, (MR_Integer) 1)));
#line 1250 "error_util.m"
                                                      MR_Word parse_tree__error_util__NewWord_31;
#line 1250 "error_util.m"
                                                      MR_String parse_tree__error_util__V_59_59;
#line 1250 "error_util.m"
                                                      MR_Word parse_tree__error_util__SymName_85;

#line 1251 "error_util.m"
                                                      {
#line 1251 "error_util.m"
                                                        parse_tree__error_util__SymName_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1251 "error_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_85, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_29));
#line 1251 "error_util.m"
                                                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_85, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_30));
#line 1251 "error_util.m"
                                                      }
#line 1252 "error_util.m"
                                                      {
#line 1252 "error_util.m"
                                                        parse_tree__error_util__V_59_59 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_85);
                                                      }
#line 1252 "error_util.m"
                                                      {
#line 1252 "error_util.m"
                                                        parse_tree__error_util__NewWord_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "error_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_31, 0) = ((MR_Box) (parse_tree__error_util__V_59_59));
#line 1252 "error_util.m"
                                                      }
#line 1253 "error_util.m"
                                                      {
#line 1253 "error_util.m"
                                                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "error_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_31));
#line 1253 "error_util.m"
                                                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1253 "error_util.m"
                                                      }
#line 1250 "error_util.m"
                                                    }
#line 1254 "error_util.m"
                                                  else
#line 1255 "error_util.m"
                                                    {
#line 1255 "error_util.m"
                                                      {
#line 1255 "error_util.m"
                                                        mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "predicate \140parse_tree.error_util.convert_components_to_paragraphs_acc\'/5", (MR_String) "type is variable");
#line 1255 "error_util.m"
                                                        return;
                                                      }
#line 1255 "error_util.m"
                                                    }
#line 1248 "error_util.m"
                                                  parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1248 "error_util.m"
                                                }
#line 1210 "error_util.m"
                                              else
#line 1210 "error_util.m"
                                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1208 "error_util.m"
                                                  {
#line 1208 "error_util.m"
                                                    MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1209 "error_util.m"
                                                    {
#line 1209 "error_util.m"
                                                      parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                    }
#line 1208 "error_util.m"
                                                    parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1208 "error_util.m"
                                                  }
#line 1210 "error_util.m"
                                                else
#line 1211 "error_util.m"
                                                  {
#line 1211 "error_util.m"
                                                    MR_String parse_tree__error_util__V_76_76;
#line 1211 "error_util.m"
                                                    MR_String parse_tree__error_util__WordsStr_79 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1212 "error_util.m"
                                                    {
#line 1212 "error_util.m"
                                                      parse_tree__error_util__V_76_76 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_79);
                                                    }
#line 1212 "error_util.m"
                                                    {
#line 1212 "error_util.m"
                                                      parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_76_76, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                                                    }
#line 1211 "error_util.m"
                                                    parse_tree__error_util__STATE_VARIABLE_Paras_48_48 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1211 "error_util.m"
                                                  }
#line 1292 "error_util.m"
            /* direct tailcall eliminated */
#line 1292 "error_util.m"
            {
#line 1292 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1292 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1292 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_48_48;

#line 1292 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1292 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1292 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1292 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1292 "error_util.m"
            }
#line 1292 "error_util.m"
            continue;
#line 1206 "error_util.m"
          }
#line 1202 "error_util.m"
      }
#line 1202 "error_util.m"
      break;
#line 1202 "error_util.m"
    }
#line 1198 "error_util.m"
}

#line 1161 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1161 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1161 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1161 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1161 "error_util.m"
{
#line 1166 "error_util.m"
  {
#line 1166 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1166 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1166 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1165 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1166 "error_util.m"
    else
#line 1168 "error_util.m"
      {
#line 1166 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1166 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1166 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1166 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1166 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1166 "error_util.m"
          {
#line 1166 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1166 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1166 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1166 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1166 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1166 "error_util.m"
          }
#line 1168 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1167 "error_util.m"
          {
#line 1167 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1168 "error_util.m"
        else
#line 1169 "error_util.m"
          {
#line 1169 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1169 "error_util.m"
            {
#line 1169 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1169 "error_util.m"
            {
#line 1169 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1169 "error_util.m"
          }
#line 1168 "error_util.m"
      }
#line 1166 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1166 "error_util.m"
  }
#line 1161 "error_util.m"
}

#line 1148 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1148 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1148 "error_util.m"
{
#line 1150 "error_util.m"
  {
#line 1150 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1150 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1150 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1152 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "first";
#line 1150 "error_util.m"
    else
#line 1155 "error_util.m"
      {
#line 1153 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1155 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1154 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "second";
#line 1155 "error_util.m"
        else
#line 1157 "error_util.m"
          {
#line 1155 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1157 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1156 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_String) "third";
#line 1157 "error_util.m"
            else
#line 1158 "error_util.m"
              {
#line 1158 "error_util.m"
                MR_String parse_tree__error_util__V_4_4;

#line 1158 "error_util.m"
                {
#line 1158 "error_util.m"
                  parse_tree__error_util__V_4_4 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                }
#line 1158 "error_util.m"
                {
#line 1158 "error_util.m"
                  return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "th");
                }
#line 1158 "error_util.m"
              }
#line 1157 "error_util.m"
          }
#line 1155 "error_util.m"
      }
#line 1150 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1150 "error_util.m"
  }
#line 1148 "error_util.m"
}

#line 1060 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1060 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1060 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1060 "error_util.m"
{
#line 1063 "error_util.m"
  {
#line 1063 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1063 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1063 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1063 "error_util.m"
    else
#line 1064 "error_util.m"
      {
#line 1064 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1064 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1064 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1065 "error_util.m"
        {
#line 1065 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1069 "error_util.m"
        if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1141 "error_util.m"
          {
#line 1142 "error_util.m"
            {
#line 1142 "error_util.m"
              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
            }
#line 1141 "error_util.m"
          }
#line 1069 "error_util.m"
        else
#line 1069 "error_util.m"
          if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "error_util.m"
            if ((parse_tree__error_util__FirstInMsg_1 == (MR_Integer) 0))
#line 1088 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1089 "error_util.m"
            else
#line 1388 "error_util.m"
              {
#line 1388 "error_util.m"
                MR_Char parse_tree__error_util__First_63;
#line 1388 "error_util.m"
                MR_String parse_tree__error_util__Rest_64;

#line 1383 "error_util.m"
                {
#line 1383 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_63, &parse_tree__error_util__Rest_64);
                }
#line 1383 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1384 "error_util.m"
                  {
#line 1384 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_63);
                  }
#line 1388 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
                  {
#line 1386 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_65;

#line 1386 "error_util.m"
                    {
#line 1386 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_63, &parse_tree__error_util__LoweredFirst_65);
                    }
#line 1387 "error_util.m"
                    {
#line 1387 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_65, parse_tree__error_util__Rest_64);
                    }
#line 1386 "error_util.m"
                  }
#line 1388 "error_util.m"
                else
#line 1389 "error_util.m"
                  parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1388 "error_util.m"
              }
#line 1069 "error_util.m"
          else
#line 1069 "error_util.m"
            if ((parse_tree__error_util__Component_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1134 "error_util.m"
              {
#line 1135 "error_util.m"
                {
#line 1135 "error_util.m"
                  return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                }
#line 1134 "error_util.m"
              }
#line 1069 "error_util.m"
            else
#line 1069 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 1))))
#line 1073 "error_util.m"
                {
#line 1073 "error_util.m"
                  MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1074 "error_util.m"
                  {
#line 1074 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1073 "error_util.m"
                }
#line 1069 "error_util.m"
              else
#line 1069 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 2))))
#line 1076 "error_util.m"
                  {
#line 1076 "error_util.m"
                    MR_String parse_tree__error_util__V_40_40;
#line 1076 "error_util.m"
                    MR_String parse_tree__error_util__Word_43 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));
#line 1076 "error_util.m"
                    MR_String parse_tree__error_util__V_75_75;

#line 1562 "error_util.m"
                    {
#line 1562 "error_util.m"
                      parse_tree__error_util__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_43, (MR_String) "\'");
                    }
#line 1562 "error_util.m"
                    {
#line 1562 "error_util.m"
                      parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_75_75);
                    }
#line 1077 "error_util.m"
                    {
#line 1077 "error_util.m"
                      return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                    }
#line 1076 "error_util.m"
                  }
#line 1069 "error_util.m"
                else
#line 1069 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1116 "error_util.m"
                    {
#line 1116 "error_util.m"
                      MR_String parse_tree__error_util__Decl_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1116 "error_util.m"
                      MR_String parse_tree__error_util__V_36_36;
#line 1116 "error_util.m"
                      MR_String parse_tree__error_util__Word_49;
#line 1116 "error_util.m"
                      MR_String parse_tree__error_util__V_59_59;

#line 1117 "error_util.m"
                      {
#line 1117 "error_util.m"
                        parse_tree__error_util__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_19);
                      }
#line 1562 "error_util.m"
                      {
#line 1562 "error_util.m"
                        parse_tree__error_util__V_59_59 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_36_36, (MR_String) "\'");
                      }
#line 1562 "error_util.m"
                      {
#line 1562 "error_util.m"
                        parse_tree__error_util__Word_49 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_59_59);
                      }
#line 1118 "error_util.m"
                      {
#line 1118 "error_util.m"
                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                      }
#line 1116 "error_util.m"
                    }
#line 1069 "error_util.m"
                  else
#line 1069 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1079 "error_util.m"
                      {
#line 1079 "error_util.m"
                        MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1079 "error_util.m"
                        MR_String parse_tree__error_util__V_39_39;

#line 1080 "error_util.m"
                        {
#line 1080 "error_util.m"
                          parse_tree__error_util__V_39_39 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                        }
#line 1080 "error_util.m"
                        {
#line 1080 "error_util.m"
                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                        }
#line 1079 "error_util.m"
                      }
#line 1069 "error_util.m"
                    else
#line 1069 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1145 "error_util.m"
                        parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1069 "error_util.m"
                      else
#line 1069 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1137 "error_util.m"
                          {
#line 1139 "error_util.m"
                            {
#line 1139 "error_util.m"
                              return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                            }
#line 1137 "error_util.m"
                          }
#line 1069 "error_util.m"
                        else
#line 1069 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1082 "error_util.m"
                            {
#line 1082 "error_util.m"
                              MR_String parse_tree__error_util__V_38_38;
#line 1082 "error_util.m"
                              MR_Integer parse_tree__error_util__Int_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1151 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 1);
#line 1150 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1152 "error_util.m"
                                parse_tree__error_util__V_38_38 = (MR_String) "first";
#line 1150 "error_util.m"
                              else
#line 1155 "error_util.m"
                                {
#line 1153 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 2);
#line 1155 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1154 "error_util.m"
                                    parse_tree__error_util__V_38_38 = (MR_String) "second";
#line 1155 "error_util.m"
                                  else
#line 1157 "error_util.m"
                                    {
#line 1155 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 3);
#line 1157 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 1156 "error_util.m"
                                        parse_tree__error_util__V_38_38 = (MR_String) "third";
#line 1157 "error_util.m"
                                      else
#line 1158 "error_util.m"
                                        {
#line 1158 "error_util.m"
                                          MR_String parse_tree__error_util__V_67_67;

#line 1158 "error_util.m"
                                          {
#line 1158 "error_util.m"
                                            parse_tree__error_util__V_67_67 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_44);
                                          }
#line 1158 "error_util.m"
                                          {
#line 1158 "error_util.m"
                                            parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_67_67, (MR_String) "th");
                                          }
#line 1158 "error_util.m"
                                        }
#line 1157 "error_util.m"
                                    }
#line 1155 "error_util.m"
                                }
#line 1083 "error_util.m"
                              {
#line 1083 "error_util.m"
                                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                              }
#line 1082 "error_util.m"
                            }
#line 1069 "error_util.m"
                          else
#line 1069 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1108 "error_util.m"
                              {
#line 1108 "error_util.m"
                                MR_Word parse_tree__error_util__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1108 "error_util.m"
                                MR_String parse_tree__error_util__Word_47;

#line 1559 "error_util.m"
                                if ((parse_tree__error_util__PredOrFunc_17 == (MR_Integer) 1))
#line 1560 "error_util.m"
                                  parse_tree__error_util__Word_47 = (MR_String) "function";
#line 1559 "error_util.m"
                                else
#line 1559 "error_util.m"
                                  parse_tree__error_util__Word_47 = (MR_String) "predicate";
#line 1110 "error_util.m"
                                {
#line 1110 "error_util.m"
                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                }
#line 1108 "error_util.m"
                              }
#line 1069 "error_util.m"
                            else
#line 1069 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1120 "error_util.m"
                                {
#line 1120 "error_util.m"
                                  MR_String parse_tree__error_util__PragmaName_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1120 "error_util.m"
                                  MR_String parse_tree__error_util__V_34_34;
#line 1120 "error_util.m"
                                  MR_String parse_tree__error_util__Word_50;
#line 1120 "error_util.m"
                                  MR_String parse_tree__error_util__V_71_71;

#line 1121 "error_util.m"
                                  {
#line 1121 "error_util.m"
                                    parse_tree__error_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_20);
                                  }
#line 1562 "error_util.m"
                                  {
#line 1562 "error_util.m"
                                    parse_tree__error_util__V_71_71 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_34_34, (MR_String) "\'");
                                  }
#line 1562 "error_util.m"
                                  {
#line 1562 "error_util.m"
                                    parse_tree__error_util__Word_50 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_71_71);
                                  }
#line 1122 "error_util.m"
                                  {
#line 1122 "error_util.m"
                                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                  }
#line 1120 "error_util.m"
                                }
#line 1069 "error_util.m"
                              else
#line 1069 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1094 "error_util.m"
                                  {
#line 1094 "error_util.m"
                                    MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1095 "error_util.m"
                                    {
#line 1095 "error_util.m"
                                      return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                                    }
#line 1094 "error_util.m"
                                  }
#line 1069 "error_util.m"
                                else
#line 1069 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1112 "error_util.m"
                                    {
#line 1112 "error_util.m"
                                      MR_Word parse_tree__error_util__SimpleCallId_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1112 "error_util.m"
                                      MR_String parse_tree__error_util__Word_48;

#line 1113 "error_util.m"
                                      {
#line 1113 "error_util.m"
                                        parse_tree__error_util__Word_48 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_18);
                                      }
#line 1114 "error_util.m"
                                      {
#line 1114 "error_util.m"
                                        return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                      }
#line 1112 "error_util.m"
                                    }
#line 1069 "error_util.m"
                                  else
#line 1069 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1097 "error_util.m"
                                      {
#line 1097 "error_util.m"
                                        MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1098 "error_util.m"
                                        {
#line 1098 "error_util.m"
                                          return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                        }
#line 1097 "error_util.m"
                                      }
#line 1069 "error_util.m"
                                    else
#line 1069 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1100 "error_util.m"
                                        {
#line 1100 "error_util.m"
                                          MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1100 "error_util.m"
                                          MR_String parse_tree__error_util__Word_45;
#line 1100 "error_util.m"
                                          MR_String parse_tree__error_util__V_78_78;
#line 1100 "error_util.m"
                                          MR_String parse_tree__error_util__V_81_81;

#line 1395 "error_util.m"
                                          {
#line 1395 "error_util.m"
                                            parse_tree__error_util__V_78_78 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                                          }
#line 1562 "error_util.m"
                                          {
#line 1562 "error_util.m"
                                            parse_tree__error_util__V_81_81 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_78_78, (MR_String) "\'");
                                          }
#line 1562 "error_util.m"
                                          {
#line 1562 "error_util.m"
                                            parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_81_81);
                                          }
#line 1102 "error_util.m"
                                          {
#line 1102 "error_util.m"
                                            return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                          }
#line 1100 "error_util.m"
                                        }
#line 1069 "error_util.m"
                                      else
#line 1069 "error_util.m"
                                        if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1104 "error_util.m"
                                          {
#line 1104 "error_util.m"
                                            MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__Word_46;
#line 1104 "error_util.m"
                                            MR_Word parse_tree__error_util__SymName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1104 "error_util.m"
                                            MR_Integer parse_tree__error_util__Arity_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__V_85_85;
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__V_86_86;
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__V_87_87;
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__V_89_89;
#line 1104 "error_util.m"
                                            MR_String parse_tree__error_util__V_92_92;

#line 1400 "error_util.m"
                                            {
#line 1400 "error_util.m"
                                              parse_tree__error_util__V_86_86 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_83);
                                            }
#line 1562 "error_util.m"
                                            {
#line 1562 "error_util.m"
                                              parse_tree__error_util__V_92_92 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_86_86, (MR_String) "\'");
                                            }
#line 1562 "error_util.m"
                                            {
#line 1562 "error_util.m"
                                              parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_92_92);
                                            }
#line 1400 "error_util.m"
                                            {
#line 1400 "error_util.m"
                                              parse_tree__error_util__V_89_89 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_84);
                                            }
#line 1400 "error_util.m"
                                            {
#line 1400 "error_util.m"
                                              parse_tree__error_util__V_87_87 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_89_89);
                                            }
#line 1400 "error_util.m"
                                            {
#line 1400 "error_util.m"
                                              parse_tree__error_util__Word_46 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_85_85, parse_tree__error_util__V_87_87);
                                            }
#line 1106 "error_util.m"
                                            {
#line 1106 "error_util.m"
                                              return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                            }
#line 1104 "error_util.m"
                                          }
#line 1069 "error_util.m"
                                        else
#line 1069 "error_util.m"
                                          if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1124 "error_util.m"
                                            {
#line 1124 "error_util.m"
                                              MR_Word parse_tree__error_util__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1130 "error_util.m"
                                              MR_Word parse_tree__error_util__TypeCtor_22;

#line 1125 "error_util.m"
                                              {
#line 1125 "error_util.m"
                                                parse_tree__error_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(parse_tree__error_util__Type_21, &parse_tree__error_util__TypeCtor_22);
                                              }
#line 1130 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 1126 "error_util.m"
                                                {
#line 1126 "error_util.m"
                                                  MR_Word parse_tree__error_util__TypeCtorName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 0)));
#line 1126 "error_util.m"
                                                  MR_Integer parse_tree__error_util__TypeCtorArity_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_22, (MR_Integer) 1)));
#line 1126 "error_util.m"
                                                  MR_String parse_tree__error_util__Word_51;
#line 1126 "error_util.m"
                                                  MR_Word parse_tree__error_util__SymName_52;

#line 1127 "error_util.m"
                                                  {
#line 1127 "error_util.m"
                                                    parse_tree__error_util__SymName_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "error_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_52, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_23));
#line 1127 "error_util.m"
                                                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_52, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_24));
#line 1127 "error_util.m"
                                                  }
#line 1128 "error_util.m"
                                                  {
#line 1128 "error_util.m"
                                                    parse_tree__error_util__Word_51 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_52);
                                                  }
#line 1129 "error_util.m"
                                                  {
#line 1129 "error_util.m"
                                                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                                  }
#line 1126 "error_util.m"
                                                }
#line 1130 "error_util.m"
                                              else
#line 1131 "error_util.m"
                                                {
#line 1131 "error_util.m"
                                                  {
#line 1131 "error_util.m"
                                                    mercury__require__unexpected_3_p_0((MR_String) "error_util.m", (MR_String) "function \140parse_tree.error_util.error_pieces_to_string_2\'/2", (MR_String) "type is variable");
                                                  }
#line 1131 "error_util.m"
                                                }
#line 1124 "error_util.m"
                                            }
#line 1069 "error_util.m"
                                          else
#line 1069 "error_util.m"
                                            if (((((MR_tag((MR_Word) parse_tree__error_util__Component_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1067 "error_util.m"
                                              {
#line 1067 "error_util.m"
                                                MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1068 "error_util.m"
                                                {
#line 1068 "error_util.m"
                                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                                }
#line 1067 "error_util.m"
                                              }
#line 1069 "error_util.m"
                                            else
#line 1070 "error_util.m"
                                              {
#line 1070 "error_util.m"
                                                MR_String parse_tree__error_util__V_41_41;
#line 1070 "error_util.m"
                                                MR_String parse_tree__error_util__Words_42 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1070 "error_util.m"
                                                MR_String parse_tree__error_util__V_96_96;

#line 1562 "error_util.m"
                                                {
#line 1562 "error_util.m"
                                                  parse_tree__error_util__V_96_96 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Words_42, (MR_String) "\'");
                                                }
#line 1562 "error_util.m"
                                                {
#line 1562 "error_util.m"
                                                  parse_tree__error_util__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_96_96);
                                                }
#line 1071 "error_util.m"
                                                {
#line 1071 "error_util.m"
                                                  return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                                                }
#line 1070 "error_util.m"
                                              }
#line 1064 "error_util.m"
      }
#line 1063 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1063 "error_util.m"
  }
#line 1060 "error_util.m"
}

#line 1049 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1049 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1049 "error_util.m"
{
#line 1051 "error_util.m"
  while (MR_TRUE)
#line 1051 "error_util.m"
    {
#line 1051 "error_util.m"
      /* tailcall optimized into a loop */
#line 1051 "error_util.m"
      {
#line 1051 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1051 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "error_util.m"
          {
#line 1051 "error_util.m"
          }
#line 1051 "error_util.m"
        else
#line 1052 "error_util.m"
          {
#line 1052 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1052 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1053 "error_util.m"
            {
#line 1053 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1054 "error_util.m"
            {
#line 1054 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1055 "error_util.m"
            /* direct tailcall eliminated */
#line 1055 "error_util.m"
            {
#line 1055 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1055 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1055 "error_util.m"
            }
#line 1055 "error_util.m"
            continue;
#line 1052 "error_util.m"
          }
#line 1051 "error_util.m"
      }
#line 1051 "error_util.m"
      break;
#line 1051 "error_util.m"
    }
#line 1049 "error_util.m"
}

#line 1022 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1022 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1022 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1022 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1022 "error_util.m"
{
#line 1025 "error_util.m"
  while (MR_TRUE)
#line 1025 "error_util.m"
    {
#line 1025 "error_util.m"
      /* tailcall optimized into a loop */
#line 1025 "error_util.m"
      {
#line 1025 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1025 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "error_util.m"
          {
#line 1025 "error_util.m"
          }
#line 1025 "error_util.m"
        else
#line 1026 "error_util.m"
          {
#line 1026 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1026 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1026 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1026 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1026 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1026 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1026 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1030 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "error_util.m"
              {
#line 1031 "error_util.m"
              }
#line 1030 "error_util.m"
            else
#line 1028 "error_util.m"
              {
#line 1028 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1029 "error_util.m"
                {
#line 1029 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1028 "error_util.m"
              }
#line 1033 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1033 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1034 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1034 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1035 "error_util.m"
            {
#line 1035 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1036 "error_util.m"
            {
#line 1036 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1042 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "error_util.m"
              {
#line 1043 "error_util.m"
                {
#line 1043 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1042 "error_util.m"
              }
#line 1042 "error_util.m"
            else
#line 1044 "error_util.m"
              {
#line 1044 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1044 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1045 "error_util.m"
                {
#line 1045 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1046 "error_util.m"
                {
#line 1046 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1047 "error_util.m"
                {
#line 1047 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1044 "error_util.m"
              }
#line 1038 "error_util.m"
            /* direct tailcall eliminated */
#line 1038 "error_util.m"
            {
#line 1038 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1038 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1038 "error_util.m"
            }
#line 1038 "error_util.m"
            continue;
#line 1026 "error_util.m"
          }
#line 1025 "error_util.m"
      }
#line 1025 "error_util.m"
      break;
#line 1025 "error_util.m"
    }
#line 1022 "error_util.m"
}

#line 974 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 974 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_11,
#line 974 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 974 "error_util.m"
{
#line 979 "error_util.m"
  {
#line 979 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_9_43;
#line 979 "error_util.m"
    MR_Integer parse_tree__error_util__ContextLength_21;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__Paragraphs_22;
#line 979 "error_util.m"
    MR_Integer parse_tree__error_util__FirstIndent_23;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__MaybeRemain_26;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__Lines_27;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__ParasCord_39;
#line 979 "error_util.m"
    MR_Word parse_tree__error_util__V_42_42;

#line 1000 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1002 "error_util.m"
      parse_tree__error_util__ContextLength_21 = (MR_Integer) 0;
#line 1000 "error_util.m"
    else
#line 988 "error_util.m"
      {
#line 988 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, (MR_Integer) 0)));
#line 988 "error_util.m"
        MR_String parse_tree__error_util__FileName_15;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_16;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__FileNameLength_17;
#line 988 "error_util.m"
        MR_String parse_tree__error_util__LineNumberStr_18;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength0_19;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumberStrLength_20;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__V_31_31;
#line 988 "error_util.m"
        MR_Integer parse_tree__error_util__V_32_32;

#line 989 "error_util.m"
        {
#line 989 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__FileName_15);
        }
#line 990 "error_util.m"
        {
#line 990 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_14, &parse_tree__error_util__LineNumber_16);
        }
#line 991 "error_util.m"
        {
#line 991 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_15, &parse_tree__error_util__FileNameLength_17);
        }
#line 992 "error_util.m"
        {
#line 992 "error_util.m"
          mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_16, &parse_tree__error_util__LineNumberStr_18);
        }
#line 993 "error_util.m"
        {
#line 993 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_18, &parse_tree__error_util__LineNumberStrLength0_19);
        }
#line 994 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_19 < (MR_Integer) 3);
#line 996 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 995 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = (MR_Integer) 3;
#line 996 "error_util.m"
        else
#line 997 "error_util.m"
          parse_tree__error_util__LineNumberStrLength_20 = parse_tree__error_util__LineNumberStrLength0_19;
#line 999 "error_util.m"
        parse_tree__error_util__V_32_32 = (parse_tree__error_util__FileNameLength_17 + (MR_Integer) 1);
#line 999 "error_util.m"
        parse_tree__error_util__V_31_31 = (parse_tree__error_util__V_32_32 + parse_tree__error_util__LineNumberStrLength_20);
#line 999 "error_util.m"
        parse_tree__error_util__ContextLength_21 = (parse_tree__error_util__V_31_31 + (MR_Integer) 2);
#line 988 "error_util.m"
      }
#line 13526 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_9_43 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1189 "error_util.m"
    {
#line 1189 "error_util.m"
      parse_tree__error_util__V_42_42 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_43);
    }
#line 1188 "error_util.m"
    {
#line 1188 "error_util.m"
      parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_42_42, &parse_tree__error_util__ParasCord_39);
    }
#line 1190 "error_util.m"
    {
#line 1190 "error_util.m"
      parse_tree__error_util__Paragraphs_22 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_43, parse_tree__error_util__ParasCord_39);
    }
#line 1005 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_8 == (MR_Integer) 0);
#line 1005 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1005 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 0;
#line 1005 "error_util.m"
    else
#line 1005 "error_util.m"
      parse_tree__error_util__FirstIndent_23 = (MR_Integer) 1;
#line 1010 "error_util.m"
    if ((parse_tree__error_util__MaybeMaxWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1012 "error_util.m"
      parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1010 "error_util.m"
    else
#line 1007 "error_util.m"
      {
#line 1007 "error_util.m"
        MR_Integer parse_tree__error_util__MaxWidth_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_11, (MR_Integer) 0)));
#line 1007 "error_util.m"
        MR_Integer parse_tree__error_util__Remain_25;
#line 1007 "error_util.m"
        MR_Integer parse_tree__error_util__V_35_35 = (parse_tree__error_util__ContextLength_21 + parse_tree__error_util__FixedIndent_10);

#line 1008 "error_util.m"
        parse_tree__error_util__Remain_25 = (parse_tree__error_util__MaxWidth_24 - parse_tree__error_util__V_35_35);
#line 1009 "error_util.m"
        {
#line 1009 "error_util.m"
          parse_tree__error_util__MaybeRemain_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_26, 0) = ((MR_Box) (parse_tree__error_util__Remain_25));
#line 1009 "error_util.m"
        }
#line 1007 "error_util.m"
      }
#line 1014 "error_util.m"
    {
#line 1014 "error_util.m"
      parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__FirstIndent_23, parse_tree__error_util__Paragraphs_22, parse_tree__error_util__MaybeRemain_26, &parse_tree__error_util__Lines_27);
    }
#line 1016 "error_util.m"
    {
#line 1016 "error_util.m"
      parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_27, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10);
#line 1016 "error_util.m"
      return;
    }
#line 979 "error_util.m"
  }
#line 974 "error_util.m"
}

#line 819 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_10_p_0(
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 819 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 819 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 819 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 819 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8)
#line 819 "error_util.m"
{
#line 825 "error_util.m"
  while (MR_TRUE)
#line 825 "error_util.m"
    {
#line 825 "error_util.m"
      /* tailcall optimized into a loop */
#line 825 "error_util.m"
      {
#line 825 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 825 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 825 "error_util.m"
          {
#line 825 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 825 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 825 "error_util.m"
          }
#line 825 "error_util.m"
        else
#line 827 "error_util.m"
          {
#line 827 "error_util.m"
            MR_Word parse_tree__error_util__Component_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "error_util.m"
            MR_Word parse_tree__error_util__Components_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 827 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 836 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 0))))
#line 829 "error_util.m"
              {
#line 829 "error_util.m"
                MR_Word parse_tree__error_util__ComponentPieces_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_23, (MR_Integer) 0)));
#line 829 "error_util.m"
                MR_Word parse_tree__error_util__MaybeMaxWidth_32;

#line 830 "error_util.m"
                {
#line 830 "error_util.m"
                  libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_32);
                }
#line 832 "error_util.m"
                {
#line 832 "error_util.m"
                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_32, parse_tree__error_util__ComponentPieces_31);
                }
#line 834 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 835 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 829 "error_util.m"
              }
#line 836 "error_util.m"
            else
#line 836 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 1))))
#line 837 "error_util.m"
                {
#line 837 "error_util.m"
                  MR_Word parse_tree__error_util__Option_33 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 837 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 837 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 837 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_36;

#line 838 "error_util.m"
                  {
#line 838 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_33, &parse_tree__error_util__OptionValue_36);
                  }
#line 839 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_36 == parse_tree__error_util__RequiredValue_34);
#line 842 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 840 "error_util.m"
                    {
#line 840 "error_util.m"
                      parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__EmbeddedComponents_35, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_70_70, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71);
                    }
#line 842 "error_util.m"
                  else
#line 843 "error_util.m"
                    {
#line 843 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 843 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 843 "error_util.m"
                    }
#line 837 "error_util.m"
                }
#line 836 "error_util.m"
              else
#line 836 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 2))))
#line 846 "error_util.m"
                  {
#line 846 "error_util.m"
                    MR_Word parse_tree__error_util__VerboseErrors_37;
#line 846 "error_util.m"
                    MR_Word parse_tree__error_util__ComponentPieces_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_23, (MR_Integer) 0)));

#line 847 "error_util.m"
                    {
#line 847 "error_util.m"
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_37);
                    }
#line 856 "error_util.m"
                    if ((parse_tree__error_util__VerboseErrors_37 == (MR_Integer) 0))
#line 857 "error_util.m"
                      {
#line 858 "error_util.m"
                        {
#line 858 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 857 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 857 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 857 "error_util.m"
                      }
#line 856 "error_util.m"
                    else
#line 849 "error_util.m"
                      {
#line 849 "error_util.m"
                        MR_Word parse_tree__error_util__MaybeMaxWidth_75;

#line 850 "error_util.m"
                        {
#line 850 "error_util.m"
                          libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_75);
                        }
#line 852 "error_util.m"
                        {
#line 852 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_75, parse_tree__error_util__ComponentPieces_77);
                        }
#line 854 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 855 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 849 "error_util.m"
                      }
#line 846 "error_util.m"
                  }
#line 836 "error_util.m"
                else
#line 836 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__Component_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 878 "error_util.m"
                    {
#line 878 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 878 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_40 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2));
#line 13784 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13786 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69;

#line 13789 "parse_tree.error_util.c"
                      {
#line 13791 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_81), parse_tree__error_util__Anything_40, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69);
                      }
#line 880 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 881 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 878 "error_util.m"
                    }
#line 836 "error_util.m"
                  else
#line 861 "error_util.m"
                    {
#line 861 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 1)));
#line 861 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_23, (MR_Integer) 2)));
#line 861 "error_util.m"
                      MR_Word parse_tree__error_util__MaybeMaxWidth_79;
#line 861 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_80;

#line 862 "error_util.m"
                      {
#line 862 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_80);
                      }
#line 863 "error_util.m"
                      {
#line 863 "error_util.m"
                        libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_79);
                      }
#line 869 "error_util.m"
                      if ((parse_tree__error_util__VerboseErrors_80 == (MR_Integer) 0))
#line 870 "error_util.m"
                        {
#line 871 "error_util.m"
                          {
#line 871 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__NonVerbosePieces_39);
                          }
#line 873 "error_util.m"
                          {
#line 873 "error_util.m"
                            libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                          }
#line 870 "error_util.m"
                        }
#line 869 "error_util.m"
                      else
#line 867 "error_util.m"
                        {
#line 867 "error_util.m"
                          parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__MaybeMaxWidth_79, parse_tree__error_util__VerbosePieces_38);
                        }
#line 875 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_70_70 = (MR_Integer) 1;
#line 876 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71 = (MR_Integer) 0;
#line 861 "error_util.m"
                    }
#line 883 "error_util.m"
            /* direct tailcall eliminated */
#line 883 "error_util.m"
            {
#line 883 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_24;
#line 883 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_70_70;
#line 883 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_71_71;

#line 883 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 883 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 883 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 883 "error_util.m"
            }
#line 883 "error_util.m"
            continue;
#line 827 "error_util.m"
          }
#line 825 "error_util.m"
      }
#line 825 "error_util.m"
      break;
#line 825 "error_util.m"
    }
#line 819 "error_util.m"
}

#line 791 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_7_p_0(
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 791 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 791 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5)
#line 791 "error_util.m"
{
#line 796 "error_util.m"
  while (MR_TRUE)
#line 796 "error_util.m"
    {
#line 796 "error_util.m"
      /* tailcall optimized into a loop */
#line 796 "error_util.m"
      {
#line 796 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 796 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 796 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 796 "error_util.m"
        else
#line 797 "error_util.m"
          {
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__Msg_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__Components_23;
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_24;
#line 797 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_26;
#line 797 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_27;
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_33_33;
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 797 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 13937 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_16)) == (MR_mktag((MR_Integer) 1))))
#line 13939 "parse_tree.error_util.c"
              {
#line 13941 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_25;

#line 804 "error_util.m"
                parse_tree__error_util__MaybeContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 0)));
#line 804 "error_util.m"
                parse_tree__error_util__TreatAsFirst_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 804 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 2)));
#line 804 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_16, (MR_Integer) 3)));
#line 810 "error_util.m"
                if ((parse_tree__error_util__TreatAsFirst_25 == (MR_Integer) 1))
#line 811 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 810 "error_util.m"
                else
#line 809 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_33_33 = (MR_Integer) 0;
#line 13960 "parse_tree.error_util.c"
              }
#line 13962 "parse_tree.error_util.c"
            else
#line 13964 "parse_tree.error_util.c"
              {
#line 13966 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 0)));

#line 799 "error_util.m"
                parse_tree__error_util__Components_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_16, (MR_Integer) 1)));
#line 800 "error_util.m"
                {
#line 800 "error_util.m"
                  parse_tree__error_util__MaybeContext_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_24, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_22));
#line 800 "error_util.m"
                }
#line 802 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_26 = (MR_Integer) 0;
#line 811 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_33_33 = parse_tree__error_util__HeadVar__3_3;
#line 13983 "parse_tree.error_util.c"
              }
#line 814 "error_util.m"
            parse_tree__error_util__Indent_27 = (parse_tree__error_util__ExtraIndentLevel_26 * (MR_Integer) 2);
#line 815 "error_util.m"
            {
#line 815 "error_util.m"
              parse_tree__error_util__write_msg_components_10_p_0(parse_tree__error_util__Components_23, parse_tree__error_util__MaybeContext_24, parse_tree__error_util__Indent_27, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_33_33, &parse_tree__error_util__STATE_VARIABLE_First_35_35, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36);
            }
#line 817 "error_util.m"
            /* direct tailcall eliminated */
#line 817 "error_util.m"
            {
#line 817 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_17;
#line 817 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_35_35;
#line 817 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_36_36;

#line 817 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 817 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 817 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 817 "error_util.m"
            }
#line 817 "error_util.m"
            continue;
#line 797 "error_util.m"
          }
#line 796 "error_util.m"
      }
#line 796 "error_util.m"
      break;
#line 796 "error_util.m"
    }
#line 791 "error_util.m"
}

#line 744 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_8_p_0(
#line 744 "error_util.m"
  MR_Word parse_tree__error_util__Globals_9,
#line 744 "error_util.m"
  MR_Word parse_tree__error_util__Spec_10,
#line 744 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20,
#line 744 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_21,
#line 744 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22,
#line 744 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_23)
#line 744 "error_util.m"
{
#line 747 "error_util.m"
  {
#line 747 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 747 "error_util.m"
    MR_Word parse_tree__error_util__Severity_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 747 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));
#line 747 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_17;
#line 747 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_18;
#line 748 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));

#line 749 "error_util.m"
    {
#line 749 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_7_p_0(parse_tree__error_util__Msgs_16, parse_tree__error_util__Globals_9, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_17);
    }
#line 751 "error_util.m"
    {
#line 751 "error_util.m"
      parse_tree__error_util__MaybeActual_18 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_9, parse_tree__error_util__Severity_14);
    }
#line 762 "error_util.m"
    if ((parse_tree__error_util__PrintedSome_17 == (MR_Integer) 1))
#line 753 "error_util.m"
      {
#line 753 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 753 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 753 "error_util.m"
      }
#line 762 "error_util.m"
    else
#line 777 "error_util.m"
      if ((parse_tree__error_util__MaybeActual_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "error_util.m"
        {
#line 779 "error_util.m"
          {
#line 779 "error_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/8", (MR_String) "MaybeActual is no");
#line 779 "error_util.m"
            return;
          }
#line 778 "error_util.m"
        }
#line 777 "error_util.m"
      else
#line 765 "error_util.m"
        {
#line 765 "error_util.m"
          MR_Word parse_tree__error_util__Actual_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_18, (MR_Integer) 0)));

#line 770 "error_util.m"
          if ((parse_tree__error_util__Actual_19 == (MR_Integer) 0))
#line 767 "error_util.m"
            {
#line 768 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22 + (MR_Integer) 1);
#line 769 "error_util.m"
              {
#line 769 "error_util.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
#line 767 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 767 "error_util.m"
            }
#line 770 "error_util.m"
          else
#line 770 "error_util.m"
            if ((parse_tree__error_util__Actual_19 == (MR_Integer) 2))
#line 775 "error_util.m"
              {
#line 775 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20;
#line 775 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 775 "error_util.m"
              }
#line 770 "error_util.m"
            else
#line 771 "error_util.m"
              {
#line 772 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumWarnings_21 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_20 + (MR_Integer) 1);
#line 773 "error_util.m"
                {
#line 773 "error_util.m"
                  libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_9);
                }
#line 771 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_NumErrors_23 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_22;
#line 771 "error_util.m"
              }
#line 765 "error_util.m"
        }
#line 747 "error_util.m"
  }
#line 744 "error_util.m"
}

#line 704 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 704 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 704 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 704 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 704 "error_util.m"
{
#line 707 "error_util.m"
  {
#line 707 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 707 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 707 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 707 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 707 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 707 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 708 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 708 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 709 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 709 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 710 "error_util.m"
    {
#line 710 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 711 "error_util.m"
    {
#line 711 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 712 "error_util.m"
    {
#line 712 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 713 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 715 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 714 "error_util.m"
      {
#line 714 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 714 "error_util.m"
        return;
      }
#line 715 "error_util.m"
    else
#line 716 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 707 "error_util.m"
  }
#line 704 "error_util.m"
}

#line 618 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 618 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 618 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 618 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 618 "error_util.m"
{
#line 621 "error_util.m"
  {
#line 621 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 621 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 621 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 621 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 639 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 639 "error_util.m"
      {
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 642 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 642 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 642 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 639 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "error_util.m"
        else
#line 643 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 639 "error_util.m"
      }
#line 639 "error_util.m"
    else
#line 639 "error_util.m"
      {
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 640 "error_util.m"
        {
#line 640 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 640 "error_util.m"
        }
#line 639 "error_util.m"
      }
#line 639 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 639 "error_util.m"
      {
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 642 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 642 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 642 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 639 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 639 "error_util.m"
        else
#line 643 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 639 "error_util.m"
      }
#line 639 "error_util.m"
    else
#line 639 "error_util.m"
      {
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 639 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 640 "error_util.m"
        {
#line 640 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 640 "error_util.m"
        }
#line 639 "error_util.m"
      }
#line 624 "error_util.m"
    {
#line 624 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 628 "error_util.m"
    if ((parse_tree__error_util__ContextResult_9 == (MR_Integer) 0))
#line 627 "error_util.m"
      {
#line 627 "error_util.m"
        parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 627 "error_util.m"
        return;
      }
#line 628 "error_util.m"
    else
#line 632 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 621 "error_util.m"
  }
#line 618 "error_util.m"
}

#line 604 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 604 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 604 "error_util.m"
{
#line 606 "error_util.m"
  {
#line 606 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 606 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 606 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 606 "error_util.m"
    else
#line 607 "error_util.m"
      {
#line 607 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 607 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 608 "error_util.m"
        {
#line 608 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 14379 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 14381 "parse_tree.error_util.c"
          {
#line 14383 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 642 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 642 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 642 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 14392 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 14396 "parse_tree.error_util.c"
            else
#line 14398 "parse_tree.error_util.c"
              {
#line 14400 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 612 "error_util.m"
                {
#line 612 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 612 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 612 "error_util.m"
                }
#line 14413 "parse_tree.error_util.c"
              }
#line 14415 "parse_tree.error_util.c"
          }
#line 14417 "parse_tree.error_util.c"
        else
#line 14419 "parse_tree.error_util.c"
          {
#line 14421 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 639 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 612 "error_util.m"
            {
#line 612 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 612 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 612 "error_util.m"
            }
#line 14436 "parse_tree.error_util.c"
          }
#line 607 "error_util.m"
      }
#line 606 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 606 "error_util.m"
  }
#line 604 "error_util.m"
}

#line 543 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 543 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 543 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 543 "error_util.m"
{
#line 546 "error_util.m"
  while (MR_TRUE)
#line 546 "error_util.m"
    {
#line 546 "error_util.m"
      /* tailcall optimized into a loop */
#line 546 "error_util.m"
      {
#line 546 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 546 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 546 "error_util.m"
        else
#line 547 "error_util.m"
          {
#line 547 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 547 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 547 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 547 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 547 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 548 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 548 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 549 "error_util.m"
            {
#line 549 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 553 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 553 "error_util.m"
            else
#line 553 "error_util.m"
              {
#line 553 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 553 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 553 "error_util.m"
                else
#line 557 "error_util.m"
                  {
#line 557 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 557 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 559 "error_util.m"
                    {
#line 559 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 559 "error_util.m"
                    {
#line 559 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 559 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 559 "error_util.m"
                    }
#line 557 "error_util.m"
                  }
#line 553 "error_util.m"
              }
#line 561 "error_util.m"
            /* direct tailcall eliminated */
#line 561 "error_util.m"
            {
#line 561 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 561 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 561 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 561 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 561 "error_util.m"
            }
#line 561 "error_util.m"
            continue;
#line 547 "error_util.m"
          }
#line 546 "error_util.m"
      }
#line 546 "error_util.m"
      break;
#line 546 "error_util.m"
    }
#line 543 "error_util.m"
}

#line 471 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 471 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 471 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 471 "error_util.m"
{
#line 1585 "error_util.m"
  {
#line 1585 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1585 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1585 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1586 "error_util.m"
    {
#line 1586 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1587 "error_util.m"
    {
#line 1587 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1588 "error_util.m"
    {
#line 1588 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1589 "error_util.m"
    {
#line 1589 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1590 "error_util.m"
    {
#line 1590 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1590 "error_util.m"
    {
#line 1590 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1591 "error_util.m"
    {
#line 1591 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1593 "error_util.m"
    {
#line 1593 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1593 "error_util.m"
      return;
    }
#line 1585 "error_util.m"
  }
#line 471 "error_util.m"
}

#line 463 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 463 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 463 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 463 "error_util.m"
{
#line 1579 "error_util.m"
  {
#line 1579 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1579 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_23;
#line 1579 "error_util.m"
    MR_Word parse_tree__error_util__V_26_26;

#line 1580 "error_util.m"
    {
#line 1580 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 962 "error_util.m"
    {
#line 962 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_23);
    }
#line 964 "error_util.m"
    {
#line 964 "error_util.m"
      parse_tree__error_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_26_26, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 964 "error_util.m"
    }
#line 964 "error_util.m"
    {
#line 964 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_26_26, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_23, parse_tree__error_util__Components_10);
#line 964 "error_util.m"
      return;
    }
#line 1579 "error_util.m"
  }
#line 463 "error_util.m"
}

#line 458 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 458 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 458 "error_util.m"
{
#line 1564 "error_util.m"
  {
#line 1564 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1564 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1564 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1573 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1573 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1567 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1565 "error_util.m"
    {
#line 1565 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1567 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1567 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1567 "error_util.m"
      {
#line 1567 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1567 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1568 "error_util.m"
        {
#line 1568 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1567 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1567 "error_util.m"
          {
#line 1569 "error_util.m"
            {
#line 1569 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1569 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1567 "error_util.m"
          }
#line 1567 "error_util.m"
      }
#line 1573 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1571 "error_util.m"
      {
#line 1571 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1571 "error_util.m"
        {
#line 1571 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1571 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1571 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1571 "error_util.m"
        }
#line 1572 "error_util.m"
        {
#line 1572 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1571 "error_util.m"
      }
#line 1573 "error_util.m"
    else
#line 1574 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1564 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1564 "error_util.m"
  }
#line 458 "error_util.m"
}

#line 453 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 453 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 453 "error_util.m"
{
#line 1562 "error_util.m"
  {
#line 1562 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1562 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1562 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1562 "error_util.m"
    {
#line 1562 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1562 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1562 "error_util.m"
  }
#line 453 "error_util.m"
}

#line 449 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 449 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 449 "error_util.m"
{
#line 1559 "error_util.m"
  {
#line 1559 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1559 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1559 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 1))
#line 1560 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1559 "error_util.m"
    else
#line 1559 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1559 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1559 "error_util.m"
  }
#line 449 "error_util.m"
}

#line 447 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 447 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 447 "error_util.m"
{
#line 1552 "error_util.m"
  {
#line 1552 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1552 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1552 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1552 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1552 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1552 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1552 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1552 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1552 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1552 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1553 "error_util.m"
    {
#line 1553 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1554 "error_util.m"
    {
#line 1554 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1554 "error_util.m"
    {
#line 1554 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1554 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1554 "error_util.m"
    }
#line 1553 "error_util.m"
    {
#line 1553 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1553 "error_util.m"
    }
#line 1553 "error_util.m"
    {
#line 1553 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1553 "error_util.m"
    }
#line 1553 "error_util.m"
    {
#line 1553 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1553 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1553 "error_util.m"
    }
#line 1553 "error_util.m"
    {
#line 1553 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1552 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1552 "error_util.m"
  }
#line 447 "error_util.m"
}

#line 445 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 445 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 445 "error_util.m"
{
#line 1556 "error_util.m"
  {
#line 1556 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1556 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1556 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1556 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1556 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1557 "error_util.m"
    {
#line 1557 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1557 "error_util.m"
    {
#line 1557 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1557 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[16])));
#line 1557 "error_util.m"
    }
#line 1557 "error_util.m"
    {
#line 1557 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1557 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1557 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1557 "error_util.m"
    }
#line 1557 "error_util.m"
    {
#line 1557 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1556 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1556 "error_util.m"
  }
#line 445 "error_util.m"
}

#line 441 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 441 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 441 "error_util.m"
{
#line 1057 "error_util.m"
  {
#line 1057 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1057 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1058 "error_util.m"
    {
#line 1058 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1057 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1057 "error_util.m"
  }
#line 441 "error_util.m"
}

#line 437 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 437 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 437 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 437 "error_util.m"
{
#line 968 "error_util.m"
  {
#line 968 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;

#line 969 "error_util.m"
    {
#line 969 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 971 "error_util.m"
    {
#line 971 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 971 "error_util.m"
      return;
    }
#line 968 "error_util.m"
  }
#line 437 "error_util.m"
}

#line 434 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 434 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 434 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 434 "error_util.m"
{
#line 961 "error_util.m"
  {
#line 961 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 961 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_12;
#line 961 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;

#line 962 "error_util.m"
    {
#line 962 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_12);
    }
#line 964 "error_util.m"
    {
#line 964 "error_util.m"
      parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 964 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 964 "error_util.m"
    }
#line 964 "error_util.m"
    {
#line 964 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, parse_tree__error_util__V_17_17, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_12, parse_tree__error_util__Components_10);
#line 964 "error_util.m"
      return;
    }
#line 961 "error_util.m"
  }
#line 434 "error_util.m"
}

#line 426 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 426 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 426 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 426 "error_util.m"
{
#line 955 "error_util.m"
  {
#line 955 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 955 "error_util.m"
    MR_Word parse_tree__error_util__Components_9;
#line 955 "error_util.m"
    MR_Word parse_tree__error_util__V_12_12;
#line 955 "error_util.m"
    MR_String parse_tree__error_util__V_13_13;
#line 955 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 955 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;

#line 957 "error_util.m"
    {
#line 957 "error_util.m"
      parse_tree__error_util__V_13_13 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 957 "error_util.m"
    {
#line 957 "error_util.m"
      parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 957 "error_util.m"
    }
#line 957 "error_util.m"
    {
#line 957 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__Msg_6));
#line 957 "error_util.m"
    }
#line 957 "error_util.m"
    {
#line 957 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "error_util.m"
    }
#line 957 "error_util.m"
    {
#line 957 "error_util.m"
      parse_tree__error_util__Components_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 957 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_9, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 957 "error_util.m"
    }
#line 958 "error_util.m"
    {
#line 958 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__Components_9);
#line 958 "error_util.m"
      return;
    }
#line 955 "error_util.m"
  }
#line 426 "error_util.m"
}

#line 418 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 418 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 418 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 418 "error_util.m"
{
#line 949 "error_util.m"
  {
#line 949 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 949 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_8;

#line 950 "error_util.m"
    {
#line 950 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_8);
    }
#line 952 "error_util.m"
    {
#line 952 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_7_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_8, parse_tree__error_util__Components_6);
#line 952 "error_util.m"
      return;
    }
#line 949 "error_util.m"
  }
#line 418 "error_util.m"
}

#line 408 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 408 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 408 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 408 "error_util.m"
{
#line 944 "error_util.m"
  {
#line 944 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 944 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 944 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "error_util.m"
      {
#line 944 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 945 "error_util.m"
        {
#line 945 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 944 "error_util.m"
      }
#line 944 "error_util.m"
    else
#line 944 "error_util.m"
      {
#line 944 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 946 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 944 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 944 "error_util.m"
        else
#line 947 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 944 "error_util.m"
      }
#line 944 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 944 "error_util.m"
  }
#line 408 "error_util.m"
}

#line 403 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 403 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 403 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 403 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 403 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 403 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 403 "error_util.m"
{
#line 940 "error_util.m"
  {
#line 940 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 940 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 940 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 940 "error_util.m"
    else
#line 940 "error_util.m"
      {
#line 940 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 941 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 940 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 940 "error_util.m"
        else
#line 942 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 940 "error_util.m"
      }
#line 940 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 940 "error_util.m"
  }
#line 403 "error_util.m"
}

#line 395 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 395 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 395 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 395 "error_util.m"
{
#line 934 "error_util.m"
  {
#line 934 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 934 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 934 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "error_util.m"
    else
#line 934 "error_util.m"
      {
#line 934 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 934 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 934 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "error_util.m"
          {
#line 935 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 935 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 935 "error_util.m"
            {
#line 935 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[9]));
            }
#line 935 "error_util.m"
            {
#line 935 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 935 "error_util.m"
          }
#line 934 "error_util.m"
        else
#line 936 "error_util.m"
          {
#line 936 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 936 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 936 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 938 "error_util.m"
            {
#line 938 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 938 "error_util.m"
            {
#line 938 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[11]), parse_tree__error_util__V_24_24);
            }
#line 937 "error_util.m"
            {
#line 937 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 936 "error_util.m"
          }
#line 934 "error_util.m"
      }
#line 934 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 934 "error_util.m"
  }
#line 395 "error_util.m"
}

#line 384 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 384 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 384 "error_util.m"
{
#line 927 "error_util.m"
  {
#line 927 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 927 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 927 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 927 "error_util.m"
    else
#line 927 "error_util.m"
      {
#line 927 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 927 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 927 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "error_util.m"
          {
#line 928 "error_util.m"
            {
#line 928 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 928 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "error_util.m"
            }
#line 928 "error_util.m"
          }
#line 927 "error_util.m"
        else
#line 927 "error_util.m"
          {
#line 927 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 927 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 927 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "error_util.m"
              {
#line 929 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 929 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 929 "error_util.m"
                {
#line 929 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "error_util.m"
                }
#line 929 "error_util.m"
                {
#line 929 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 929 "error_util.m"
                }
#line 929 "error_util.m"
                {
#line 929 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 929 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 929 "error_util.m"
                }
#line 929 "error_util.m"
              }
#line 927 "error_util.m"
            else
#line 930 "error_util.m"
              {
#line 930 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 930 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 931 "error_util.m"
                {
#line 931 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 931 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15])));
#line 931 "error_util.m"
                }
#line 932 "error_util.m"
                {
#line 932 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 932 "error_util.m"
                {
#line 932 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 930 "error_util.m"
              }
#line 927 "error_util.m"
          }
#line 927 "error_util.m"
      }
#line 927 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 927 "error_util.m"
  }
#line 384 "error_util.m"
}

#line 378 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 378 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 378 "error_util.m"
{
#line 919 "error_util.m"
  {
#line 919 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 919 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 919 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "error_util.m"
    else
#line 919 "error_util.m"
      {
#line 919 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 919 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 919 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 920 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 919 "error_util.m"
        else
#line 919 "error_util.m"
          {
#line 919 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 919 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 919 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "error_util.m"
              {
#line 921 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 921 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 922 "error_util.m"
                {
#line 922 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_33_33);
                }
#line 922 "error_util.m"
                {
#line 922 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 921 "error_util.m"
              }
#line 919 "error_util.m"
            else
#line 923 "error_util.m"
              {
#line 923 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 923 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 923 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 925 "error_util.m"
                {
#line 925 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 925 "error_util.m"
                {
#line 925 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[15]), parse_tree__error_util__V_25_25);
                }
#line 924 "error_util.m"
                {
#line 924 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 923 "error_util.m"
              }
#line 919 "error_util.m"
          }
#line 919 "error_util.m"
      }
#line 919 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 919 "error_util.m"
  }
#line 378 "error_util.m"
}

#line 372 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 372 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 372 "error_util.m"
{
#line 913 "error_util.m"
  {
#line 913 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 913 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "error_util.m"
    else
#line 913 "error_util.m"
      {
#line 913 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 913 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 913 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "error_util.m"
          {
#line 914 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 914 "error_util.m"
            {
#line 914 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "error_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 914 "error_util.m"
            }
#line 914 "error_util.m"
            {
#line 914 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 914 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "error_util.m"
            }
#line 914 "error_util.m"
          }
#line 913 "error_util.m"
        else
#line 913 "error_util.m"
          {
#line 913 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 913 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 913 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "error_util.m"
              {
#line 915 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 915 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 915 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 915 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 915 "error_util.m"
                }
#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 915 "error_util.m"
                }
#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "error_util.m"
                }
#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 915 "error_util.m"
                }
#line 915 "error_util.m"
                {
#line 915 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 915 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 915 "error_util.m"
                }
#line 915 "error_util.m"
              }
#line 913 "error_util.m"
            else
#line 916 "error_util.m"
              {
#line 916 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 916 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 916 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 917 "error_util.m"
                {
#line 917 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 917 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 917 "error_util.m"
                }
#line 917 "error_util.m"
                {
#line 917 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 917 "error_util.m"
                {
#line 917 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[13])));
#line 917 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 917 "error_util.m"
                }
#line 917 "error_util.m"
                {
#line 917 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 917 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 917 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 917 "error_util.m"
                }
#line 916 "error_util.m"
              }
#line 913 "error_util.m"
          }
#line 913 "error_util.m"
      }
#line 913 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 913 "error_util.m"
  }
#line 372 "error_util.m"
}

#line 368 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 368 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 368 "error_util.m"
{
#line 907 "error_util.m"
  {
#line 907 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 907 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 907 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 907 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "error_util.m"
    else
#line 907 "error_util.m"
      {
#line 907 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 907 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 907 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "error_util.m"
          {
#line 908 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 908 "error_util.m"
            {
#line 908 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 908 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 908 "error_util.m"
            }
#line 908 "error_util.m"
            {
#line 908 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 908 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 908 "error_util.m"
            }
#line 908 "error_util.m"
          }
#line 907 "error_util.m"
        else
#line 907 "error_util.m"
          {
#line 907 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 907 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 907 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "error_util.m"
              {
#line 909 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 909 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 909 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 909 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 909 "error_util.m"
                {
#line 909 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 909 "error_util.m"
                }
#line 909 "error_util.m"
                {
#line 909 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 909 "error_util.m"
                }
#line 909 "error_util.m"
                {
#line 909 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "error_util.m"
                }
#line 909 "error_util.m"
                {
#line 909 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[12])));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 909 "error_util.m"
                }
#line 909 "error_util.m"
                {
#line 909 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 909 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 909 "error_util.m"
                }
#line 909 "error_util.m"
              }
#line 907 "error_util.m"
            else
#line 910 "error_util.m"
              {
#line 910 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 910 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 910 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 911 "error_util.m"
                }
#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 911 "error_util.m"
                {
#line 911 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 911 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 911 "error_util.m"
                }
#line 910 "error_util.m"
              }
#line 907 "error_util.m"
          }
#line 907 "error_util.m"
      }
#line 907 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 907 "error_util.m"
  }
#line 368 "error_util.m"
}

#line 363 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 363 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 363 "error_util.m"
{
#line 905 "error_util.m"
  {
#line 905 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 905 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 905 "error_util.m"
    {
#line 905 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 905 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 905 "error_util.m"
    }
#line 905 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 905 "error_util.m"
  }
#line 363 "error_util.m"
}

#line 741 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 741 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 741 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7)
#line 741 "error_util.m"
{
#line 741 "error_util.m"
  {
#line 741 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 741 "error_util.m"
    MR_Integer parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21;
#line 741 "error_util.m"
    MR_Integer parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23;

#line 741 "error_util.m"
    {
#line 741 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23);
    }
#line 741 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_NumWarnings_21));
#line 741 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv1_STATE_VARIABLE_NumErrors_23));
#line 741 "error_util.m"
  }
#line 741 "error_util.m"
}

#line 702 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 702 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 702 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 702 "error_util.m"
{
#line 702 "error_util.m"
  {
#line 702 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 702 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 702 "error_util.m"
    {
#line 702 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 702 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 702 "error_util.m"
  }
#line 702 "error_util.m"
}

#line 271 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 271 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 271 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 271 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 271 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 271 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 271 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 271 "error_util.m"
{
#line 739 "error_util.m"
  {
#line 739 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 739 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33;
#line 739 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 739 "error_util.m"
    MR_Word parse_tree__error_util__V_21_21;
#line 741 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16;
#line 741 "error_util.m"
    MR_Box parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18;
#line 741 "error_util.m"
    MR_Box parse_tree__error_util__conv3_STATE_VARIABLE_IO_20;

#line 702 "error_util.m"
    {
#line 702 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__Specs0_9, &parse_tree__error_util__Specs_14);
    }
#line 741 "error_util.m"
    {
#line 741 "error_util.m"
      parse_tree__error_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 741 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 741 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2));
#line 741 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 741 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_21_21, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 741 "error_util.m"
    }
#line 16158 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 741 "error_util.m"
    {
#line 741 "error_util.m"
      mercury__list__foldl3_8_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_21_21, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15)), &parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17)), &parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv3_STATE_VARIABLE_IO_20);
    }
#line 741 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_16 = ((MR_Integer) parse_tree__error_util__conv5_STATE_VARIABLE_NumWarnings_16);
#line 741 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_18 = ((MR_Integer) parse_tree__error_util__conv4_STATE_VARIABLE_NumErrors_18);
#line 739 "error_util.m"
  }
#line 271 "error_util.m"
}

#line 269 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 269 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 269 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 269 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14,
#line 269 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_15,
#line 269 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16,
#line 269 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_17)
#line 269 "error_util.m"
{
#line 737 "error_util.m"
  {
#line 737 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 737 "error_util.m"
    {
#line 737 "error_util.m"
      parse_tree__error_util__do_write_error_spec_8_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_14, parse_tree__error_util__STATE_VARIABLE_NumWarnings_15, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_17);
#line 737 "error_util.m"
      return;
    }
#line 737 "error_util.m"
  }
#line 269 "error_util.m"
}

#line 246 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 246 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 246 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 246 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 246 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 246 "error_util.m"
{
#line 725 "error_util.m"
  {
#line 725 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 725 "error_util.m"
    if ((parse_tree__error_util__Verbose_7 == (MR_Integer) 0))
#line 725 "error_util.m"
      *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 725 "error_util.m"
    else
#line 727 "error_util.m"
      {
#line 729 "error_util.m"
        MR_Integer parse_tree__error_util___NumWarnings_11;
#line 729 "error_util.m"
        MR_Integer parse_tree__error_util___NumErrors_12;

#line 729 "error_util.m"
        {
#line 729 "error_util.m"
          parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
        }
#line 731 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "error_util.m"
      }
#line 725 "error_util.m"
  }
#line 246 "error_util.m"
}

#line 241 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 241 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 241 "error_util.m"
{
#line 672 "error_util.m"
  {
#line 672 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 672 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 672 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "error_util.m"
    else
#line 673 "error_util.m"
      {
#line 673 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 673 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 673 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 673 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 673 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 673 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 673 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 16290 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 674 "error_util.m"
        {
#line 674 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 674 "error_util.m"
        {
#line 674 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 673 "error_util.m"
      }
#line 672 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 672 "error_util.m"
  }
#line 241 "error_util.m"
}

#line 656 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 656 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 656 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 656 "error_util.m"
{
#line 656 "error_util.m"
  {
#line 656 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 656 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 656 "error_util.m"
    {
#line 656 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__656__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 656 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 656 "error_util.m"
  }
#line 656 "error_util.m"
}

#line 238 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 238 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 238 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 238 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 238 "error_util.m"
{
#line 655 "error_util.m"
  {
#line 655 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 655 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 655 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 655 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 655 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 655 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 656 "error_util.m"
    {
#line 656 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 660 "error_util.m"
    {
#line 660 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 661 "error_util.m"
    {
#line 661 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 667 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "error_util.m"
      {
#line 668 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 669 "error_util.m"
        {
#line 669 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 669 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 669 "error_util.m"
        }
#line 669 "error_util.m"
        {
#line 669 "error_util.m"
          MR_Word base;
#line 669 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 669 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 669 "error_util.m"
        }
#line 668 "error_util.m"
      }
#line 667 "error_util.m"
    else
#line 663 "error_util.m"
      {
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 663 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 663 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 663 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 664 "error_util.m"
        {
#line 664 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 665 "error_util.m"
        {
#line 665 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 666 "error_util.m"
        {
#line 666 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 666 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 666 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 666 "error_util.m"
        }
#line 666 "error_util.m"
        {
#line 666 "error_util.m"
          MR_Word base;
#line 666 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 666 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 666 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 666 "error_util.m"
        }
#line 663 "error_util.m"
      }
#line 655 "error_util.m"
  }
#line 238 "error_util.m"
}

#line 236 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 236 "error_util.m"
{
#line 653 "error_util.m"
  {
#line 653 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 653 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "error_util.m"
  }
#line 236 "error_util.m"
}

#line 602 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 602 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 602 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 602 "error_util.m"
{
#line 602 "error_util.m"
  {
#line 602 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 602 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 602 "error_util.m"
    {
#line 602 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 602 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 602 "error_util.m"
  }
#line 602 "error_util.m"
}

#line 225 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 225 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 225 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 225 "error_util.m"
{
#line 601 "error_util.m"
  {
#line 601 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 602 "error_util.m"
    {
#line 602 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 602 "error_util.m"
      return;
    }
#line 601 "error_util.m"
  }
#line 225 "error_util.m"
}

#line 221 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 221 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 221 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 221 "error_util.m"
{
#line 581 "error_util.m"
  {
#line 581 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 581 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 581 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 541 "error_util.m"
    {
#line 541 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 586 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 586 "error_util.m"
    else
#line 587 "error_util.m"
      {
#line 587 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 593 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 2))
#line 595 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 593 "error_util.m"
        else
#line 592 "error_util.m"
          parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 587 "error_util.m"
      }
#line 581 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 581 "error_util.m"
  }
#line 221 "error_util.m"
}

#line 216 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 216 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 216 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 216 "error_util.m"
{
#line 563 "error_util.m"
  {
#line 563 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 563 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 563 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 541 "error_util.m"
    {
#line 541 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 568 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 568 "error_util.m"
    else
#line 569 "error_util.m"
      {
#line 569 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 573 "error_util.m"
        if ((parse_tree__error_util__WorstActual_8 == (MR_Integer) 0))
#line 572 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 573 "error_util.m"
        else
#line 577 "error_util.m"
          parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 569 "error_util.m"
      }
#line 563 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 563 "error_util.m"
  }
#line 216 "error_util.m"
}

#line 210 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 210 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 210 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 210 "error_util.m"
{
#line 540 "error_util.m"
  {
#line 540 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 540 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 541 "error_util.m"
    {
#line 541 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 540 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 540 "error_util.m"
  }
#line 210 "error_util.m"
}

#line 204 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 204 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 204 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 204 "error_util.m"
{
#line 515 "error_util.m"
  while (MR_TRUE)
#line 515 "error_util.m"
    {
#line 515 "error_util.m"
      /* tailcall optimized into a loop */
#line 515 "error_util.m"
      {
#line 515 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 515 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 515 "error_util.m"
        if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "error_util.m"
          {
#line 516 "error_util.m"
            parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 515 "error_util.m"
          }
#line 515 "error_util.m"
        else
#line 515 "error_util.m"
          if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 521 "error_util.m"
            {
#line 522 "error_util.m"
              parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 521 "error_util.m"
            }
#line 515 "error_util.m"
          else
#line 515 "error_util.m"
            if ((parse_tree__error_util__Severity_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 518 "error_util.m"
              {
#line 519 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 518 "error_util.m"
              }
#line 515 "error_util.m"
            else
#line 525 "error_util.m"
              {
#line 525 "error_util.m"
                MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 525 "error_util.m"
                MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 525 "error_util.m"
                MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 525 "error_util.m"
                MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 525 "error_util.m"
                MR_Word parse_tree__error_util__Value_11;

#line 526 "error_util.m"
                {
#line 526 "error_util.m"
                  libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
                }
#line 527 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 529 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 528 "error_util.m"
                  {
#line 528 "error_util.m"
                    /* direct tailcall eliminated */
#line 528 "error_util.m"
                    {
#line 528 "error_util.m"
                      MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 528 "error_util.m"
                      parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 528 "error_util.m"
                    }
#line 528 "error_util.m"
                    continue;
#line 528 "error_util.m"
                  }
#line 529 "error_util.m"
                else
#line 533 "error_util.m"
                  if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "error_util.m"
                    parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "error_util.m"
                  else
#line 534 "error_util.m"
                    {
#line 534 "error_util.m"
                      MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 535 "error_util.m"
                      /* direct tailcall eliminated */
#line 535 "error_util.m"
                      {
#line 535 "error_util.m"
                        MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 535 "error_util.m"
                        parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 535 "error_util.m"
                      }
#line 535 "error_util.m"
                      continue;
#line 534 "error_util.m"
                    }
#line 525 "error_util.m"
              }
#line 515 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 515 "error_util.m"
      }
#line 515 "error_util.m"
      break;
#line 515 "error_util.m"
    }
#line 204 "error_util.m"
}

#line 198 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 198 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 198 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 198 "error_util.m"
{
#line 494 "error_util.m"
  {
#line 494 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 494 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 494 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 0))
#line 494 "error_util.m"
      if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 495 "error_util.m"
        parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 494 "error_util.m"
      else
#line 494 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 499 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 494 "error_util.m"
        else
#line 497 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 494 "error_util.m"
    else
#line 494 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == (MR_Integer) 2))
#line 494 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 507 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 494 "error_util.m"
        else
#line 494 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 511 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 494 "error_util.m"
          else
#line 509 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 494 "error_util.m"
      else
#line 494 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 0))
#line 501 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 494 "error_util.m"
        else
#line 494 "error_util.m"
          if ((parse_tree__error_util__HeadVar__2_2 == (MR_Integer) 2))
#line 505 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 494 "error_util.m"
          else
#line 503 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 494 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 494 "error_util.m"
  }
#line 198 "error_util.m"
}

#line 191 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 191 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 191 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 191 "error_util.m"
{
#line 16890 "parse_tree.error_util.c"
  {
#line 16892 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 16894 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16896 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 16899 "parse_tree.error_util.c"
    {
#line 16901 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 16904 "parse_tree.error_util.c"
  }
#line 191 "error_util.m"
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
