/*
** Automatically generated from `error_util.m'
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


/* :- module parse_tree.error_util. */
/* :- implementation. */

/*
INIT mercury__parse_tree__error_util__init
ENDINIT
*/

#include "parse_tree.error_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 100 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 103 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 106 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 109 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0;

#line 112 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1;

#line 115 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2;

#line 118 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3];

#line 121 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3];

#line 124 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3];

#line 127 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

#line 130 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0;

#line 133 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2];

#line 136 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0;

#line 139 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1];

#line 142 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1];

#line 145 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1];

#line 148 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1];

#line 151 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0;

#line 154 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2];

#line 157 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2];

#line 160 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0;

#line 163 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0;

#line 166 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4];

#line 169 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4];

#line 172 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1;

#line 175 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1];

#line 178 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1];

#line 181 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_0[2];

#line 184 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2];

#line 187 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2];

#line 190 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1];

#line 193 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0;

#line 196 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3];

#line 199 "parse_tree.error_util.c"
static const MR_DuArgLocn parse_tree__error_util__parse_tree__error_util__field_locns_error_msg_component_0_1[3];

#line 202 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1;

#line 205 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2];

#line 208 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2;

#line 211 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2];

#line 214 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3;

#line 217 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1];

#line 220 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1;

#line 223 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1];

#line 226 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1];

#line 229 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4;

#line 232 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4;

#line 235 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1];

#line 238 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1];

#line 241 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1];

#line 244 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2];

#line 247 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_msg_component_0[4];

#line 250 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5];

#line 253 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5];

#line 256 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0;

#line 259 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1;

#line 262 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2;

#line 265 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3;

#line 268 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4;

#line 271 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5;

#line 274 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6;

#line 277 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 280 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 283 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_9[1];

#line 286 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 289 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 292 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 295 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

#line 298 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_13[1];

#line 301 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13;

#line 304 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14;

#line 307 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15;

#line 310 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16;

#line 313 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17;

#line 316 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_18;

#line 319 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_19;

#line 322 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[18];

#line 325 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 328 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 331 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 334 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[20];

#line 337 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[20];

#line 340 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 343 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 346 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 349 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 352 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 355 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 358 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 361 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 364 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 367 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 370 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 373 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 376 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 379 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 382 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 385 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 388 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 391 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 394 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 397 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 400 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 403 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 406 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 409 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 412 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 415 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 418 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 421 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 424 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 427 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 430 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 433 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1];

#line 436 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 439 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 442 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 445 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 448 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 451 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 454 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 457 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 460 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 463 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 466 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 469 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 472 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 475 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 478 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 481 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 484 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 487 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 490 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 493 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 496 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 499 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 502 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1];

#line 505 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 508 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 511 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 514 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 517 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1];

#line 520 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 523 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20;

#line 526 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1];

#line 529 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21;

#line 532 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 535 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 538 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 541 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[17];

#line 544 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 547 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[22];

#line 550 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[22];

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
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0;

#line 682 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1;

#line 685 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2];

#line 688 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2];

#line 691 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2];

#line 694 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 697 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 700 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 703 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 706 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 709 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 712 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 715 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 718 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 721 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 724 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 727 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 730 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 733 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 736 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 739 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 742 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 745 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 748 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 750 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 753 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 756 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 758 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 760 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 763 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 766 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 768 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 771 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 774 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 776 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 778 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 781 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 784 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 786 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 789 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 792 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 794 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 796 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 799 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 802 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 804 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 807 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 810 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 812 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 814 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 817 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 820 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 822 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 825 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 828 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 830 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 832 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 835 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 838 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 840 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 843 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 846 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 848 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 850 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 853 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 856 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 858 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 861 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 864 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 866 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 868 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 871 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 874 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 876 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 879 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 882 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 884 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 886 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 889 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 892 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 894 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 897 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 900 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 902 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 904 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 907 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 910 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 912 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 915 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 918 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 920 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 922 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 925 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 928 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 930 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 933 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 936 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 938 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 940 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 943 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 946 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 948 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 951 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 954 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 956 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 958 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 961 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 964 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 966 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 969 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 972 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 974 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 976 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 979 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 982 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 984 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 987 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 990 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 992 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 994 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 997 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 1000 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1002 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1005 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 1008 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1010 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1012 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1015 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 1018 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1020 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1023 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 1026 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1028 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1030 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1033 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1036 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1038 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1041 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1044 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1046 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1048 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1051 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1054 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1056 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1059 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1062 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1064 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1066 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1069 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 1072 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1074 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1077 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 1080 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1082 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1084 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1087 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1090 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1092 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1095 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1098 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1100 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1102 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__711__1_1_p_0(
#line 711 "error_util.m"
  MR_Word parse_tree__error_util__LambdaHeadVar__1_21);

#line 1504 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1504 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1504 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1611 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1611 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1611 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1486 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1486 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1486 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 960 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 960 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 960 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 964 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 964 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 964 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1096 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1096 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1096 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1761 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1761 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1761 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 968 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 968 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 968 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1851 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1851 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1851 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1851 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1851 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1851 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1851 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1826 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1826 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1826 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1826 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1826 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1778 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1778 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1778 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1746 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1746 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1746 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1746 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1736 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1736 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1736 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1736 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1723 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1723 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1723 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1723 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1723 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1718 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1718 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1718 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1718 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1713 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1713 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1708 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1708 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1667 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1667 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1622 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1622 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1616 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1616 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1510 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1510 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1473 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1473 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1473 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1473 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1436 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1436 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1344 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1344 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1344 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1333 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1333 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1306 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1306 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 1278 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2);

#line 1212 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1212 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__Components_14);

#line 1200 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1200 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 1183 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1183 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1183 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2);

#line 1002 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1002 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10);

#line 970 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 970 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 970 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7);

#line 918 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 918 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 918 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 918 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 918 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 918 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);

#line 865 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 865 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 865 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 865 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 830 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 830 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19);

#line 822 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 822 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 808 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6);

#line 787 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 787 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 787 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 787 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 781 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 781 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6);

#line 673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 673 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 673 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 673 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 659 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 598 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 598 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 915 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9);

#line 779 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 779 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 778 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 778 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 778 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 778 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 711 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 711 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 657 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 657 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[21][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[4][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][13];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_7[1][7];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[21][2] = {
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_2[0]))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[10])),
    ((MR_Box) (&parse_tree__error_util_scalar_common_1[10]))
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
    ((MR_Box) (&parse_tree__error_util_scalar_common_4[2])),
    ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_2)),
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

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[4][6] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
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

static /* final */ const MR_Box parse_tree__error_util_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0)),
    ((MR_Box) (&parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "parse_tree.error_util.mh"



#line 1956 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1964 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1972 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1980 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1986 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1992 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1998 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 2005 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 2012 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2019 "parse_tree.error_util.c"
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

#line 2036 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 2044 "parse_tree.error_util.c"
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

#line 2061 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2069 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2075 "parse_tree.error_util.c"
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

#line 2090 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2095 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 2104 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2109 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 2114 "parse_tree.error_util.c"
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

#line 2131 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 2139 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2145 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 2151 "parse_tree.error_util.c"
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

#line 2166 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2174 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2182 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 2190 "parse_tree.error_util.c"
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

#line 2205 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2210 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 2215 "parse_tree.error_util.c"
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

#line 2229 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2235 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2241 "parse_tree.error_util.c"
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

#line 2258 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2263 "parse_tree.error_util.c"
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

#line 2278 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2285 "parse_tree.error_util.c"
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

#line 2304 "parse_tree.error_util.c"
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

#line 2319 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2325 "parse_tree.error_util.c"
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

#line 2340 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2346 "parse_tree.error_util.c"
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

#line 2361 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2366 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2374 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2379 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2387 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2396 "parse_tree.error_util.c"
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

#line 2411 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2416 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2421 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2426 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2432 "parse_tree.error_util.c"
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

#line 2456 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2465 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2474 "parse_tree.error_util.c"
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

#line 2491 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0 = {
  (MR_String) "phase_options",
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

#line 2506 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1 = {
  (MR_String) "phase_read_files",
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

#line 2521 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2 = {
  (MR_String) "phase_module_name",
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

#line 2536 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3 = {
  (MR_String) "phase_term_to_parse_tree",
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

#line 2551 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4 = {
  (MR_String) "phase_parse_tree_to_hlds",
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

#line 2566 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5 = {
  (MR_String) "phase_expand_types",
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

#line 2581 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6 = {
  (MR_String) "phase_type_check",
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

#line 2596 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7 = {
  (MR_String) "phase_inst_check",
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

#line 2611 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8 = {
  (MR_String) "phase_polymorphism",
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

#line 2626 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_9[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2631 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9 = {
  (MR_String) "phase_mode_check",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 9,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_9,
  NULL,
  NULL,
  NULL
};

#line 2646 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10 = {
  (MR_String) "phase_purity_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2661 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11 = {
  (MR_String) "phase_detism_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 10,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2676 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12 = {
  (MR_String) "phase_oisu_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 11,
  (MR_Integer) 12,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2691 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2696 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13 = {
  (MR_String) "phase_simplify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 13,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_13,
  NULL,
  NULL,
  NULL
};

#line 2711 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14 = {
  (MR_String) "phase_dead_code",
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

#line 2726 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15 = {
  (MR_String) "phase_termination_analysis",
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

#line 2741 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16 = {
  (MR_String) "phase_accumulator_intro",
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

#line 2756 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17 = {
  (MR_String) "phase_auto_parallelism",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2771 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_18 = {
  (MR_String) "phase_interface_gen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2786 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_19 = {
  (MR_String) "phase_code_gen",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 19,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2801 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[18] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_19
};

#line 2823 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9
};

#line 2828 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13
};

#line 2833 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3] = {
  {
    (MR_Integer) 18,
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

#line 2852 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[20] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_19,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6
};

#line 2876 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[20] = {
  (MR_Integer) 11,
  (MR_Integer) 15,
  (MR_Integer) 9,
  (MR_Integer) 17,
  (MR_Integer) 12,
  (MR_Integer) 5,
  (MR_Integer) 19,
  (MR_Integer) 6,
  (MR_Integer) 13,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 16,
  (MR_Integer) 3,
  (MR_Integer) 18,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2
};

#line 2900 "parse_tree.error_util.c"
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
  (MR_Integer) 20,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0
};

#line 2917 "parse_tree.error_util.c"
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

#line 2932 "parse_tree.error_util.c"
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

#line 2947 "parse_tree.error_util.c"
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

#line 2962 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2970 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2978 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2986 "parse_tree.error_util.c"
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

#line 3001 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 3008 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 3013 "parse_tree.error_util.c"
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

#line 3027 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 3035 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3043 "parse_tree.error_util.c"
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

#line 3060 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 3068 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 3075 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 3082 "parse_tree.error_util.c"
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

#line 3097 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3102 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 3111 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3116 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 3121 "parse_tree.error_util.c"
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

#line 3138 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3146 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3155 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3163 "parse_tree.error_util.c"
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

#line 3180 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3185 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0 = {
  (MR_String) "invis_order_default_start",
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

#line 3200 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3205 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1 = {
  (MR_String) "fixed",
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

#line 3220 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3225 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2 = {
  (MR_String) "quote",
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

#line 3240 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3245 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3 = {
  (MR_String) "int_fixed",
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

#line 3260 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3265 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4 = {
  (MR_String) "nth_fixed",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4,
  NULL,
  NULL,
  NULL
};

#line 3280 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5 = {
  (MR_String) "lower_case_next_if_not_first",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3295 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3300 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6 = {
  (MR_String) "prefix",
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

#line 3315 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3320 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7 = {
  (MR_String) "suffix",
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

#line 3335 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3340 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8 = {
  (MR_String) "words",
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

#line 3355 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3360 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9 = {
  (MR_String) "words_quote",
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

#line 3375 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3380 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10 = {
  (MR_String) "sym_name",
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

#line 3395 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3400 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11 = {
  (MR_String) "sym_name_and_arity",
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

#line 3415 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 3420 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12 = {
  (MR_String) "cons_id_and_maybe_arity",
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

#line 3435 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3440 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13 = {
  (MR_String) "top_ctor_of_type",
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

#line 3455 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3460 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14 = {
  (MR_String) "p_or_f",
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

#line 3475 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3480 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15 = {
  (MR_String) "simple_call",
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

#line 3495 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3500 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16 = {
  (MR_String) "decl",
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

#line 3515 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3520 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17 = {
  (MR_String) "pragma_decl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 17,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17,
  NULL,
  NULL,
  NULL
};

#line 3535 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18 = {
  (MR_String) "nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 18,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3550 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3555 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19 = {
  (MR_String) "nl_indent_delta",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 19,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19,
  NULL,
  NULL,
  NULL
};

#line 3570 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20 = {
  (MR_String) "blank_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3585 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3590 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21 = {
  (MR_String) "invis_order_default_end",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 16,
  (MR_Integer) 21,
  parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21,
  NULL,
  NULL,
  NULL
};

#line 3605 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20
};

#line 3612 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3617 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3622 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[17] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
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
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21
};

#line 3643 "parse_tree.error_util.c"
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
    (MR_Integer) 17,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3
  }
};

#line 3667 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[22] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9
};

#line 3693 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[22] = {
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 13,
  (MR_Integer) 16,
  (MR_Integer) 20,
  (MR_Integer) 21,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 1,
  (MR_Integer) 19,
  (MR_Integer) 11,
  (MR_Integer) 15,
  (MR_Integer) 2,
  (MR_Integer) 12,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 3719 "parse_tree.error_util.c"
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
  (MR_Integer) 22,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0
};

#line 3736 "parse_tree.error_util.c"
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

#line 3753 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3759 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3765 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3771 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3777 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3783 "parse_tree.error_util.c"
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

#line 3800 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3806 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3812 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3818 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3824 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3830 "parse_tree.error_util.c"
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

#line 3847 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3853 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3859 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3865 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3871 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3877 "parse_tree.error_util.c"
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

#line 3894 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3900 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3906 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3912 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3918 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3924 "parse_tree.error_util.c"
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

#line 3941 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3947 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3953 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3959 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3965 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3971 "parse_tree.error_util.c"
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

#line 3988 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3995 "parse_tree.error_util.c"
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

#line 4010 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 4015 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 4024 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 4029 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 4034 "parse_tree.error_util.c"
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

#line 4051 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4056 "parse_tree.error_util.c"
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

#line 4071 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4076 "parse_tree.error_util.c"
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

#line 4091 "parse_tree.error_util.c"
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

#line 4106 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 4111 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 4116 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4121 "parse_tree.error_util.c"
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

#line 4140 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4147 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 4154 "parse_tree.error_util.c"
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

#line 4171 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  (MR_Integer) 0
};

#line 4177 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  (MR_Integer) 1
};

#line 4183 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4189 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4195 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4201 "parse_tree.error_util.c"
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

#line 4218 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4223 "parse_tree.error_util.c"
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

#line 4238 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4243 "parse_tree.error_util.c"
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

#line 4258 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4263 "parse_tree.error_util.c"
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

#line 4278 "parse_tree.error_util.c"
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

#line 4293 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 4298 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 4303 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 4308 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4313 "parse_tree.error_util.c"
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

#line 4337 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4345 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4353 "parse_tree.error_util.c"
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

#line 4370 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4375 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4384 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4395 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4403 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4406 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4408 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4410 "parse_tree.error_util.c"
{
#line 4412 "parse_tree.error_util.c"
  {
#line 4414 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4417 "parse_tree.error_util.c"
    {
#line 4419 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4422 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4424 "parse_tree.error_util.c"
  }
#line 4426 "parse_tree.error_util.c"
}

#line 4429 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4432 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4434 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4436 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4438 "parse_tree.error_util.c"
{
#line 4440 "parse_tree.error_util.c"
  {
#line 4442 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4445 "parse_tree.error_util.c"
    {
#line 4447 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4450 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4452 "parse_tree.error_util.c"
  }
#line 4454 "parse_tree.error_util.c"
}

#line 4457 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 4460 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4462 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4464 "parse_tree.error_util.c"
{
#line 4466 "parse_tree.error_util.c"
  {
#line 4468 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4471 "parse_tree.error_util.c"
    {
#line 4473 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____already_printed_verbose_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4476 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4478 "parse_tree.error_util.c"
  }
#line 4480 "parse_tree.error_util.c"
}

#line 4483 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 4486 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4488 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4490 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4492 "parse_tree.error_util.c"
{
#line 4494 "parse_tree.error_util.c"
  {
#line 4496 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4499 "parse_tree.error_util.c"
    {
#line 4501 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____already_printed_verbose_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4504 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4506 "parse_tree.error_util.c"
  }
#line 4508 "parse_tree.error_util.c"
}

#line 4511 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4514 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4516 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4518 "parse_tree.error_util.c"
{
#line 4520 "parse_tree.error_util.c"
  {
#line 4522 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4525 "parse_tree.error_util.c"
    {
#line 4527 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4530 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4532 "parse_tree.error_util.c"
  }
#line 4534 "parse_tree.error_util.c"
}

#line 4537 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4540 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4542 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4544 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4546 "parse_tree.error_util.c"
{
#line 4548 "parse_tree.error_util.c"
  {
#line 4550 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4553 "parse_tree.error_util.c"
    {
#line 4555 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4558 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4560 "parse_tree.error_util.c"
  }
#line 4562 "parse_tree.error_util.c"
}

#line 4565 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4568 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4570 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4572 "parse_tree.error_util.c"
{
#line 4574 "parse_tree.error_util.c"
  {
#line 4576 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4579 "parse_tree.error_util.c"
    {
#line 4581 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4584 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4586 "parse_tree.error_util.c"
  }
#line 4588 "parse_tree.error_util.c"
}

#line 4591 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4594 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4596 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4598 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4600 "parse_tree.error_util.c"
{
#line 4602 "parse_tree.error_util.c"
  {
#line 4604 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4607 "parse_tree.error_util.c"
    {
#line 4609 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4612 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4614 "parse_tree.error_util.c"
  }
#line 4616 "parse_tree.error_util.c"
}

#line 4619 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4622 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4624 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4626 "parse_tree.error_util.c"
{
#line 4628 "parse_tree.error_util.c"
  {
#line 4630 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4633 "parse_tree.error_util.c"
    {
#line 4635 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4638 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4640 "parse_tree.error_util.c"
  }
#line 4642 "parse_tree.error_util.c"
}

#line 4645 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4648 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4650 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4652 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4654 "parse_tree.error_util.c"
{
#line 4656 "parse_tree.error_util.c"
  {
#line 4658 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4661 "parse_tree.error_util.c"
    {
#line 4663 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4666 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4668 "parse_tree.error_util.c"
  }
#line 4670 "parse_tree.error_util.c"
}

#line 4673 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4676 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4678 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4680 "parse_tree.error_util.c"
{
#line 4682 "parse_tree.error_util.c"
  {
#line 4684 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4687 "parse_tree.error_util.c"
    {
#line 4689 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4692 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4694 "parse_tree.error_util.c"
  }
#line 4696 "parse_tree.error_util.c"
}

#line 4699 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4702 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4704 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4706 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4708 "parse_tree.error_util.c"
{
#line 4710 "parse_tree.error_util.c"
  {
#line 4712 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4715 "parse_tree.error_util.c"
    {
#line 4717 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4720 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4722 "parse_tree.error_util.c"
  }
#line 4724 "parse_tree.error_util.c"
}

#line 4727 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4730 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4732 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4734 "parse_tree.error_util.c"
{
#line 4736 "parse_tree.error_util.c"
  {
#line 4738 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4741 "parse_tree.error_util.c"
    {
#line 4743 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4746 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4748 "parse_tree.error_util.c"
  }
#line 4750 "parse_tree.error_util.c"
}

#line 4753 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4756 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4758 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4760 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4762 "parse_tree.error_util.c"
{
#line 4764 "parse_tree.error_util.c"
  {
#line 4766 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4769 "parse_tree.error_util.c"
    {
#line 4771 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4774 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4776 "parse_tree.error_util.c"
  }
#line 4778 "parse_tree.error_util.c"
}

#line 4781 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4784 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4786 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4788 "parse_tree.error_util.c"
{
#line 4790 "parse_tree.error_util.c"
  {
#line 4792 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4795 "parse_tree.error_util.c"
    {
#line 4797 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4800 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4802 "parse_tree.error_util.c"
  }
#line 4804 "parse_tree.error_util.c"
}

#line 4807 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4810 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4812 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4814 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4816 "parse_tree.error_util.c"
{
#line 4818 "parse_tree.error_util.c"
  {
#line 4820 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4823 "parse_tree.error_util.c"
    {
#line 4825 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4828 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4830 "parse_tree.error_util.c"
  }
#line 4832 "parse_tree.error_util.c"
}

#line 4835 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4838 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4840 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4842 "parse_tree.error_util.c"
{
#line 4844 "parse_tree.error_util.c"
  {
#line 4846 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4849 "parse_tree.error_util.c"
    {
#line 4851 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4854 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4856 "parse_tree.error_util.c"
  }
#line 4858 "parse_tree.error_util.c"
}

#line 4861 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4864 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4866 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4868 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4870 "parse_tree.error_util.c"
{
#line 4872 "parse_tree.error_util.c"
  {
#line 4874 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4877 "parse_tree.error_util.c"
    {
#line 4879 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4882 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4884 "parse_tree.error_util.c"
  }
#line 4886 "parse_tree.error_util.c"
}

#line 4889 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4892 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4894 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4896 "parse_tree.error_util.c"
{
#line 4898 "parse_tree.error_util.c"
  {
#line 4900 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4903 "parse_tree.error_util.c"
    {
#line 4905 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4908 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4910 "parse_tree.error_util.c"
  }
#line 4912 "parse_tree.error_util.c"
}

#line 4915 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4918 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4920 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4922 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4924 "parse_tree.error_util.c"
{
#line 4926 "parse_tree.error_util.c"
  {
#line 4928 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4931 "parse_tree.error_util.c"
    {
#line 4933 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4936 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4938 "parse_tree.error_util.c"
  }
#line 4940 "parse_tree.error_util.c"
}

#line 4943 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4946 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4948 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4950 "parse_tree.error_util.c"
{
#line 4952 "parse_tree.error_util.c"
  {
#line 4954 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4957 "parse_tree.error_util.c"
    {
#line 4959 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4962 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4964 "parse_tree.error_util.c"
  }
#line 4966 "parse_tree.error_util.c"
}

#line 4969 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4972 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4974 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4976 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4978 "parse_tree.error_util.c"
{
#line 4980 "parse_tree.error_util.c"
  {
#line 4982 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4985 "parse_tree.error_util.c"
    {
#line 4987 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4990 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4992 "parse_tree.error_util.c"
  }
#line 4994 "parse_tree.error_util.c"
}

#line 4997 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 5000 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5002 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5004 "parse_tree.error_util.c"
{
#line 5006 "parse_tree.error_util.c"
  {
#line 5008 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5011 "parse_tree.error_util.c"
    {
#line 5013 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5016 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5018 "parse_tree.error_util.c"
  }
#line 5020 "parse_tree.error_util.c"
}

#line 5023 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 5026 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5028 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5030 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5032 "parse_tree.error_util.c"
{
#line 5034 "parse_tree.error_util.c"
  {
#line 5036 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5039 "parse_tree.error_util.c"
    {
#line 5041 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5044 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5046 "parse_tree.error_util.c"
  }
#line 5048 "parse_tree.error_util.c"
}

#line 5051 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 5054 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5056 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5058 "parse_tree.error_util.c"
{
#line 5060 "parse_tree.error_util.c"
  {
#line 5062 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5065 "parse_tree.error_util.c"
    {
#line 5067 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5070 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5072 "parse_tree.error_util.c"
  }
#line 5074 "parse_tree.error_util.c"
}

#line 5077 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 5080 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5082 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5084 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5086 "parse_tree.error_util.c"
{
#line 5088 "parse_tree.error_util.c"
  {
#line 5090 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5093 "parse_tree.error_util.c"
    {
#line 5095 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5098 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5100 "parse_tree.error_util.c"
  }
#line 5102 "parse_tree.error_util.c"
}

#line 5105 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 5108 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5110 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5112 "parse_tree.error_util.c"
{
#line 5114 "parse_tree.error_util.c"
  {
#line 5116 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5119 "parse_tree.error_util.c"
    {
#line 5121 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5124 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5126 "parse_tree.error_util.c"
  }
#line 5128 "parse_tree.error_util.c"
}

#line 5131 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 5134 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5136 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5138 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5140 "parse_tree.error_util.c"
{
#line 5142 "parse_tree.error_util.c"
  {
#line 5144 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5147 "parse_tree.error_util.c"
    {
#line 5149 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5152 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5154 "parse_tree.error_util.c"
  }
#line 5156 "parse_tree.error_util.c"
}

#line 5159 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 5162 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5164 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5166 "parse_tree.error_util.c"
{
#line 5168 "parse_tree.error_util.c"
  {
#line 5170 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5173 "parse_tree.error_util.c"
    {
#line 5175 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5178 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5180 "parse_tree.error_util.c"
  }
#line 5182 "parse_tree.error_util.c"
}

#line 5185 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 5188 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5190 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5192 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5194 "parse_tree.error_util.c"
{
#line 5196 "parse_tree.error_util.c"
  {
#line 5198 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5201 "parse_tree.error_util.c"
    {
#line 5203 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5206 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5208 "parse_tree.error_util.c"
  }
#line 5210 "parse_tree.error_util.c"
}

#line 5213 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 5216 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5218 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5220 "parse_tree.error_util.c"
{
#line 5222 "parse_tree.error_util.c"
  {
#line 5224 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5227 "parse_tree.error_util.c"
    {
#line 5229 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5232 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5234 "parse_tree.error_util.c"
  }
#line 5236 "parse_tree.error_util.c"
}

#line 5239 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 5242 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5244 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5246 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5248 "parse_tree.error_util.c"
{
#line 5250 "parse_tree.error_util.c"
  {
#line 5252 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5255 "parse_tree.error_util.c"
    {
#line 5257 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5260 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5262 "parse_tree.error_util.c"
  }
#line 5264 "parse_tree.error_util.c"
}

#line 5267 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 5270 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5272 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5274 "parse_tree.error_util.c"
{
#line 5276 "parse_tree.error_util.c"
  {
#line 5278 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5281 "parse_tree.error_util.c"
    {
#line 5283 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5286 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5288 "parse_tree.error_util.c"
  }
#line 5290 "parse_tree.error_util.c"
}

#line 5293 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 5296 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5298 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5300 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5302 "parse_tree.error_util.c"
{
#line 5304 "parse_tree.error_util.c"
  {
#line 5306 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5309 "parse_tree.error_util.c"
    {
#line 5311 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5314 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5316 "parse_tree.error_util.c"
  }
#line 5318 "parse_tree.error_util.c"
}

#line 5321 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 5324 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5326 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5328 "parse_tree.error_util.c"
{
#line 5330 "parse_tree.error_util.c"
  {
#line 5332 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5335 "parse_tree.error_util.c"
    {
#line 5337 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5340 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5342 "parse_tree.error_util.c"
  }
#line 5344 "parse_tree.error_util.c"
}

#line 5347 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 5350 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5352 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5354 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5356 "parse_tree.error_util.c"
{
#line 5358 "parse_tree.error_util.c"
  {
#line 5360 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5363 "parse_tree.error_util.c"
    {
#line 5365 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5368 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5370 "parse_tree.error_util.c"
  }
#line 5372 "parse_tree.error_util.c"
}

#line 5375 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 5378 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5380 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5382 "parse_tree.error_util.c"
{
#line 5384 "parse_tree.error_util.c"
  {
#line 5386 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5389 "parse_tree.error_util.c"
    {
#line 5391 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____verbose_always_or_once_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5394 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5396 "parse_tree.error_util.c"
  }
#line 5398 "parse_tree.error_util.c"
}

#line 5401 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 5404 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5406 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5408 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5410 "parse_tree.error_util.c"
{
#line 5412 "parse_tree.error_util.c"
  {
#line 5414 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5417 "parse_tree.error_util.c"
    {
#line 5419 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____verbose_always_or_once_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5422 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5424 "parse_tree.error_util.c"
  }
#line 5426 "parse_tree.error_util.c"
}

#line 5429 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 5432 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5434 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5436 "parse_tree.error_util.c"
{
#line 5438 "parse_tree.error_util.c"
  {
#line 5440 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5443 "parse_tree.error_util.c"
    {
#line 5445 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5448 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5450 "parse_tree.error_util.c"
  }
#line 5452 "parse_tree.error_util.c"
}

#line 5455 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5458 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5460 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5462 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5464 "parse_tree.error_util.c"
{
#line 5466 "parse_tree.error_util.c"
  {
#line 5468 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5471 "parse_tree.error_util.c"
    {
#line 5473 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5476 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5478 "parse_tree.error_util.c"
  }
#line 5480 "parse_tree.error_util.c"
}

#line 711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__711__1_1_p_0(
#line 711 "error_util.m"
  MR_Word parse_tree__error_util__LambdaHeadVar__1_21)
#line 711 "error_util.m"
{
#line 711 "error_util.m"
  {
#line 711 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 711 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 711 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 711 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 1)));
#line 711 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 0)));
#line 711 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__LambdaHeadVar__1_21, (MR_Integer) 2)));

#line 734 "error_util.m"
#line 734 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Phase_31)) {
#line 734 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 734 "error_util.m"
      case (MR_Integer) 0:
#line 734 "error_util.m"
#line 734 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__Phase_31)) {
#line 734 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 734 "error_util.m"
          case (MR_Integer) 0:
#line 734 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 1:
#line 735 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 2:
#line 736 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 3:
#line 737 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 4:
#line 738 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 5:
#line 739 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 6:
#line 740 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 7:
#line 741 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 8:
#line 742 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 9:
#line 744 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 10:
#line 745 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 11:
#line 746 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 12:
#line 748 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 13:
#line 749 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 14:
#line 750 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 15:
#line 751 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 16:
#line 752 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
          case (MR_Integer) 17:
#line 753 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 734 "error_util.m"
            break;
#line 734 "error_util.m"
        }
#line 734 "error_util.m"
        break;
#line 734 "error_util.m"
      case (MR_Integer) 1:
#line 743 "error_util.m"
        {
#line 743 "error_util.m"
          MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 743 "error_util.m"
          {
#line 743 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 743 "error_util.m"
          }
#line 743 "error_util.m"
        }
#line 734 "error_util.m"
        break;
#line 734 "error_util.m"
      case (MR_Integer) 2:
#line 747 "error_util.m"
        {
#line 747 "error_util.m"
          MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 747 "error_util.m"
          {
#line 747 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 747 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 747 "error_util.m"
          }
#line 747 "error_util.m"
        }
#line 734 "error_util.m"
        break;
#line 734 "error_util.m"
    }
#line 713 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 713 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 713 "error_util.m"
      {
#line 713 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 713 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 713 "error_util.m"
      }
#line 711 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 711 "error_util.m"
  }
#line 711 "error_util.m"
}

#line 1504 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1504 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1504 "error_util.m"
{
#line 1504 "error_util.m"
  {
#line 1504 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1504 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1504 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1504 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1504 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5712 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1504 "error_util.m"
    else
#line 1504 "error_util.m"
#line 1504 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1504 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
        case (MR_Integer) 0:
#line 1504 "error_util.m"
#line 1504 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1504 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
            case (MR_Integer) 0:
#line 1504 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1504 "error_util.m"
              break;
#line 1504 "error_util.m"
            case (MR_Integer) 1:
#line 5736 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
              break;
#line 1504 "error_util.m"
            case (MR_Integer) 2:
#line 5742 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
              break;
#line 1504 "error_util.m"
            case (MR_Integer) 3:
#line 5748 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
              break;
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 1:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1504 "error_util.m"
#line 1504 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1504 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
              case (MR_Integer) 0:
#line 5770 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 1:
#line 1504 "error_util.m"
                {
#line 1504 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1504 "error_util.m"
                  {
#line 1504 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
                  }
#line 1504 "error_util.m"
                }
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 2:
#line 5792 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 3:
#line 5798 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
            }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 2:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1504 "error_util.m"
#line 1504 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1504 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
              case (MR_Integer) 0:
#line 5822 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 1:
#line 5828 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 2:
#line 1504 "error_util.m"
                {
#line 1504 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1504 "error_util.m"
                  {
#line 1504 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
                  }
#line 1504 "error_util.m"
                }
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 3:
#line 5850 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
            }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 3:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1504 "error_util.m"
#line 1504 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1504 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
              case (MR_Integer) 0:
#line 5874 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 1:
#line 5880 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 2:
#line 5886 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
              case (MR_Integer) 3:
#line 1504 "error_util.m"
                {
#line 1504 "error_util.m"
                  MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1504 "error_util.m"
                  {
#line 1504 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
                  }
#line 1504 "error_util.m"
                }
#line 1504 "error_util.m"
                break;
#line 1504 "error_util.m"
            }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
      }
#line 1504 "error_util.m"
  }
#line 1504 "error_util.m"
}

#line 1504 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1504 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1504 "error_util.m"
{
#line 1504 "error_util.m"
  {
#line 1504 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1504 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1504 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1504 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1504 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1504 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1504 "error_util.m"
    else
#line 1504 "error_util.m"
#line 1504 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1504 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "error_util.m"
        case (MR_Integer) 0:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1504 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1504 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 1:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1504 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1504 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1504 "error_util.m"
              {
#line 1504 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5982 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1504 "error_util.m"
              }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 2:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1504 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1504 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1504 "error_util.m"
              {
#line 1504 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6007 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1504 "error_util.m"
              }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
        case (MR_Integer) 3:
#line 1504 "error_util.m"
          {
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1504 "error_util.m"
            MR_String parse_tree__error_util__V_8_8;

#line 1504 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1504 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1504 "error_util.m"
              {
#line 1504 "error_util.m"
                parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6032 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1504 "error_util.m"
              }
#line 1504 "error_util.m"
          }
#line 1504 "error_util.m"
          break;
#line 1504 "error_util.m"
      }
#line 1504 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1504 "error_util.m"
  }
#line 1504 "error_util.m"
}

#line 168 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0(
#line 168 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 168 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 168 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 168 "error_util.m"
{
#line 168 "error_util.m"
  {
#line 168 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 168 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 168 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 168 "error_util.m"
    {
#line 168 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 168 "error_util.m"
  }
#line 168 "error_util.m"
}

#line 168 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0(
#line 168 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 168 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 168 "error_util.m"
{
#line 6088 "parse_tree.error_util.c"
  {
#line 6090 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6093 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6095 "parse_tree.error_util.c"
  }
#line 168 "error_util.m"
}

#line 1611 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1611 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1611 "error_util.m"
{
#line 1611 "error_util.m"
  {
#line 1611 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1611 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1611 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1611 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1611 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6124 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1611 "error_util.m"
    else
#line 1611 "error_util.m"
#line 1611 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1611 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "error_util.m"
        case (MR_Integer) 0:
#line 1611 "error_util.m"
#line 1611 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1611 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "error_util.m"
            case (MR_Integer) 0:
#line 1611 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1611 "error_util.m"
              break;
#line 1611 "error_util.m"
            case (MR_Integer) 1:
#line 6148 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1611 "error_util.m"
              break;
#line 1611 "error_util.m"
            case (MR_Integer) 2:
#line 6154 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1611 "error_util.m"
              break;
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
        case (MR_Integer) 1:
#line 1611 "error_util.m"
          {
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1611 "error_util.m"
#line 1611 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1611 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "error_util.m"
              case (MR_Integer) 0:
#line 6176 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
              case (MR_Integer) 1:
#line 1611 "error_util.m"
                {
#line 1611 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1611 "error_util.m"
                  {
#line 1611 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
                  }
#line 1611 "error_util.m"
                }
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
              case (MR_Integer) 2:
#line 6198 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
            }
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
        case (MR_Integer) 2:
#line 1611 "error_util.m"
          {
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1611 "error_util.m"
#line 1611 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1611 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "error_util.m"
              case (MR_Integer) 0:
#line 6222 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
              case (MR_Integer) 1:
#line 6228 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
              case (MR_Integer) 2:
#line 1611 "error_util.m"
                {
#line 1611 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1611 "error_util.m"
                  {
#line 1611 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
                  }
#line 1611 "error_util.m"
                }
#line 1611 "error_util.m"
                break;
#line 1611 "error_util.m"
            }
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
      }
#line 1611 "error_util.m"
  }
#line 1611 "error_util.m"
}

#line 1611 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1611 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1611 "error_util.m"
{
#line 1611 "error_util.m"
  {
#line 1611 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1611 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1611 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1611 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1611 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1611 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1611 "error_util.m"
    else
#line 1611 "error_util.m"
#line 1611 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1611 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1611 "error_util.m"
        case (MR_Integer) 0:
#line 1611 "error_util.m"
          {
#line 1611 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1611 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1611 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
        case (MR_Integer) 1:
#line 1611 "error_util.m"
          {
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1611 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1611 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1611 "error_util.m"
              {
#line 1611 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6324 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1611 "error_util.m"
              }
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
        case (MR_Integer) 2:
#line 1611 "error_util.m"
          {
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1611 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1611 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1611 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1611 "error_util.m"
              {
#line 1611 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6349 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1611 "error_util.m"
              }
#line 1611 "error_util.m"
          }
#line 1611 "error_util.m"
          break;
#line 1611 "error_util.m"
      }
#line 1611 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1611 "error_util.m"
  }
#line 1611 "error_util.m"
}

#line 1486 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1486 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1486 "error_util.m"
{
#line 1486 "error_util.m"
  {
#line 1486 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1486 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1486 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1486 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1486 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6390 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1486 "error_util.m"
    else
#line 1486 "error_util.m"
      {
#line 1486 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1486 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1486 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1486 "error_util.m"
        {
#line 1486 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 6416 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1486 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1486 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1486 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1486 "error_util.m"
        else
#line 1486 "error_util.m"
          {
#line 1486 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1486 "error_util.m"
            {
#line 1486 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 6436 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1486 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1486 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1486 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1486 "error_util.m"
            else
#line 1486 "error_util.m"
              {
#line 1486 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
              }
#line 1486 "error_util.m"
          }
#line 1486 "error_util.m"
      }
#line 1486 "error_util.m"
  }
#line 1486 "error_util.m"
}

#line 1486 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1486 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1486 "error_util.m"
{
#line 1486 "error_util.m"
  {
#line 1486 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1486 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1486 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1486 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1486 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1486 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1486 "error_util.m"
    else
#line 1486 "error_util.m"
      {
#line 1486 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1486 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1486 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 6501 "parse_tree.error_util.c"
        {
#line 6503 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1486 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1486 "error_util.m"
          {
#line 6510 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1486 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6514 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1486 "error_util.m"
          }
#line 1486 "error_util.m"
      }
#line 1486 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1486 "error_util.m"
  }
#line 1486 "error_util.m"
}

#line 105 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0(
#line 105 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 105 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 105 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 105 "error_util.m"
{
#line 105 "error_util.m"
  {
#line 105 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 105 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 105 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 105 "error_util.m"
    {
#line 105 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 105 "error_util.m"
  }
#line 105 "error_util.m"
}

#line 105 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0(
#line 105 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 105 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 105 "error_util.m"
{
#line 6566 "parse_tree.error_util.c"
  {
#line 6568 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6571 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6573 "parse_tree.error_util.c"
  }
#line 105 "error_util.m"
}

#line 152 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
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
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 152 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 152 "error_util.m"
    {
#line 152 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 152 "error_util.m"
  }
#line 152 "error_util.m"
}

#line 152 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 152 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 152 "error_util.m"
{
#line 6617 "parse_tree.error_util.c"
  {
#line 6619 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6622 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6624 "parse_tree.error_util.c"
  }
#line 152 "error_util.m"
}

#line 960 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 960 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 960 "error_util.m"
{
#line 960 "error_util.m"
  {
#line 960 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 960 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 960 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 960 "error_util.m"
    {
#line 960 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 960 "error_util.m"
  }
#line 960 "error_util.m"
}

#line 960 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 960 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 960 "error_util.m"
{
#line 6668 "parse_tree.error_util.c"
  {
#line 6670 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6673 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6675 "parse_tree.error_util.c"
  }
#line 960 "error_util.m"
}

#line 964 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 964 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 964 "error_util.m"
{
#line 964 "error_util.m"
  {
#line 964 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 964 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 964 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 964 "error_util.m"
    {
#line 964 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 964 "error_util.m"
  }
#line 964 "error_util.m"
}

#line 964 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 964 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 964 "error_util.m"
{
#line 6719 "parse_tree.error_util.c"
  {
#line 6721 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6724 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6726 "parse_tree.error_util.c"
  }
#line 964 "error_util.m"
}

#line 1096 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1096 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1096 "error_util.m"
{
#line 1096 "error_util.m"
  {
#line 1096 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1096 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1096 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1096 "error_util.m"
    {
#line 1096 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 1096 "error_util.m"
  }
#line 1096 "error_util.m"
}

#line 1096 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1096 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1096 "error_util.m"
{
#line 6770 "parse_tree.error_util.c"
  {
#line 6772 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6775 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6777 "parse_tree.error_util.c"
  }
#line 1096 "error_util.m"
}

#line 389 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 389 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 389 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 389 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 389 "error_util.m"
{
#line 389 "error_util.m"
  {
#line 389 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 389 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 389 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 389 "error_util.m"
    {
#line 389 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 389 "error_util.m"
  }
#line 389 "error_util.m"
}

#line 389 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 389 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 389 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 389 "error_util.m"
{
#line 389 "error_util.m"
  {
#line 389 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 389 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 389 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 389 "error_util.m"
    {
#line 389 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 389 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 389 "error_util.m"
  }
#line 389 "error_util.m"
}

#line 290 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 290 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 290 "error_util.m"
{
#line 290 "error_util.m"
  {
#line 290 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 290 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_45 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 290 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_46 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 290 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_45 == parse_tree__error_util__CastY_46);
#line 290 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6866 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "error_util.m"
    else
#line 290 "error_util.m"
      {
#line 290 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 290 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 290 "error_util.m"
        {
#line 290 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 290 "error_util.m"
        {
#line 290 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 290 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 290 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6891 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "error_util.m"
        else
#line 290 "error_util.m"
          {
#line 290 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 290 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6901 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "error_util.m"
            else
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 290 "error_util.m"
#line 290 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 290 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
                  case (MR_Integer) 0:
#line 290 "error_util.m"
#line 290 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 290 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
                      case (MR_Integer) 0:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 1:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 2:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                    }
#line 290 "error_util.m"
                    break;
#line 290 "error_util.m"
                  case (MR_Integer) 1:
#line 290 "error_util.m"
                    {
#line 290 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 290 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 290 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "error_util.m"
                          {
#line 290 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                          }
#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                    }
#line 290 "error_util.m"
                    break;
#line 290 "error_util.m"
                  case (MR_Integer) 2:
#line 290 "error_util.m"
                    {
#line 290 "error_util.m"
                      MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "error_util.m"
                      MR_String parse_tree__error_util__V_10_10;

#line 290 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 290 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "error_util.m"
                          {
#line 290 "error_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                          }
#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                    }
#line 290 "error_util.m"
                    break;
#line 290 "error_util.m"
                  case (MR_Integer) 3:
#line 290 "error_util.m"
#line 290 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 290 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
                      case (MR_Integer) 0:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_12_12;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 1:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_14_14;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 2:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_16_16;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 3:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_18_18;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 4:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_20_20;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 5:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_22_22;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 6:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_24_24;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 7:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_26_26;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 8:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_28_28;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 9:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_30_30;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                parse_tree__prog_data____Compare____cons_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 10:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_32_32;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 11:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_34_34;
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_66_66;
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_67_67;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              parse_tree__error_util__V_66_66 = (MR_Integer) parse_tree__error_util__V_33_33;
#line 290 "error_util.m"
                              parse_tree__error_util__V_67_67 = (MR_Integer) parse_tree__error_util__V_34_34;
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_66_66, parse_tree__error_util__V_67_67);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 12:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Word parse_tree__error_util__V_36_36;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 13:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_38_38;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 14:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_String parse_tree__error_util__V_40_40;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 15:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_42_42;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_41_41, parse_tree__error_util__V_42_42);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                      case (MR_Integer) 16:
#line 290 "error_util.m"
                        {
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "error_util.m"
                          MR_Integer parse_tree__error_util__V_44_44;

#line 290 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 290 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                            {
#line 290 "error_util.m"
                              parse_tree__error_util__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "error_util.m"
                              {
#line 290 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_43_43, parse_tree__error_util__V_44_44);
                              }
#line 290 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
                            }
#line 290 "error_util.m"
                        }
#line 290 "error_util.m"
                        break;
#line 290 "error_util.m"
                    }
#line 290 "error_util.m"
                    break;
#line 290 "error_util.m"
                }
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 290 "error_util.m"
                else
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 290 "error_util.m"
                    return;
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
          }
#line 290 "error_util.m"
      }
#line 290 "error_util.m"
  }
#line 290 "error_util.m"
}

#line 290 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 290 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 290 "error_util.m"
{
#line 290 "error_util.m"
  {
#line 290 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 290 "error_util.m"
#line 290 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 290 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
      case (MR_Integer) 0:
#line 290 "error_util.m"
#line 290 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 290 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
          case (MR_Integer) 0:
#line 7605 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 1:
#line 7611 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 2:
#line 7617 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 20;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
        }
#line 290 "error_util.m"
        break;
#line 290 "error_util.m"
      case (MR_Integer) 1:
#line 7627 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 290 "error_util.m"
        break;
#line 290 "error_util.m"
      case (MR_Integer) 2:
#line 7633 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 290 "error_util.m"
        break;
#line 290 "error_util.m"
      case (MR_Integer) 3:
#line 290 "error_util.m"
#line 290 "error_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 290 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
          case (MR_Integer) 0:
#line 7646 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 1:
#line 7652 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 2:
#line 7658 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 3:
#line 7664 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 4:
#line 7670 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 5:
#line 7676 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 6:
#line 7682 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 7:
#line 7688 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 8:
#line 7694 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 9:
#line 7700 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 10:
#line 7706 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 11:
#line 7712 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 12:
#line 7718 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 13:
#line 7724 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 14:
#line 7730 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 15:
#line 7736 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
          case (MR_Integer) 16:
#line 7742 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 21;
#line 290 "error_util.m"
            break;
#line 290 "error_util.m"
        }
#line 290 "error_util.m"
        break;
#line 290 "error_util.m"
    }
#line 290 "error_util.m"
  }
#line 290 "error_util.m"
}

#line 290 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 290 "error_util.m"
{
#line 290 "error_util.m"
  {
#line 290 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 290 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_47 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 290 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_48 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 290 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_47 == parse_tree__error_util__CastY_48);
#line 290 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 290 "error_util.m"
    else
#line 290 "error_util.m"
#line 290 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 290 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
        case (MR_Integer) 0:
#line 290 "error_util.m"
#line 290 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 290 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
            case (MR_Integer) 0:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 1:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 2:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_44 == parse_tree__error_util__CastX_43);
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
          }
#line 290 "error_util.m"
          break;
#line 290 "error_util.m"
        case (MR_Integer) 1:
#line 290 "error_util.m"
          {
#line 290 "error_util.m"
            MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "error_util.m"
            MR_Integer parse_tree__error_util__V_4_4;

#line 290 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 290 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7861 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_4_4);
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
          }
#line 290 "error_util.m"
          break;
#line 290 "error_util.m"
        case (MR_Integer) 2:
#line 290 "error_util.m"
          {
#line 290 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 290 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 290 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7886 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
          }
#line 290 "error_util.m"
          break;
#line 290 "error_util.m"
        case (MR_Integer) 3:
#line 290 "error_util.m"
#line 290 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 290 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 290 "error_util.m"
            case (MR_Integer) 0:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_8_8;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7918 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 1:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_10_10;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7943 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 2:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_12_12;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7968 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_12_12);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 3:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_16_16;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7993 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 4:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_18_18;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8018 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 5:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_20_20;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8043 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 6:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_22_22;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8068 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 7:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8093 "parse_tree.error_util.c"
                    {
#line 8095 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                    }
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 8:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8121 "parse_tree.error_util.c"
                    {
#line 8123 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                    }
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 9:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8149 "parse_tree.error_util.c"
                    {
#line 8151 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                    }
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 10:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8177 "parse_tree.error_util.c"
                    {
#line 8179 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                    }
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 11:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8205 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == parse_tree__error_util__V_32_32);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 12:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Word parse_tree__error_util__V_34_34;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8230 "parse_tree.error_util.c"
                    {
#line 8232 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                    }
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 13:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_36_36;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8258 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 14:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_String parse_tree__error_util__V_38_38;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8283 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38) == 0);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 15:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_42_42;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8308 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_41_41 == parse_tree__error_util__V_42_42);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
            case (MR_Integer) 16:
#line 290 "error_util.m"
              {
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46;

#line 290 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 290 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 290 "error_util.m"
                  {
#line 290 "error_util.m"
                    parse_tree__error_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8333 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_45_45 == parse_tree__error_util__V_46_46);
#line 290 "error_util.m"
                  }
#line 290 "error_util.m"
              }
#line 290 "error_util.m"
              break;
#line 290 "error_util.m"
          }
#line 290 "error_util.m"
          break;
#line 290 "error_util.m"
      }
#line 290 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 290 "error_util.m"
  }
#line 290 "error_util.m"
}

#line 706 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 706 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 706 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 706 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 706 "error_util.m"
{
#line 706 "error_util.m"
  {
#line 706 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 706 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 706 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 706 "error_util.m"
    {
#line 706 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 706 "error_util.m"
  }
#line 706 "error_util.m"
}

#line 706 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 706 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 706 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 706 "error_util.m"
{
#line 706 "error_util.m"
  {
#line 706 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 706 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 706 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 706 "error_util.m"
    {
#line 706 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 706 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 706 "error_util.m"
  }
#line 706 "error_util.m"
}

#line 68 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0(
#line 68 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 68 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 68 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 68 "error_util.m"
{
#line 68 "error_util.m"
  {
#line 68 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 68 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 68 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 68 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 68 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8438 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "error_util.m"
    else
#line 68 "error_util.m"
      {
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 68 "error_util.m"
        {
#line 68 "error_util.m"
          parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_10_10, parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
        }
#line 8464 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 68 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 68 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 68 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 68 "error_util.m"
        else
#line 68 "error_util.m"
          {
#line 68 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 68 "error_util.m"
            {
#line 68 "error_util.m"
              parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 8484 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 68 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 68 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 68 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 68 "error_util.m"
            else
#line 68 "error_util.m"
              {
#line 68 "error_util.m"
                {
#line 68 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[9], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
                }
#line 68 "error_util.m"
              }
#line 68 "error_util.m"
          }
#line 68 "error_util.m"
      }
#line 68 "error_util.m"
  }
#line 68 "error_util.m"
}

#line 68 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0(
#line 68 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 68 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 68 "error_util.m"
{
#line 68 "error_util.m"
  {
#line 68 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 68 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 68 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 68 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 68 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 68 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 68 "error_util.m"
    else
#line 68 "error_util.m"
      {
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_11_11;
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 8555 "parse_tree.error_util.c"
        {
#line 8557 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 68 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 68 "error_util.m"
          {
#line 8564 "parse_tree.error_util.c"
            {
#line 8566 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 68 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 68 "error_util.m"
              {
#line 8573 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[9];
#line 8575 "parse_tree.error_util.c"
                {
#line 8577 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_11_11, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_8_8)));
                }
#line 68 "error_util.m"
              }
#line 68 "error_util.m"
          }
#line 68 "error_util.m"
      }
#line 68 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 68 "error_util.m"
  }
#line 68 "error_util.m"
}

#line 75 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0(
#line 75 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 75 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 75 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 75 "error_util.m"
{
#line 75 "error_util.m"
  {
#line 75 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 75 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 75 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 75 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 75 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 8617 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "error_util.m"
    else
#line 75 "error_util.m"
#line 75 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 75 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
        case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 75 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
            case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                    case (MR_Integer) 0:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 1:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 2:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                  }
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
                case (MR_Integer) 1:
#line 8671 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
            case (MR_Integer) 1:
#line 75 "error_util.m"
#line 75 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                    case (MR_Integer) 0:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 1:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 2:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                  }
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
                case (MR_Integer) 1:
#line 8717 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
            case (MR_Integer) 2:
#line 75 "error_util.m"
#line 75 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                    case (MR_Integer) 0:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 1:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                    case (MR_Integer) 2:
#line 75 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "error_util.m"
                      break;
#line 75 "error_util.m"
                  }
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
                case (MR_Integer) 1:
#line 8763 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "error_util.m"
                  break;
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
          }
#line 75 "error_util.m"
          break;
#line 75 "error_util.m"
        case (MR_Integer) 1:
#line 75 "error_util.m"
          {
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "error_util.m"
#line 75 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
              case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 75 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
                  case (MR_Integer) 0:
#line 8802 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                    break;
#line 75 "error_util.m"
                  case (MR_Integer) 1:
#line 8808 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                    break;
#line 75 "error_util.m"
                  case (MR_Integer) 2:
#line 8814 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "error_util.m"
                    break;
#line 75 "error_util.m"
                }
#line 75 "error_util.m"
                break;
#line 75 "error_util.m"
              case (MR_Integer) 1:
#line 75 "error_util.m"
                {
#line 75 "error_util.m"
                  MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "error_util.m"
                  MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 75 "error_util.m"
                  MR_Word parse_tree__error_util__V_36_36;
#line 75 "error_util.m"
                  MR_Integer parse_tree__error_util__V_49_49 = (MR_Integer) parse_tree__error_util__V_48_48;
#line 75 "error_util.m"
                  MR_Integer parse_tree__error_util__V_50_50 = (MR_Integer) parse_tree__error_util__V_32_32;

#line 75 "error_util.m"
                  {
#line 75 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_36_36, parse_tree__error_util__V_49_49, parse_tree__error_util__V_50_50);
                  }
#line 8846 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 75 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 75 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_36_36;
#line 75 "error_util.m"
                  else
#line 75 "error_util.m"
                    {
#line 75 "error_util.m"
                      MR_Word parse_tree__error_util__V_37_37;
#line 75 "error_util.m"
                      MR_Integer parse_tree__error_util__V_51_51 = (MR_Integer) parse_tree__error_util__V_47_47;
#line 75 "error_util.m"
                      MR_Integer parse_tree__error_util__V_52_52 = (MR_Integer) parse_tree__error_util__V_33_33;

#line 75 "error_util.m"
                      {
#line 75 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_37_37, parse_tree__error_util__V_51_51, parse_tree__error_util__V_52_52);
                      }
#line 8870 "parse_tree.error_util.c"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 75 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 75 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_37_37;
#line 75 "error_util.m"
                      else
#line 75 "error_util.m"
                        {
#line 75 "error_util.m"
                          MR_Word parse_tree__error_util__V_38_38;

#line 75 "error_util.m"
                          {
#line 75 "error_util.m"
                            parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__V_38_38, parse_tree__error_util__V_46_46, parse_tree__error_util__V_34_34);
                          }
#line 8890 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_38_38 == (MR_Integer) 0);
#line 75 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 75 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_38_38;
#line 75 "error_util.m"
                          else
#line 75 "error_util.m"
                            {
#line 75 "error_util.m"
                              {
#line 75 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
                              }
#line 75 "error_util.m"
                            }
#line 75 "error_util.m"
                        }
#line 75 "error_util.m"
                    }
#line 75 "error_util.m"
                }
#line 75 "error_util.m"
                break;
#line 75 "error_util.m"
            }
#line 75 "error_util.m"
          }
#line 75 "error_util.m"
          break;
#line 75 "error_util.m"
      }
#line 75 "error_util.m"
  }
#line 75 "error_util.m"
}

#line 75 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0(
#line 75 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 75 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 75 "error_util.m"
{
#line 75 "error_util.m"
  {
#line 75 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 75 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 75 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 75 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_17 == parse_tree__error_util__CastY_18);
#line 75 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 75 "error_util.m"
    else
#line 75 "error_util.m"
#line 75 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 75 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
        case (MR_Integer) 0:
#line 75 "error_util.m"
#line 75 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 75 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "error_util.m"
            case (MR_Integer) 0:
#line 75 "error_util.m"
              {
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 75 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
            case (MR_Integer) 1:
#line 75 "error_util.m"
              {
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 75 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
            case (MR_Integer) 2:
#line 75 "error_util.m"
              {
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 75 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 75 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
              break;
#line 75 "error_util.m"
          }
#line 75 "error_util.m"
          break;
#line 75 "error_util.m"
        case (MR_Integer) 1:
#line 75 "error_util.m"
          {
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_19_19;
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15;
#line 75 "error_util.m"
            MR_Word parse_tree__error_util__V_16_16;

#line 75 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
              {
#line 75 "error_util.m"
                parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "error_util.m"
                parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "error_util.m"
                parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "error_util.m"
                parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 9054 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 75 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                  {
#line 9060 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 75 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                      {
#line 9066 "parse_tree.error_util.c"
                        {
#line 9068 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                        }
#line 75 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 75 "error_util.m"
                          {
#line 9075 "parse_tree.error_util.c"
                            parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[8];
#line 9077 "parse_tree.error_util.c"
                            {
#line 9079 "parse_tree.error_util.c"
                              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_19_19, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_16_16)));
                            }
#line 75 "error_util.m"
                          }
#line 75 "error_util.m"
                      }
#line 75 "error_util.m"
                  }
#line 75 "error_util.m"
              }
#line 75 "error_util.m"
          }
#line 75 "error_util.m"
          break;
#line 75 "error_util.m"
      }
#line 75 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 75 "error_util.m"
  }
#line 75 "error_util.m"
}

#line 109 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0(
#line 109 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 109 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 109 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 109 "error_util.m"
{
#line 109 "error_util.m"
  {
#line 109 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 109 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 109 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 109 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 109 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 9127 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "error_util.m"
    else
#line 109 "error_util.m"
      {
#line 109 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 109 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 109 "error_util.m"
        {
#line 109 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 109 "error_util.m"
        {
#line 109 "error_util.m"
          parse_tree__error_util____Index____error_phase_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 109 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 109 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 9152 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "error_util.m"
        else
#line 109 "error_util.m"
          {
#line 109 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 109 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 9162 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "error_util.m"
            else
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 109 "error_util.m"
#line 109 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 109 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
                  case (MR_Integer) 0:
#line 109 "error_util.m"
#line 109 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 109 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
                      case (MR_Integer) 0:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 1:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 2:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 3:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 4:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 5:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 6:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 7:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 8:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 9:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 10:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 11:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 12:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 13:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 14:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 15:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 16:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                      case (MR_Integer) 17:
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                        break;
#line 109 "error_util.m"
                    }
#line 109 "error_util.m"
                    break;
#line 109 "error_util.m"
                  case (MR_Integer) 1:
#line 109 "error_util.m"
                    {
#line 109 "error_util.m"
                      MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "error_util.m"
                      MR_Word parse_tree__error_util__V_8_8;
#line 109 "error_util.m"
                      MR_Integer parse_tree__error_util__V_15_15;
#line 109 "error_util.m"
                      MR_Integer parse_tree__error_util__V_16_16;

#line 109 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 109 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "error_util.m"
                          parse_tree__error_util__V_15_15 = (MR_Integer) parse_tree__error_util__V_7_7;
#line 109 "error_util.m"
                          parse_tree__error_util__V_16_16 = (MR_Integer) parse_tree__error_util__V_8_8;
#line 109 "error_util.m"
                          {
#line 109 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                          }
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                    }
#line 109 "error_util.m"
                    break;
#line 109 "error_util.m"
                  case (MR_Integer) 2:
#line 109 "error_util.m"
                    {
#line 109 "error_util.m"
                      MR_Word parse_tree__error_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "error_util.m"
                      MR_Word parse_tree__error_util__V_10_10;
#line 109 "error_util.m"
                      MR_Integer parse_tree__error_util__V_17_17;
#line 109 "error_util.m"
                      MR_Integer parse_tree__error_util__V_18_18;

#line 109 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 109 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
                        {
#line 109 "error_util.m"
                          parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "error_util.m"
                          parse_tree__error_util__V_17_17 = (MR_Integer) parse_tree__error_util__V_9_9;
#line 109 "error_util.m"
                          parse_tree__error_util__V_18_18 = (MR_Integer) parse_tree__error_util__V_10_10;
#line 109 "error_util.m"
                          {
#line 109 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                          }
#line 109 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
                        }
#line 109 "error_util.m"
                    }
#line 109 "error_util.m"
                    break;
#line 109 "error_util.m"
                }
#line 109 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 109 "error_util.m"
                else
#line 109 "error_util.m"
                  {
#line 109 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 109 "error_util.m"
                    return;
                  }
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
          }
#line 109 "error_util.m"
      }
#line 109 "error_util.m"
  }
#line 109 "error_util.m"
}

#line 109 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____error_phase_0_0(
#line 109 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 109 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 109 "error_util.m"
{
#line 109 "error_util.m"
  {
#line 109 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 109 "error_util.m"
#line 109 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 109 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
      case (MR_Integer) 0:
#line 109 "error_util.m"
#line 109 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 109 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
          case (MR_Integer) 0:
#line 9533 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 1:
#line 9539 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 2:
#line 9545 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 3:
#line 9551 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 4:
#line 9557 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 5:
#line 9563 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 6:
#line 9569 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 7:
#line 9575 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 8:
#line 9581 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 9:
#line 9587 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 10:
#line 9593 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 11:
#line 9599 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 12:
#line 9605 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 13:
#line 9611 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 14:
#line 9617 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 15:
#line 9623 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 16:
#line 9629 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
          case (MR_Integer) 17:
#line 9635 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 109 "error_util.m"
            break;
#line 109 "error_util.m"
        }
#line 109 "error_util.m"
        break;
#line 109 "error_util.m"
      case (MR_Integer) 1:
#line 9645 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 109 "error_util.m"
        break;
#line 109 "error_util.m"
      case (MR_Integer) 2:
#line 9651 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 109 "error_util.m"
        break;
#line 109 "error_util.m"
    }
#line 109 "error_util.m"
  }
#line 109 "error_util.m"
}

#line 109 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0(
#line 109 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 109 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 109 "error_util.m"
{
#line 109 "error_util.m"
  {
#line 109 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 109 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_43 == parse_tree__error_util__CastY_44);
#line 109 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 109 "error_util.m"
    else
#line 109 "error_util.m"
#line 109 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 109 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
        case (MR_Integer) 0:
#line 109 "error_util.m"
#line 109 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 109 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 109 "error_util.m"
            case (MR_Integer) 0:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_3 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_4 == parse_tree__error_util__CastX_3);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 1:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_5 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_6 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_6 == parse_tree__error_util__CastX_5);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 2:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 3:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 4:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_12 == parse_tree__error_util__CastX_11);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 5:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 6:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_16 == parse_tree__error_util__CastX_15);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 7:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_17 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_18 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_18 == parse_tree__error_util__CastX_17);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 8:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_19 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_20 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_20 == parse_tree__error_util__CastX_19);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 9:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_23 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_24 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_24 == parse_tree__error_util__CastX_23);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 10:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_25 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_26 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_26 == parse_tree__error_util__CastX_25);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 11:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_27 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_28 == parse_tree__error_util__CastX_27);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 12:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_31 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_32 == parse_tree__error_util__CastX_31);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 13:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_33 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_34 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_34 == parse_tree__error_util__CastX_33);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 14:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_35 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_36 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_36 == parse_tree__error_util__CastX_35);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 15:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_38 == parse_tree__error_util__CastX_37);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 16:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
            case (MR_Integer) 17:
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_41 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 109 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_42 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 109 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_42 == parse_tree__error_util__CastX_41);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
              break;
#line 109 "error_util.m"
          }
#line 109 "error_util.m"
          break;
#line 109 "error_util.m"
        case (MR_Integer) 1:
#line 109 "error_util.m"
          {
#line 109 "error_util.m"
            MR_Word parse_tree__error_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22;

#line 109 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 109 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9991 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_21_21 == parse_tree__error_util__V_22_22);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
          }
#line 109 "error_util.m"
          break;
#line 109 "error_util.m"
        case (MR_Integer) 2:
#line 109 "error_util.m"
          {
#line 109 "error_util.m"
            MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "error_util.m"
            MR_Word parse_tree__error_util__V_30_30;

#line 109 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 109 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 109 "error_util.m"
              {
#line 109 "error_util.m"
                parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10016 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == parse_tree__error_util__V_30_30);
#line 109 "error_util.m"
              }
#line 109 "error_util.m"
          }
#line 109 "error_util.m"
          break;
#line 109 "error_util.m"
      }
#line 109 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 109 "error_util.m"
  }
#line 109 "error_util.m"
}

#line 174 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 174 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 174 "error_util.m"
{
#line 174 "error_util.m"
  {
#line 174 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 174 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_98 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 174 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_99 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 174 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_98 == parse_tree__error_util__CastY_99);
#line 174 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 174 "error_util.m"
    else
#line 174 "error_util.m"
#line 174 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 174 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
        case (MR_Integer) 0:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 174 "error_util.m"
#line 174 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 174 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
              case (MR_Integer) 0:
#line 174 "error_util.m"
                {
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_121_121)), ((MR_Box) (parse_tree__error_util__V_5_5)));
                  }
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 1:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 2:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 174 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                  case (MR_Integer) 0:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 1:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
            }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 1:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 174 "error_util.m"
#line 174 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 174 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
              case (MR_Integer) 0:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 1:
#line 174 "error_util.m"
                {
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_28_28;
#line 174 "error_util.m"
                  MR_Integer parse_tree__error_util__V_131_131 = (MR_Integer) parse_tree__error_util__V_124_124;
#line 174 "error_util.m"
                  MR_Integer parse_tree__error_util__V_132_132 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_131_131, parse_tree__error_util__V_132_132);
                  }
#line 174 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 174 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 174 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 174 "error_util.m"
                  else
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      MR_Word parse_tree__error_util__V_29_29;
#line 174 "error_util.m"
                      MR_Integer parse_tree__error_util__V_133_133 = (MR_Integer) parse_tree__error_util__V_123_123;
#line 174 "error_util.m"
                      MR_Integer parse_tree__error_util__V_134_134 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 174 "error_util.m"
                      {
#line 174 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_29_29, parse_tree__error_util__V_133_133, parse_tree__error_util__V_134_134);
                      }
#line 174 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 174 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 174 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 174 "error_util.m"
                      else
#line 174 "error_util.m"
                        {
#line 174 "error_util.m"
                          {
#line 174 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_122_122)), ((MR_Box) (parse_tree__error_util__V_27_27)));
                          }
#line 174 "error_util.m"
                        }
#line 174 "error_util.m"
                    }
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 2:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 174 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                  case (MR_Integer) 0:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 1:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
            }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 2:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 174 "error_util.m"
#line 174 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 174 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
              case (MR_Integer) 0:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 1:
#line 174 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 2:
#line 174 "error_util.m"
                {
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 174 "error_util.m"
                  MR_Word parse_tree__error_util__V_56_56;
#line 174 "error_util.m"
                  MR_Integer parse_tree__error_util__V_135_135 = (MR_Integer) parse_tree__error_util__V_130_130;
#line 174 "error_util.m"
                  MR_Integer parse_tree__error_util__V_136_136 = (MR_Integer) parse_tree__error_util__V_54_54;

#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_56_56, parse_tree__error_util__V_135_135, parse_tree__error_util__V_136_136);
                  }
#line 174 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_56_56 == (MR_Integer) 0);
#line 174 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 174 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_56_56;
#line 174 "error_util.m"
                  else
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      {
#line 174 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_129_129)), ((MR_Box) (parse_tree__error_util__V_55_55)));
                      }
#line 174 "error_util.m"
                    }
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
              case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 174 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                  case (MR_Integer) 0:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 1:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
                break;
#line 174 "error_util.m"
            }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 174 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
            case (MR_Integer) 0:
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 174 "error_util.m"
#line 174 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 174 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                  case (MR_Integer) 0:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 1:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 2:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 174 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                      case (MR_Integer) 0:
#line 174 "error_util.m"
                        {
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__V_80_80;

#line 174 "error_util.m"
                          {
#line 174 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_80_80, ((MR_Box) (parse_tree__error_util__V_128_128)), ((MR_Box) (parse_tree__error_util__V_78_78)));
                          }
#line 174 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_80_80 == (MR_Integer) 0);
#line 174 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 174 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_80_80;
#line 174 "error_util.m"
                          else
#line 174 "error_util.m"
                            {
#line 174 "error_util.m"
                              {
#line 174 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_127_127)), ((MR_Box) (parse_tree__error_util__V_79_79)));
                              }
#line 174 "error_util.m"
                            }
#line 174 "error_util.m"
                        }
#line 174 "error_util.m"
                        break;
#line 174 "error_util.m"
                      case (MR_Integer) 1:
#line 174 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 174 "error_util.m"
                        break;
#line 174 "error_util.m"
                    }
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
              break;
#line 174 "error_util.m"
            case (MR_Integer) 1:
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
                MR_Box parse_tree__error_util__V_125_125 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 174 "error_util.m"
#line 174 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 174 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                  case (MR_Integer) 0:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 1:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 2:
#line 174 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                  case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 174 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
                      case (MR_Integer) 0:
#line 174 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 174 "error_util.m"
                        break;
#line 174 "error_util.m"
                      case (MR_Integer) 1:
#line 174 "error_util.m"
                        {
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_103_103;
#line 174 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_104_104;
#line 174 "error_util.m"
                          MR_Box parse_tree__error_util__V_97_97 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 174 "error_util.m"
                          {
#line 174 "error_util.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_126, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_103_103);
                          }
#line 174 "error_util.m"
                          {
#line 174 "error_util.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_101, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_104_104);
                          }
#line 174 "error_util.m"
                          {
#line 174 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_103_103, parse_tree__error_util__TypeInfo_104_104, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_125_125, parse_tree__error_util__V_97_97);
                          }
#line 174 "error_util.m"
                        }
#line 174 "error_util.m"
                        break;
#line 174 "error_util.m"
                    }
#line 174 "error_util.m"
                    break;
#line 174 "error_util.m"
                }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
              break;
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
      }
#line 174 "error_util.m"
  }
#line 174 "error_util.m"
}

#line 174 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 174 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 174 "error_util.m"
{
#line 174 "error_util.m"
  {
#line 174 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 174 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 174 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 174 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_21 == parse_tree__error_util__CastY_22);
#line 174 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 174 "error_util.m"
    else
#line 174 "error_util.m"
#line 174 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 174 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
        case (MR_Integer) 0:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_4_4;

#line 174 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 174 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10610 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 174 "error_util.m"
                {
#line 174 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
                }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 1:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 174 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 174 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 174 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 174 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 174 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 174 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                      {
#line 10666 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 174 "error_util.m"
                        {
#line 174 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 174 "error_util.m"
                      }
#line 174 "error_util.m"
                  }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 2:
#line 174 "error_util.m"
          {
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_32_32;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;
#line 174 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;

#line 174 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 174 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 174 "error_util.m"
                parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_13_13);
#line 174 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                  {
#line 10714 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_32_32 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_32_32, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                    }
#line 174 "error_util.m"
                  }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
        case (MR_Integer) 3:
#line 174 "error_util.m"
#line 174 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 174 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 174 "error_util.m"
            case (MR_Integer) 0:
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_31_31;
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_17_17;
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__V_18_18;

#line 174 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 174 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 10763 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_15_15)), ((MR_Box) (parse_tree__error_util__V_17_17)));
                    }
#line 174 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                      {
#line 10774 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_31_31 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 174 "error_util.m"
                        {
#line 174 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_31_31, ((MR_Box) (parse_tree__error_util__V_16_16)), ((MR_Box) (parse_tree__error_util__V_18_18)));
                        }
#line 174 "error_util.m"
                      }
#line 174 "error_util.m"
                  }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
              break;
#line 174 "error_util.m"
            case (MR_Integer) 1:
#line 174 "error_util.m"
              {
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_24;
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 174 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 174 "error_util.m"
                MR_Box parse_tree__error_util__V_19_19 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 174 "error_util.m"
                MR_Box parse_tree__error_util__V_20_20;
#line 174 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_25;

#line 174 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 174 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 174 "error_util.m"
                  {
#line 174 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "error_util.m"
                    parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 10818 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_25 = (MR_Integer) 1;
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_23, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_26_26);
                    }
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_24, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_27_27);
                    }
#line 174 "error_util.m"
                    {
#line 174 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, parse_tree__error_util__TypeInfo_27_27, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                    }
#line 174 "error_util.m"
                  }
#line 174 "error_util.m"
              }
#line 174 "error_util.m"
              break;
#line 174 "error_util.m"
          }
#line 174 "error_util.m"
          break;
#line 174 "error_util.m"
      }
#line 174 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 174 "error_util.m"
  }
#line 174 "error_util.m"
}

#line 156 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 156 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 156 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 156 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 156 "error_util.m"
{
#line 156 "error_util.m"
  {
#line 156 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 156 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 156 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 156 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 156 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 10878 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 156 "error_util.m"
    else
#line 156 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 156 "error_util.m"
      {
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 156 "error_util.m"
        MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 156 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 156 "error_util.m"
          {
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 156 "error_util.m"
            MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_29_29;

#line 156 "error_util.m"
            {
#line 156 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
            }
#line 10915 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 156 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 156 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 156 "error_util.m"
            else
#line 156 "error_util.m"
              {
#line 156 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;
#line 156 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 156 "error_util.m"
                MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 156 "error_util.m"
                {
#line 156 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                }
#line 10939 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 156 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 156 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 156 "error_util.m"
                else
#line 156 "error_util.m"
                  {
#line 156 "error_util.m"
                    MR_Word parse_tree__error_util__V_31_31;

#line 156 "error_util.m"
                    {
#line 156 "error_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                    }
#line 10959 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 156 "error_util.m"
                    parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 156 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 156 "error_util.m"
                    else
#line 156 "error_util.m"
                      {
#line 156 "error_util.m"
                        {
#line 156 "error_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
                        }
#line 156 "error_util.m"
                      }
#line 156 "error_util.m"
                  }
#line 156 "error_util.m"
              }
#line 156 "error_util.m"
          }
#line 156 "error_util.m"
        else
#line 10986 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 156 "error_util.m"
      }
#line 156 "error_util.m"
    else
#line 156 "error_util.m"
      {
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 156 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11001 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 156 "error_util.m"
        else
#line 156 "error_util.m"
          {
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 156 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 156 "error_util.m"
            {
#line 156 "error_util.m"
              mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
            }
#line 11019 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 156 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 156 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 156 "error_util.m"
            else
#line 156 "error_util.m"
              {
#line 156 "error_util.m"
                {
#line 156 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
                }
#line 156 "error_util.m"
              }
#line 156 "error_util.m"
          }
#line 156 "error_util.m"
      }
#line 156 "error_util.m"
  }
#line 156 "error_util.m"
}

#line 156 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 156 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 156 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 156 "error_util.m"
{
#line 156 "error_util.m"
  {
#line 156 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 156 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 156 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 156 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 156 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 156 "error_util.m"
    else
#line 156 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 156 "error_util.m"
      {
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12;
#line 156 "error_util.m"
        MR_Integer parse_tree__error_util__V_13_13;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;

#line 156 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 156 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
          {
#line 156 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "error_util.m"
            parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 156 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 11112 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 11114 "parse_tree.error_util.c"
            {
#line 11116 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
            }
#line 156 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
              {
#line 11123 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 156 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
                  {
#line 11129 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 156 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
                      {
#line 11135 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11137 "parse_tree.error_util.c"
                        {
#line 11139 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                        }
#line 156 "error_util.m"
                      }
#line 156 "error_util.m"
                  }
#line 156 "error_util.m"
              }
#line 156 "error_util.m"
          }
#line 156 "error_util.m"
      }
#line 156 "error_util.m"
    else
#line 156 "error_util.m"
      {
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5;
#line 156 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 156 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 156 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
          {
#line 156 "error_util.m"
            parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 11177 "parse_tree.error_util.c"
            {
#line 11179 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
            }
#line 156 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 156 "error_util.m"
              {
#line 11186 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11188 "parse_tree.error_util.c"
                {
#line 11190 "parse_tree.error_util.c"
                  parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                }
#line 156 "error_util.m"
              }
#line 156 "error_util.m"
          }
#line 156 "error_util.m"
      }
#line 156 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 156 "error_util.m"
  }
#line 156 "error_util.m"
}

#line 1761 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1761 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1761 "error_util.m"
{
#line 1761 "error_util.m"
  {
#line 1761 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1761 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1761 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1761 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1761 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 11230 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1761 "error_util.m"
    else
#line 1761 "error_util.m"
      {
#line 1761 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1761 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1761 "error_util.m"
        {
#line 1761 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 11252 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1761 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1761 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1761 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1761 "error_util.m"
        else
#line 1761 "error_util.m"
          {
#line 1761 "error_util.m"
            {
#line 1761 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
            }
#line 1761 "error_util.m"
          }
#line 1761 "error_util.m"
      }
#line 1761 "error_util.m"
  }
#line 1761 "error_util.m"
}

#line 1761 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1761 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1761 "error_util.m"
{
#line 1761 "error_util.m"
  {
#line 1761 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1761 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1761 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1761 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1761 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1761 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1761 "error_util.m"
    else
#line 1761 "error_util.m"
      {
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1761 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1761 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1761 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 11317 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1761 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1761 "error_util.m"
          {
#line 11323 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 11325 "parse_tree.error_util.c"
            {
#line 11327 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1761 "error_util.m"
          }
#line 1761 "error_util.m"
      }
#line 1761 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1761 "error_util.m"
  }
#line 1761 "error_util.m"
}

#line 968 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 968 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 968 "error_util.m"
{
#line 968 "error_util.m"
  {
#line 968 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 968 "error_util.m"
    {
#line 968 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
    }
#line 968 "error_util.m"
  }
#line 968 "error_util.m"
}

#line 968 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 968 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 968 "error_util.m"
{
#line 968 "error_util.m"
  {
#line 968 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 968 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 968 "error_util.m"
    {
#line 968 "error_util.m"
      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 968 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 968 "error_util.m"
  }
#line 968 "error_util.m"
}

#line 100 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0(
#line 100 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 100 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 100 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 100 "error_util.m"
{
#line 100 "error_util.m"
  {
#line 100 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 100 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 100 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 100 "error_util.m"
    {
#line 100 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
    }
#line 100 "error_util.m"
  }
#line 100 "error_util.m"
}

#line 100 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0(
#line 100 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 100 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 100 "error_util.m"
{
#line 11440 "parse_tree.error_util.c"
  {
#line 11442 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 11445 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 11447 "parse_tree.error_util.c"
  }
#line 100 "error_util.m"
}

#line 205 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 205 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 205 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 205 "error_util.m"
{
#line 205 "error_util.m"
  {
#line 205 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 205 "error_util.m"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 205 "error_util.m"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 205 "error_util.m"
    {
#line 205 "error_util.m"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 205 "error_util.m"
  }
#line 205 "error_util.m"
}

#line 1851 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1851 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1851 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1851 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1851 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1851 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1851 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1851 "error_util.m"
{
#line 1854 "error_util.m"
  while (MR_TRUE)
#line 1854 "error_util.m"
    {
#line 1854 "error_util.m"
      /* tailcall optimized into a loop */
#line 1854 "error_util.m"
      {
#line 1854 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1854 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1854 "error_util.m"
          {
#line 1854 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1854 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1854 "error_util.m"
          }
#line 1854 "error_util.m"
        else
#line 1855 "error_util.m"
          {
#line 1855 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1855 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1855 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1855 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1855 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1856 "error_util.m"
            {
#line 1856 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1857 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1857 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1858 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1858 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1859 "error_util.m"
              {
#line 1859 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1859 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1859 "error_util.m"
                {
#line 1859 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1859 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1859 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1859 "error_util.m"
                }
#line 1859 "error_util.m"
                {
#line 1859 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1860 "error_util.m"
                /* direct tailcall eliminated */
#line 1860 "error_util.m"
                {
#line 1860 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1860 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1860 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1860 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1860 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1860 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1860 "error_util.m"
                }
#line 1860 "error_util.m"
                continue;
#line 1859 "error_util.m"
              }
#line 1858 "error_util.m"
            else
#line 1862 "error_util.m"
              {
#line 1862 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1863 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1862 "error_util.m"
              }
#line 1855 "error_util.m"
          }
#line 1854 "error_util.m"
      }
#line 1854 "error_util.m"
      break;
#line 1854 "error_util.m"
    }
#line 1851 "error_util.m"
}

#line 1826 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1826 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1826 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1826 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1826 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1826 "error_util.m"
{
#line 1831 "error_util.m"
  {
#line 1831 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1831 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1832 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1831 "error_util.m"
    else
#line 1834 "error_util.m"
      {
#line 1834 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1834 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1834 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1834 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1834 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1846 "error_util.m"
        {
#line 1846 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1847 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1847 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1848 "error_util.m"
        {
#line 1848 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1848 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1848 "error_util.m"
        }
#line 1848 "error_util.m"
        {
#line 1848 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1837 "error_util.m"
        {
#line 1837 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1837 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1837 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1837 "error_util.m"
        }
#line 1838 "error_util.m"
        {
#line 1838 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1839 "error_util.m"
        {
#line 1839 "error_util.m"
          MR_Word base;
#line 1839 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1839 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1839 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1839 "error_util.m"
        }
#line 1834 "error_util.m"
      }
#line 1831 "error_util.m"
  }
#line 1826 "error_util.m"
}

#line 1778 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1778 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1778 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1778 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1778 "error_util.m"
{
#line 1784 "error_util.m"
  {
#line 1784 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1784 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1785 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1784 "error_util.m"
    else
#line 1787 "error_util.m"
      {
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1787 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1787 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1787 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1787 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1787 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1792 "error_util.m"
#line 1792 "error_util.m"
        switch (parse_tree__error_util__TreatAsFirst_6) {
#line 1792 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1792 "error_util.m"
          case (MR_Integer) 1:
#line 1794 "error_util.m"
            parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1792 "error_util.m"
            break;
#line 1792 "error_util.m"
          case (MR_Integer) 0:
#line 1790 "error_util.m"
            {
#line 1791 "error_util.m"
              parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1790 "error_util.m"
            }
#line 1792 "error_util.m"
            break;
#line 1792 "error_util.m"
        }
#line 1796 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1798 "error_util.m"
        {
#line 1798 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1798 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1798 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1798 "error_util.m"
        }
#line 11811 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1799 "error_util.m"
        {
#line 1799 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1804 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1801 "error_util.m"
          {
#line 1802 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1803 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1801 "error_util.m"
          }
#line 1804 "error_util.m"
        else
#line 1805 "error_util.m"
          {
#line 1805 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1805 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1806 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1816 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1817 "error_util.m"
              {
#line 1817 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1818 "error_util.m"
                {
#line 1818 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1818 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1818 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1818 "error_util.m"
                }
#line 1818 "error_util.m"
                {
#line 1818 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1818 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1818 "error_util.m"
                }
#line 1817 "error_util.m"
              }
#line 1816 "error_util.m"
            else
#line 1808 "error_util.m"
              {
#line 1808 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1808 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1808 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1808 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1808 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1808 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1808 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1808 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1808 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1846 "error_util.m"
                {
#line 1846 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1847 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1847 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1848 "error_util.m"
                {
#line 1848 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1848 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1848 "error_util.m"
                }
#line 1848 "error_util.m"
                {
#line 1848 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1811 "error_util.m"
                {
#line 1811 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1811 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1811 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1811 "error_util.m"
                }
#line 1813 "error_util.m"
                {
#line 1813 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1815 "error_util.m"
                {
#line 1815 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1815 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1815 "error_util.m"
                }
#line 1808 "error_util.m"
              }
#line 1805 "error_util.m"
          }
#line 1821 "error_util.m"
        {
#line 1821 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1823 "error_util.m"
        {
#line 1823 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1823 "error_util.m"
        {
#line 1823 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1787 "error_util.m"
      }
#line 1784 "error_util.m"
  }
#line 1778 "error_util.m"
}

#line 1746 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1746 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1746 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1746 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1746 "error_util.m"
{
#line 1749 "error_util.m"
  while (MR_TRUE)
#line 1749 "error_util.m"
    {
#line 1749 "error_util.m"
      /* tailcall optimized into a loop */
#line 1749 "error_util.m"
      {
#line 1749 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1749 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1749 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1749 "error_util.m"
        {
#line 1749 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1749 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1750 "error_util.m"
          {
#line 1750 "error_util.m"
            {
#line 1750 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1750 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1751 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1750 "error_util.m"
            else
#line 1753 "error_util.m"
              {
#line 1753 "error_util.m"
                /* direct tailcall eliminated */
#line 1753 "error_util.m"
                {
#line 1753 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1753 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1753 "error_util.m"
                }
#line 1753 "error_util.m"
                continue;
#line 1753 "error_util.m"
              }
#line 1750 "error_util.m"
          }
#line 1749 "error_util.m"
        else
#line 1756 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1749 "error_util.m"
      }
#line 1749 "error_util.m"
      break;
#line 1749 "error_util.m"
    }
#line 1746 "error_util.m"
}

#line 1736 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1736 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1736 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1736 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1736 "error_util.m"
{
#line 1738 "error_util.m"
  while (MR_TRUE)
#line 1738 "error_util.m"
    {
#line 1738 "error_util.m"
      /* tailcall optimized into a loop */
#line 1738 "error_util.m"
      {
#line 1738 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1738 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1738 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1739 "error_util.m"
        {
#line 1739 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1738 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1738 "error_util.m"
          {
#line 1740 "error_util.m"
            {
#line 1740 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1740 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1741 "error_util.m"
              {
#line 1741 "error_util.m"
                /* direct tailcall eliminated */
#line 1741 "error_util.m"
                {
#line 1741 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1741 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1741 "error_util.m"
                }
#line 1741 "error_util.m"
                continue;
#line 1741 "error_util.m"
              }
#line 1740 "error_util.m"
            else
#line 1743 "error_util.m"
              {
#line 1743 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1743 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1743 "error_util.m"
              }
#line 1738 "error_util.m"
          }
#line 1738 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1738 "error_util.m"
      }
#line 1738 "error_util.m"
      break;
#line 1738 "error_util.m"
    }
#line 1736 "error_util.m"
}

#line 1723 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1723 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1723 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1723 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1723 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1723 "error_util.m"
{
#line 1727 "error_util.m"
  while (MR_TRUE)
#line 1727 "error_util.m"
    {
#line 1727 "error_util.m"
      /* tailcall optimized into a loop */
#line 1727 "error_util.m"
      {
#line 1727 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1727 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1727 "error_util.m"
        {
#line 1727 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1727 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1728 "error_util.m"
          {
#line 1728 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1728 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1728 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1728 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1728 "error_util.m"
            {
#line 1728 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1729 "error_util.m"
            {
#line 1729 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1730 "error_util.m"
            {
#line 1730 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1730 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1730 "error_util.m"
            }
#line 1730 "error_util.m"
            {
#line 1730 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1730 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1730 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1730 "error_util.m"
            }
#line 1730 "error_util.m"
            /* direct tailcall eliminated */
#line 1730 "error_util.m"
            {
#line 1730 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1730 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1730 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1730 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1730 "error_util.m"
            }
#line 1730 "error_util.m"
            continue;
#line 1728 "error_util.m"
          }
#line 1727 "error_util.m"
        else
#line 1733 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1727 "error_util.m"
      }
#line 1727 "error_util.m"
      break;
#line 1727 "error_util.m"
    }
#line 1723 "error_util.m"
}

#line 1718 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1718 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1718 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1718 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1718 "error_util.m"
{
#line 1720 "error_util.m"
  {
#line 1720 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1721 "error_util.m"
    {
#line 1721 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
    }
#line 1720 "error_util.m"
  }
#line 1718 "error_util.m"
}

#line 1713 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1713 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1713 "error_util.m"
{
#line 1715 "error_util.m"
  {
#line 1715 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1715 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1715 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1715 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1716 "error_util.m"
    {
#line 1716 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1716 "error_util.m"
    {
#line 1716 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1716 "error_util.m"
    {
#line 1716 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1716 "error_util.m"
    {
#line 1716 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1715 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1715 "error_util.m"
  }
#line 1713 "error_util.m"
}

#line 1708 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1708 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1708 "error_util.m"
{
#line 1710 "error_util.m"
  {
#line 1710 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1710 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1710 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1710 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1711 "error_util.m"
    {
#line 1711 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1710 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1710 "error_util.m"
  }
#line 1708 "error_util.m"
}

#line 1667 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1667 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1667 "error_util.m"
{
#line 1669 "error_util.m"
  {
#line 1669 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1669 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1669 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1669 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1669 "error_util.m"
    else
#line 1670 "error_util.m"
      {
#line 1670 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1670 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1670 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1671 "error_util.m"
        {
#line 1671 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1675 "error_util.m"
#line 1675 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Head_3)) {
#line 1675 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1675 "error_util.m"
          case (MR_Integer) 0:
#line 1689 "error_util.m"
            if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1688 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1689 "error_util.m"
            else
#line 1690 "error_util.m"
              {
#line 1690 "error_util.m"
                MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1690 "error_util.m"
                MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1690 "error_util.m"
                MR_String parse_tree__error_util__V_13_13;
#line 1698 "error_util.m"
                MR_Char parse_tree__error_util__First_17;
#line 1698 "error_util.m"
                MR_String parse_tree__error_util__Rest_18;

#line 1699 "error_util.m"
                {
#line 1699 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
                }
#line 1699 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1700 "error_util.m"
                  {
#line 1700 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                  }
#line 1698 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1702 "error_util.m"
                  {
#line 1702 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1702 "error_util.m"
                    {
#line 1702 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                    }
#line 1703 "error_util.m"
                    {
#line 1703 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                    }
#line 1702 "error_util.m"
                  }
#line 1698 "error_util.m"
                else
#line 1705 "error_util.m"
                  parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1691 "error_util.m"
                {
#line 1691 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1691 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1691 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1691 "error_util.m"
                }
#line 1690 "error_util.m"
              }
#line 1675 "error_util.m"
            break;
#line 1675 "error_util.m"
          case (MR_Integer) 1:
#line 1673 "error_util.m"
            {
#line 1673 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1674 "error_util.m"
              {
#line 1674 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1674 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1674 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1674 "error_util.m"
              }
#line 1673 "error_util.m"
            }
#line 1675 "error_util.m"
            break;
#line 1675 "error_util.m"
          case (MR_Integer) 2:
#line 1676 "error_util.m"
            {
#line 1676 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1680 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1682 "error_util.m"
                {
#line 1682 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1682 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1682 "error_util.m"
                }
#line 1680 "error_util.m"
              else
#line 1678 "error_util.m"
                {
#line 1678 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1678 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1678 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1679 "error_util.m"
                  {
#line 1679 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1679 "error_util.m"
                  {
#line 1679 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1679 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1679 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1679 "error_util.m"
                  }
#line 1678 "error_util.m"
                }
#line 1676 "error_util.m"
            }
#line 1675 "error_util.m"
            break;
#line 1675 "error_util.m"
        }
#line 1670 "error_util.m"
      }
#line 1669 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1669 "error_util.m"
  }
#line 1667 "error_util.m"
}

#line 1622 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1622 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1622 "error_util.m"
{
#line 1624 "error_util.m"
  while (MR_TRUE)
#line 1624 "error_util.m"
    {
#line 1624 "error_util.m"
      /* tailcall optimized into a loop */
#line 1624 "error_util.m"
      {
#line 1624 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1624 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1624 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1624 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1624 "error_util.m"
        else
#line 1625 "error_util.m"
          {
#line 1625 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1625 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1629 "error_util.m"
#line 1629 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Word_3)) {
#line 1629 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1629 "error_util.m"
              case (MR_Integer) 0:
#line 1630 "error_util.m"
                {
#line 1630 "error_util.m"
                  MR_Word parse_tree__error_util__V_32_32;

#line 1631 "error_util.m"
                  {
#line 1631 "error_util.m"
                    parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1631 "error_util.m"
                  {
#line 1631 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1631 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1631 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1631 "error_util.m"
                  }
#line 1630 "error_util.m"
                }
#line 1629 "error_util.m"
                break;
#line 1629 "error_util.m"
              case (MR_Integer) 1:
#line 1627 "error_util.m"
                {
#line 1627 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1627 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1627 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1628 "error_util.m"
                  {
#line 1628 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1628 "error_util.m"
                  }
#line 1628 "error_util.m"
                  {
#line 1628 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1628 "error_util.m"
                  {
#line 1628 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1628 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1628 "error_util.m"
                  }
#line 1627 "error_util.m"
                }
#line 1629 "error_util.m"
                break;
#line 1629 "error_util.m"
              case (MR_Integer) 2:
#line 1633 "error_util.m"
                {
#line 1633 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1633 "error_util.m"
                  MR_Word parse_tree__error_util__V_29_29;
#line 1633 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;

#line 1634 "error_util.m"
                  {
#line 1634 "error_util.m"
                    parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1634 "error_util.m"
                    MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1634 "error_util.m"
                  }
#line 1634 "error_util.m"
                  {
#line 1634 "error_util.m"
                    parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1634 "error_util.m"
                  {
#line 1634 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1634 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1634 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1634 "error_util.m"
                  }
#line 1633 "error_util.m"
                }
#line 1629 "error_util.m"
                break;
#line 1629 "error_util.m"
              case (MR_Integer) 3:
#line 1636 "error_util.m"
                {
#line 1636 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1640 "error_util.m"
                  if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1638 "error_util.m"
                    {
#line 1638 "error_util.m"
                      MR_Word parse_tree__error_util__V_27_27;

#line 1639 "error_util.m"
                      {
#line 1639 "error_util.m"
                        parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1639 "error_util.m"
                      }
#line 1639 "error_util.m"
                      {
#line 1639 "error_util.m"
                        parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1639 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1639 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1639 "error_util.m"
                      }
#line 1638 "error_util.m"
                    }
#line 1640 "error_util.m"
                  else
#line 1640 "error_util.m"
                    {
#line 1640 "error_util.m"
                      MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1640 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1640 "error_util.m"
#line 1640 "error_util.m"
                      switch (MR_tag((MR_Word) parse_tree__error_util__V_45_45)) {
#line 1640 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1640 "error_util.m"
                        case (MR_Integer) 0:
#line 1645 "error_util.m"
                          {
#line 1645 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1645 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1645 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1698 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1698 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1699 "error_util.m"
                            {
#line 1699 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1699 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1700 "error_util.m"
                              {
#line 1700 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1698 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1702 "error_util.m"
                              {
#line 1702 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1702 "error_util.m"
                                {
#line 1702 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1703 "error_util.m"
                                {
#line 1703 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1702 "error_util.m"
                              }
#line 1698 "error_util.m"
                            else
#line 1705 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1650 "error_util.m"
                            {
#line 1650 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1650 "error_util.m"
                            }
#line 1650 "error_util.m"
                            {
#line 1650 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1650 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1650 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1650 "error_util.m"
                            }
#line 1651 "error_util.m"
                            /* direct tailcall eliminated */
#line 1651 "error_util.m"
                            {
#line 1651 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1651 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1651 "error_util.m"
                            }
#line 1651 "error_util.m"
                            continue;
#line 1645 "error_util.m"
                          }
#line 1640 "error_util.m"
                          break;
#line 1640 "error_util.m"
                        case (MR_Integer) 1:
#line 1641 "error_util.m"
                          {
#line 1641 "error_util.m"
                            MR_Word parse_tree__error_util__V_24_24;
#line 1641 "error_util.m"
                            MR_String parse_tree__error_util__V_25_25;
#line 1641 "error_util.m"
                            MR_Word parse_tree__error_util__V_26_26;
#line 1641 "error_util.m"
                            MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1642 "error_util.m"
                            {
#line 1642 "error_util.m"
                              parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                            }
#line 1642 "error_util.m"
                            {
#line 1642 "error_util.m"
                              parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1642 "error_util.m"
                            }
#line 1643 "error_util.m"
                            {
#line 1643 "error_util.m"
                              parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1643 "error_util.m"
                            {
#line 1643 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1643 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1643 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1643 "error_util.m"
                            }
#line 1641 "error_util.m"
                          }
#line 1640 "error_util.m"
                          break;
#line 1640 "error_util.m"
                        case (MR_Integer) 2:
#line 1653 "error_util.m"
                          {
#line 1653 "error_util.m"
                            MR_Word parse_tree__error_util__V_17_17;
#line 1653 "error_util.m"
                            MR_String parse_tree__error_util__V_18_18;
#line 1653 "error_util.m"
                            MR_Word parse_tree__error_util__V_19_19;
#line 1653 "error_util.m"
                            MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1658 "error_util.m"
                            {
#line 1658 "error_util.m"
                              parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                            }
#line 1658 "error_util.m"
                            {
#line 1658 "error_util.m"
                              parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1658 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1658 "error_util.m"
                            }
#line 1659 "error_util.m"
                            {
#line 1659 "error_util.m"
                              parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1659 "error_util.m"
                            {
#line 1659 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1659 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1659 "error_util.m"
                            }
#line 1653 "error_util.m"
                          }
#line 1640 "error_util.m"
                          break;
#line 1640 "error_util.m"
                        case (MR_Integer) 3:
#line 1661 "error_util.m"
                          {
#line 1661 "error_util.m"
                            MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1661 "error_util.m"
                            MR_Word parse_tree__error_util__V_13_13;
#line 1661 "error_util.m"
                            MR_Word parse_tree__error_util__V_14_14;
#line 1661 "error_util.m"
                            MR_String parse_tree__error_util__V_15_15;

#line 1663 "error_util.m"
                            {
#line 1663 "error_util.m"
                              parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                            }
#line 1663 "error_util.m"
                            {
#line 1663 "error_util.m"
                              parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1663 "error_util.m"
                            }
#line 1663 "error_util.m"
                            {
#line 1663 "error_util.m"
                              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1663 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1663 "error_util.m"
                            }
#line 1662 "error_util.m"
                            /* direct tailcall eliminated */
#line 1662 "error_util.m"
                            {
#line 1662 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1662 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1662 "error_util.m"
                            }
#line 1662 "error_util.m"
                            continue;
#line 1661 "error_util.m"
                          }
#line 1640 "error_util.m"
                          break;
#line 1640 "error_util.m"
                      }
#line 1640 "error_util.m"
                    }
#line 1636 "error_util.m"
                }
#line 1629 "error_util.m"
                break;
#line 1629 "error_util.m"
            }
#line 1625 "error_util.m"
          }
#line 1624 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1624 "error_util.m"
      }
#line 1624 "error_util.m"
      break;
#line 1624 "error_util.m"
    }
#line 1622 "error_util.m"
}

#line 1616 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1616 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1616 "error_util.m"
{
#line 1618 "error_util.m"
  {
#line 1618 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1618 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1618 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1618 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1619 "error_util.m"
    {
#line 1619 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1619 "error_util.m"
    {
#line 1619 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1620 "error_util.m"
    {
#line 1620 "error_util.m"
      parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1618 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1618 "error_util.m"
  }
#line 1616 "error_util.m"
}

#line 1510 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1510 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1510 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1510 "error_util.m"
{
#line 1514 "error_util.m"
  while (MR_TRUE)
#line 1514 "error_util.m"
    {
#line 1514 "error_util.m"
      /* tailcall optimized into a loop */
#line 1514 "error_util.m"
      {
#line 1514 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1514 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1514 "error_util.m"
          {
#line 1514 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1514 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1515 "error_util.m"
            {
#line 1515 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1516 "error_util.m"
            {
#line 1516 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1516 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1516 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1516 "error_util.m"
            }
#line 1516 "error_util.m"
            {
#line 1516 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1514 "error_util.m"
          }
#line 1514 "error_util.m"
        else
#line 1518 "error_util.m"
          {
#line 1518 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1518 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1518 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1518 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1522 "error_util.m"
#line 1522 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_17)) {
#line 1522 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1522 "error_util.m"
              case (MR_Integer) 0:
#line 1522 "error_util.m"
#line 1522 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__Component_17)) {
#line 1522 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1522 "error_util.m"
                  case (MR_Integer) 0:
#line 1538 "error_util.m"
                    {
#line 1542 "error_util.m"
#line 1542 "error_util.m"
                      switch (parse_tree__error_util__FirstInMsg_1) {
#line 1542 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1542 "error_util.m"
                        case (MR_Integer) 0:
#line 1541 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1542 "error_util.m"
                          break;
#line 1542 "error_util.m"
                        case (MR_Integer) 1:
#line 1543 "error_util.m"
                          {
#line 1544 "error_util.m"
                            {
#line 1544 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1544 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1544 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1544 "error_util.m"
                            }
#line 1543 "error_util.m"
                          }
#line 1542 "error_util.m"
                          break;
#line 1542 "error_util.m"
                      }
#line 1538 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1538 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 1:
#line 1588 "error_util.m"
                    {
#line 1588 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_38;
#line 1588 "error_util.m"
                      MR_Word parse_tree__error_util__V_52_52;

#line 1589 "error_util.m"
                      {
#line 1589 "error_util.m"
                        parse_tree__error_util__Strings_38 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1590 "error_util.m"
                      {
#line 1590 "error_util.m"
                        parse_tree__error_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1590 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 0) = ((MR_Box) (parse_tree__error_util__Strings_38));
#line 1590 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1590 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1590 "error_util.m"
                      }
#line 1590 "error_util.m"
                      {
#line 1590 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_52_52)));
                      }
#line 1591 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1588 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 2:
#line 1598 "error_util.m"
                    {
#line 1598 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45;
#line 1598 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_93;

#line 1599 "error_util.m"
                      {
#line 1599 "error_util.m"
                        parse_tree__error_util__Strings_93 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1600 "error_util.m"
                      {
#line 1600 "error_util.m"
                        parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1600 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_93));
#line 1600 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1600 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1600 "error_util.m"
                      }
#line 1600 "error_util.m"
                      {
#line 1600 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                      }
#line 1601 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1598 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                }
#line 1522 "error_util.m"
                break;
#line 1522 "error_util.m"
              case (MR_Integer) 1:
#line 1605 "error_util.m"
                {
#line 1606 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1605 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1605 "error_util.m"
                }
#line 1522 "error_util.m"
                break;
#line 1522 "error_util.m"
              case (MR_Integer) 2:
#line 1526 "error_util.m"
                {
#line 1526 "error_util.m"
                  MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1526 "error_util.m"
                  MR_Word parse_tree__error_util__V_76_76;

#line 1527 "error_util.m"
                  {
#line 1527 "error_util.m"
                    parse_tree__error_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_76_76, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1527 "error_util.m"
                  }
#line 1527 "error_util.m"
                  {
#line 1527 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1527 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_76_76));
#line 1527 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1527 "error_util.m"
                  }
#line 1526 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1526 "error_util.m"
                }
#line 1522 "error_util.m"
                break;
#line 1522 "error_util.m"
              case (MR_Integer) 3:
#line 1522 "error_util.m"
#line 1522 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) {
#line 1522 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1522 "error_util.m"
                  case (MR_Integer) 0:
#line 1529 "error_util.m"
                    {
#line 1529 "error_util.m"
                      MR_Word parse_tree__error_util__V_74_74;
#line 1529 "error_util.m"
                      MR_String parse_tree__error_util__V_75_75;
#line 1529 "error_util.m"
                      MR_String parse_tree__error_util__Word_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1530 "error_util.m"
                      {
#line 1530 "error_util.m"
                        parse_tree__error_util__V_75_75 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_81);
                      }
#line 1530 "error_util.m"
                      {
#line 1530 "error_util.m"
                        parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1530 "error_util.m"
                      }
#line 1530 "error_util.m"
                      {
#line 1530 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1530 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1530 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1530 "error_util.m"
                      }
#line 1529 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1529 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 1:
#line 1532 "error_util.m"
                    {
#line 1532 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1532 "error_util.m"
                      MR_Word parse_tree__error_util__V_72_72;
#line 1532 "error_util.m"
                      MR_String parse_tree__error_util__V_73_73;

#line 1533 "error_util.m"
                      {
#line 1533 "error_util.m"
                        parse_tree__error_util__V_73_73 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                      }
#line 1533 "error_util.m"
                      {
#line 1533 "error_util.m"
                        parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1533 "error_util.m"
                      }
#line 1533 "error_util.m"
                      {
#line 1533 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1533 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1533 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1533 "error_util.m"
                      }
#line 1532 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1532 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 2:
#line 1535 "error_util.m"
                    {
#line 1535 "error_util.m"
                      MR_Word parse_tree__error_util__V_70_70;
#line 1535 "error_util.m"
                      MR_String parse_tree__error_util__V_71_71;
#line 1535 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__V_71_71 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_82);
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1536 "error_util.m"
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1536 "error_util.m"
                      }
#line 1535 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1535 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 3:
#line 1547 "error_util.m"
                    {
#line 1547 "error_util.m"
                      MR_Word parse_tree__error_util__V_68_68;
#line 1547 "error_util.m"
                      MR_String parse_tree__error_util__Word_83 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1548 "error_util.m"
                      {
#line 1548 "error_util.m"
                        parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "error_util.m"
                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1548 "error_util.m"
                      }
#line 1548 "error_util.m"
                      {
#line 1548 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1548 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1548 "error_util.m"
                      }
#line 1547 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1547 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 4:
#line 1550 "error_util.m"
                    {
#line 1550 "error_util.m"
                      MR_Word parse_tree__error_util__V_67_67;
#line 1550 "error_util.m"
                      MR_String parse_tree__error_util__Word_84 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1551 "error_util.m"
                      {
#line 1551 "error_util.m"
                        parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "error_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__Word_84));
#line 1551 "error_util.m"
                      }
#line 1551 "error_util.m"
                      {
#line 1551 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1551 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1551 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1551 "error_util.m"
                      }
#line 1550 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1550 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 5:
#line 1520 "error_util.m"
                    {
#line 1520 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1521 "error_util.m"
                      {
#line 1521 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1520 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1520 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 6:
#line 1523 "error_util.m"
                    {
#line 1523 "error_util.m"
                      MR_String parse_tree__error_util__V_77_77;
#line 1523 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_80 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1524 "error_util.m"
                      {
#line 1524 "error_util.m"
                        parse_tree__error_util__V_77_77 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_80);
                      }
#line 1524 "error_util.m"
                      {
#line 1524 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_77_77, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1523 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1523 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 7:
#line 1553 "error_util.m"
                    {
#line 1553 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1553 "error_util.m"
                      MR_Word parse_tree__error_util__V_65_65;
#line 1553 "error_util.m"
                      MR_String parse_tree__error_util__V_66_66;

#line 1554 "error_util.m"
                      {
#line 1554 "error_util.m"
                        parse_tree__error_util__V_66_66 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                      }
#line 1554 "error_util.m"
                      {
#line 1554 "error_util.m"
                        parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1554 "error_util.m"
                      }
#line 1554 "error_util.m"
                      {
#line 1554 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1554 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1554 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1554 "error_util.m"
                      }
#line 1553 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1553 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 8:
#line 1556 "error_util.m"
                    {
#line 1556 "error_util.m"
                      MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1556 "error_util.m"
                      MR_Word parse_tree__error_util__V_64_64;
#line 1556 "error_util.m"
                      MR_String parse_tree__error_util__Word_85;

#line 1557 "error_util.m"
                      {
#line 1557 "error_util.m"
                        parse_tree__error_util__Word_85 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                      }
#line 1558 "error_util.m"
                      {
#line 1558 "error_util.m"
                        parse_tree__error_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_64_64, 0) = ((MR_Box) (parse_tree__error_util__Word_85));
#line 1558 "error_util.m"
                      }
#line 1558 "error_util.m"
                      {
#line 1558 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1558 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1558 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1558 "error_util.m"
                      }
#line 1556 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1556 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 9:
#line 1560 "error_util.m"
                    {
#line 1560 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1560 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId_28;
#line 1560 "error_util.m"
                      MR_Word parse_tree__error_util__V_63_63;
#line 1560 "error_util.m"
                      MR_String parse_tree__error_util__Word_86;

#line 1561 "error_util.m"
                      {
#line 1561 "error_util.m"
                        parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_27, &parse_tree__error_util__ConsId_28);
                      }
#line 1562 "error_util.m"
                      {
#line 1562 "error_util.m"
                        parse_tree__error_util__Word_86 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_28);
                      }
#line 1563 "error_util.m"
                      {
#line 1563 "error_util.m"
                        parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1563 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__Word_86));
#line 1563 "error_util.m"
                      }
#line 1563 "error_util.m"
                      {
#line 1563 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1563 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1563 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1563 "error_util.m"
                      }
#line 1560 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1560 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 10:
#line 1565 "error_util.m"
                    {
#line 1565 "error_util.m"
                      MR_Word parse_tree__error_util__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1565 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtor_30;
#line 1565 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtorName_31;
#line 1565 "error_util.m"
                      MR_Integer parse_tree__error_util__TypeCtorArity_32;
#line 1565 "error_util.m"
                      MR_Word parse_tree__error_util__NewWord_33;
#line 1565 "error_util.m"
                      MR_String parse_tree__error_util__V_62_62;
#line 1565 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_87;

#line 1566 "error_util.m"
                      {
#line 1566 "error_util.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_29, &parse_tree__error_util__TypeCtor_30);
                      }
#line 1567 "error_util.m"
                      parse_tree__error_util__TypeCtorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 0)));
#line 1567 "error_util.m"
                      parse_tree__error_util__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 1)));
#line 1568 "error_util.m"
                      {
#line 1568 "error_util.m"
                        parse_tree__error_util__SymName_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1568 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_31));
#line 1568 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_32));
#line 1568 "error_util.m"
                      }
#line 1569 "error_util.m"
                      {
#line 1569 "error_util.m"
                        parse_tree__error_util__V_62_62 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_87);
                      }
#line 1569 "error_util.m"
                      {
#line 1569 "error_util.m"
                        parse_tree__error_util__NewWord_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1569 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_33, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1569 "error_util.m"
                      }
#line 1570 "error_util.m"
                      {
#line 1570 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1570 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_33));
#line 1570 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1570 "error_util.m"
                      }
#line 1565 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1565 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 11:
#line 1572 "error_util.m"
                    {
#line 1572 "error_util.m"
                      MR_Word parse_tree__error_util__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1572 "error_util.m"
                      MR_Word parse_tree__error_util__V_61_61;
#line 1572 "error_util.m"
                      MR_String parse_tree__error_util__Word_88;

#line 1875 "error_util.m"
#line 1875 "error_util.m"
                      switch (parse_tree__error_util__PredOrFunc_34) {
#line 1875 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1875 "error_util.m"
                        case (MR_Integer) 1:
#line 1876 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "function";
#line 1875 "error_util.m"
                          break;
#line 1875 "error_util.m"
                        case (MR_Integer) 0:
#line 1875 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "predicate";
#line 1875 "error_util.m"
                          break;
#line 1875 "error_util.m"
                      }
#line 1574 "error_util.m"
                      {
#line 1574 "error_util.m"
                        parse_tree__error_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_61_61, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1574 "error_util.m"
                      }
#line 1574 "error_util.m"
                      {
#line 1574 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1574 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1574 "error_util.m"
                      }
#line 1572 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1572 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 12:
#line 1576 "error_util.m"
                    {
#line 1576 "error_util.m"
                      MR_Word parse_tree__error_util__SimpleCallId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1576 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_89;

#line 1577 "error_util.m"
                      {
#line 1577 "error_util.m"
                        parse_tree__error_util__WordsStr_89 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_35);
                      }
#line 1578 "error_util.m"
                      {
#line 1578 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_89, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1576 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1576 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 13:
#line 1580 "error_util.m"
                    {
#line 1580 "error_util.m"
                      MR_String parse_tree__error_util__DeclName_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1580 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;
#line 1580 "error_util.m"
                      MR_Word parse_tree__error_util__V_60_60;
#line 1580 "error_util.m"
                      MR_String parse_tree__error_util__Word_90;

#line 1581 "error_util.m"
                      {
#line 1581 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_36);
                      }
#line 1581 "error_util.m"
                      {
#line 1581 "error_util.m"
                        parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_58_58);
                      }
#line 1582 "error_util.m"
                      {
#line 1582 "error_util.m"
                        parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1582 "error_util.m"
                      }
#line 1582 "error_util.m"
                      {
#line 1582 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1582 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1582 "error_util.m"
                      }
#line 1580 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1580 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 14:
#line 1584 "error_util.m"
                    {
#line 1584 "error_util.m"
                      MR_String parse_tree__error_util__PragmaName_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1584 "error_util.m"
                      MR_String parse_tree__error_util__V_55_55;
#line 1584 "error_util.m"
                      MR_Word parse_tree__error_util__V_57_57;
#line 1584 "error_util.m"
                      MR_String parse_tree__error_util__Word_91;

#line 1585 "error_util.m"
                      {
#line 1585 "error_util.m"
                        parse_tree__error_util__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_37);
                      }
#line 1585 "error_util.m"
                      {
#line 1585 "error_util.m"
                        parse_tree__error_util__Word_91 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_55_55);
                      }
#line 1586 "error_util.m"
                      {
#line 1586 "error_util.m"
                        parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_91));
#line 1586 "error_util.m"
                      }
#line 1586 "error_util.m"
                      {
#line 1586 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1586 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1586 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1586 "error_util.m"
                      }
#line 1584 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1584 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 15:
#line 1593 "error_util.m"
                    {
#line 1593 "error_util.m"
                      MR_Integer parse_tree__error_util__IndentDelta_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1593 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49;
#line 1593 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_92;

#line 1594 "error_util.m"
                      {
#line 1594 "error_util.m"
                        parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1595 "error_util.m"
                      {
#line 1595 "error_util.m"
                        parse_tree__error_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1595 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1595 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1595 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_39));
#line 1595 "error_util.m"
                      }
#line 1595 "error_util.m"
                      {
#line 1595 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_49_49)));
                      }
#line 1596 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1593 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                  case (MR_Integer) 16:
#line 1605 "error_util.m"
                    {
#line 1606 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1605 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1605 "error_util.m"
                    }
#line 1522 "error_util.m"
                    break;
#line 1522 "error_util.m"
                }
#line 1522 "error_util.m"
                break;
#line 1522 "error_util.m"
            }
#line 1608 "error_util.m"
            /* direct tailcall eliminated */
#line 1608 "error_util.m"
            {
#line 1608 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1608 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1608 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1608 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1608 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1608 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1608 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1608 "error_util.m"
            }
#line 1608 "error_util.m"
            continue;
#line 1518 "error_util.m"
          }
#line 1514 "error_util.m"
      }
#line 1514 "error_util.m"
      break;
#line 1514 "error_util.m"
    }
#line 1510 "error_util.m"
}

#line 1473 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1473 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1473 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1473 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1473 "error_util.m"
{
#line 1476 "error_util.m"
  {
#line 1476 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1476 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1476 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1477 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1476 "error_util.m"
    else
#line 1478 "error_util.m"
      {
#line 1478 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1478 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1478 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1478 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1478 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1478 "error_util.m"
          {
#line 1478 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1478 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1478 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1478 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1478 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1478 "error_util.m"
          }
#line 1478 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1479 "error_util.m"
          {
#line 1479 "error_util.m"
            parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1478 "error_util.m"
        else
#line 1481 "error_util.m"
          {
#line 1481 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1481 "error_util.m"
            {
#line 1481 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1481 "error_util.m"
            {
#line 1481 "error_util.m"
              parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1481 "error_util.m"
          }
#line 1478 "error_util.m"
      }
#line 1476 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1476 "error_util.m"
  }
#line 1473 "error_util.m"
}

#line 1436 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1436 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1436 "error_util.m"
{
#line 1439 "error_util.m"
  {
#line 1439 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1439 "error_util.m"
    MR_String parse_tree__error_util__Str_4;

#line 1439 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1440 "error_util.m"
      parse_tree__error_util__Str_4 = (MR_String) "first";
#line 1439 "error_util.m"
    else
#line 1441 "error_util.m"
      {
#line 1441 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1441 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1442 "error_util.m"
          parse_tree__error_util__Str_4 = (MR_String) "second";
#line 1441 "error_util.m"
        else
#line 1443 "error_util.m"
          {
#line 1443 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1443 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1444 "error_util.m"
              parse_tree__error_util__Str_4 = (MR_String) "third";
#line 1443 "error_util.m"
            else
#line 1445 "error_util.m"
              {
#line 1445 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 4);
#line 1445 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1446 "error_util.m"
                  parse_tree__error_util__Str_4 = (MR_String) "fourth";
#line 1445 "error_util.m"
                else
#line 1447 "error_util.m"
                  {
#line 1447 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 5);
#line 1447 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 1448 "error_util.m"
                      parse_tree__error_util__Str_4 = (MR_String) "fifth";
#line 1447 "error_util.m"
                    else
#line 1449 "error_util.m"
                      {
#line 1449 "error_util.m"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 6);
#line 1449 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
                          parse_tree__error_util__Str_4 = (MR_String) "sixth";
#line 1449 "error_util.m"
                        else
#line 1451 "error_util.m"
                          {
#line 1451 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 7);
#line 1451 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1452 "error_util.m"
                              parse_tree__error_util__Str_4 = (MR_String) "seventh";
#line 1451 "error_util.m"
                            else
#line 1453 "error_util.m"
                              {
#line 1453 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 8);
#line 1453 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
                                  parse_tree__error_util__Str_4 = (MR_String) "eighth";
#line 1453 "error_util.m"
                                else
#line 1455 "error_util.m"
                                  {
#line 1455 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 9);
#line 1455 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 1456 "error_util.m"
                                      parse_tree__error_util__Str_4 = (MR_String) "ninth";
#line 1455 "error_util.m"
                                    else
#line 1457 "error_util.m"
                                      {
#line 1457 "error_util.m"
                                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 10);
#line 1457 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 1458 "error_util.m"
                                          parse_tree__error_util__Str_4 = (MR_String) "tenth";
#line 1457 "error_util.m"
                                        else
#line 1462 "error_util.m"
                                          {
#line 1462 "error_util.m"
                                            MR_String parse_tree__error_util__NStr_5;
#line 1462 "error_util.m"
                                            MR_Integer parse_tree__error_util__LastDigit_6;

#line 1462 "error_util.m"
                                            {
#line 1462 "error_util.m"
                                              parse_tree__error_util__NStr_5 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                                            }
#line 1463 "error_util.m"
                                            {
#line 1463 "error_util.m"
                                              parse_tree__error_util__LastDigit_6 = mercury__int__mod_2_f_0(parse_tree__error_util__N_3, (MR_Integer) 10);
                                            }
#line 1464 "error_util.m"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1464 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1464 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 2);
#line 1464 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1465 "error_util.m"
                                              {
#line 1465 "error_util.m"
                                                {
#line 1465 "error_util.m"
                                                  parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "nd");
                                                }
#line 1465 "error_util.m"
                                              }
#line 1464 "error_util.m"
                                            else
#line 1466 "error_util.m"
                                              {
#line 1466 "error_util.m"
                                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1466 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1466 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 3);
#line 1466 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1467 "error_util.m"
                                                  {
#line 1467 "error_util.m"
                                                    {
#line 1467 "error_util.m"
                                                      parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "rd");
                                                    }
#line 1467 "error_util.m"
                                                  }
#line 1466 "error_util.m"
                                                else
#line 1469 "error_util.m"
                                                  {
#line 1469 "error_util.m"
                                                    {
#line 1469 "error_util.m"
                                                      parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "th");
                                                    }
#line 1469 "error_util.m"
                                                  }
#line 1466 "error_util.m"
                                              }
#line 1462 "error_util.m"
                                          }
#line 1457 "error_util.m"
                                      }
#line 1455 "error_util.m"
                                  }
#line 1453 "error_util.m"
                              }
#line 1451 "error_util.m"
                          }
#line 1449 "error_util.m"
                      }
#line 1447 "error_util.m"
                  }
#line 1445 "error_util.m"
              }
#line 1443 "error_util.m"
          }
#line 1441 "error_util.m"
      }
#line 1439 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1439 "error_util.m"
  }
#line 1436 "error_util.m"
}

#line 1344 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1344 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1344 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1344 "error_util.m"
{
#line 1347 "error_util.m"
  {
#line 1347 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1347 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1347 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1347 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1347 "error_util.m"
    else
#line 1348 "error_util.m"
      {
#line 1348 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1348 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1348 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1349 "error_util.m"
        {
#line 1349 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1353 "error_util.m"
#line 1353 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 1353 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "error_util.m"
          case (MR_Integer) 0:
#line 1353 "error_util.m"
#line 1353 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Component_6)) {
#line 1353 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "error_util.m"
              case (MR_Integer) 0:
#line 1373 "error_util.m"
#line 1373 "error_util.m"
                switch (parse_tree__error_util__FirstInMsg_1) {
#line 1373 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1373 "error_util.m"
                  case (MR_Integer) 0:
#line 1372 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1373 "error_util.m"
                    break;
#line 1373 "error_util.m"
                  case (MR_Integer) 1:
#line 1698 "error_util.m"
                    {
#line 1698 "error_util.m"
                      MR_Char parse_tree__error_util__First_60;
#line 1698 "error_util.m"
                      MR_String parse_tree__error_util__Rest_61;

#line 1699 "error_util.m"
                      {
#line 1699 "error_util.m"
                        parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_60, &parse_tree__error_util__Rest_61);
                      }
#line 1699 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1700 "error_util.m"
                        {
#line 1700 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_60);
                        }
#line 1698 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1702 "error_util.m"
                        {
#line 1702 "error_util.m"
                          MR_Char parse_tree__error_util__LoweredFirst_62;

#line 1702 "error_util.m"
                          {
#line 1702 "error_util.m"
                            mercury__char__to_lower_2_p_0(parse_tree__error_util__First_60, &parse_tree__error_util__LoweredFirst_62);
                          }
#line 1703 "error_util.m"
                          {
#line 1703 "error_util.m"
                            mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_62, parse_tree__error_util__Rest_61);
                          }
#line 1702 "error_util.m"
                        }
#line 1698 "error_util.m"
                      else
#line 1705 "error_util.m"
                        parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1698 "error_util.m"
                    }
#line 1373 "error_util.m"
                    break;
#line 1373 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 1:
#line 1420 "error_util.m"
                {
#line 1421 "error_util.m"
                  {
#line 1421 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1420 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 2:
#line 1427 "error_util.m"
                {
#line 1428 "error_util.m"
                  {
#line 1428 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
                  }
#line 1427 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
            }
#line 1353 "error_util.m"
            break;
#line 1353 "error_util.m"
          case (MR_Integer) 1:
#line 1433 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1353 "error_util.m"
            break;
#line 1353 "error_util.m"
          case (MR_Integer) 2:
#line 1357 "error_util.m"
            {
#line 1357 "error_util.m"
              MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1358 "error_util.m"
              {
#line 1358 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
              }
#line 1357 "error_util.m"
            }
#line 1353 "error_util.m"
            break;
#line 1353 "error_util.m"
          case (MR_Integer) 3:
#line 1353 "error_util.m"
#line 1353 "error_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) {
#line 1353 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1353 "error_util.m"
              case (MR_Integer) 0:
#line 1360 "error_util.m"
                {
#line 1360 "error_util.m"
                  MR_String parse_tree__error_util__V_40_40;
#line 1360 "error_util.m"
                  MR_String parse_tree__error_util__Word_43 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1360 "error_util.m"
                  MR_String parse_tree__error_util__V_79_79;

#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_43, (MR_String) "\'");
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_79_79);
                  }
#line 1361 "error_util.m"
                  {
#line 1361 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1360 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 1:
#line 1363 "error_util.m"
                {
#line 1363 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1363 "error_util.m"
                  MR_String parse_tree__error_util__V_39_39;

#line 1364 "error_util.m"
                  {
#line 1364 "error_util.m"
                    parse_tree__error_util__V_39_39 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                  }
#line 1364 "error_util.m"
                  {
#line 1364 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1363 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 2:
#line 1366 "error_util.m"
                {
#line 1366 "error_util.m"
                  MR_String parse_tree__error_util__V_38_38;
#line 1366 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1439 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 1);
#line 1439 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1440 "error_util.m"
                    parse_tree__error_util__V_38_38 = (MR_String) "first";
#line 1439 "error_util.m"
                  else
#line 1441 "error_util.m"
                    {
#line 1441 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 2);
#line 1441 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1442 "error_util.m"
                        parse_tree__error_util__V_38_38 = (MR_String) "second";
#line 1441 "error_util.m"
                      else
#line 1443 "error_util.m"
                        {
#line 1443 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 3);
#line 1443 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 1444 "error_util.m"
                            parse_tree__error_util__V_38_38 = (MR_String) "third";
#line 1443 "error_util.m"
                          else
#line 1445 "error_util.m"
                            {
#line 1445 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 4);
#line 1445 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1446 "error_util.m"
                                parse_tree__error_util__V_38_38 = (MR_String) "fourth";
#line 1445 "error_util.m"
                              else
#line 1447 "error_util.m"
                                {
#line 1447 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 5);
#line 1447 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1448 "error_util.m"
                                    parse_tree__error_util__V_38_38 = (MR_String) "fifth";
#line 1447 "error_util.m"
                                  else
#line 1449 "error_util.m"
                                    {
#line 1449 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 6);
#line 1449 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
                                        parse_tree__error_util__V_38_38 = (MR_String) "sixth";
#line 1449 "error_util.m"
                                      else
#line 1451 "error_util.m"
                                        {
#line 1451 "error_util.m"
                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 7);
#line 1451 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 1452 "error_util.m"
                                            parse_tree__error_util__V_38_38 = (MR_String) "seventh";
#line 1451 "error_util.m"
                                          else
#line 1453 "error_util.m"
                                            {
#line 1453 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 8);
#line 1453 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 1454 "error_util.m"
                                                parse_tree__error_util__V_38_38 = (MR_String) "eighth";
#line 1453 "error_util.m"
                                              else
#line 1455 "error_util.m"
                                                {
#line 1455 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 9);
#line 1455 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 1456 "error_util.m"
                                                    parse_tree__error_util__V_38_38 = (MR_String) "ninth";
#line 1455 "error_util.m"
                                                  else
#line 1457 "error_util.m"
                                                    {
#line 1457 "error_util.m"
                                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 10);
#line 1457 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 1458 "error_util.m"
                                                        parse_tree__error_util__V_38_38 = (MR_String) "tenth";
#line 1457 "error_util.m"
                                                      else
#line 1462 "error_util.m"
                                                        {
#line 1462 "error_util.m"
                                                          MR_String parse_tree__error_util__NStr_65;
#line 1462 "error_util.m"
                                                          MR_Integer parse_tree__error_util__LastDigit_66;

#line 1462 "error_util.m"
                                                          {
#line 1462 "error_util.m"
                                                            parse_tree__error_util__NStr_65 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_44);
                                                          }
#line 1463 "error_util.m"
                                                          {
#line 1463 "error_util.m"
                                                            parse_tree__error_util__LastDigit_66 = mercury__int__mod_2_f_0(parse_tree__error_util__Int_44, (MR_Integer) 10);
                                                          }
#line 1464 "error_util.m"
                                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1464 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1464 "error_util.m"
                                                            parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 2);
#line 1464 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1465 "error_util.m"
                                                            {
#line 1465 "error_util.m"
                                                              {
#line 1465 "error_util.m"
                                                                parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "nd");
                                                              }
#line 1465 "error_util.m"
                                                            }
#line 1464 "error_util.m"
                                                          else
#line 1466 "error_util.m"
                                                            {
#line 1466 "error_util.m"
                                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1466 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1466 "error_util.m"
                                                                parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 3);
#line 1466 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1467 "error_util.m"
                                                                {
#line 1467 "error_util.m"
                                                                  {
#line 1467 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "rd");
                                                                  }
#line 1467 "error_util.m"
                                                                }
#line 1466 "error_util.m"
                                                              else
#line 1469 "error_util.m"
                                                                {
#line 1469 "error_util.m"
                                                                  {
#line 1469 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "th");
                                                                  }
#line 1469 "error_util.m"
                                                                }
#line 1466 "error_util.m"
                                                            }
#line 1462 "error_util.m"
                                                        }
#line 1457 "error_util.m"
                                                    }
#line 1455 "error_util.m"
                                                }
#line 1453 "error_util.m"
                                            }
#line 1451 "error_util.m"
                                        }
#line 1449 "error_util.m"
                                    }
#line 1447 "error_util.m"
                                }
#line 1445 "error_util.m"
                            }
#line 1443 "error_util.m"
                        }
#line 1441 "error_util.m"
                    }
#line 1367 "error_util.m"
                  {
#line 1367 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1366 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 3:
#line 1378 "error_util.m"
                {
#line 1378 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1379 "error_util.m"
                  {
#line 1379 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                  }
#line 1378 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 4:
#line 1381 "error_util.m"
                {
#line 1381 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1382 "error_util.m"
                  {
#line 1382 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1381 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 5:
#line 1351 "error_util.m"
                {
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1352 "error_util.m"
                  {
#line 1352 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1351 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 6:
#line 1354 "error_util.m"
                {
#line 1354 "error_util.m"
                  MR_String parse_tree__error_util__V_41_41;
#line 1354 "error_util.m"
                  MR_String parse_tree__error_util__Words_42 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1355 "error_util.m"
                  {
#line 1355 "error_util.m"
                    parse_tree__error_util__V_41_41 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Words_42);
                  }
#line 1355 "error_util.m"
                  {
#line 1355 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1354 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 7:
#line 1384 "error_util.m"
                {
#line 1384 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1384 "error_util.m"
                  MR_String parse_tree__error_util__Word_45;
#line 1384 "error_util.m"
                  MR_String parse_tree__error_util__V_82_82;
#line 1384 "error_util.m"
                  MR_String parse_tree__error_util__V_85_85;

#line 1711 "error_util.m"
                  {
#line 1711 "error_util.m"
                    parse_tree__error_util__V_82_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_82_82, (MR_String) "\'");
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_85_85);
                  }
#line 1386 "error_util.m"
                  {
#line 1386 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1384 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 8:
#line 1388 "error_util.m"
                {
#line 1388 "error_util.m"
                  MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__Word_46;
#line 1388 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1388 "error_util.m"
                  MR_Integer parse_tree__error_util__Arity_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__V_89_89;
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__V_90_90;
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__V_91_91;
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__V_93_93;
#line 1388 "error_util.m"
                  MR_String parse_tree__error_util__V_96_96;

#line 1716 "error_util.m"
                  {
#line 1716 "error_util.m"
                    parse_tree__error_util__V_90_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_87);
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_96_96 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_90_90, (MR_String) "\'");
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_96_96);
                  }
#line 1716 "error_util.m"
                  {
#line 1716 "error_util.m"
                    parse_tree__error_util__V_93_93 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_88);
                  }
#line 1716 "error_util.m"
                  {
#line 1716 "error_util.m"
                    parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_93_93);
                  }
#line 1716 "error_util.m"
                  {
#line 1716 "error_util.m"
                    parse_tree__error_util__Word_46 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_89_89, parse_tree__error_util__V_91_91);
                  }
#line 1390 "error_util.m"
                  {
#line 1390 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1388 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 9:
#line 1392 "error_util.m"
                {
#line 1392 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1392 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId_18;
#line 1392 "error_util.m"
                  MR_String parse_tree__error_util__Word_47;

#line 1393 "error_util.m"
                  {
#line 1393 "error_util.m"
                    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_17, &parse_tree__error_util__ConsId_18);
                  }
#line 1394 "error_util.m"
                  {
#line 1394 "error_util.m"
                    parse_tree__error_util__Word_47 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_18);
                  }
#line 1395 "error_util.m"
                  {
#line 1395 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1392 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 10:
#line 1413 "error_util.m"
                {
#line 1413 "error_util.m"
                  MR_Word parse_tree__error_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1413 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtor_24;
#line 1413 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtorName_25;
#line 1413 "error_util.m"
                  MR_Integer parse_tree__error_util__TypeCtorArity_26;
#line 1413 "error_util.m"
                  MR_String parse_tree__error_util__Word_52;
#line 1413 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_53;

#line 1414 "error_util.m"
                  {
#line 1414 "error_util.m"
                    parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_23, &parse_tree__error_util__TypeCtor_24);
                  }
#line 1415 "error_util.m"
                  parse_tree__error_util__TypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 0)));
#line 1415 "error_util.m"
                  parse_tree__error_util__TypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 1)));
#line 1416 "error_util.m"
                  {
#line 1416 "error_util.m"
                    parse_tree__error_util__SymName_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_25));
#line 1416 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_26));
#line 1416 "error_util.m"
                  }
#line 1417 "error_util.m"
                  {
#line 1417 "error_util.m"
                    parse_tree__error_util__Word_52 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_53);
                  }
#line 1418 "error_util.m"
                  {
#line 1418 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_52, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1413 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 11:
#line 1397 "error_util.m"
                {
#line 1397 "error_util.m"
                  MR_Word parse_tree__error_util__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1397 "error_util.m"
                  MR_String parse_tree__error_util__Word_48;

#line 1875 "error_util.m"
#line 1875 "error_util.m"
                  switch (parse_tree__error_util__PredOrFunc_19) {
#line 1875 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1875 "error_util.m"
                    case (MR_Integer) 1:
#line 1876 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "function";
#line 1875 "error_util.m"
                      break;
#line 1875 "error_util.m"
                    case (MR_Integer) 0:
#line 1875 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "predicate";
#line 1875 "error_util.m"
                      break;
#line 1875 "error_util.m"
                  }
#line 1399 "error_util.m"
                  {
#line 1399 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1397 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 12:
#line 1401 "error_util.m"
                {
#line 1401 "error_util.m"
                  MR_Word parse_tree__error_util__SimpleCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1401 "error_util.m"
                  MR_String parse_tree__error_util__Word_49;

#line 1402 "error_util.m"
                  {
#line 1402 "error_util.m"
                    parse_tree__error_util__Word_49 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_20);
                  }
#line 1403 "error_util.m"
                  {
#line 1403 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1401 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 13:
#line 1405 "error_util.m"
                {
#line 1405 "error_util.m"
                  MR_String parse_tree__error_util__Decl_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1405 "error_util.m"
                  MR_String parse_tree__error_util__V_36_36;
#line 1405 "error_util.m"
                  MR_String parse_tree__error_util__Word_50;
#line 1405 "error_util.m"
                  MR_String parse_tree__error_util__V_56_56;

#line 1406 "error_util.m"
                  {
#line 1406 "error_util.m"
                    parse_tree__error_util__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_21);
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_36_36, (MR_String) "\'");
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__Word_50 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_56_56);
                  }
#line 1407 "error_util.m"
                  {
#line 1407 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1405 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 14:
#line 1409 "error_util.m"
                {
#line 1409 "error_util.m"
                  MR_String parse_tree__error_util__PragmaName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1409 "error_util.m"
                  MR_String parse_tree__error_util__V_34_34;
#line 1409 "error_util.m"
                  MR_String parse_tree__error_util__Word_51;
#line 1409 "error_util.m"
                  MR_String parse_tree__error_util__V_75_75;

#line 1410 "error_util.m"
                  {
#line 1410 "error_util.m"
                    parse_tree__error_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_22);
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_34_34, (MR_String) "\'");
                  }
#line 1878 "error_util.m"
                  {
#line 1878 "error_util.m"
                    parse_tree__error_util__Word_51 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_75_75);
                  }
#line 1411 "error_util.m"
                  {
#line 1411 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1409 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 15:
#line 1423 "error_util.m"
                {
#line 1425 "error_util.m"
                  {
#line 1425 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1423 "error_util.m"
                }
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
              case (MR_Integer) 16:
#line 1433 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1353 "error_util.m"
                break;
#line 1353 "error_util.m"
            }
#line 1353 "error_util.m"
            break;
#line 1353 "error_util.m"
        }
#line 1348 "error_util.m"
      }
#line 1347 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1347 "error_util.m"
  }
#line 1344 "error_util.m"
}

#line 1333 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1333 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1333 "error_util.m"
{
#line 1335 "error_util.m"
  while (MR_TRUE)
#line 1335 "error_util.m"
    {
#line 1335 "error_util.m"
      /* tailcall optimized into a loop */
#line 1335 "error_util.m"
      {
#line 1335 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1335 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1335 "error_util.m"
          {
#line 1335 "error_util.m"
          }
#line 1335 "error_util.m"
        else
#line 1336 "error_util.m"
          {
#line 1336 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1336 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1337 "error_util.m"
            {
#line 1337 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1338 "error_util.m"
            {
#line 1338 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1339 "error_util.m"
            /* direct tailcall eliminated */
#line 1339 "error_util.m"
            {
#line 1339 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1339 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1339 "error_util.m"
            }
#line 1339 "error_util.m"
            continue;
#line 1336 "error_util.m"
          }
#line 1335 "error_util.m"
      }
#line 1335 "error_util.m"
      break;
#line 1335 "error_util.m"
    }
#line 1333 "error_util.m"
}

#line 1306 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1306 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1306 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1306 "error_util.m"
{
#line 1309 "error_util.m"
  while (MR_TRUE)
#line 1309 "error_util.m"
    {
#line 1309 "error_util.m"
      /* tailcall optimized into a loop */
#line 1309 "error_util.m"
      {
#line 1309 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1309 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1309 "error_util.m"
          {
#line 1309 "error_util.m"
          }
#line 1309 "error_util.m"
        else
#line 1310 "error_util.m"
          {
#line 1310 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1310 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1310 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1310 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1310 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1310 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1310 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1314 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "error_util.m"
              {
#line 1315 "error_util.m"
              }
#line 1314 "error_util.m"
            else
#line 1312 "error_util.m"
              {
#line 1312 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1313 "error_util.m"
                {
#line 1313 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1312 "error_util.m"
              }
#line 1317 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1317 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1318 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1318 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1319 "error_util.m"
            {
#line 1319 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1320 "error_util.m"
            {
#line 1320 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1326 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1326 "error_util.m"
              {
#line 1327 "error_util.m"
                {
#line 1327 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1326 "error_util.m"
              }
#line 1326 "error_util.m"
            else
#line 1328 "error_util.m"
              {
#line 1328 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1328 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1329 "error_util.m"
                {
#line 1329 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1330 "error_util.m"
                {
#line 1330 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1331 "error_util.m"
                {
#line 1331 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1328 "error_util.m"
              }
#line 1322 "error_util.m"
            /* direct tailcall eliminated */
#line 1322 "error_util.m"
            {
#line 1322 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1322 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1322 "error_util.m"
            }
#line 1322 "error_util.m"
            continue;
#line 1310 "error_util.m"
          }
#line 1309 "error_util.m"
      }
#line 1309 "error_util.m"
      break;
#line 1309 "error_util.m"
    }
#line 1306 "error_util.m"
}

#line 1278 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1278 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1278 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2)
#line 1278 "error_util.m"
{
#line 1280 "error_util.m"
  while (MR_TRUE)
#line 1280 "error_util.m"
    {
#line 1280 "error_util.m"
      /* tailcall optimized into a loop */
#line 1280 "error_util.m"
      {
#line 1280 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1280 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1280 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1280 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 1280 "error_util.m"
        else
#line 1281 "error_util.m"
          {
#line 1281 "error_util.m"
            MR_Word parse_tree__error_util__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1281 "error_util.m"
            MR_Word parse_tree__error_util__Ranges_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1281 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 0)));
#line 1281 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMax_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 1)));

#line 1286 "error_util.m"
            if ((parse_tree__error_util__MaybeMin_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1285 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1286 "error_util.m"
            else
#line 1287 "error_util.m"
              {
#line 1287 "error_util.m"
                MR_Integer parse_tree__error_util__Min_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMin_9, (MR_Integer) 0)));

#line 1288 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Min_11 <= parse_tree__error_util__LineNumber_2);
#line 1287 "error_util.m"
              }
#line 1289 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1292 "error_util.m"
              {
#line 1292 "error_util.m"
                if ((parse_tree__error_util__MaybeMax_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "error_util.m"
                  parse_tree__error_util__succeeded = MR_TRUE;
#line 1292 "error_util.m"
                else
#line 1293 "error_util.m"
                  {
#line 1293 "error_util.m"
                    MR_Integer parse_tree__error_util__Max_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_10, (MR_Integer) 0)));

#line 1294 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumber_2 <= parse_tree__error_util__Max_12);
#line 1293 "error_util.m"
                  }
#line 1292 "error_util.m"
              }
#line 1283 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1297 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1283 "error_util.m"
            else
#line 1299 "error_util.m"
              {
#line 1299 "error_util.m"
                /* direct tailcall eliminated */
#line 1299 "error_util.m"
                {
#line 1299 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Ranges_6;

#line 1299 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1299 "error_util.m"
                }
#line 1299 "error_util.m"
                continue;
#line 1299 "error_util.m"
              }
#line 1281 "error_util.m"
          }
#line 1280 "error_util.m"
        return parse_tree__error_util__HeadVar__3_3;
#line 1280 "error_util.m"
      }
#line 1280 "error_util.m"
      break;
#line 1280 "error_util.m"
    }
#line 1278 "error_util.m"
}

#line 1212 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1212 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1212 "error_util.m"
  MR_Word parse_tree__error_util__Components_14)
#line 1212 "error_util.m"
{
#line 1218 "error_util.m"
  {
#line 1218 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1218 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextLength_20;

#line 1254 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "error_util.m"
      {
#line 1256 "error_util.m"
        parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[4]);
#line 1255 "error_util.m"
      }
#line 1254 "error_util.m"
    else
#line 1227 "error_util.m"
      {
#line 1227 "error_util.m"
        MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_10, (MR_Integer) 0)));
#line 1227 "error_util.m"
        MR_String parse_tree__error_util__FileName_17;
#line 1227 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_18;

#line 1228 "error_util.m"
        {
#line 1228 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__FileName_17);
        }
#line 1229 "error_util.m"
        {
#line 1229 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__LineNumber_18);
        }
#line 1232 "error_util.m"
        {
#line 1232 "error_util.m"
          MR_Word parse_tree__error_util__LineNumberRanges_19;
#line 1232 "error_util.m"
          MR_Word parse_tree__error_util__V_37_37;
#line 1232 "error_util.m"
          MR_Box parse_tree__error_util__conv0_LineNumberRanges_19;

#line 1232 "error_util.m"
          {
#line 1232 "error_util.m"
            parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) (parse_tree__error_util__FileName_17)), &parse_tree__error_util__conv0_LineNumberRanges_19);
          }
#line 1232 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1232 "error_util.m"
            {
#line 1232 "error_util.m"
              parse_tree__error_util__LineNumberRanges_19 = ((MR_Word) parse_tree__error_util__conv0_LineNumberRanges_19);
#line 1232 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1232 "error_util.m"
            }
#line 1232 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1232 "error_util.m"
            {
#line 1233 "error_util.m"
              {
#line 1233 "error_util.m"
                parse_tree__error_util__V_37_37 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_19, parse_tree__error_util__LineNumber_18);
              }
#line 1233 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 1232 "error_util.m"
            }
#line 1232 "error_util.m"
        }
#line 1234 "error_util.m"
        if (!(parse_tree__error_util__succeeded))
#line 1236 "error_util.m"
          {
#line 1236 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 1236 "error_util.m"
            MR_Word parse_tree__error_util__LineNumberRanges_48;
#line 1236 "error_util.m"
            MR_Box parse_tree__error_util__conv1_LineNumberRanges_48;

#line 1236 "error_util.m"
            {
#line 1236 "error_util.m"
              parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) ((MR_String) "")), &parse_tree__error_util__conv1_LineNumberRanges_48);
            }
#line 1236 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1236 "error_util.m"
              {
#line 1236 "error_util.m"
                parse_tree__error_util__LineNumberRanges_48 = ((MR_Word) parse_tree__error_util__conv1_LineNumberRanges_48);
#line 1236 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1236 "error_util.m"
              }
#line 1236 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1236 "error_util.m"
              {
#line 1237 "error_util.m"
                {
#line 1237 "error_util.m"
                  parse_tree__error_util__V_36_36 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_48, parse_tree__error_util__LineNumber_18);
                }
#line 1237 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 1236 "error_util.m"
              }
#line 1236 "error_util.m"
          }
#line 1230 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1240 "error_util.m"
          {
#line 1240 "error_util.m"
            {
#line 1240 "error_util.m"
              libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
            }
#line 1241 "error_util.m"
            parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1240 "error_util.m"
          }
#line 1230 "error_util.m"
        else
#line 1243 "error_util.m"
          {
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__FileNameLength_21;
#line 1243 "error_util.m"
            MR_String parse_tree__error_util__LineNumberStr_22;
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength0_23;
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength_24;
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__V_41_41;
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1243 "error_util.m"
            MR_Integer parse_tree__error_util__V_43_43;

#line 1243 "error_util.m"
            {
#line 1243 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_17, &parse_tree__error_util__FileNameLength_21);
            }
#line 1244 "error_util.m"
            {
#line 1244 "error_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_18, &parse_tree__error_util__LineNumberStr_22);
            }
#line 1245 "error_util.m"
            {
#line 1245 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_22, &parse_tree__error_util__LineNumberStrLength0_23);
            }
#line 1246 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_23 < (MR_Integer) 3);
#line 1246 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1247 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = (MR_Integer) 3;
#line 1246 "error_util.m"
            else
#line 1249 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = parse_tree__error_util__LineNumberStrLength0_23;
#line 1252 "error_util.m"
            parse_tree__error_util__V_43_43 = (parse_tree__error_util__FileNameLength_21 + (MR_Integer) 1);
#line 1252 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__V_43_43 + parse_tree__error_util__LineNumberStrLength_24);
#line 1252 "error_util.m"
            parse_tree__error_util__V_41_41 = (parse_tree__error_util__V_42_42 + (MR_Integer) 2);
#line 1252 "error_util.m"
            {
#line 1252 "error_util.m"
              parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, 0) = ((MR_Box) (parse_tree__error_util__V_41_41));
#line 1252 "error_util.m"
            }
#line 1243 "error_util.m"
          }
#line 1227 "error_util.m"
      }
#line 1261 "error_util.m"
    if ((parse_tree__error_util__MaybeContextLength_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "error_util.m"
      {
#line 1259 "error_util.m"
      }
#line 1261 "error_util.m"
    else
#line 1262 "error_util.m"
      {
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1262 "error_util.m"
        MR_Integer parse_tree__error_util__ContextLength_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, (MR_Integer) 0)));
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__Paragraphs_26;
#line 1262 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndent_27;
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__MaybeRemain_30;
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__Lines_31;
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__ParasCord_55;
#line 1262 "error_util.m"
        MR_Word parse_tree__error_util__V_58_58;

#line 1501 "error_util.m"
        {
#line 1501 "error_util.m"
          parse_tree__error_util__V_58_58 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_59);
        }
#line 1500 "error_util.m"
        {
#line 1500 "error_util.m"
          parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_58_58, &parse_tree__error_util__ParasCord_55);
        }
#line 1502 "error_util.m"
        {
#line 1502 "error_util.m"
          parse_tree__error_util__Paragraphs_26 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_59, parse_tree__error_util__ParasCord_55);
        }
#line 1264 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_9 == (MR_Integer) 0);
#line 1264 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1264 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 0;
#line 1264 "error_util.m"
        else
#line 1264 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 1;
#line 1269 "error_util.m"
        if ((parse_tree__error_util__MaybeMaxWidth_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "error_util.m"
          parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1269 "error_util.m"
        else
#line 1266 "error_util.m"
          {
#line 1266 "error_util.m"
            MR_Integer parse_tree__error_util__MaxWidth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_12, (MR_Integer) 0)));
#line 1266 "error_util.m"
            MR_Integer parse_tree__error_util__Remain_29;
#line 1266 "error_util.m"
            MR_Integer parse_tree__error_util__V_46_46 = (parse_tree__error_util__ContextLength_25 + parse_tree__error_util__FixedIndent_11);

#line 1267 "error_util.m"
            parse_tree__error_util__Remain_29 = (parse_tree__error_util__MaxWidth_28 - parse_tree__error_util__V_46_46);
#line 1268 "error_util.m"
            {
#line 1268 "error_util.m"
              parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_30, 0) = ((MR_Box) (parse_tree__error_util__Remain_29));
#line 1268 "error_util.m"
            }
#line 1266 "error_util.m"
          }
#line 1273 "error_util.m"
        {
#line 1273 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_9, parse_tree__error_util__FirstIndent_27, parse_tree__error_util__Paragraphs_26, parse_tree__error_util__MaybeRemain_30, &parse_tree__error_util__Lines_31);
        }
#line 1275 "error_util.m"
        {
#line 1275 "error_util.m"
          parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_31, parse_tree__error_util__MaybeContext_10, parse_tree__error_util__FixedIndent_11);
        }
#line 1262 "error_util.m"
      }
#line 1218 "error_util.m"
  }
#line 1212 "error_util.m"
}

#line 1200 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1200 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1200 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 1200 "error_util.m"
{
#line 1205 "error_util.m"
  {
#line 1205 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1205 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_14;
#line 1205 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_15;

#line 1206 "error_util.m"
    {
#line 1206 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_11, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_14);
    }
#line 1208 "error_util.m"
    {
#line 1208 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_11, &parse_tree__error_util__LimitErrorContextsMap_15);
    }
#line 1209 "error_util.m"
    {
#line 1209 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10, parse_tree__error_util__MaybeMaxWidth_14, parse_tree__error_util__LimitErrorContextsMap_15, parse_tree__error_util__Components_12);
    }
#line 1205 "error_util.m"
  }
#line 1200 "error_util.m"
}

#line 1183 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1183 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1183 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2)
#line 1183 "error_util.m"
{
#line 1186 "error_util.m"
  {
#line 1186 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1186 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "error_util.m"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "error_util.m"
    else
#line 1187 "error_util.m"
      {
#line 1187 "error_util.m"
        MR_String parse_tree__error_util__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1187 "error_util.m"
        MR_Word parse_tree__error_util__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1187 "error_util.m"
        MR_Word parse_tree__error_util__TailPieces_6;
#line 1187 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7;
#line 1187 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1188 "error_util.m"
        {
#line 1188 "error_util.m"
          parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__Lines_4, &parse_tree__error_util__TailPieces_6);
        }
#line 1189 "error_util.m"
        {
#line 1189 "error_util.m"
          parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__Line_3));
#line 1189 "error_util.m"
        }
#line 1189 "error_util.m"
        {
#line 1189 "error_util.m"
          parse_tree__error_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 1) = ((MR_Box) (parse_tree__error_util__TailPieces_6));
#line 1189 "error_util.m"
        }
#line 1189 "error_util.m"
        {
#line 1189 "error_util.m"
          MR_Word base;
#line 1189 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "error_util.m"
          *parse_tree__error_util__HeadVar__2_2 = base;
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1189 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1189 "error_util.m"
        }
#line 1187 "error_util.m"
      }
#line 1186 "error_util.m"
  }
#line 1183 "error_util.m"
}

#line 1002 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1002 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 1002 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 1002 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10)
#line 1002 "error_util.m"
{
#line 1009 "error_util.m"
  while (MR_TRUE)
#line 1009 "error_util.m"
    {
#line 1009 "error_util.m"
      /* tailcall optimized into a loop */
#line 1009 "error_util.m"
      {
#line 1009 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1009 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "error_util.m"
          {
#line 1010 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1009 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1009 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1009 "error_util.m"
          }
#line 1009 "error_util.m"
        else
#line 1012 "error_util.m"
          {
#line 1012 "error_util.m"
            MR_Word parse_tree__error_util__Component_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1012 "error_util.m"
            MR_Word parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1012 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;
#line 1012 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 1012 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;

#line 1019 "error_util.m"
#line 1019 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_28)) {
#line 1019 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "error_util.m"
              case (MR_Integer) 0:
#line 1014 "error_util.m"
                {
#line 1014 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_28, (MR_Integer) 0)));

#line 1015 "error_util.m"
                  {
#line 1015 "error_util.m"
                    parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_37);
                  }
#line 1017 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1018 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1014 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1014 "error_util.m"
                }
#line 1019 "error_util.m"
                break;
#line 1019 "error_util.m"
              case (MR_Integer) 1:
#line 1020 "error_util.m"
                {
#line 1020 "error_util.m"
                  MR_Word parse_tree__error_util__Option_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 1020 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 1020 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1020 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_41;

#line 1021 "error_util.m"
                  {
#line 1021 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_38, &parse_tree__error_util__OptionValue_41);
                  }
#line 1022 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_41 == parse_tree__error_util__RequiredValue_39);
#line 1022 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1023 "error_util.m"
                    {
#line 1023 "error_util.m"
                      parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__EmbeddedComponents_40, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_80_80, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                    }
#line 1022 "error_util.m"
                  else
#line 1026 "error_util.m"
                    {
#line 1026 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1026 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1026 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1026 "error_util.m"
                    }
#line 1020 "error_util.m"
                }
#line 1019 "error_util.m"
                break;
#line 1019 "error_util.m"
              case (MR_Integer) 2:
#line 1029 "error_util.m"
                {
#line 1029 "error_util.m"
                  MR_Word parse_tree__error_util__AlwaysOrOnce_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 0)));
#line 1029 "error_util.m"
                  MR_Word parse_tree__error_util__VerboseErrors_43;
#line 1029 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 1)));

#line 1030 "error_util.m"
                  {
#line 1030 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 48, &parse_tree__error_util__VerboseErrors_43);
                  }
#line 1053 "error_util.m"
#line 1053 "error_util.m"
                  switch (parse_tree__error_util__VerboseErrors_43) {
#line 1053 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1053 "error_util.m"
                    case (MR_Integer) 0:
#line 1054 "error_util.m"
                      {
#line 1055 "error_util.m"
                        {
#line 1055 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 1054 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1054 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1054 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1054 "error_util.m"
                      }
#line 1053 "error_util.m"
                      break;
#line 1053 "error_util.m"
                    case (MR_Integer) 1:
#line 1039 "error_util.m"
#line 1039 "error_util.m"
                      switch (parse_tree__error_util__AlwaysOrOnce_42) {
#line 1039 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "error_util.m"
                        case (MR_Integer) 0:
#line 1034 "error_util.m"
                          {
#line 1035 "error_util.m"
                            {
#line 1035 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                            }
#line 1037 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1038 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1034 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1034 "error_util.m"
                          }
#line 1039 "error_util.m"
                          break;
#line 1039 "error_util.m"
                        case (MR_Integer) 1:
#line 1041 "error_util.m"
                          {
#line 1042 "error_util.m"
                            {
#line 1042 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, ((MR_Box) (parse_tree__error_util__ComponentPieces_86)));
                            }
#line 1041 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1044 "error_util.m"
                              {
#line 1044 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1044 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1044 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1044 "error_util.m"
                              }
#line 1041 "error_util.m"
                            else
#line 1047 "error_util.m"
                              {
#line 1046 "error_util.m"
                                {
#line 1046 "error_util.m"
                                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                                }
#line 1048 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1049 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1050 "error_util.m"
                                {
#line 1050 "error_util.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__ComponentPieces_86)), parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                                }
#line 1047 "error_util.m"
                              }
#line 1041 "error_util.m"
                          }
#line 1039 "error_util.m"
                          break;
#line 1039 "error_util.m"
                      }
#line 1053 "error_util.m"
                      break;
#line 1053 "error_util.m"
                  }
#line 1029 "error_util.m"
                }
#line 1019 "error_util.m"
                break;
#line 1019 "error_util.m"
              case (MR_Integer) 3:
#line 1019 "error_util.m"
#line 1019 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 0)))) {
#line 1019 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1019 "error_util.m"
                  case (MR_Integer) 0:
#line 1058 "error_util.m"
                    {
#line 1058 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1058 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2)));
#line 1058 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_87;

#line 1059 "error_util.m"
                      {
#line 1059 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 48, &parse_tree__error_util__VerboseErrors_87);
                      }
#line 1064 "error_util.m"
#line 1064 "error_util.m"
                      switch (parse_tree__error_util__VerboseErrors_87) {
#line 1064 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1064 "error_util.m"
                        case (MR_Integer) 0:
#line 1065 "error_util.m"
                          {
#line 1066 "error_util.m"
                            {
#line 1066 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__NonVerbosePieces_45);
                            }
#line 1068 "error_util.m"
                            {
#line 1068 "error_util.m"
                              libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                            }
#line 1065 "error_util.m"
                          }
#line 1064 "error_util.m"
                          break;
#line 1064 "error_util.m"
                        case (MR_Integer) 1:
#line 1062 "error_util.m"
                          {
#line 1062 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__VerbosePieces_44);
                          }
#line 1064 "error_util.m"
                          break;
#line 1064 "error_util.m"
                      }
#line 1070 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1071 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1058 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1058 "error_util.m"
                    }
#line 1019 "error_util.m"
                    break;
#line 1019 "error_util.m"
                  case (MR_Integer) 1:
#line 1073 "error_util.m"
                    {
#line 1073 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1073 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_46 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2));
#line 205 "error_util.m"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 0)), (MR_Integer) 5)));
#line 205 "error_util.m"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79;

#line 205 "error_util.m"
                      {
#line 205 "error_util.m"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_90), parse_tree__error_util__Anything_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79);
                      }
#line 1075 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1076 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1073 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1073 "error_util.m"
                    }
#line 1019 "error_util.m"
                    break;
#line 1019 "error_util.m"
                }
#line 1019 "error_util.m"
                break;
#line 1019 "error_util.m"
            }
#line 1078 "error_util.m"
            /* direct tailcall eliminated */
#line 1078 "error_util.m"
            {
#line 1078 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_29;
#line 1078 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 1078 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;
#line 1078 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;

#line 1078 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9;
#line 1078 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 1078 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 1078 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1078 "error_util.m"
            }
#line 1078 "error_util.m"
            continue;
#line 1012 "error_util.m"
          }
#line 1009 "error_util.m"
      }
#line 1009 "error_util.m"
      break;
#line 1009 "error_util.m"
    }
#line 1002 "error_util.m"
}

#line 970 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 970 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 970 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 970 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7)
#line 970 "error_util.m"
{
#line 976 "error_util.m"
  while (MR_TRUE)
#line 976 "error_util.m"
    {
#line 976 "error_util.m"
      /* tailcall optimized into a loop */
#line 976 "error_util.m"
      {
#line 976 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 976 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 976 "error_util.m"
          {
#line 977 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6;
#line 976 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 976 "error_util.m"
          }
#line 976 "error_util.m"
        else
#line 979 "error_util.m"
          {
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__Msg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__Components_29;
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_30;
#line 979 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_32;
#line 979 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_33;
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_41_41;
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 979 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 16319 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_21)) == (MR_mktag((MR_Integer) 1))))
#line 16321 "parse_tree.error_util.c"
              {
#line 16323 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_31;

#line 986 "error_util.m"
                parse_tree__error_util__MaybeContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 0)));
#line 986 "error_util.m"
                parse_tree__error_util__TreatAsFirst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 986 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 2)));
#line 986 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 3)));
#line 992 "error_util.m"
#line 992 "error_util.m"
                switch (parse_tree__error_util__TreatAsFirst_31) {
#line 992 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 992 "error_util.m"
                  case (MR_Integer) 1:
#line 993 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 992 "error_util.m"
                    break;
#line 992 "error_util.m"
                  case (MR_Integer) 0:
#line 991 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = (MR_Integer) 0;
#line 992 "error_util.m"
                    break;
#line 992 "error_util.m"
                }
#line 16353 "parse_tree.error_util.c"
              }
#line 16355 "parse_tree.error_util.c"
            else
#line 16357 "parse_tree.error_util.c"
              {
#line 16359 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 0)));

#line 981 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 982 "error_util.m"
                {
#line 982 "error_util.m"
                  parse_tree__error_util__MaybeContext_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_30, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_28));
#line 982 "error_util.m"
                }
#line 984 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = (MR_Integer) 0;
#line 993 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 16376 "parse_tree.error_util.c"
              }
#line 996 "error_util.m"
            parse_tree__error_util__Indent_33 = (parse_tree__error_util__ExtraIndentLevel_32 * (MR_Integer) 2);
#line 997 "error_util.m"
            {
#line 997 "error_util.m"
              parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__Components_29, parse_tree__error_util__MaybeContext_30, parse_tree__error_util__Indent_33, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_41_41, &parse_tree__error_util__STATE_VARIABLE_First_43_43, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45);
            }
#line 999 "error_util.m"
            /* direct tailcall eliminated */
#line 999 "error_util.m"
            {
#line 999 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_22;
#line 999 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 999 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 999 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 999 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6;
#line 999 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 999 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 999 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 999 "error_util.m"
            }
#line 999 "error_util.m"
            continue;
#line 979 "error_util.m"
          }
#line 976 "error_util.m"
      }
#line 976 "error_util.m"
      break;
#line 976 "error_util.m"
    }
#line 970 "error_util.m"
}

#line 918 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 918 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 918 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 918 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 918 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 918 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 918 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28)
#line 918 "error_util.m"
{
#line 924 "error_util.m"
  {
#line 924 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 924 "error_util.m"
    MR_Word parse_tree__error_util__Severity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 0)));
#line 924 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 2)));
#line 924 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_20;
#line 924 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_21;
#line 925 "error_util.m"
    MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 1)));

#line 926 "error_util.m"
    {
#line 926 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_9_p_0(parse_tree__error_util__Msgs_19, parse_tree__error_util__Globals_11, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_20, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 928 "error_util.m"
    {
#line 928 "error_util.m"
      parse_tree__error_util__MaybeActual_21 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_11, parse_tree__error_util__Severity_17);
    }
#line 939 "error_util.m"
#line 939 "error_util.m"
    switch (parse_tree__error_util__PrintedSome_20) {
#line 939 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 939 "error_util.m"
      case (MR_Integer) 1:
#line 930 "error_util.m"
        {
#line 930 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 930 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 930 "error_util.m"
        }
#line 939 "error_util.m"
        break;
#line 939 "error_util.m"
      case (MR_Integer) 0:
#line 954 "error_util.m"
        if ((parse_tree__error_util__MaybeActual_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "error_util.m"
          {
#line 956 "error_util.m"
            {
#line 956 "error_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/10", (MR_String) "MaybeActual is no");
#line 956 "error_util.m"
              return;
            }
#line 955 "error_util.m"
          }
#line 954 "error_util.m"
        else
#line 942 "error_util.m"
          {
#line 942 "error_util.m"
            MR_Word parse_tree__error_util__Actual_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_21, (MR_Integer) 0)));

#line 947 "error_util.m"
#line 947 "error_util.m"
            switch (parse_tree__error_util__Actual_22) {
#line 947 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 947 "error_util.m"
              case (MR_Integer) 0:
#line 944 "error_util.m"
                {
#line 945 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25 + (MR_Integer) 1);
#line 946 "error_util.m"
                  {
#line 946 "error_util.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 944 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 944 "error_util.m"
                }
#line 947 "error_util.m"
                break;
#line 947 "error_util.m"
              case (MR_Integer) 2:
#line 952 "error_util.m"
                {
#line 952 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 952 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 952 "error_util.m"
                }
#line 947 "error_util.m"
                break;
#line 947 "error_util.m"
              case (MR_Integer) 1:
#line 948 "error_util.m"
                {
#line 949 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23 + (MR_Integer) 1);
#line 950 "error_util.m"
                  {
#line 950 "error_util.m"
                    libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_11);
                  }
#line 948 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 948 "error_util.m"
                }
#line 947 "error_util.m"
                break;
#line 947 "error_util.m"
            }
#line 942 "error_util.m"
          }
#line 939 "error_util.m"
        break;
#line 939 "error_util.m"
    }
#line 924 "error_util.m"
  }
#line 918 "error_util.m"
}

#line 865 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 865 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 865 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 865 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 865 "error_util.m"
{
#line 868 "error_util.m"
  {
#line 868 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 868 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 868 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 868 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 868 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 868 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 869 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 869 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 870 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 870 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 871 "error_util.m"
    {
#line 871 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 872 "error_util.m"
    {
#line 872 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 873 "error_util.m"
    {
#line 873 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 874 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 874 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 875 "error_util.m"
      {
#line 875 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
      }
#line 874 "error_util.m"
    else
#line 877 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 868 "error_util.m"
  }
#line 865 "error_util.m"
}

#line 830 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 830 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 830 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19)
#line 830 "error_util.m"
{
#line 836 "error_util.m"
  {
#line 836 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 836 "error_util.m"
#line 836 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 836 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "error_util.m"
      case (MR_Integer) 0:
#line 836 "error_util.m"
      case (MR_Integer) 2:
#line 861 "error_util.m"
        {
#line 862 "error_util.m"
          {
#line 862 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 861 "error_util.m"
        }
#line 836 "error_util.m"
        break;
#line 836 "error_util.m"
      case (MR_Integer) 1:
#line 836 "error_util.m"
        {
#line 836 "error_util.m"
          MR_Word parse_tree__error_util__Option_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 836 "error_util.m"
          MR_Word parse_tree__error_util__RequiredValue_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 836 "error_util.m"
          MR_Word parse_tree__error_util__EmbeddedComponents_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 836 "error_util.m"
          MR_Word parse_tree__error_util__OptionValue_11;

#line 841 "error_util.m"
          {
#line 841 "error_util.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_5, parse_tree__error_util__Option_8, &parse_tree__error_util__OptionValue_11);
          }
#line 842 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_11 == parse_tree__error_util__RequiredValue_9);
#line 842 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 843 "error_util.m"
            {
#line 843 "error_util.m"
              MR_Word parse_tree__error_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 843 "error_util.m"
              MR_Word parse_tree__error_util__V_22_22;

#line 844 "error_util.m"
              {
#line 844 "error_util.m"
                parse_tree__error_util__V_22_22 = mercury__cord__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__EmbeddedComponents_10);
              }
#line 844 "error_util.m"
              {
#line 844 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, parse_tree__error_util__V_22_22);
              }
#line 843 "error_util.m"
            }
#line 842 "error_util.m"
          else
#line 842 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18;
#line 836 "error_util.m"
        }
#line 836 "error_util.m"
        break;
#line 836 "error_util.m"
      case (MR_Integer) 3:
#line 861 "error_util.m"
        {
#line 862 "error_util.m"
          {
#line 862 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 861 "error_util.m"
        }
#line 836 "error_util.m"
        break;
#line 836 "error_util.m"
    }
#line 836 "error_util.m"
  }
#line 830 "error_util.m"
}

#line 822 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 822 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 822 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 822 "error_util.m"
{
#line 822 "error_util.m"
  {
#line 822 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 822 "error_util.m"
    MR_Word parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19;

#line 822 "error_util.m"
    {
#line 822 "error_util.m"
      parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19);
    }
#line 822 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19));
#line 822 "error_util.m"
  }
#line 822 "error_util.m"
}

#line 808 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 808 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 808 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6)
#line 808 "error_util.m"
{
#line 811 "error_util.m"
  {
#line 811 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_21_21;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__Components0_8;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContext_9;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__TreatAsFirst_10;
#line 811 "error_util.m"
    MR_Integer parse_tree__error_util__ExtraIndent_11;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__ComponentCord_12;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__Components_13;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 811 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;
#line 822 "error_util.m"
    MR_Box parse_tree__error_util__conv1_ComponentCord_12;
#line 828 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;
#line 828 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;

#line 818 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__Msg0_5)) == (MR_mktag((MR_Integer) 1))))
#line 819 "error_util.m"
      {
#line 819 "error_util.m"
        parse_tree__error_util__MaybeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));
#line 819 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 819 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 2)));
#line 819 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 3)));
#line 819 "error_util.m"
      }
#line 818 "error_util.m"
    else
#line 814 "error_util.m"
      {
#line 814 "error_util.m"
        MR_Word parse_tree__error_util__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));

#line 814 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 815 "error_util.m"
        {
#line 815 "error_util.m"
          parse_tree__error_util__MaybeContext_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 815 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, 0) = ((MR_Box) (parse_tree__error_util__Context_7));
#line 815 "error_util.m"
        }
#line 816 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = (MR_Integer) 1;
#line 817 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = (MR_Integer) 0;
#line 814 "error_util.m"
      }
#line 16853 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 822 "error_util.m"
    {
#line 822 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 822 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_7[0]));
#line 822 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1));
#line 822 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 822 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 822 "error_util.m"
    }
#line 823 "error_util.m"
    {
#line 823 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__cord__init_0_f_0(parse_tree__error_util__TypeCtorInfo_21_21);
    }
#line 822 "error_util.m"
    {
#line 822 "error_util.m"
      mercury__list__foldl_4_p_0(parse_tree__error_util__TypeCtorInfo_21_21, (MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__V_16_16, parse_tree__error_util__Components0_8, ((MR_Box) (parse_tree__error_util__V_17_17)), &parse_tree__error_util__conv1_ComponentCord_12);
    }
#line 822 "error_util.m"
    parse_tree__error_util__ComponentCord_12 = ((MR_Word) parse_tree__error_util__conv1_ComponentCord_12);
#line 824 "error_util.m"
    {
#line 824 "error_util.m"
      parse_tree__error_util__Components_13 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_21_21, parse_tree__error_util__ComponentCord_12);
    }
#line 828 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_13)) == (MR_mktag((MR_Integer) 1)));
#line 828 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 828 "error_util.m"
      {
#line 828 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 0)));
#line 828 "error_util.m"
        parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 1)));
#line 825 "error_util.m"
        {
#line 825 "error_util.m"
          MR_Word base;
#line 825 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 825 "error_util.m"
          *parse_tree__error_util__Msg_6 = base;
#line 825 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__MaybeContext_9));
#line 825 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__TreatAsFirst_10));
#line 825 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__error_util__ExtraIndent_11));
#line 825 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__error_util__Components_13));
#line 825 "error_util.m"
        }
#line 825 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 828 "error_util.m"
      }
#line 811 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 811 "error_util.m"
  }
#line 808 "error_util.m"
}

#line 787 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 787 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 787 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 787 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 787 "error_util.m"
{
#line 787 "error_util.m"
  {
#line 787 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 787 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 787 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Msg_6;

#line 787 "error_util.m"
    {
#line 787 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_msg_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Msg_6);
    }
#line 787 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 787 "error_util.m"
      {
#line 787 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Msg_6));
#line 787 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 787 "error_util.m"
      }
#line 787 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 787 "error_util.m"
  }
#line 787 "error_util.m"
}

#line 781 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 781 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 781 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6)
#line 781 "error_util.m"
{
#line 784 "error_util.m"
  {
#line 784 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_19_19;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__Severity0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 0)));
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__Phase_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 1)));
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__Msgs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 2)));
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActualSeverity_10;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_11;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__ActualSeverity_12;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__Severity_15;
#line 784 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 790 "error_util.m"
    MR_Word parse_tree__error_util__V_13_13;
#line 790 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 786 "error_util.m"
    {
#line 786 "error_util.m"
      parse_tree__error_util__MaybeActualSeverity_10 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Severity0_7);
    }
#line 17010 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 787 "error_util.m"
    {
#line 787 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 787 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[3]));
#line 787 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1));
#line 787 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 787 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 787 "error_util.m"
    }
#line 787 "error_util.m"
    {
#line 787 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__V_16_16, parse_tree__error_util__Msgs0_9, &parse_tree__error_util__Msgs_11);
    }
#line 790 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Msgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 790 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 790 "error_util.m"
      {
#line 790 "error_util.m"
        parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 0)));
#line 790 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 1)));
#line 789 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__MaybeActualSeverity_10)) == (MR_mktag((MR_Integer) 1)));
#line 789 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 789 "error_util.m"
          {
#line 789 "error_util.m"
            parse_tree__error_util__ActualSeverity_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActualSeverity_10, (MR_Integer) 0)));
#line 795 "error_util.m"
#line 795 "error_util.m"
            switch (parse_tree__error_util__ActualSeverity_12) {
#line 795 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 795 "error_util.m"
              case (MR_Integer) 0:
#line 794 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "error_util.m"
                break;
#line 795 "error_util.m"
              case (MR_Integer) 2:
#line 800 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 795 "error_util.m"
                break;
#line 795 "error_util.m"
              case (MR_Integer) 1:
#line 797 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 795 "error_util.m"
                break;
#line 795 "error_util.m"
            }
#line 802 "error_util.m"
            {
#line 802 "error_util.m"
              MR_Word base;
#line 802 "error_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 802 "error_util.m"
              *parse_tree__error_util__Spec_6 = base;
#line 802 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__error_util__Severity_15));
#line 802 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__error_util__Phase_8));
#line 802 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__error_util__Msgs_11));
#line 802 "error_util.m"
            }
#line 802 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 789 "error_util.m"
          }
#line 790 "error_util.m"
      }
#line 784 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 784 "error_util.m"
  }
#line 781 "error_util.m"
}

#line 673 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 673 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 673 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 673 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 673 "error_util.m"
{
#line 676 "error_util.m"
  {
#line 676 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 676 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 676 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 676 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 694 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 694 "error_util.m"
      {
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 697 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 697 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 697 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 694 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "error_util.m"
        else
#line 698 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 694 "error_util.m"
      }
#line 694 "error_util.m"
    else
#line 694 "error_util.m"
      {
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 695 "error_util.m"
        {
#line 695 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 695 "error_util.m"
        }
#line 694 "error_util.m"
      }
#line 694 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 694 "error_util.m"
      {
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 697 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 697 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 697 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 694 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "error_util.m"
        else
#line 698 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 694 "error_util.m"
      }
#line 694 "error_util.m"
    else
#line 694 "error_util.m"
      {
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 694 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 695 "error_util.m"
        {
#line 695 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 695 "error_util.m"
        }
#line 694 "error_util.m"
      }
#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 683 "error_util.m"
#line 683 "error_util.m"
    switch (parse_tree__error_util__ContextResult_9) {
#line 683 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 683 "error_util.m"
      case (MR_Integer) 1:
#line 683 "error_util.m"
      case (MR_Integer) 2:
#line 687 "error_util.m"
        *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 683 "error_util.m"
        break;
#line 683 "error_util.m"
      case (MR_Integer) 0:
#line 682 "error_util.m"
        {
#line 682 "error_util.m"
          parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
        }
#line 683 "error_util.m"
        break;
#line 683 "error_util.m"
    }
#line 676 "error_util.m"
  }
#line 673 "error_util.m"
}

#line 659 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 659 "error_util.m"
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
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 663 "error_util.m"
        {
#line 663 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 17277 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 17279 "parse_tree.error_util.c"
          {
#line 17281 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 697 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 697 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 697 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 17290 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 17294 "parse_tree.error_util.c"
            else
#line 17296 "parse_tree.error_util.c"
              {
#line 17298 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 667 "error_util.m"
                {
#line 667 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 667 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 667 "error_util.m"
                }
#line 17311 "parse_tree.error_util.c"
              }
#line 17313 "parse_tree.error_util.c"
          }
#line 17315 "parse_tree.error_util.c"
        else
#line 17317 "parse_tree.error_util.c"
          {
#line 17319 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 694 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 667 "error_util.m"
            {
#line 667 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 667 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 667 "error_util.m"
            }
#line 17334 "parse_tree.error_util.c"
          }
#line 662 "error_util.m"
      }
#line 661 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 661 "error_util.m"
  }
#line 659 "error_util.m"
}

#line 598 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 598 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 598 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 598 "error_util.m"
{
#line 601 "error_util.m"
  while (MR_TRUE)
#line 601 "error_util.m"
    {
#line 601 "error_util.m"
      /* tailcall optimized into a loop */
#line 601 "error_util.m"
      {
#line 601 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 601 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 601 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 601 "error_util.m"
        else
#line 602 "error_util.m"
          {
#line 602 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 602 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 602 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 602 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 602 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 603 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 603 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 604 "error_util.m"
            {
#line 604 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 608 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 608 "error_util.m"
            else
#line 608 "error_util.m"
              {
#line 608 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 608 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 608 "error_util.m"
                else
#line 612 "error_util.m"
                  {
#line 612 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 612 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 614 "error_util.m"
                    {
#line 614 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 614 "error_util.m"
                    {
#line 614 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 614 "error_util.m"
                    }
#line 612 "error_util.m"
                  }
#line 608 "error_util.m"
              }
#line 616 "error_util.m"
            /* direct tailcall eliminated */
#line 616 "error_util.m"
            {
#line 616 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 616 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 616 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 616 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 616 "error_util.m"
            }
#line 616 "error_util.m"
            continue;
#line 602 "error_util.m"
          }
#line 601 "error_util.m"
      }
#line 601 "error_util.m"
      break;
#line 601 "error_util.m"
    }
#line 598 "error_util.m"
}

#line 525 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 525 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 525 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 525 "error_util.m"
{
#line 1901 "error_util.m"
  {
#line 1901 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1901 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1901 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1902 "error_util.m"
    {
#line 1902 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1903 "error_util.m"
    {
#line 1903 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1904 "error_util.m"
    {
#line 1904 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1905 "error_util.m"
    {
#line 1905 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1906 "error_util.m"
    {
#line 1906 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1906 "error_util.m"
    {
#line 1906 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1907 "error_util.m"
    {
#line 1907 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1909 "error_util.m"
    {
#line 1909 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
#line 1901 "error_util.m"
  }
#line 525 "error_util.m"
}

#line 517 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 517 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 517 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 517 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 517 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 517 "error_util.m"
{
#line 1895 "error_util.m"
  {
#line 1895 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1895 "error_util.m"
    MR_Word parse_tree__error_util__V_24_24;
#line 1895 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_34;
#line 1895 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_35;

#line 1896 "error_util.m"
    {
#line 1896 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 1192 "error_util.m"
    {
#line 1192 "error_util.m"
      parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1192 "error_util.m"
    }
#line 1206 "error_util.m"
    {
#line 1206 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_34);
    }
#line 1208 "error_util.m"
    {
#line 1208 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_35);
    }
#line 1209 "error_util.m"
    {
#line 1209 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_24_24, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_34, parse_tree__error_util__LimitErrorContextsMap_35, parse_tree__error_util__Components_10);
    }
#line 1895 "error_util.m"
  }
#line 517 "error_util.m"
}

#line 512 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 512 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 512 "error_util.m"
{
#line 1880 "error_util.m"
  {
#line 1880 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1880 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1880 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1882 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1882 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1883 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1881 "error_util.m"
    {
#line 1881 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1883 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1883 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1883 "error_util.m"
      {
#line 1883 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1883 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1884 "error_util.m"
        {
#line 1884 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1883 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1883 "error_util.m"
          {
#line 1885 "error_util.m"
            {
#line 1885 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1885 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1883 "error_util.m"
          }
#line 1883 "error_util.m"
      }
#line 1882 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1887 "error_util.m"
      {
#line 1887 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1887 "error_util.m"
        {
#line 1887 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1887 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1887 "error_util.m"
        }
#line 1888 "error_util.m"
        {
#line 1888 "error_util.m"
          parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1887 "error_util.m"
      }
#line 1882 "error_util.m"
    else
#line 1890 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1880 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1880 "error_util.m"
  }
#line 512 "error_util.m"
}

#line 507 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 507 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 507 "error_util.m"
{
#line 1878 "error_util.m"
  {
#line 1878 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1878 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1878 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1878 "error_util.m"
    {
#line 1878 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1878 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1878 "error_util.m"
  }
#line 507 "error_util.m"
}

#line 503 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 503 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 503 "error_util.m"
{
#line 1875 "error_util.m"
  {
#line 1875 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1875 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1875 "error_util.m"
#line 1875 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 1875 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1875 "error_util.m"
      case (MR_Integer) 1:
#line 1876 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1875 "error_util.m"
        break;
#line 1875 "error_util.m"
      case (MR_Integer) 0:
#line 1875 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1875 "error_util.m"
        break;
#line 1875 "error_util.m"
    }
#line 1875 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1875 "error_util.m"
  }
#line 503 "error_util.m"
}

#line 501 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 501 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 501 "error_util.m"
{
#line 1868 "error_util.m"
  {
#line 1868 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1868 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1868 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1868 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1868 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1868 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1868 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1868 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1868 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1868 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1869 "error_util.m"
    {
#line 1869 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1870 "error_util.m"
    {
#line 1870 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1870 "error_util.m"
    {
#line 1870 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1870 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1870 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[20])));
#line 1870 "error_util.m"
    }
#line 1869 "error_util.m"
    {
#line 1869 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1869 "error_util.m"
    }
#line 1869 "error_util.m"
    {
#line 1869 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1869 "error_util.m"
    }
#line 1869 "error_util.m"
    {
#line 1869 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1869 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1869 "error_util.m"
    }
#line 1869 "error_util.m"
    {
#line 1869 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1868 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1868 "error_util.m"
  }
#line 501 "error_util.m"
}

#line 499 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 499 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 499 "error_util.m"
{
#line 1872 "error_util.m"
  {
#line 1872 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1872 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1872 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1872 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1872 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1873 "error_util.m"
    {
#line 1873 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1873 "error_util.m"
    {
#line 1873 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1873 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[20])));
#line 1873 "error_util.m"
    }
#line 1873 "error_util.m"
    {
#line 1873 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1873 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1873 "error_util.m"
    }
#line 1873 "error_util.m"
    {
#line 1873 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1872 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1872 "error_util.m"
  }
#line 499 "error_util.m"
}

#line 495 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 495 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 495 "error_util.m"
{
#line 1341 "error_util.m"
  {
#line 1341 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1341 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1342 "error_util.m"
    {
#line 1342 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1341 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1341 "error_util.m"
  }
#line 495 "error_util.m"
}

#line 491 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 491 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 491 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 491 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 491 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 491 "error_util.m"
{
#line 1196 "error_util.m"
  {
#line 1196 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1196 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_24;
#line 1196 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_25;

#line 1206 "error_util.m"
    {
#line 1206 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_24);
    }
#line 1208 "error_util.m"
    {
#line 1208 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_25);
    }
#line 1209 "error_util.m"
    {
#line 1209 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_24, parse_tree__error_util__LimitErrorContextsMap_25, parse_tree__error_util__Components_10);
    }
#line 1196 "error_util.m"
  }
#line 491 "error_util.m"
}

#line 488 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 488 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 488 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 488 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 488 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 488 "error_util.m"
{
#line 1191 "error_util.m"
  {
#line 1191 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1191 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1191 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_25;
#line 1191 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_26;

#line 1192 "error_util.m"
    {
#line 1192 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1192 "error_util.m"
    }
#line 1206 "error_util.m"
    {
#line 1206 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_25);
    }
#line 1208 "error_util.m"
    {
#line 1208 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_26);
    }
#line 1209 "error_util.m"
    {
#line 1209 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_15_15, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_25, parse_tree__error_util__LimitErrorContextsMap_26, parse_tree__error_util__Components_10);
    }
#line 1191 "error_util.m"
  }
#line 488 "error_util.m"
}

#line 480 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 480 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 480 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 480 "error_util.m"
{
#line 1175 "error_util.m"
  {
#line 1175 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1175 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsg_9;
#line 1175 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsgPieces_10;
#line 1175 "error_util.m"
    MR_Word parse_tree__error_util__Components_11;
#line 1175 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1175 "error_util.m"
    MR_String parse_tree__error_util__V_16_16;
#line 1175 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;

#line 1177 "error_util.m"
    {
#line 1177 "error_util.m"
      parse_tree__error_util__LinesInMsg_9 = mercury__string__split_at_char_2_f_0((MR_Char) 10, parse_tree__error_util__Msg_6);
    }
#line 1178 "error_util.m"
    {
#line 1178 "error_util.m"
      parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__LinesInMsg_9, &parse_tree__error_util__LinesInMsgPieces_10);
    }
#line 1179 "error_util.m"
    {
#line 1179 "error_util.m"
      parse_tree__error_util__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 1179 "error_util.m"
    {
#line 1179 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "error_util.m"
      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1179 "error_util.m"
    }
#line 1179 "error_util.m"
    {
#line 1179 "error_util.m"
      parse_tree__error_util__Components_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1179 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 1) = ((MR_Box) (parse_tree__error_util__LinesInMsgPieces_10));
#line 1179 "error_util.m"
    }
#line 1181 "error_util.m"
    {
#line 1181 "error_util.m"
      parse_tree__error_util__V_22_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2]);
    }
#line 1180 "error_util.m"
    {
#line 1180 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__V_22_22, parse_tree__error_util__Components_11);
    }
#line 1175 "error_util.m"
  }
#line 480 "error_util.m"
}

#line 472 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 472 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 472 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 472 "error_util.m"
{
#line 1171 "error_util.m"
  {
#line 1171 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1171 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_22;
#line 1171 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_23;

#line 1206 "error_util.m"
    {
#line 1206 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_22);
    }
#line 1208 "error_util.m"
    {
#line 1208 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_5, &parse_tree__error_util__LimitErrorContextsMap_23);
    }
#line 1209 "error_util.m"
    {
#line 1209 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_22, parse_tree__error_util__LimitErrorContextsMap_23, parse_tree__error_util__Components_6);
    }
#line 1171 "error_util.m"
  }
#line 472 "error_util.m"
}

#line 462 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 462 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 462 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 462 "error_util.m"
{
#line 1166 "error_util.m"
  {
#line 1166 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1166 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1166 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1166 "error_util.m"
      {
#line 1166 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 1167 "error_util.m"
        {
#line 1167 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 1166 "error_util.m"
      }
#line 1166 "error_util.m"
    else
#line 1166 "error_util.m"
      {
#line 1166 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1168 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1166 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 1166 "error_util.m"
        else
#line 1169 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 1166 "error_util.m"
      }
#line 1166 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1166 "error_util.m"
  }
#line 462 "error_util.m"
}

#line 457 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 457 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 457 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 457 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 457 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 457 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 457 "error_util.m"
{
#line 1162 "error_util.m"
  {
#line 1162 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1162 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 1162 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1162 "error_util.m"
    else
#line 1162 "error_util.m"
      {
#line 1162 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1163 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1162 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 1162 "error_util.m"
        else
#line 1164 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1162 "error_util.m"
      }
#line 1162 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 1162 "error_util.m"
  }
#line 457 "error_util.m"
}

#line 449 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 449 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 449 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 449 "error_util.m"
{
#line 1156 "error_util.m"
  {
#line 1156 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1156 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1156 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1156 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1156 "error_util.m"
    else
#line 1156 "error_util.m"
      {
#line 1156 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1156 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1156 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "error_util.m"
          {
#line 1157 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1157 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 1157 "error_util.m"
            {
#line 1157 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[12]));
            }
#line 1157 "error_util.m"
            {
#line 1157 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 1157 "error_util.m"
          }
#line 1156 "error_util.m"
        else
#line 1158 "error_util.m"
          {
#line 1158 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1158 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 1158 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 1160 "error_util.m"
            {
#line 1160 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 1160 "error_util.m"
            {
#line 1160 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_24_24);
            }
#line 1159 "error_util.m"
            {
#line 1159 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 1158 "error_util.m"
          }
#line 1156 "error_util.m"
      }
#line 1156 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1156 "error_util.m"
  }
#line 449 "error_util.m"
}

#line 438 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__strict_component_list_to_pieces_1_f_0(
#line 438 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 438 "error_util.m"
{
#line 1150 "error_util.m"
  {
#line 1150 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1150 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1150 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1150 "error_util.m"
    else
#line 1150 "error_util.m"
      {
#line 1150 "error_util.m"
        MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1150 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1150 "error_util.m"
        if ((parse_tree__error_util__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "error_util.m"
          {
#line 1151 "error_util.m"
            {
#line 1151 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1151 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "error_util.m"
            }
#line 1151 "error_util.m"
          }
#line 1150 "error_util.m"
        else
#line 1152 "error_util.m"
          {
#line 1152 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;
#line 1152 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19]);
#line 1152 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15;
#line 1152 "error_util.m"
            MR_Word parse_tree__error_util__V_35_35;
#line 1152 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;

#line 1153 "error_util.m"
            {
#line 1153 "error_util.m"
              parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1153 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1153 "error_util.m"
            }
#line 1151 "error_util.m"
            parse_tree__error_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_18_18, (MR_Integer) 0)));
#line 1151 "error_util.m"
            parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_18_18, (MR_Integer) 1)));
#line 1150 "error_util.m"
            if ((parse_tree__error_util__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "error_util.m"
              {
#line 1151 "error_util.m"
                {
#line 1151 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_36_36));
#line 1151 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "error_util.m"
                }
#line 1151 "error_util.m"
              }
#line 1150 "error_util.m"
            else
#line 1152 "error_util.m"
              {
#line 1152 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;
#line 1152 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1153 "error_util.m"
                {
#line 1153 "error_util.m"
                  parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__V_36_36));
#line 1153 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1153 "error_util.m"
                }
#line 1154 "error_util.m"
                {
#line 1154 "error_util.m"
                  parse_tree__error_util__V_32_32 = parse_tree__error_util__strict_component_list_to_pieces_1_f_0(parse_tree__error_util__V_35_35);
                }
#line 1154 "error_util.m"
                {
#line 1154 "error_util.m"
                  parse_tree__error_util__V_15_15 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_27_27, parse_tree__error_util__V_32_32);
                }
#line 1152 "error_util.m"
              }
#line 1154 "error_util.m"
            {
#line 1154 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_10_10, parse_tree__error_util__V_15_15);
            }
#line 1152 "error_util.m"
          }
#line 1150 "error_util.m"
      }
#line 1150 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1150 "error_util.m"
  }
#line 438 "error_util.m"
}

#line 431 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 431 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 431 "error_util.m"
{
#line 1143 "error_util.m"
  {
#line 1143 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1143 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1143 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1143 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1143 "error_util.m"
    else
#line 1143 "error_util.m"
      {
#line 1143 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1143 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1143 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "error_util.m"
          {
#line 1144 "error_util.m"
            {
#line 1144 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1144 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "error_util.m"
            }
#line 1144 "error_util.m"
          }
#line 1143 "error_util.m"
        else
#line 1143 "error_util.m"
          {
#line 1143 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1143 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1143 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "error_util.m"
              {
#line 1145 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 1145 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 1145 "error_util.m"
                {
#line 1145 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "error_util.m"
                }
#line 1145 "error_util.m"
                {
#line 1145 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1145 "error_util.m"
                }
#line 1145 "error_util.m"
                {
#line 1145 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1145 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 1145 "error_util.m"
                }
#line 1145 "error_util.m"
              }
#line 1143 "error_util.m"
            else
#line 1146 "error_util.m"
              {
#line 1146 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 1146 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 1147 "error_util.m"
                {
#line 1147 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1147 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19])));
#line 1147 "error_util.m"
                }
#line 1148 "error_util.m"
                {
#line 1148 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1148 "error_util.m"
                {
#line 1148 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 1146 "error_util.m"
              }
#line 1143 "error_util.m"
          }
#line 1143 "error_util.m"
      }
#line 1143 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1143 "error_util.m"
  }
#line 431 "error_util.m"
}

#line 425 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(
#line 425 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 425 "error_util.m"
{
#line 1137 "error_util.m"
  {
#line 1137 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1137 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1137 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "error_util.m"
    else
#line 1137 "error_util.m"
      {
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "error_util.m"
        MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1137 "error_util.m"
        if ((parse_tree__error_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_18_18;
#line 1137 "error_util.m"
        else
#line 1139 "error_util.m"
          {
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19]);
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, (MR_Integer) 1)));
#line 1139 "error_util.m"
            MR_Word parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, (MR_Integer) 0)));

#line 1137 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "error_util.m"
              parse_tree__error_util__V_14_14 = parse_tree__error_util__V_34_34;
#line 1137 "error_util.m"
            else
#line 1139 "error_util.m"
              {
#line 1139 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_16_32 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1139 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 1139 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;

#line 1141 "error_util.m"
                {
#line 1141 "error_util.m"
                  parse_tree__error_util__V_30_30 = parse_tree__error_util__strict_component_lists_to_pieces_1_f_0(parse_tree__error_util__V_33_33);
                }
#line 1141 "error_util.m"
                {
#line 1141 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_16_32, parse_tree__error_util__V_10_10, parse_tree__error_util__V_30_30);
                }
#line 1140 "error_util.m"
                {
#line 1140 "error_util.m"
                  parse_tree__error_util__V_14_14 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_16_32, parse_tree__error_util__V_34_34, parse_tree__error_util__V_25_25);
                }
#line 1139 "error_util.m"
              }
#line 1141 "error_util.m"
            {
#line 1141 "error_util.m"
              parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_16_16, parse_tree__error_util__V_10_10, parse_tree__error_util__V_14_14);
            }
#line 1140 "error_util.m"
            {
#line 1140 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_16_16, parse_tree__error_util__V_18_18, parse_tree__error_util__V_9_9);
            }
#line 1139 "error_util.m"
          }
#line 1137 "error_util.m"
      }
#line 1137 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1137 "error_util.m"
  }
#line 425 "error_util.m"
}

#line 418 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 418 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 418 "error_util.m"
{
#line 1129 "error_util.m"
  {
#line 1129 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1129 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1129 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1129 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1129 "error_util.m"
    else
#line 1129 "error_util.m"
      {
#line 1129 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1129 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1129 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 1129 "error_util.m"
        else
#line 1129 "error_util.m"
          {
#line 1129 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1129 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1129 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "error_util.m"
              {
#line 1131 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1131 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 1132 "error_util.m"
                {
#line 1132 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18]), parse_tree__error_util__V_33_33);
                }
#line 1132 "error_util.m"
                {
#line 1132 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 1131 "error_util.m"
              }
#line 1129 "error_util.m"
            else
#line 1133 "error_util.m"
              {
#line 1133 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1133 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 1133 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 1135 "error_util.m"
                {
#line 1135 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1135 "error_util.m"
                {
#line 1135 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19]), parse_tree__error_util__V_25_25);
                }
#line 1134 "error_util.m"
                {
#line 1134 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 1133 "error_util.m"
              }
#line 1129 "error_util.m"
          }
#line 1129 "error_util.m"
      }
#line 1129 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1129 "error_util.m"
  }
#line 418 "error_util.m"
}

#line 412 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_or_1_f_0(
#line 412 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 412 "error_util.m"
{
#line 1121 "error_util.m"
  {
#line 1121 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1121 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1121 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1121 "error_util.m"
    else
#line 1121 "error_util.m"
      {
#line 1121 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1121 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1121 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1122 "error_util.m"
          {
#line 1122 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1122 "error_util.m"
            {
#line 1122 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1122 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1122 "error_util.m"
            }
#line 1122 "error_util.m"
            {
#line 1122 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1122 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1122 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1122 "error_util.m"
            }
#line 1122 "error_util.m"
          }
#line 1121 "error_util.m"
        else
#line 1121 "error_util.m"
          {
#line 1121 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 1121 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 1121 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "error_util.m"
              {
#line 1123 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1123 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1123 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1123 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1124 "error_util.m"
                }
#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1124 "error_util.m"
                }
#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1124 "error_util.m"
                }
#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[17])));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1124 "error_util.m"
                }
#line 1124 "error_util.m"
                {
#line 1124 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1124 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1124 "error_util.m"
                }
#line 1123 "error_util.m"
              }
#line 1121 "error_util.m"
            else
#line 1125 "error_util.m"
              {
#line 1125 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1125 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 1125 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 1126 "error_util.m"
                {
#line 1126 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1126 "error_util.m"
                }
#line 1127 "error_util.m"
                {
#line 1127 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 1126 "error_util.m"
                {
#line 1126 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16])));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 1126 "error_util.m"
                }
#line 1126 "error_util.m"
                {
#line 1126 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1126 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1126 "error_util.m"
                }
#line 1125 "error_util.m"
              }
#line 1121 "error_util.m"
          }
#line 1121 "error_util.m"
      }
#line 1121 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1121 "error_util.m"
  }
#line 412 "error_util.m"
}

#line 408 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 408 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 408 "error_util.m"
{
#line 1113 "error_util.m"
  {
#line 1113 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1113 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1113 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1113 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1113 "error_util.m"
    else
#line 1113 "error_util.m"
      {
#line 1113 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1113 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "error_util.m"
          {
#line 1114 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1114 "error_util.m"
            {
#line 1114 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1114 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1114 "error_util.m"
            }
#line 1114 "error_util.m"
            {
#line 1114 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1114 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1114 "error_util.m"
            }
#line 1114 "error_util.m"
          }
#line 1113 "error_util.m"
        else
#line 1113 "error_util.m"
          {
#line 1113 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 1113 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 1113 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1115 "error_util.m"
              {
#line 1115 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1115 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1115 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1115 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1116 "error_util.m"
                {
#line 1116 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1116 "error_util.m"
                }
#line 1116 "error_util.m"
                {
#line 1116 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1116 "error_util.m"
                }
#line 1116 "error_util.m"
                {
#line 1116 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1116 "error_util.m"
                }
#line 1116 "error_util.m"
                {
#line 1116 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1116 "error_util.m"
                }
#line 1116 "error_util.m"
                {
#line 1116 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1116 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1116 "error_util.m"
                }
#line 1115 "error_util.m"
              }
#line 1113 "error_util.m"
            else
#line 1117 "error_util.m"
              {
#line 1117 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1117 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 1117 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 1118 "error_util.m"
                {
#line 1118 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1118 "error_util.m"
                }
#line 1119 "error_util.m"
                {
#line 1119 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 1118 "error_util.m"
                {
#line 1118 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16])));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 1118 "error_util.m"
                }
#line 1118 "error_util.m"
                {
#line 1118 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1118 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1118 "error_util.m"
                }
#line 1117 "error_util.m"
              }
#line 1113 "error_util.m"
          }
#line 1113 "error_util.m"
      }
#line 1113 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1113 "error_util.m"
  }
#line 408 "error_util.m"
}

#line 404 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__strict_list_to_pieces_1_f_0(
#line 404 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 404 "error_util.m"
{
#line 1108 "error_util.m"
  {
#line 1108 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1108 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1108 "error_util.m"
    else
#line 1108 "error_util.m"
      {
#line 1108 "error_util.m"
        MR_Word parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "error_util.m"
        MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1108 "error_util.m"
        if ((parse_tree__error_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "error_util.m"
          {
#line 1109 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1109 "error_util.m"
            {
#line 1109 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1109 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1109 "error_util.m"
            }
#line 1109 "error_util.m"
            {
#line 1109 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1109 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "error_util.m"
            }
#line 1109 "error_util.m"
          }
#line 1108 "error_util.m"
        else
#line 1110 "error_util.m"
          {
#line 1110 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;
#line 1110 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;
#line 1110 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;
#line 1110 "error_util.m"
            MR_Word parse_tree__error_util__V_31_31;
#line 1110 "error_util.m"
            MR_String parse_tree__error_util__V_32_32;

#line 1111 "error_util.m"
            {
#line 1111 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_17_17, (MR_String) ",");
            }
#line 1111 "error_util.m"
            {
#line 1111 "error_util.m"
              parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "error_util.m"
              MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1111 "error_util.m"
            }
#line 1109 "error_util.m"
            parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, (MR_Integer) 0)));
#line 1109 "error_util.m"
            parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_16_16, (MR_Integer) 1)));
#line 1108 "error_util.m"
            if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "error_util.m"
              {
#line 1109 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;

#line 1109 "error_util.m"
                {
#line 1109 "error_util.m"
                  parse_tree__error_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1109 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_20_20, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1109 "error_util.m"
                }
#line 1109 "error_util.m"
                {
#line 1109 "error_util.m"
                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_20_20));
#line 1109 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1109 "error_util.m"
                }
#line 1109 "error_util.m"
              }
#line 1108 "error_util.m"
            else
#line 1110 "error_util.m"
              {
#line 1110 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;
#line 1110 "error_util.m"
                MR_String parse_tree__error_util__V_27_27;
#line 1110 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29;

#line 1111 "error_util.m"
                {
#line 1111 "error_util.m"
                  parse_tree__error_util__V_27_27 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_32_32, (MR_String) ",");
                }
#line 1111 "error_util.m"
                {
#line 1111 "error_util.m"
                  parse_tree__error_util__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_26_26, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1111 "error_util.m"
                }
#line 1111 "error_util.m"
                {
#line 1111 "error_util.m"
                  parse_tree__error_util__V_29_29 = parse_tree__error_util__strict_list_to_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 1111 "error_util.m"
                {
#line 1111 "error_util.m"
                  parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1111 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_14_14, 1) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1111 "error_util.m"
                }
#line 1110 "error_util.m"
              }
#line 1111 "error_util.m"
            {
#line 1111 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1111 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1111 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1111 "error_util.m"
            }
#line 1110 "error_util.m"
          }
#line 1108 "error_util.m"
      }
#line 1108 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1108 "error_util.m"
  }
#line 404 "error_util.m"
}

#line 398 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 398 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 398 "error_util.m"
{
#line 1102 "error_util.m"
  {
#line 1102 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1102 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1102 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1102 "error_util.m"
    else
#line 1102 "error_util.m"
      {
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1102 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "error_util.m"
          {
#line 1103 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1103 "error_util.m"
            {
#line 1103 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1103 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1103 "error_util.m"
            }
#line 1103 "error_util.m"
            {
#line 1103 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1103 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1103 "error_util.m"
            }
#line 1103 "error_util.m"
          }
#line 1102 "error_util.m"
        else
#line 1102 "error_util.m"
          {
#line 1102 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1102 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1102 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1104 "error_util.m"
              {
#line 1104 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1104 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1104 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1104 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1104 "error_util.m"
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1104 "error_util.m"
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1104 "error_util.m"
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1104 "error_util.m"
                }
#line 1104 "error_util.m"
                {
#line 1104 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1104 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1104 "error_util.m"
                }
#line 1104 "error_util.m"
              }
#line 1102 "error_util.m"
            else
#line 1105 "error_util.m"
              {
#line 1105 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1105 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 1105 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 1106 "error_util.m"
                {
#line 1106 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 1106 "error_util.m"
                {
#line 1106 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1106 "error_util.m"
                }
#line 1106 "error_util.m"
                {
#line 1106 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1106 "error_util.m"
                {
#line 1106 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1106 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1106 "error_util.m"
                }
#line 1105 "error_util.m"
              }
#line 1102 "error_util.m"
          }
#line 1102 "error_util.m"
      }
#line 1102 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1102 "error_util.m"
  }
#line 398 "error_util.m"
}

#line 393 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 393 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 393 "error_util.m"
{
#line 1100 "error_util.m"
  {
#line 1100 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1100 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1100 "error_util.m"
    {
#line 1100 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1100 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1100 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 1100 "error_util.m"
    }
#line 1100 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1100 "error_util.m"
  }
#line 393 "error_util.m"
}

#line 915 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 915 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 915 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9)
#line 915 "error_util.m"
{
#line 915 "error_util.m"
  {
#line 915 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 915 "error_util.m"
    MR_Integer parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24;
#line 915 "error_util.m"
    MR_Integer parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26;
#line 915 "error_util.m"
    MR_Word parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28;

#line 915 "error_util.m"
    {
#line 915 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26, ((MR_Word) parse_tree__error_util__wrapper_arg_6), &parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 915 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24));
#line 915 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26));
#line 915 "error_util.m"
    *parse_tree__error_util__wrapper_arg_7 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28));
#line 915 "error_util.m"
  }
#line 915 "error_util.m"
}

#line 779 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 779 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 779 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 779 "error_util.m"
{
#line 779 "error_util.m"
  {
#line 779 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 779 "error_util.m"
    MR_Word parse_tree__error_util__conv1_Result_6;

#line 779 "error_util.m"
    {
#line 779 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv1_Result_6);
    }
#line 779 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv1_Result_6));
#line 779 "error_util.m"
  }
#line 779 "error_util.m"
}

#line 778 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 778 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 778 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 778 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 778 "error_util.m"
{
#line 778 "error_util.m"
  {
#line 778 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 778 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 778 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Spec_6;

#line 778 "error_util.m"
    {
#line 778 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_spec_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Spec_6);
    }
#line 778 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 778 "error_util.m"
      {
#line 778 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Spec_6));
#line 778 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 778 "error_util.m"
      }
#line 778 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 778 "error_util.m"
  }
#line 778 "error_util.m"
}

#line 285 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 285 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 285 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 285 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16,
#line 285 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_17,
#line 285 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18,
#line 285 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_19)
#line 285 "error_util.m"
{
#line 913 "error_util.m"
  {
#line 913 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_38_38;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_14_51;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__V_25_25;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__V_45_45;
#line 913 "error_util.m"
    MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_9_46;
#line 915 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 915 "error_util.m"
    MR_Box parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17;
#line 915 "error_util.m"
    MR_Box parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19;
#line 915 "error_util.m"
    MR_Box parse_tree__error_util__conv6_V_15_15;
#line 915 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_IO_21;

#line 778 "error_util.m"
    {
#line 778 "error_util.m"
      parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 778 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
#line 778 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_1));
#line 778 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 778 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 778 "error_util.m"
    }
#line 19749 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_14_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 778 "error_util.m"
    {
#line 778 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__V_45_45, parse_tree__error_util__Specs0_9, &parse_tree__error_util__STATE_VARIABLE_Specs_9_46);
    }
#line 779 "error_util.m"
    {
#line 779 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__STATE_VARIABLE_Specs_9_46, &parse_tree__error_util__Specs_14);
    }
#line 915 "error_util.m"
    {
#line 915 "error_util.m"
      parse_tree__error_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 915 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 915 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_3));
#line 915 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 915 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 915 "error_util.m"
    }
#line 916 "error_util.m"
    {
#line 916 "error_util.m"
      parse_tree__error_util__V_25_25 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 19780 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 915 "error_util.m"
    {
#line 915 "error_util.m"
      mercury__list__foldl4_10_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_38_38, parse_tree__error_util__TypeCtorInfo_38_38, (MR_Word) &parse_tree__error_util_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_22_22, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16)), &parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18)), &parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19, ((MR_Box) (parse_tree__error_util__V_25_25)), &parse_tree__error_util__conv6_V_15_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv5_STATE_VARIABLE_IO_21);
    }
#line 915 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_17 = ((MR_Integer) parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17);
#line 915 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_19 = ((MR_Integer) parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19);
#line 915 "error_util.m"
    parse_tree__error_util__V_15_15 = ((MR_Word) parse_tree__error_util__conv6_V_15_15);
#line 913 "error_util.m"
  }
#line 285 "error_util.m"
}

#line 283 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 283 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 283 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 283 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 283 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 283 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 283 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 283 "error_util.m"
{
#line 909 "error_util.m"
  {
#line 909 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 909 "error_util.m"
    MR_Word parse_tree__error_util__V_23_23;
#line 910 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 911 "error_util.m"
    {
#line 911 "error_util.m"
      parse_tree__error_util__V_23_23 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 910 "error_util.m"
    {
#line 910 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15, parse_tree__error_util__STATE_VARIABLE_NumWarnings_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17, parse_tree__error_util__STATE_VARIABLE_NumErrors_18, parse_tree__error_util__V_23_23, &parse_tree__error_util__V_14_14);
    }
#line 909 "error_util.m"
  }
#line 283 "error_util.m"
}

#line 260 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 260 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 260 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 260 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 260 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 260 "error_util.m"
{
#line 886 "error_util.m"
  {
#line 886 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 886 "error_util.m"
#line 886 "error_util.m"
    switch (parse_tree__error_util__Verbose_7) {
#line 886 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 886 "error_util.m"
      case (MR_Integer) 0:
#line 886 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 886 "error_util.m"
        break;
#line 886 "error_util.m"
      case (MR_Integer) 1:
#line 888 "error_util.m"
        {
#line 890 "error_util.m"
          MR_Integer parse_tree__error_util___NumWarnings_11;
#line 890 "error_util.m"
          MR_Integer parse_tree__error_util___NumErrors_12;

#line 890 "error_util.m"
          {
#line 890 "error_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
          }
#line 892 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "error_util.m"
        }
#line 886 "error_util.m"
        break;
#line 886 "error_util.m"
    }
#line 886 "error_util.m"
  }
#line 260 "error_util.m"
}

#line 255 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 255 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 255 "error_util.m"
{
#line 727 "error_util.m"
  {
#line 727 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 727 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 727 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 727 "error_util.m"
    else
#line 728 "error_util.m"
      {
#line 728 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 728 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 728 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 728 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 728 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 728 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 728 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 19932 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 729 "error_util.m"
        {
#line 729 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 729 "error_util.m"
        {
#line 729 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 728 "error_util.m"
      }
#line 727 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 727 "error_util.m"
  }
#line 255 "error_util.m"
}

#line 711 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 711 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 711 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 711 "error_util.m"
{
#line 711 "error_util.m"
  {
#line 711 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 711 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 711 "error_util.m"
    {
#line 711 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__711__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 711 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 711 "error_util.m"
  }
#line 711 "error_util.m"
}

#line 252 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 252 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 252 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 252 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 252 "error_util.m"
{
#line 710 "error_util.m"
  {
#line 710 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 710 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 710 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 710 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 710 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 710 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 711 "error_util.m"
    {
#line 711 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 715 "error_util.m"
    {
#line 715 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 716 "error_util.m"
    {
#line 716 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 722 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "error_util.m"
      {
#line 723 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 724 "error_util.m"
        {
#line 724 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 724 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 724 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 724 "error_util.m"
        }
#line 724 "error_util.m"
        {
#line 724 "error_util.m"
          MR_Word base;
#line 724 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 724 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 724 "error_util.m"
        }
#line 723 "error_util.m"
      }
#line 722 "error_util.m"
    else
#line 718 "error_util.m"
      {
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 718 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 718 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 718 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 719 "error_util.m"
        {
#line 719 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 720 "error_util.m"
        {
#line 720 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 721 "error_util.m"
        {
#line 721 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 721 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 721 "error_util.m"
        }
#line 721 "error_util.m"
        {
#line 721 "error_util.m"
          MR_Word base;
#line 721 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 721 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 721 "error_util.m"
        }
#line 718 "error_util.m"
      }
#line 710 "error_util.m"
  }
#line 252 "error_util.m"
}

#line 250 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 250 "error_util.m"
{
#line 708 "error_util.m"
  {
#line 708 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 708 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "error_util.m"
  }
#line 250 "error_util.m"
}

#line 657 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 657 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 657 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 657 "error_util.m"
{
#line 657 "error_util.m"
  {
#line 657 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 657 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 657 "error_util.m"
    {
#line 657 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 657 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 657 "error_util.m"
  }
#line 657 "error_util.m"
}

#line 239 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 239 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 239 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 239 "error_util.m"
{
#line 656 "error_util.m"
  {
#line 656 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 657 "error_util.m"
    {
#line 657 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
    }
#line 656 "error_util.m"
  }
#line 239 "error_util.m"
}

#line 235 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 235 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 235 "error_util.m"
{
#line 636 "error_util.m"
  {
#line 636 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 636 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 636 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 596 "error_util.m"
    {
#line 596 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 641 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 641 "error_util.m"
    else
#line 642 "error_util.m"
      {
#line 642 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 648 "error_util.m"
#line 648 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 648 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 648 "error_util.m"
          case (MR_Integer) 0:
#line 648 "error_util.m"
          case (MR_Integer) 1:
#line 647 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 648 "error_util.m"
            break;
#line 648 "error_util.m"
          case (MR_Integer) 2:
#line 650 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 648 "error_util.m"
            break;
#line 648 "error_util.m"
        }
#line 642 "error_util.m"
      }
#line 636 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 636 "error_util.m"
  }
#line 235 "error_util.m"
}

#line 230 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 230 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 230 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 230 "error_util.m"
{
#line 618 "error_util.m"
  {
#line 618 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 618 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 618 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 596 "error_util.m"
    {
#line 596 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 623 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 623 "error_util.m"
    else
#line 624 "error_util.m"
      {
#line 624 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 628 "error_util.m"
#line 628 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 628 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 628 "error_util.m"
          case (MR_Integer) 0:
#line 627 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 628 "error_util.m"
            break;
#line 628 "error_util.m"
          case (MR_Integer) 2:
#line 628 "error_util.m"
          case (MR_Integer) 1:
#line 632 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 628 "error_util.m"
            break;
#line 628 "error_util.m"
        }
#line 624 "error_util.m"
      }
#line 618 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 618 "error_util.m"
  }
#line 230 "error_util.m"
}

#line 224 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 224 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 224 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 224 "error_util.m"
{
#line 595 "error_util.m"
  {
#line 595 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 595 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 596 "error_util.m"
    {
#line 596 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 595 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 595 "error_util.m"
  }
#line 224 "error_util.m"
}

#line 218 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 218 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 218 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 218 "error_util.m"
{
#line 570 "error_util.m"
  while (MR_TRUE)
#line 570 "error_util.m"
    {
#line 570 "error_util.m"
      /* tailcall optimized into a loop */
#line 570 "error_util.m"
      {
#line 570 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 570 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 570 "error_util.m"
#line 570 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Severity_5)) {
#line 570 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 570 "error_util.m"
          case (MR_Integer) 0:
#line 570 "error_util.m"
#line 570 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Severity_5)) {
#line 570 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 570 "error_util.m"
              case (MR_Integer) 0:
#line 570 "error_util.m"
                {
#line 571 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 570 "error_util.m"
                }
#line 570 "error_util.m"
                break;
#line 570 "error_util.m"
              case (MR_Integer) 1:
#line 573 "error_util.m"
                {
#line 574 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 573 "error_util.m"
                }
#line 570 "error_util.m"
                break;
#line 570 "error_util.m"
              case (MR_Integer) 2:
#line 576 "error_util.m"
                {
#line 577 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 576 "error_util.m"
                }
#line 570 "error_util.m"
                break;
#line 570 "error_util.m"
            }
#line 570 "error_util.m"
            break;
#line 570 "error_util.m"
          case (MR_Integer) 1:
#line 580 "error_util.m"
            {
#line 580 "error_util.m"
              MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 580 "error_util.m"
              MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 580 "error_util.m"
              MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 580 "error_util.m"
              MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 580 "error_util.m"
              MR_Word parse_tree__error_util__Value_11;

#line 581 "error_util.m"
              {
#line 581 "error_util.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
              }
#line 582 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 582 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 583 "error_util.m"
                {
#line 583 "error_util.m"
                  /* direct tailcall eliminated */
#line 583 "error_util.m"
                  {
#line 583 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 583 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 583 "error_util.m"
                  }
#line 583 "error_util.m"
                  continue;
#line 583 "error_util.m"
                }
#line 582 "error_util.m"
              else
#line 588 "error_util.m"
              if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "error_util.m"
              else
#line 589 "error_util.m"
                {
#line 589 "error_util.m"
                  MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 590 "error_util.m"
                  /* direct tailcall eliminated */
#line 590 "error_util.m"
                  {
#line 590 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 590 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 590 "error_util.m"
                  }
#line 590 "error_util.m"
                  continue;
#line 589 "error_util.m"
                }
#line 580 "error_util.m"
            }
#line 570 "error_util.m"
            break;
#line 570 "error_util.m"
        }
#line 570 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 570 "error_util.m"
      }
#line 570 "error_util.m"
      break;
#line 570 "error_util.m"
    }
#line 218 "error_util.m"
}

#line 212 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 212 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 212 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 212 "error_util.m"
{
#line 549 "error_util.m"
  {
#line 549 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 549 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 549 "error_util.m"
#line 549 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 549 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 549 "error_util.m"
      case (MR_Integer) 0:
#line 549 "error_util.m"
#line 549 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 549 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "error_util.m"
          case (MR_Integer) 0:
#line 550 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 2:
#line 554 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 1:
#line 552 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
        }
#line 549 "error_util.m"
        break;
#line 549 "error_util.m"
      case (MR_Integer) 2:
#line 549 "error_util.m"
#line 549 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 549 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "error_util.m"
          case (MR_Integer) 0:
#line 562 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 2:
#line 566 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 1:
#line 564 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
        }
#line 549 "error_util.m"
        break;
#line 549 "error_util.m"
      case (MR_Integer) 1:
#line 549 "error_util.m"
#line 549 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 549 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 549 "error_util.m"
          case (MR_Integer) 0:
#line 556 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 2:
#line 560 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
          case (MR_Integer) 1:
#line 558 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 549 "error_util.m"
            break;
#line 549 "error_util.m"
        }
#line 549 "error_util.m"
        break;
#line 549 "error_util.m"
    }
#line 549 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 549 "error_util.m"
  }
#line 212 "error_util.m"
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
