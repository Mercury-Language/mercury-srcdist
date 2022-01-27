/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 535 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 538 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 541 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[14];

#line 544 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 547 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[19];

#line 550 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[19];

#line 553 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 556 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 559 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 562 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 565 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 568 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 571 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 574 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 577 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 580 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 583 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 586 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 589 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 592 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 595 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 598 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 601 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 604 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 607 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 610 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 613 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 616 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 619 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 622 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 625 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 628 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 631 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 634 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 637 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 640 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 643 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 646 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 649 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 652 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 655 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 658 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 661 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 664 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 667 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 670 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 673 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 676 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 679 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 682 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 685 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 688 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 691 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 694 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 697 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 700 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 703 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 706 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 709 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 712 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 715 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 718 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 721 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 724 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 727 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 730 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 733 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 735 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 738 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 741 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 743 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 745 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 748 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 751 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 753 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 756 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 759 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 761 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 763 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 766 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 769 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 771 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 774 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 777 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 779 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 781 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 784 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 787 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 789 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 792 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 795 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 797 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 799 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 802 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 805 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 807 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 810 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 813 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 815 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 817 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 820 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 823 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 825 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 828 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 831 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 833 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 835 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 838 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 841 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 843 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 846 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 849 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 851 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 853 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 856 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 859 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 861 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 864 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 867 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 869 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 871 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 874 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 877 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 879 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 882 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 885 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 887 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 889 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 892 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 895 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 897 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 900 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 903 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 905 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 907 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 910 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 913 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 915 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 918 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 921 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 923 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 925 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 928 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 931 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 933 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 936 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 939 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 941 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 943 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 946 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 949 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 951 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 954 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 957 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 959 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 961 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 964 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 967 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 969 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 972 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 975 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 977 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 979 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 982 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 985 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 987 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 990 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 993 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 995 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 997 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1000 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1003 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1005 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1008 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1011 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1013 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1015 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1018 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1021 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1023 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1026 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1029 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1031 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1033 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1036 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1039 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1041 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1044 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1047 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1049 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1051 "parse_tree.error_util.c"
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



#line 1724 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1730 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1736 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1742 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1749 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 1756 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1763 "parse_tree.error_util.c"
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

#line 1784 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1792 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1798 "parse_tree.error_util.c"
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

#line 1813 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1818 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 1827 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 1832 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 1837 "parse_tree.error_util.c"
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

#line 1858 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1866 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1872 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 1878 "parse_tree.error_util.c"
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

#line 1893 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1901 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 1909 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 1917 "parse_tree.error_util.c"
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

#line 1932 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1937 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 1942 "parse_tree.error_util.c"
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

#line 1956 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 1962 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1968 "parse_tree.error_util.c"
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

#line 1989 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1997 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2002 "parse_tree.error_util.c"
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

#line 2017 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2024 "parse_tree.error_util.c"
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

#line 2043 "parse_tree.error_util.c"
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

#line 2058 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2063 "parse_tree.error_util.c"
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

#line 2078 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2084 "parse_tree.error_util.c"
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

#line 2099 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2104 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2112 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2117 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2125 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2134 "parse_tree.error_util.c"
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

#line 2149 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2154 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2159 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2164 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2170 "parse_tree.error_util.c"
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

#line 2194 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2203 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2212 "parse_tree.error_util.c"
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

#line 2233 "parse_tree.error_util.c"
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

#line 2248 "parse_tree.error_util.c"
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

#line 2263 "parse_tree.error_util.c"
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

#line 2278 "parse_tree.error_util.c"
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

#line 2293 "parse_tree.error_util.c"
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

#line 2308 "parse_tree.error_util.c"
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

#line 2323 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_6[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2328 "parse_tree.error_util.c"
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

#line 2343 "parse_tree.error_util.c"
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

#line 2358 "parse_tree.error_util.c"
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

#line 2373 "parse_tree.error_util.c"
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

#line 2388 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2393 "parse_tree.error_util.c"
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

#line 2408 "parse_tree.error_util.c"
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

#line 2423 "parse_tree.error_util.c"
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

#line 2438 "parse_tree.error_util.c"
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

#line 2453 "parse_tree.error_util.c"
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

#line 2468 "parse_tree.error_util.c"
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

#line 2483 "parse_tree.error_util.c"
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

#line 2498 "parse_tree.error_util.c"
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

#line 2517 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2522 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10
};

#line 2527 "parse_tree.error_util.c"
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

#line 2546 "parse_tree.error_util.c"
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

#line 2567 "parse_tree.error_util.c"
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

#line 2588 "parse_tree.error_util.c"
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

#line 2609 "parse_tree.error_util.c"
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

#line 2624 "parse_tree.error_util.c"
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

#line 2639 "parse_tree.error_util.c"
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

#line 2654 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2662 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2670 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2678 "parse_tree.error_util.c"
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

#line 2693 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2700 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2705 "parse_tree.error_util.c"
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

#line 2719 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2727 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2735 "parse_tree.error_util.c"
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

#line 2756 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 2764 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 2771 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 2778 "parse_tree.error_util.c"
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

#line 2793 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2798 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 2807 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 2812 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 2817 "parse_tree.error_util.c"
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

#line 2838 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2846 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2855 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2863 "parse_tree.error_util.c"
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

#line 2884 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2889 "parse_tree.error_util.c"
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

#line 2904 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2909 "parse_tree.error_util.c"
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

#line 2924 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2929 "parse_tree.error_util.c"
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

#line 2944 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2949 "parse_tree.error_util.c"
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

#line 2964 "parse_tree.error_util.c"
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

#line 2979 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2984 "parse_tree.error_util.c"
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

#line 2999 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3004 "parse_tree.error_util.c"
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

#line 3019 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3024 "parse_tree.error_util.c"
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

#line 3039 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3044 "parse_tree.error_util.c"
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

#line 3059 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3064 "parse_tree.error_util.c"
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

#line 3079 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3084 "parse_tree.error_util.c"
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

#line 3099 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3104 "parse_tree.error_util.c"
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

#line 3119 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3124 "parse_tree.error_util.c"
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

#line 3139 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3144 "parse_tree.error_util.c"
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

#line 3159 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3164 "parse_tree.error_util.c"
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

#line 3179 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3184 "parse_tree.error_util.c"
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

#line 3199 "parse_tree.error_util.c"
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

#line 3214 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3219 "parse_tree.error_util.c"
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

#line 3234 "parse_tree.error_util.c"
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

#line 3249 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18
};

#line 3256 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3261 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3266 "parse_tree.error_util.c"
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

#line 3284 "parse_tree.error_util.c"
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

#line 3308 "parse_tree.error_util.c"
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

#line 3331 "parse_tree.error_util.c"
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

#line 3354 "parse_tree.error_util.c"
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

#line 3375 "parse_tree.error_util.c"
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

#line 3396 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3402 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3408 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3414 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3420 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3426 "parse_tree.error_util.c"
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

#line 3447 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3453 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3459 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3465 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3471 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3477 "parse_tree.error_util.c"
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

#line 3498 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3504 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3510 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3516 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3522 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3528 "parse_tree.error_util.c"
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

#line 3549 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3555 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3561 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3567 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3573 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3579 "parse_tree.error_util.c"
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

#line 3600 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3606 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3612 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3618 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3624 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3630 "parse_tree.error_util.c"
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

#line 3651 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3658 "parse_tree.error_util.c"
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

#line 3673 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3678 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3687 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3692 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3697 "parse_tree.error_util.c"
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

#line 3718 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3723 "parse_tree.error_util.c"
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

#line 3738 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3743 "parse_tree.error_util.c"
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

#line 3758 "parse_tree.error_util.c"
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

#line 3773 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 3778 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 3783 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3788 "parse_tree.error_util.c"
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

#line 3807 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 3814 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3821 "parse_tree.error_util.c"
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

#line 3842 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3847 "parse_tree.error_util.c"
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

#line 3862 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3867 "parse_tree.error_util.c"
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

#line 3882 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3887 "parse_tree.error_util.c"
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

#line 3902 "parse_tree.error_util.c"
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

#line 3917 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 3922 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 3927 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 3932 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3937 "parse_tree.error_util.c"
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

#line 3961 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 3969 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 3977 "parse_tree.error_util.c"
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

#line 3998 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4003 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4012 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4023 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4031 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4034 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4036 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4038 "parse_tree.error_util.c"
{
#line 4040 "parse_tree.error_util.c"
  {
#line 4042 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4045 "parse_tree.error_util.c"
    {
#line 4047 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4050 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4052 "parse_tree.error_util.c"
  }
#line 4054 "parse_tree.error_util.c"
}

#line 4057 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4060 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4062 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4064 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4066 "parse_tree.error_util.c"
{
#line 4068 "parse_tree.error_util.c"
  {
#line 4070 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4073 "parse_tree.error_util.c"
    {
#line 4075 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4078 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4080 "parse_tree.error_util.c"
  }
#line 4082 "parse_tree.error_util.c"
}

#line 4085 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4088 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4090 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4092 "parse_tree.error_util.c"
{
#line 4094 "parse_tree.error_util.c"
  {
#line 4096 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4099 "parse_tree.error_util.c"
    {
#line 4101 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4104 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4106 "parse_tree.error_util.c"
  }
#line 4108 "parse_tree.error_util.c"
}

#line 4111 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4114 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4116 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4118 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4120 "parse_tree.error_util.c"
{
#line 4122 "parse_tree.error_util.c"
  {
#line 4124 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4127 "parse_tree.error_util.c"
    {
#line 4129 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4132 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4134 "parse_tree.error_util.c"
  }
#line 4136 "parse_tree.error_util.c"
}

#line 4139 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4142 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4144 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4146 "parse_tree.error_util.c"
{
#line 4148 "parse_tree.error_util.c"
  {
#line 4150 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4153 "parse_tree.error_util.c"
    {
#line 4155 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4158 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4160 "parse_tree.error_util.c"
  }
#line 4162 "parse_tree.error_util.c"
}

#line 4165 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4168 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4170 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4172 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4174 "parse_tree.error_util.c"
{
#line 4176 "parse_tree.error_util.c"
  {
#line 4178 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4181 "parse_tree.error_util.c"
    {
#line 4183 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4186 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4188 "parse_tree.error_util.c"
  }
#line 4190 "parse_tree.error_util.c"
}

#line 4193 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4196 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4198 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4200 "parse_tree.error_util.c"
{
#line 4202 "parse_tree.error_util.c"
  {
#line 4204 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4207 "parse_tree.error_util.c"
    {
#line 4209 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4212 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4214 "parse_tree.error_util.c"
  }
#line 4216 "parse_tree.error_util.c"
}

#line 4219 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4222 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4224 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4226 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4228 "parse_tree.error_util.c"
{
#line 4230 "parse_tree.error_util.c"
  {
#line 4232 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4235 "parse_tree.error_util.c"
    {
#line 4237 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4240 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4242 "parse_tree.error_util.c"
  }
#line 4244 "parse_tree.error_util.c"
}

#line 4247 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4250 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4252 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4254 "parse_tree.error_util.c"
{
#line 4256 "parse_tree.error_util.c"
  {
#line 4258 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4261 "parse_tree.error_util.c"
    {
#line 4263 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4266 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4268 "parse_tree.error_util.c"
  }
#line 4270 "parse_tree.error_util.c"
}

#line 4273 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4276 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4278 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4280 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4282 "parse_tree.error_util.c"
{
#line 4284 "parse_tree.error_util.c"
  {
#line 4286 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4289 "parse_tree.error_util.c"
    {
#line 4291 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4294 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4296 "parse_tree.error_util.c"
  }
#line 4298 "parse_tree.error_util.c"
}

#line 4301 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4304 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4306 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4308 "parse_tree.error_util.c"
{
#line 4310 "parse_tree.error_util.c"
  {
#line 4312 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4315 "parse_tree.error_util.c"
    {
#line 4317 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4320 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4322 "parse_tree.error_util.c"
  }
#line 4324 "parse_tree.error_util.c"
}

#line 4327 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4330 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4332 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4334 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4336 "parse_tree.error_util.c"
{
#line 4338 "parse_tree.error_util.c"
  {
#line 4340 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4343 "parse_tree.error_util.c"
    {
#line 4345 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4348 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4350 "parse_tree.error_util.c"
  }
#line 4352 "parse_tree.error_util.c"
}

#line 4355 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4358 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4360 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4362 "parse_tree.error_util.c"
{
#line 4364 "parse_tree.error_util.c"
  {
#line 4366 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4369 "parse_tree.error_util.c"
    {
#line 4371 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4374 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4376 "parse_tree.error_util.c"
  }
#line 4378 "parse_tree.error_util.c"
}

#line 4381 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4384 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4386 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4388 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4390 "parse_tree.error_util.c"
{
#line 4392 "parse_tree.error_util.c"
  {
#line 4394 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4397 "parse_tree.error_util.c"
    {
#line 4399 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4402 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4404 "parse_tree.error_util.c"
  }
#line 4406 "parse_tree.error_util.c"
}

#line 4409 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4412 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4414 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4416 "parse_tree.error_util.c"
{
#line 4418 "parse_tree.error_util.c"
  {
#line 4420 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4423 "parse_tree.error_util.c"
    {
#line 4425 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4428 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4430 "parse_tree.error_util.c"
  }
#line 4432 "parse_tree.error_util.c"
}

#line 4435 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4438 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4440 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4442 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4444 "parse_tree.error_util.c"
{
#line 4446 "parse_tree.error_util.c"
  {
#line 4448 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4451 "parse_tree.error_util.c"
    {
#line 4453 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4456 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4458 "parse_tree.error_util.c"
  }
#line 4460 "parse_tree.error_util.c"
}

#line 4463 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4466 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4468 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4470 "parse_tree.error_util.c"
{
#line 4472 "parse_tree.error_util.c"
  {
#line 4474 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4477 "parse_tree.error_util.c"
    {
#line 4479 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4482 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4484 "parse_tree.error_util.c"
  }
#line 4486 "parse_tree.error_util.c"
}

#line 4489 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4492 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4494 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4496 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4498 "parse_tree.error_util.c"
{
#line 4500 "parse_tree.error_util.c"
  {
#line 4502 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4505 "parse_tree.error_util.c"
    {
#line 4507 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4510 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4512 "parse_tree.error_util.c"
  }
#line 4514 "parse_tree.error_util.c"
}

#line 4517 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4520 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4522 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4524 "parse_tree.error_util.c"
{
#line 4526 "parse_tree.error_util.c"
  {
#line 4528 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4531 "parse_tree.error_util.c"
    {
#line 4533 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4536 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4538 "parse_tree.error_util.c"
  }
#line 4540 "parse_tree.error_util.c"
}

#line 4543 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4546 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4548 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4550 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4552 "parse_tree.error_util.c"
{
#line 4554 "parse_tree.error_util.c"
  {
#line 4556 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4559 "parse_tree.error_util.c"
    {
#line 4561 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4564 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4566 "parse_tree.error_util.c"
  }
#line 4568 "parse_tree.error_util.c"
}

#line 4571 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4574 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4576 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4578 "parse_tree.error_util.c"
{
#line 4580 "parse_tree.error_util.c"
  {
#line 4582 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4585 "parse_tree.error_util.c"
    {
#line 4587 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4590 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4592 "parse_tree.error_util.c"
  }
#line 4594 "parse_tree.error_util.c"
}

#line 4597 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4600 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4602 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4604 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4606 "parse_tree.error_util.c"
{
#line 4608 "parse_tree.error_util.c"
  {
#line 4610 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4613 "parse_tree.error_util.c"
    {
#line 4615 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4618 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4620 "parse_tree.error_util.c"
  }
#line 4622 "parse_tree.error_util.c"
}

#line 4625 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 4628 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4630 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4632 "parse_tree.error_util.c"
{
#line 4634 "parse_tree.error_util.c"
  {
#line 4636 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4639 "parse_tree.error_util.c"
    {
#line 4641 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4644 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4646 "parse_tree.error_util.c"
  }
#line 4648 "parse_tree.error_util.c"
}

#line 4651 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 4654 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4656 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4658 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4660 "parse_tree.error_util.c"
{
#line 4662 "parse_tree.error_util.c"
  {
#line 4664 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4667 "parse_tree.error_util.c"
    {
#line 4669 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4672 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4674 "parse_tree.error_util.c"
  }
#line 4676 "parse_tree.error_util.c"
}

#line 4679 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 4682 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4684 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4686 "parse_tree.error_util.c"
{
#line 4688 "parse_tree.error_util.c"
  {
#line 4690 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4693 "parse_tree.error_util.c"
    {
#line 4695 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4698 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4700 "parse_tree.error_util.c"
  }
#line 4702 "parse_tree.error_util.c"
}

#line 4705 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 4708 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4710 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4712 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4714 "parse_tree.error_util.c"
{
#line 4716 "parse_tree.error_util.c"
  {
#line 4718 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4721 "parse_tree.error_util.c"
    {
#line 4723 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4726 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4728 "parse_tree.error_util.c"
  }
#line 4730 "parse_tree.error_util.c"
}

#line 4733 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 4736 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4738 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4740 "parse_tree.error_util.c"
{
#line 4742 "parse_tree.error_util.c"
  {
#line 4744 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4747 "parse_tree.error_util.c"
    {
#line 4749 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4752 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4754 "parse_tree.error_util.c"
  }
#line 4756 "parse_tree.error_util.c"
}

#line 4759 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 4762 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4764 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4766 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4768 "parse_tree.error_util.c"
{
#line 4770 "parse_tree.error_util.c"
  {
#line 4772 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4775 "parse_tree.error_util.c"
    {
#line 4777 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4780 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4782 "parse_tree.error_util.c"
  }
#line 4784 "parse_tree.error_util.c"
}

#line 4787 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 4790 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4792 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4794 "parse_tree.error_util.c"
{
#line 4796 "parse_tree.error_util.c"
  {
#line 4798 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4801 "parse_tree.error_util.c"
    {
#line 4803 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4806 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4808 "parse_tree.error_util.c"
  }
#line 4810 "parse_tree.error_util.c"
}

#line 4813 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 4816 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4818 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4820 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4822 "parse_tree.error_util.c"
{
#line 4824 "parse_tree.error_util.c"
  {
#line 4826 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4829 "parse_tree.error_util.c"
    {
#line 4831 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4834 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4836 "parse_tree.error_util.c"
  }
#line 4838 "parse_tree.error_util.c"
}

#line 4841 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 4844 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4846 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4848 "parse_tree.error_util.c"
{
#line 4850 "parse_tree.error_util.c"
  {
#line 4852 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4855 "parse_tree.error_util.c"
    {
#line 4857 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4860 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4862 "parse_tree.error_util.c"
  }
#line 4864 "parse_tree.error_util.c"
}

#line 4867 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 4870 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4872 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4874 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4876 "parse_tree.error_util.c"
{
#line 4878 "parse_tree.error_util.c"
  {
#line 4880 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4883 "parse_tree.error_util.c"
    {
#line 4885 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4888 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4890 "parse_tree.error_util.c"
  }
#line 4892 "parse_tree.error_util.c"
}

#line 4895 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 4898 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4900 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4902 "parse_tree.error_util.c"
{
#line 4904 "parse_tree.error_util.c"
  {
#line 4906 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4909 "parse_tree.error_util.c"
    {
#line 4911 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4914 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4916 "parse_tree.error_util.c"
  }
#line 4918 "parse_tree.error_util.c"
}

#line 4921 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 4924 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4926 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4928 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4930 "parse_tree.error_util.c"
{
#line 4932 "parse_tree.error_util.c"
  {
#line 4934 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4937 "parse_tree.error_util.c"
    {
#line 4939 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4942 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4944 "parse_tree.error_util.c"
  }
#line 4946 "parse_tree.error_util.c"
}

#line 4949 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 4952 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4954 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4956 "parse_tree.error_util.c"
{
#line 4958 "parse_tree.error_util.c"
  {
#line 4960 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4963 "parse_tree.error_util.c"
    {
#line 4965 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4968 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4970 "parse_tree.error_util.c"
  }
#line 4972 "parse_tree.error_util.c"
}

#line 4975 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 4978 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4980 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4982 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4984 "parse_tree.error_util.c"
{
#line 4986 "parse_tree.error_util.c"
  {
#line 4988 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4991 "parse_tree.error_util.c"
    {
#line 4993 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4996 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4998 "parse_tree.error_util.c"
  }
#line 5000 "parse_tree.error_util.c"
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
#line 5192 "parse_tree.error_util.c"
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
#line 5206 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
          else
#line 1179 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5212 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
            else
#line 5216 "parse_tree.error_util.c"
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
#line 5229 "parse_tree.error_util.c"
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
#line 5253 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
                else
#line 5257 "parse_tree.error_util.c"
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
#line 5272 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
              else
#line 1179 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5278 "parse_tree.error_util.c"
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
#line 5300 "parse_tree.error_util.c"
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
#line 5313 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1179 "error_util.m"
              else
#line 1179 "error_util.m"
                if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5319 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1179 "error_util.m"
                else
#line 1179 "error_util.m"
                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5325 "parse_tree.error_util.c"
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
#line 5408 "parse_tree.error_util.c"
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
#line 5433 "parse_tree.error_util.c"
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
#line 5456 "parse_tree.error_util.c"
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
#line 5493 "parse_tree.error_util.c"
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
#line 5507 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1279 "error_util.m"
          else
#line 5511 "parse_tree.error_util.c"
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
#line 5524 "parse_tree.error_util.c"
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
#line 5546 "parse_tree.error_util.c"
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
#line 5559 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1279 "error_util.m"
            else
#line 1279 "error_util.m"
              if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5565 "parse_tree.error_util.c"
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
#line 5648 "parse_tree.error_util.c"
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
#line 5671 "parse_tree.error_util.c"
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
#line 5708 "parse_tree.error_util.c"
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
#line 5734 "parse_tree.error_util.c"
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
#line 5754 "parse_tree.error_util.c"
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

#line 5821 "parse_tree.error_util.c"
        {
#line 5823 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[2], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1161 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1161 "error_util.m"
          {
#line 5830 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1161 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 5834 "parse_tree.error_util.c"
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
#line 5888 "parse_tree.error_util.c"
  {
#line 5890 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5893 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5895 "parse_tree.error_util.c"
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
#line 5941 "parse_tree.error_util.c"
  {
#line 5943 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5946 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5948 "parse_tree.error_util.c"
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
#line 5994 "parse_tree.error_util.c"
  {
#line 5996 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 5999 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6001 "parse_tree.error_util.c"
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
#line 6047 "parse_tree.error_util.c"
  {
#line 6049 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6052 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6054 "parse_tree.error_util.c"
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
#line 6100 "parse_tree.error_util.c"
  {
#line 6102 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6105 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6107 "parse_tree.error_util.c"
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
#line 6198 "parse_tree.error_util.c"
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
#line 6223 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 275 "error_util.m"
        else
#line 275 "error_util.m"
          {
#line 275 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 275 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6233 "parse_tree.error_util.c"
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
#line 6802 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 275 "error_util.m"
    else
#line 275 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6808 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 275 "error_util.m"
      else
#line 275 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6814 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 275 "error_util.m"
        else
#line 275 "error_util.m"
          if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 6820 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 275 "error_util.m"
          else
#line 275 "error_util.m"
            if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 6826 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 275 "error_util.m"
            else
#line 275 "error_util.m"
              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 6832 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 275 "error_util.m"
              else
#line 275 "error_util.m"
                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6838 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 275 "error_util.m"
                else
#line 275 "error_util.m"
                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 6844 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 275 "error_util.m"
                  else
#line 275 "error_util.m"
                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6850 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 275 "error_util.m"
                    else
#line 275 "error_util.m"
                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6856 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 275 "error_util.m"
                      else
#line 275 "error_util.m"
                        if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 6862 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 275 "error_util.m"
                        else
#line 275 "error_util.m"
                          if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6868 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 275 "error_util.m"
                          else
#line 275 "error_util.m"
                            if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6874 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 275 "error_util.m"
                            else
#line 275 "error_util.m"
                              if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6880 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 275 "error_util.m"
                              else
#line 275 "error_util.m"
                                if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 6886 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 275 "error_util.m"
                                else
#line 275 "error_util.m"
                                  if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6892 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 275 "error_util.m"
                                  else
#line 275 "error_util.m"
                                    if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6898 "parse_tree.error_util.c"
                                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 275 "error_util.m"
                                    else
#line 275 "error_util.m"
                                      if (((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6904 "parse_tree.error_util.c"
                                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 275 "error_util.m"
                                      else
#line 6908 "parse_tree.error_util.c"
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
#line 7003 "parse_tree.error_util.c"
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
#line 7028 "parse_tree.error_util.c"
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
#line 7053 "parse_tree.error_util.c"
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
#line 7078 "parse_tree.error_util.c"
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
#line 7103 "parse_tree.error_util.c"
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
#line 7128 "parse_tree.error_util.c"
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
#line 7153 "parse_tree.error_util.c"
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
#line 7178 "parse_tree.error_util.c"
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
#line 7203 "parse_tree.error_util.c"
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
#line 7228 "parse_tree.error_util.c"
                                      {
#line 7230 "parse_tree.error_util.c"
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
#line 7256 "parse_tree.error_util.c"
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
#line 7281 "parse_tree.error_util.c"
                                          {
#line 7283 "parse_tree.error_util.c"
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
#line 7309 "parse_tree.error_util.c"
                                            {
#line 7311 "parse_tree.error_util.c"
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
#line 7337 "parse_tree.error_util.c"
                                              {
#line 7339 "parse_tree.error_util.c"
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
#line 7365 "parse_tree.error_util.c"
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
#line 7388 "parse_tree.error_util.c"
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
#line 7487 "parse_tree.error_util.c"
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
#line 7513 "parse_tree.error_util.c"
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
#line 7533 "parse_tree.error_util.c"
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

#line 7606 "parse_tree.error_util.c"
        {
#line 7608 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 66 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
          {
#line 7615 "parse_tree.error_util.c"
            {
#line 7617 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 66 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 66 "error_util.m"
              {
#line 7624 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 7626 "parse_tree.error_util.c"
                {
#line 7628 "parse_tree.error_util.c"
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
#line 7668 "parse_tree.error_util.c"
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
#line 7692 "parse_tree.error_util.c"
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
#line 7716 "parse_tree.error_util.c"
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
#line 7740 "parse_tree.error_util.c"
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
#line 7757 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
              else
#line 73 "error_util.m"
                if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 7763 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "error_util.m"
                else
#line 73 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7769 "parse_tree.error_util.c"
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
#line 7795 "parse_tree.error_util.c"
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
#line 7819 "parse_tree.error_util.c"
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
#line 7839 "parse_tree.error_util.c"
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
#line 7979 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 73 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                    {
#line 7985 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 73 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                        {
#line 7991 "parse_tree.error_util.c"
                          {
#line 7993 "parse_tree.error_util.c"
                            parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                          }
#line 73 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 73 "error_util.m"
                            {
#line 8000 "parse_tree.error_util.c"
                              parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[5];
#line 8002 "parse_tree.error_util.c"
                              {
#line 8004 "parse_tree.error_util.c"
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
#line 8048 "parse_tree.error_util.c"
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
#line 8073 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "error_util.m"
        else
#line 107 "error_util.m"
          {
#line 107 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 107 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 8083 "parse_tree.error_util.c"
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
#line 8384 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 107 "error_util.m"
    else
#line 107 "error_util.m"
      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8390 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 107 "error_util.m"
      else
#line 107 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8396 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 107 "error_util.m"
        else
#line 107 "error_util.m"
          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8402 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 107 "error_util.m"
          else
#line 107 "error_util.m"
            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 8408 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 107 "error_util.m"
            else
#line 107 "error_util.m"
              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8414 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 107 "error_util.m"
              else
#line 107 "error_util.m"
                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8420 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 107 "error_util.m"
                else
#line 107 "error_util.m"
                  if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8426 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 107 "error_util.m"
                  else
#line 107 "error_util.m"
                    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8432 "parse_tree.error_util.c"
                      *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 107 "error_util.m"
                    else
#line 107 "error_util.m"
                      if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8438 "parse_tree.error_util.c"
                        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 107 "error_util.m"
                      else
#line 107 "error_util.m"
                        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8444 "parse_tree.error_util.c"
                          *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 107 "error_util.m"
                        else
#line 107 "error_util.m"
                          if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8450 "parse_tree.error_util.c"
                            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 107 "error_util.m"
                          else
#line 107 "error_util.m"
                            if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8456 "parse_tree.error_util.c"
                              *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 107 "error_util.m"
                            else
#line 107 "error_util.m"
                              if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8462 "parse_tree.error_util.c"
                                *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 107 "error_util.m"
                              else
#line 107 "error_util.m"
                                if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8468 "parse_tree.error_util.c"
                                  *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 107 "error_util.m"
                                else
#line 107 "error_util.m"
                                  if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 8474 "parse_tree.error_util.c"
                                    *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 107 "error_util.m"
                                  else
#line 8478 "parse_tree.error_util.c"
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
#line 8753 "parse_tree.error_util.c"
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
#line 8776 "parse_tree.error_util.c"
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

#line 9063 "parse_tree.error_util.c"
                          {
#line 9065 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_114_114, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_92_92);
                          }
#line 9068 "parse_tree.error_util.c"
                          {
#line 9070 "parse_tree.error_util.c"
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
#line 9210 "parse_tree.error_util.c"
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
#line 9266 "parse_tree.error_util.c"
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
#line 9302 "parse_tree.error_util.c"
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
#line 9344 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_23 = (MR_Integer) 1;
#line 9346 "parse_tree.error_util.c"
                    {
#line 9348 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_21, parse_tree__error_util__PolyConst1_23, &parse_tree__error_util__TypeInfo_24_24);
                    }
#line 9351 "parse_tree.error_util.c"
                    {
#line 9353 "parse_tree.error_util.c"
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
#line 9392 "parse_tree.error_util.c"
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
#line 9403 "parse_tree.error_util.c"
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
#line 9447 "parse_tree.error_util.c"
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
#line 9484 "parse_tree.error_util.c"
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
#line 9508 "parse_tree.error_util.c"
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
#line 9528 "parse_tree.error_util.c"
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
#line 9557 "parse_tree.error_util.c"
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
#line 9572 "parse_tree.error_util.c"
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
#line 9590 "parse_tree.error_util.c"
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
#line 9685 "parse_tree.error_util.c"
              parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 9687 "parse_tree.error_util.c"
              {
#line 9689 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
              }
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                {
#line 9696 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 151 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                    {
#line 9702 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 151 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                        {
#line 9708 "parse_tree.error_util.c"
                          parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9710 "parse_tree.error_util.c"
                          {
#line 9712 "parse_tree.error_util.c"
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
#line 9750 "parse_tree.error_util.c"
              {
#line 9752 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
              }
#line 151 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 151 "error_util.m"
                {
#line 9759 "parse_tree.error_util.c"
                  parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 9761 "parse_tree.error_util.c"
                  {
#line 9763 "parse_tree.error_util.c"
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
#line 9803 "parse_tree.error_util.c"
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
#line 9825 "parse_tree.error_util.c"
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

#line 9892 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1429 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1429 "error_util.m"
          {
#line 9898 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[2];
#line 9900 "parse_tree.error_util.c"
            {
#line 9902 "parse_tree.error_util.c"
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
#line 9957 "parse_tree.error_util.c"
  {
#line 9959 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 9962 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 9964 "parse_tree.error_util.c"
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
#line 10289 "parse_tree.error_util.c"
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
#line 13418 "parse_tree.error_util.c"
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
                  libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_32);
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
                      libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_37);
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
                          libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_75);
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
#line 13676 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_81, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13678 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_69_69;

#line 13681 "parse_tree.error_util.c"
                      {
#line 13683 "parse_tree.error_util.c"
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
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_80);
                      }
#line 853 "error_util.m"
                      {
#line 853 "error_util.m"
                        libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_79);
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

#line 13829 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_16)) == (MR_mktag((MR_Integer) 1))))
#line 13831 "parse_tree.error_util.c"
              {
#line 13833 "parse_tree.error_util.c"
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
#line 13852 "parse_tree.error_util.c"
              }
#line 13854 "parse_tree.error_util.c"
            else
#line 13856 "parse_tree.error_util.c"
              {
#line 13858 "parse_tree.error_util.c"
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
#line 13875 "parse_tree.error_util.c"
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
#line 14271 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 14273 "parse_tree.error_util.c"
          {
#line 14275 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 632 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 632 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 632 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 14284 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 14288 "parse_tree.error_util.c"
            else
#line 14290 "parse_tree.error_util.c"
              {
#line 14292 "parse_tree.error_util.c"
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
#line 14305 "parse_tree.error_util.c"
              }
#line 14307 "parse_tree.error_util.c"
          }
#line 14309 "parse_tree.error_util.c"
        else
#line 14311 "parse_tree.error_util.c"
          {
#line 14313 "parse_tree.error_util.c"
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
#line 14328 "parse_tree.error_util.c"
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
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_23);
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
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_12);
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
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_12);
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
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 140, &parse_tree__error_util__MaybeMaxWidth_8);
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
#line 16050 "parse_tree.error_util.c"
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
#line 16182 "parse_tree.error_util.c"
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
#line 16782 "parse_tree.error_util.c"
  {
#line 16784 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 16786 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16788 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 16791 "parse_tree.error_util.c"
    {
#line 16793 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 16796 "parse_tree.error_util.c"
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
