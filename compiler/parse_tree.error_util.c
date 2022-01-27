/*
** Automatically generated from `error_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
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
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_7[1];

#line 280 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7;

#line 283 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8;

#line 286 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9;

#line 289 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10;

#line 292 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_11[1];

#line 295 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11;

#line 298 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12;

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
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[16];

#line 319 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1];

#line 322 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1];

#line 325 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3];

#line 328 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[18];

#line 331 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[18];

#line 334 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0;

#line 337 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1;

#line 340 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2;

#line 343 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0;

#line 346 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4];

#line 349 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4];

#line 352 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3;

#line 355 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3];

#line 358 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1];

#line 361 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_severity_0[2];

#line 364 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4];

#line 367 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4];

#line 370 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0;

#line 373 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3];

#line 376 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3];

#line 379 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0;

#line 382 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1];

#line 385 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1];

#line 388 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1];

#line 391 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1];

#line 394 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 397 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 400 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 403 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1];

#line 406 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0;

#line 409 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1];

#line 412 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1;

#line 415 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1];

#line 418 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_2;

#line 421 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1];

#line 424 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_3;

#line 427 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1];

#line 430 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_4;

#line 433 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5;

#line 436 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1];

#line 439 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_6;

#line 442 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1];

#line 445 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_7;

#line 448 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1];

#line 451 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_8;

#line 454 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1];

#line 457 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_9;

#line 460 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1];

#line 463 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_10;

#line 466 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1];

#line 469 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_11;

#line 472 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1];

#line 475 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_12;

#line 478 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1];

#line 481 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_13;

#line 484 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1];

#line 487 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_14;

#line 490 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1];

#line 493 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_15;

#line 496 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1];

#line 499 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_16;

#line 502 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1];

#line 505 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_17;

#line 508 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18;

#line 511 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1];

#line 514 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_19;

#line 517 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20;

#line 520 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1];

#line 523 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_21;

#line 526 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3];

#line 529 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1];

#line 532 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1];

#line 535 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_3[17];

#line 538 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_format_component_0[4];

#line 541 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_format_component_0[22];

#line 544 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_format_component_0[22];

#line 547 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0;

#line 550 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1;

#line 553 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2];

#line 556 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2];

#line 559 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2];

#line 562 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0;

#line 565 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1;

#line 568 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2];

#line 571 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2];

#line 574 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2];

#line 577 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0;

#line 580 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1;

#line 583 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2];

#line 586 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2];

#line 589 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2];

#line 592 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0;

#line 595 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1;

#line 598 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2];

#line 601 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2];

#line 604 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2];

#line 607 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0;

#line 610 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1;

#line 613 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2];

#line 616 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2];

#line 619 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2];

#line 622 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3];

#line 625 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0;

#line 628 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1];

#line 631 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1];

#line 634 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1];

#line 637 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1];

#line 640 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1];

#line 643 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0;

#line 646 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1];

#line 649 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1;

#line 652 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2;

#line 655 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1];

#line 658 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1];

#line 661 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1];

#line 664 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_plain_or_prefix_0[3];

#line 667 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3];

#line 670 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3];

#line 673 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0;

#line 676 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1;

#line 679 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2];

#line 682 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2];

#line 685 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2];

#line 688 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1];

#line 691 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0;

#line 694 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1];

#line 697 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1;

#line 700 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1];

#line 703 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2;

#line 706 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3;

#line 709 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1];

#line 712 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1];

#line 715 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1];

#line 718 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1];

#line 721 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_word_0[4];

#line 724 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4];

#line 727 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4];

#line 730 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1];

#line 733 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1];

#line 736 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1;

#line 739 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 742 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 744 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 747 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 750 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 752 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 754 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 757 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 760 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 762 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 765 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 768 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 770 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 772 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 775 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 778 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 780 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 783 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 786 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 788 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 790 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 793 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 796 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 798 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 801 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 804 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 806 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 808 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 811 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 814 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 816 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 819 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 822 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 824 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 826 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 829 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 832 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 834 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 837 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 840 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 842 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 844 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 847 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 850 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 852 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 855 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 858 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 860 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 862 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 865 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 868 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 870 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 873 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 876 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 878 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 880 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 883 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 886 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 888 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 891 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 894 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 896 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 898 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 901 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 904 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 906 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 909 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 912 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 914 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 916 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 919 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 922 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 924 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 927 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 930 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 932 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 934 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 937 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 940 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 942 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 945 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 948 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 950 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 952 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 955 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 958 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 960 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 963 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 966 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 968 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 970 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 973 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 976 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 978 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 981 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 984 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 986 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 988 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 991 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 994 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 996 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 999 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 1002 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1004 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1006 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1009 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 1012 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1014 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1017 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 1020 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1022 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1024 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1027 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 1030 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1032 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1035 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 1038 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1040 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1042 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1045 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 1048 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1050 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1053 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 1056 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1058 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1060 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1063 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 1066 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1068 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1071 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 1074 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1076 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1078 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 1081 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 1084 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 1086 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2);

#line 1089 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 1092 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 1094 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 1096 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3);

#line 684 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__684__1_1_p_0(
#line 684 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21);

#line 1450 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1450 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1450 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1557 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1557 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1557 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1432 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1432 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1432 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 931 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 931 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 931 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 935 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 935 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 935 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1067 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1067 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1067 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1707 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1707 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 1707 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 939 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 939 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3);

#line 939 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1797 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1797 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1797 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1797 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1797 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1797 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1797 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6);

#line 1772 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1772 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1772 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1772 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1772 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8);

#line 1724 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1724 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1724 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10);

#line 1692 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1692 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1692 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1692 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6);

#line 1682 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1682 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1682 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1682 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6);

#line 1669 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1669 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1669 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1669 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1669 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8);

#line 1664 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1664 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1664 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1664 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6);

#line 1659 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1654 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1654 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3);

#line 1613 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1613 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1568 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1568 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1562 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1562 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3);

#line 1456 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1456 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5);

#line 1419 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1419 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1419 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7);

#line 1382 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1382 "error_util.m"
  MR_Integer parse_tree__error_util__N_3);

#line 1290 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2);

#line 1279 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 1252 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1252 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1252 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1252 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3);

#line 1224 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1224 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1224 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2);

#line 1158 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1158 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__Components_14);

#line 1146 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1146 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__Components_12);

#line 1129 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1129 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1129 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2);

#line 973 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 973 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10);

#line 941 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 941 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 941 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7);

#line 889 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 889 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 889 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 889 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 889 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 889 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);

#line 836 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 836 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 836 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 836 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 801 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 801 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19);

#line 793 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 793 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 779 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 779 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 779 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 779 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6);

#line 758 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 758 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 758 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 758 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 752 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 752 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 752 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 752 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6);

#line 646 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 646 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6);

#line 632 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 632 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1);

#line 571 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 571 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4);

#line 886 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9);

#line 750 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 750 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);

#line 749 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 749 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 749 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 749 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2);

#line 684 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 684 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 684 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1);

#line 630 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 630 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[20][2];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_3[5][1];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_4[4][6];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_5[1][4];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_6[1][13];

static /* final */ const MR_Box parse_tree__error_util_scalar_common_7[1][7];




static /* final */ const MR_Box parse_tree__error_util_scalar_common_1[20][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
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



#line 1945 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1953 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__set_ordlist__pti_set_ordlist_1__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1961 "parse_tree.error_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__error_util__cord__pti_cord_1__plain_parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 1969 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0 = {
  (MR_String) "actual_severity_error",
  (MR_Integer) 0
};

#line 1975 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1 = {
  (MR_String) "actual_severity_warning",
  (MR_Integer) 1
};

#line 1981 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2 = {
  (MR_String) "actual_severity_informational",
  (MR_Integer) 2
};

#line 1987 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2
};

#line 1994 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_actual_severity_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_actual_severity_0_1
};

#line 2001 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_actual_severity_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2008 "parse_tree.error_util.c"
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

#line 2025 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 2033 "parse_tree.error_util.c"
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

#line 2050 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2058 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_line_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2064 "parse_tree.error_util.c"
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

#line 2079 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2084 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_line_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_line_0_0
  }
};

#line 2093 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_line_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_line_0_0
};

#line 2098 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_line_0[1] = {
  (MR_Integer) 0
};

#line 2103 "parse_tree.error_util.c"
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

#line 2120 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0
  }
};

#line 2128 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2134 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_0[2] = {
  (MR_String) "simple_context",
  (MR_String) "simple_components"
};

#line 2140 "parse_tree.error_util.c"
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

#line 2155 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 2163 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_0_1[4] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_maybe_treat_as_first_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2171 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_msg_0_1[4] = {
  (MR_String) "error_context",
  (MR_String) "error_treat_as_first",
  (MR_String) "error_extra_indent",
  (MR_String) "error_components"
};

#line 2179 "parse_tree.error_util.c"
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

#line 2194 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2199 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1
};

#line 2204 "parse_tree.error_util.c"
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

#line 2218 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_0_0
};

#line 2224 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2230 "parse_tree.error_util.c"
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

#line 2247 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2252 "parse_tree.error_util.c"
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

#line 2267 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_1[3] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_component_0
};

#line 2274 "parse_tree.error_util.c"
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

#line 2293 "parse_tree.error_util.c"
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

#line 2308 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_verbose_always_or_once_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2314 "parse_tree.error_util.c"
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

#line 2329 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_3[2] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
};

#line 2335 "parse_tree.error_util.c"
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

#line 2350 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_msg_component_0_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 2355 "parse_tree.error_util.c"
static const MR_TypeClassConstraint_1Struct parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2363 "parse_tree.error_util.c"
static const MR_TypeClassConstraint parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4[1] = {
  (MR_TypeClassConstraint) &parse_tree__error_util__parse_tree__error_util__exist_tc_constr_error_msg_component_0_4_1
};

#line 2368 "parse_tree.error_util.c"
static const MR_DuExistLocn parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

#line 2376 "parse_tree.error_util.c"
static const MR_DuExistInfo parse_tree__error_util__parse_tree__error_util__exist_info_error_msg_component_0_4 = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__exist_locns_error_msg_component_0_4,
  parse_tree__error_util__parse_tree__error_util__exist_tc_constrs_error_msg_component_0_4
};

#line 2385 "parse_tree.error_util.c"
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

#line 2400 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0
};

#line 2405 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1
};

#line 2410 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2415 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_msg_component_0_3[2] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4
};

#line 2421 "parse_tree.error_util.c"
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

#line 2445 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_msg_component_0[5] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_msg_component_0_2
};

#line 2454 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_msg_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2463 "parse_tree.error_util.c"
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

#line 2480 "parse_tree.error_util.c"
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

#line 2495 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1 = {
  (MR_String) "phase_module_name",
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

#line 2510 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2 = {
  (MR_String) "phase_term_to_parse_tree",
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

#line 2525 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3 = {
  (MR_String) "phase_parse_tree_to_hlds",
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

#line 2540 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4 = {
  (MR_String) "phase_expand_types",
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

#line 2555 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5 = {
  (MR_String) "phase_type_check",
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

#line 2570 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6 = {
  (MR_String) "phase_inst_check",
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

#line 2585 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_7[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2590 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7 = {
  (MR_String) "phase_mode_check",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 7,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_7,
  NULL,
  NULL,
  NULL
};

#line 2605 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8 = {
  (MR_String) "phase_purity_check",
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

#line 2620 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9 = {
  (MR_String) "phase_detism_check",
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

#line 2635 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10 = {
  (MR_String) "phase_oisu_check",
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

#line 2650 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_mode_report_control_0
};

#line 2655 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11 = {
  (MR_String) "phase_simplify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 11,
  parse_tree__error_util__parse_tree__error_util__field_types_error_phase_0_11,
  NULL,
  NULL,
  NULL
};

#line 2670 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12 = {
  (MR_String) "phase_dead_code",
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

#line 2685 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13 = {
  (MR_String) "phase_termination_analysis",
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

#line 2700 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14 = {
  (MR_String) "phase_accumulator_intro",
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

#line 2715 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15 = {
  (MR_String) "phase_auto_parallelism",
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

#line 2730 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16 = {
  (MR_String) "phase_interface_gen",
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

#line 2745 "parse_tree.error_util.c"
static const MR_DuFunctorDesc parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17 = {
  (MR_String) "phase_code_gen",
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

#line 2760 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_0[16] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17
};

#line 2780 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7
};

#line 2785 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_phase_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11
};

#line 2790 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_phase_0[3] = {
  {
    (MR_Integer) 16,
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

#line 2809 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_phase_0[18] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_14,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_15,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_17,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_12,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_9,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_4,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_6,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_16,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_7,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_10,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_8,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_11,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_13,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_phase_0_5
};

#line 2831 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0[18] = {
  (MR_Integer) 13,
  (MR_Integer) 9,
  (MR_Integer) 15,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 17,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 14,
  (MR_Integer) 3,
  (MR_Integer) 16,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2
};

#line 2853 "parse_tree.error_util.c"
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
  (MR_Integer) 18,
  (MR_Integer) 4,
  parse_tree__error_util__parse_tree__error_util__functor_number_map_error_phase_0
};

#line 2870 "parse_tree.error_util.c"
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

#line 2885 "parse_tree.error_util.c"
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

#line 2900 "parse_tree.error_util.c"
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

#line 2915 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0
  }
};

#line 2923 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_severity_0_3[4] = {
  (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_severity_0
};

#line 2931 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_severity_0_3[4] = {
  (MR_String) "cond_option",
  (MR_String) "cond_option_value",
  (MR_String) "cond_if_match",
  (MR_String) "cond_if_no_match"
};

#line 2939 "parse_tree.error_util.c"
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

#line 2954 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2
};

#line 2961 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_severity_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3
};

#line 2966 "parse_tree.error_util.c"
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

#line 2980 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_severity_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_severity_0_1
};

#line 2988 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_severity_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2996 "parse_tree.error_util.c"
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

#line 3013 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0
  }
};

#line 3021 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_error_spec_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_phase_0,
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1parse_tree__error_util__type_ctor_info_error_msg_0
};

#line 3028 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__field_names_error_spec_0_0[3] = {
  (MR_String) "error_severity",
  (MR_String) "error_phase",
  (MR_String) "error_msgs"
};

#line 3035 "parse_tree.error_util.c"
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

#line 3050 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3055 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_error_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_error_spec_0_0
  }
};

#line 3064 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_error_spec_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_error_spec_0_0
};

#line 3069 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_error_spec_0[1] = {
  (MR_Integer) 0
};

#line 3074 "parse_tree.error_util.c"
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

#line 3091 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3099 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0,
    (MR_TypeInfo) &parse_tree__error_util__set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3108 "parse_tree.error_util.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__error_util__maybe__ti_maybe_1pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__pair__ti_pair_2set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0set_ordlist__ti_set_ordlist_1parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 3116 "parse_tree.error_util.c"
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

#line 3133 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3138 "parse_tree.error_util.c"
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

#line 3153 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3158 "parse_tree.error_util.c"
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

#line 3173 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3178 "parse_tree.error_util.c"
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

#line 3193 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3198 "parse_tree.error_util.c"
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

#line 3213 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3218 "parse_tree.error_util.c"
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

#line 3233 "parse_tree.error_util.c"
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

#line 3248 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3253 "parse_tree.error_util.c"
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

#line 3268 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3273 "parse_tree.error_util.c"
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

#line 3288 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3293 "parse_tree.error_util.c"
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

#line 3308 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_9[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3313 "parse_tree.error_util.c"
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

#line 3328 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_10[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3333 "parse_tree.error_util.c"
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

#line 3348 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_11[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0
};

#line 3353 "parse_tree.error_util.c"
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

#line 3368 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_12[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
};

#line 3373 "parse_tree.error_util.c"
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

#line 3388 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_13[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3393 "parse_tree.error_util.c"
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

#line 3408 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_14[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 3413 "parse_tree.error_util.c"
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

#line 3428 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_15[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0
};

#line 3433 "parse_tree.error_util.c"
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

#line 3448 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3453 "parse_tree.error_util.c"
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

#line 3468 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3473 "parse_tree.error_util.c"
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

#line 3488 "parse_tree.error_util.c"
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

#line 3503 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3508 "parse_tree.error_util.c"
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

#line 3523 "parse_tree.error_util.c"
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

#line 3538 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_format_component_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3543 "parse_tree.error_util.c"
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

#line 3558 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_5,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_18,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_20
};

#line 3565 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_0
};

#line 3570 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_format_component_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_format_component_0_1
};

#line 3575 "parse_tree.error_util.c"
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

#line 3596 "parse_tree.error_util.c"
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

#line 3620 "parse_tree.error_util.c"
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

#line 3646 "parse_tree.error_util.c"
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

#line 3672 "parse_tree.error_util.c"
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

#line 3689 "parse_tree.error_util.c"
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

#line 3706 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0 = {
  (MR_String) "first_in_msg",
  (MR_Integer) 0
};

#line 3712 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1 = {
  (MR_String) "not_first_in_msg",
  (MR_Integer) 1
};

#line 3718 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3724 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_first_in_msg_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_first_in_msg_0_1
};

#line 3730 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_first_in_msg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3736 "parse_tree.error_util.c"
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

#line 3753 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0 = {
  (MR_String) "lower_next_initial",
  (MR_Integer) 0
};

#line 3759 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1 = {
  (MR_String) "do_not_lower_next_initial",
  (MR_Integer) 1
};

#line 3765 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1
};

#line 3771 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_lower_next_initial_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_lower_next_initial_0_0
};

#line 3777 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_lower_next_initial_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3783 "parse_tree.error_util.c"
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

#line 3800 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0 = {
  (MR_String) "printed_something",
  (MR_Integer) 0
};

#line 3806 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1 = {
  (MR_String) "have_not_printed_anything",
  (MR_Integer) 1
};

#line 3812 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1
};

#line 3818 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_printed_something_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_printed_something_0_0
};

#line 3824 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_printed_something_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3830 "parse_tree.error_util.c"
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

#line 3847 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0 = {
  (MR_String) "treat_as_first",
  (MR_Integer) 0
};

#line 3853 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1 = {
  (MR_String) "do_not_treat_as_first",
  (MR_Integer) 1
};

#line 3859 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1
};

#line 3865 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_maybe_treat_as_first_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_1,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_maybe_treat_as_first_0_0
};

#line 3871 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_maybe_treat_as_first_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3877 "parse_tree.error_util.c"
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

#line 3894 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0 = {
  (MR_String) "report_in_any_mode",
  (MR_Integer) 0
};

#line 3900 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1 = {
  (MR_String) "report_only_if_in_all_modes",
  (MR_Integer) 1
};

#line 3906 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3912 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_mode_report_control_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_mode_report_control_0_1
};

#line 3918 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_mode_report_control_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3924 "parse_tree.error_util.c"
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

#line 3941 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_paragraph_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__error_util__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3948 "parse_tree.error_util.c"
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

#line 3963 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3968 "parse_tree.error_util.c"
static const MR_DuPtagLayout parse_tree__error_util__parse_tree__error_util__du_ptag_ordered_paragraph_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__error_util__parse_tree__error_util__du_stag_ordered_paragraph_0_0
  }
};

#line 3977 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_paragraph_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_paragraph_0_0
};

#line 3982 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_paragraph_0[1] = {
  (MR_Integer) 0
};

#line 3987 "parse_tree.error_util.c"
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

#line 4004 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4009 "parse_tree.error_util.c"
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

#line 4024 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_plain_or_prefix_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4029 "parse_tree.error_util.c"
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

#line 4044 "parse_tree.error_util.c"
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

#line 4059 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2
};

#line 4064 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0
};

#line 4069 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_plain_or_prefix_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4074 "parse_tree.error_util.c"
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

#line 4093 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_plain_or_prefix_0[3] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_2,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_plain_or_prefix_0_1
};

#line 4100 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_plain_or_prefix_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 4107 "parse_tree.error_util.c"
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

#line 4124 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0 = {
  (MR_String) "verbose_always",
  (MR_Integer) 0
};

#line 4130 "parse_tree.error_util.c"
static const MR_EnumFunctorDesc parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1 = {
  (MR_String) "verbose_once",
  (MR_Integer) 1
};

#line 4136 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_value_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4142 "parse_tree.error_util.c"
static const MR_EnumFunctorDescPtr parse_tree__error_util__parse_tree__error_util__enum_name_ordered_verbose_always_or_once_0[2] = {
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_0,
  &parse_tree__error_util__parse_tree__error_util__enum_functor_desc_verbose_always_or_once_0_1
};

#line 4148 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_verbose_always_or_once_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4154 "parse_tree.error_util.c"
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

#line 4171 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4176 "parse_tree.error_util.c"
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

#line 4191 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4196 "parse_tree.error_util.c"
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

#line 4211 "parse_tree.error_util.c"
static const MR_PseudoTypeInfo parse_tree__error_util__parse_tree__error_util__field_types_word_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 4216 "parse_tree.error_util.c"
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

#line 4231 "parse_tree.error_util.c"
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

#line 4246 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_0[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3
};

#line 4251 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_1[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0
};

#line 4256 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_2[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1
};

#line 4261 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_stag_ordered_word_0_3[1] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4266 "parse_tree.error_util.c"
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

#line 4290 "parse_tree.error_util.c"
static const MR_DuFunctorDescPtr parse_tree__error_util__parse_tree__error_util__du_name_ordered_word_0[4] = {
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_3,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_0,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_1,
  &parse_tree__error_util__parse_tree__error_util__du_functor_desc_word_0_2
};

#line 4298 "parse_tree.error_util.c"
static const MR_Integer parse_tree__error_util__parse_tree__error_util__functor_number_map_word_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 4306 "parse_tree.error_util.c"
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

#line 4323 "parse_tree.error_util.c"
static const MR_ConstString parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1[1] = {
  (MR_String) "T"
};

#line 4328 "parse_tree.error_util.c"
static const MR_TypeClassMethod parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1[1] = {
  {
    (MR_String) "print_anything",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 4337 "parse_tree.error_util.c"
static const MR_TypeClassId parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1 = {
  (MR_String) "parse_tree.error_util",
  (MR_String) "print_anything",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_var_names_print_anything_1,
  parse_tree__error_util__parse_tree__error_util__type_class_id_method_ids_print_anything_1
};

#line 4348 "parse_tree.error_util.c"
const MR_TypeClassDeclStruct parse_tree__error_util__parse_tree__error_util__type_class_decl_print_anything_1 = {
  &parse_tree__error_util__parse_tree__error_util__type_class_id_print_anything_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 4356 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____actual_severity_0_0_10001(
#line 4359 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4361 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4363 "parse_tree.error_util.c"
{
#line 4365 "parse_tree.error_util.c"
  {
#line 4367 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4370 "parse_tree.error_util.c"
    {
#line 4372 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____actual_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4375 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4377 "parse_tree.error_util.c"
  }
#line 4379 "parse_tree.error_util.c"
}

#line 4382 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____actual_severity_0_0_10001(
#line 4385 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4387 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4389 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4391 "parse_tree.error_util.c"
{
#line 4393 "parse_tree.error_util.c"
  {
#line 4395 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4398 "parse_tree.error_util.c"
    {
#line 4400 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____actual_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4403 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4405 "parse_tree.error_util.c"
  }
#line 4407 "parse_tree.error_util.c"
}

#line 4410 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0_10001(
#line 4413 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4415 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4417 "parse_tree.error_util.c"
{
#line 4419 "parse_tree.error_util.c"
  {
#line 4421 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4424 "parse_tree.error_util.c"
    {
#line 4426 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____already_printed_verbose_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4429 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4431 "parse_tree.error_util.c"
  }
#line 4433 "parse_tree.error_util.c"
}

#line 4436 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0_10001(
#line 4439 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4441 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4443 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4445 "parse_tree.error_util.c"
{
#line 4447 "parse_tree.error_util.c"
  {
#line 4449 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4452 "parse_tree.error_util.c"
    {
#line 4454 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____already_printed_verbose_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4457 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4459 "parse_tree.error_util.c"
  }
#line 4461 "parse_tree.error_util.c"
}

#line 4464 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0_10001(
#line 4467 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4469 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4471 "parse_tree.error_util.c"
{
#line 4473 "parse_tree.error_util.c"
  {
#line 4475 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4478 "parse_tree.error_util.c"
    {
#line 4480 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_line_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4483 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4485 "parse_tree.error_util.c"
  }
#line 4487 "parse_tree.error_util.c"
}

#line 4490 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0_10001(
#line 4493 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4495 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4497 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4499 "parse_tree.error_util.c"
{
#line 4501 "parse_tree.error_util.c"
  {
#line 4503 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4506 "parse_tree.error_util.c"
    {
#line 4508 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_line_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4511 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4513 "parse_tree.error_util.c"
  }
#line 4515 "parse_tree.error_util.c"
}

#line 4518 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0_10001(
#line 4521 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4523 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4525 "parse_tree.error_util.c"
{
#line 4527 "parse_tree.error_util.c"
  {
#line 4529 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4532 "parse_tree.error_util.c"
    {
#line 4534 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4537 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4539 "parse_tree.error_util.c"
  }
#line 4541 "parse_tree.error_util.c"
}

#line 4544 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0_10001(
#line 4547 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4549 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4551 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4553 "parse_tree.error_util.c"
{
#line 4555 "parse_tree.error_util.c"
  {
#line 4557 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4560 "parse_tree.error_util.c"
    {
#line 4562 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4565 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4567 "parse_tree.error_util.c"
  }
#line 4569 "parse_tree.error_util.c"
}

#line 4572 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0_10001(
#line 4575 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4577 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4579 "parse_tree.error_util.c"
{
#line 4581 "parse_tree.error_util.c"
  {
#line 4583 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4586 "parse_tree.error_util.c"
    {
#line 4588 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_msg_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4591 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4593 "parse_tree.error_util.c"
  }
#line 4595 "parse_tree.error_util.c"
}

#line 4598 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0_10001(
#line 4601 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4603 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4605 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4607 "parse_tree.error_util.c"
{
#line 4609 "parse_tree.error_util.c"
  {
#line 4611 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4614 "parse_tree.error_util.c"
    {
#line 4616 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_msg_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4619 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4621 "parse_tree.error_util.c"
  }
#line 4623 "parse_tree.error_util.c"
}

#line 4626 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_phase_0_0_10001(
#line 4629 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4631 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4633 "parse_tree.error_util.c"
{
#line 4635 "parse_tree.error_util.c"
  {
#line 4637 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4640 "parse_tree.error_util.c"
    {
#line 4642 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4645 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4647 "parse_tree.error_util.c"
  }
#line 4649 "parse_tree.error_util.c"
}

#line 4652 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_phase_0_0_10001(
#line 4655 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4657 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4659 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4661 "parse_tree.error_util.c"
{
#line 4663 "parse_tree.error_util.c"
  {
#line 4665 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4668 "parse_tree.error_util.c"
    {
#line 4670 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_phase_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4673 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4675 "parse_tree.error_util.c"
  }
#line 4677 "parse_tree.error_util.c"
}

#line 4680 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_severity_0_0_10001(
#line 4683 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4685 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4687 "parse_tree.error_util.c"
{
#line 4689 "parse_tree.error_util.c"
  {
#line 4691 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4694 "parse_tree.error_util.c"
    {
#line 4696 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4699 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4701 "parse_tree.error_util.c"
  }
#line 4703 "parse_tree.error_util.c"
}

#line 4706 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_severity_0_0_10001(
#line 4709 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4711 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4713 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4715 "parse_tree.error_util.c"
{
#line 4717 "parse_tree.error_util.c"
  {
#line 4719 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4722 "parse_tree.error_util.c"
    {
#line 4724 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_severity_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4727 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4729 "parse_tree.error_util.c"
  }
#line 4731 "parse_tree.error_util.c"
}

#line 4734 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_0_0_10001(
#line 4737 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4739 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4741 "parse_tree.error_util.c"
{
#line 4743 "parse_tree.error_util.c"
  {
#line 4745 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4748 "parse_tree.error_util.c"
    {
#line 4750 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4753 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4755 "parse_tree.error_util.c"
  }
#line 4757 "parse_tree.error_util.c"
}

#line 4760 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_0_0_10001(
#line 4763 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4765 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4767 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4769 "parse_tree.error_util.c"
{
#line 4771 "parse_tree.error_util.c"
  {
#line 4773 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4776 "parse_tree.error_util.c"
    {
#line 4778 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4781 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4783 "parse_tree.error_util.c"
  }
#line 4785 "parse_tree.error_util.c"
}

#line 4788 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0_10001(
#line 4791 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4793 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4795 "parse_tree.error_util.c"
{
#line 4797 "parse_tree.error_util.c"
  {
#line 4799 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4802 "parse_tree.error_util.c"
    {
#line 4804 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_spec_accumulator_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4807 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4809 "parse_tree.error_util.c"
  }
#line 4811 "parse_tree.error_util.c"
}

#line 4814 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0_10001(
#line 4817 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4819 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4821 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4823 "parse_tree.error_util.c"
{
#line 4825 "parse_tree.error_util.c"
  {
#line 4827 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4830 "parse_tree.error_util.c"
    {
#line 4832 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____error_spec_accumulator_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4835 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4837 "parse_tree.error_util.c"
  }
#line 4839 "parse_tree.error_util.c"
}

#line 4842 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0_10001(
#line 4845 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4847 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4849 "parse_tree.error_util.c"
{
#line 4851 "parse_tree.error_util.c"
  {
#line 4853 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4856 "parse_tree.error_util.c"
    {
#line 4858 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_component_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4861 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4863 "parse_tree.error_util.c"
  }
#line 4865 "parse_tree.error_util.c"
}

#line 4868 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0_10001(
#line 4871 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4873 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4875 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4877 "parse_tree.error_util.c"
{
#line 4879 "parse_tree.error_util.c"
  {
#line 4881 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4884 "parse_tree.error_util.c"
    {
#line 4886 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_component_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4889 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4891 "parse_tree.error_util.c"
  }
#line 4893 "parse_tree.error_util.c"
}

#line 4896 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0_10001(
#line 4899 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4901 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4903 "parse_tree.error_util.c"
{
#line 4905 "parse_tree.error_util.c"
  {
#line 4907 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4910 "parse_tree.error_util.c"
    {
#line 4912 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____format_components_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4915 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4917 "parse_tree.error_util.c"
  }
#line 4919 "parse_tree.error_util.c"
}

#line 4922 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0_10001(
#line 4925 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4927 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4929 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4931 "parse_tree.error_util.c"
{
#line 4933 "parse_tree.error_util.c"
  {
#line 4935 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4938 "parse_tree.error_util.c"
    {
#line 4940 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____format_components_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4943 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4945 "parse_tree.error_util.c"
  }
#line 4947 "parse_tree.error_util.c"
}

#line 4950 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0_10001(
#line 4953 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 4955 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 4957 "parse_tree.error_util.c"
{
#line 4959 "parse_tree.error_util.c"
  {
#line 4961 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 4964 "parse_tree.error_util.c"
    {
#line 4966 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_first_in_msg_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 4969 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 4971 "parse_tree.error_util.c"
  }
#line 4973 "parse_tree.error_util.c"
}

#line 4976 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0_10001(
#line 4979 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 4981 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 4983 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 4985 "parse_tree.error_util.c"
{
#line 4987 "parse_tree.error_util.c"
  {
#line 4989 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 4992 "parse_tree.error_util.c"
    {
#line 4994 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_first_in_msg_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 4997 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 4999 "parse_tree.error_util.c"
  }
#line 5001 "parse_tree.error_util.c"
}

#line 5004 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0_10001(
#line 5007 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5009 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5011 "parse_tree.error_util.c"
{
#line 5013 "parse_tree.error_util.c"
  {
#line 5015 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5018 "parse_tree.error_util.c"
    {
#line 5020 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5023 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5025 "parse_tree.error_util.c"
  }
#line 5027 "parse_tree.error_util.c"
}

#line 5030 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0_10001(
#line 5033 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5035 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5037 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5039 "parse_tree.error_util.c"
{
#line 5041 "parse_tree.error_util.c"
  {
#line 5043 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5046 "parse_tree.error_util.c"
    {
#line 5048 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5051 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5053 "parse_tree.error_util.c"
  }
#line 5055 "parse_tree.error_util.c"
}

#line 5058 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0_10001(
#line 5061 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5063 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5065 "parse_tree.error_util.c"
{
#line 5067 "parse_tree.error_util.c"
  {
#line 5069 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5072 "parse_tree.error_util.c"
    {
#line 5074 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_printed_something_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5077 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5079 "parse_tree.error_util.c"
  }
#line 5081 "parse_tree.error_util.c"
}

#line 5084 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0_10001(
#line 5087 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5089 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5091 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5093 "parse_tree.error_util.c"
{
#line 5095 "parse_tree.error_util.c"
  {
#line 5097 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5100 "parse_tree.error_util.c"
    {
#line 5102 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_printed_something_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5105 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5107 "parse_tree.error_util.c"
  }
#line 5109 "parse_tree.error_util.c"
}

#line 5112 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0_10001(
#line 5115 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5117 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5119 "parse_tree.error_util.c"
{
#line 5121 "parse_tree.error_util.c"
  {
#line 5123 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5126 "parse_tree.error_util.c"
    {
#line 5128 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____maybe_treat_as_first_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5131 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5133 "parse_tree.error_util.c"
  }
#line 5135 "parse_tree.error_util.c"
}

#line 5138 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0_10001(
#line 5141 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5143 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5145 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5147 "parse_tree.error_util.c"
{
#line 5149 "parse_tree.error_util.c"
  {
#line 5151 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5154 "parse_tree.error_util.c"
    {
#line 5156 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____maybe_treat_as_first_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5159 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5161 "parse_tree.error_util.c"
  }
#line 5163 "parse_tree.error_util.c"
}

#line 5166 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____mode_report_control_0_0_10001(
#line 5169 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5171 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5173 "parse_tree.error_util.c"
{
#line 5175 "parse_tree.error_util.c"
  {
#line 5177 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5180 "parse_tree.error_util.c"
    {
#line 5182 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____mode_report_control_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5185 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5187 "parse_tree.error_util.c"
  }
#line 5189 "parse_tree.error_util.c"
}

#line 5192 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____mode_report_control_0_0_10001(
#line 5195 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5197 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5199 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5201 "parse_tree.error_util.c"
{
#line 5203 "parse_tree.error_util.c"
  {
#line 5205 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5208 "parse_tree.error_util.c"
    {
#line 5210 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____mode_report_control_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5213 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5215 "parse_tree.error_util.c"
  }
#line 5217 "parse_tree.error_util.c"
}

#line 5220 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0_10001(
#line 5223 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5225 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5227 "parse_tree.error_util.c"
{
#line 5229 "parse_tree.error_util.c"
  {
#line 5231 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5234 "parse_tree.error_util.c"
    {
#line 5236 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____paragraph_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5239 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5241 "parse_tree.error_util.c"
  }
#line 5243 "parse_tree.error_util.c"
}

#line 5246 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0_10001(
#line 5249 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5251 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5253 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5255 "parse_tree.error_util.c"
{
#line 5257 "parse_tree.error_util.c"
  {
#line 5259 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5262 "parse_tree.error_util.c"
    {
#line 5264 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____paragraph_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5267 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5269 "parse_tree.error_util.c"
  }
#line 5271 "parse_tree.error_util.c"
}

#line 5274 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0_10001(
#line 5277 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5279 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5281 "parse_tree.error_util.c"
{
#line 5283 "parse_tree.error_util.c"
  {
#line 5285 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5288 "parse_tree.error_util.c"
    {
#line 5290 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____plain_or_prefix_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5293 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5295 "parse_tree.error_util.c"
  }
#line 5297 "parse_tree.error_util.c"
}

#line 5300 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0_10001(
#line 5303 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5305 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5307 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5309 "parse_tree.error_util.c"
{
#line 5311 "parse_tree.error_util.c"
  {
#line 5313 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5316 "parse_tree.error_util.c"
    {
#line 5318 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____plain_or_prefix_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5321 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5323 "parse_tree.error_util.c"
  }
#line 5325 "parse_tree.error_util.c"
}

#line 5328 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0_10001(
#line 5331 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5333 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5335 "parse_tree.error_util.c"
{
#line 5337 "parse_tree.error_util.c"
  {
#line 5339 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5342 "parse_tree.error_util.c"
    {
#line 5344 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____verbose_always_or_once_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5347 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5349 "parse_tree.error_util.c"
  }
#line 5351 "parse_tree.error_util.c"
}

#line 5354 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0_10001(
#line 5357 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5359 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5361 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5363 "parse_tree.error_util.c"
{
#line 5365 "parse_tree.error_util.c"
  {
#line 5367 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5370 "parse_tree.error_util.c"
    {
#line 5372 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____verbose_always_or_once_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5375 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5377 "parse_tree.error_util.c"
  }
#line 5379 "parse_tree.error_util.c"
}

#line 5382 "parse_tree.error_util.c"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0_10001(
#line 5385 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 5387 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2)
#line 5389 "parse_tree.error_util.c"
{
#line 5391 "parse_tree.error_util.c"
  {
#line 5393 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;

#line 5396 "parse_tree.error_util.c"
    {
#line 5398 "parse_tree.error_util.c"
      parse_tree__error_util__succeeded = parse_tree__error_util____Unify____word_0_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2));
    }
#line 5401 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 5403 "parse_tree.error_util.c"
  }
#line 5405 "parse_tree.error_util.c"
}

#line 5408 "parse_tree.error_util.c"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0_10001(
#line 5411 "parse_tree.error_util.c"
  MR_Box * parse_tree__error_util__wrapper_arg_1,
#line 5413 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 5415 "parse_tree.error_util.c"
  MR_Box parse_tree__error_util__wrapper_arg_3)
#line 5417 "parse_tree.error_util.c"
{
#line 5419 "parse_tree.error_util.c"
  {
#line 5421 "parse_tree.error_util.c"
    MR_Word parse_tree__error_util__conv0_HeadVar__1_1;

#line 5424 "parse_tree.error_util.c"
    {
#line 5426 "parse_tree.error_util.c"
      parse_tree__error_util____Compare____word_0_0(&parse_tree__error_util__conv0_HeadVar__1_1, ((MR_Word) parse_tree__error_util__wrapper_arg_2), ((MR_Word) parse_tree__error_util__wrapper_arg_3));
    }
#line 5429 "parse_tree.error_util.c"
    *parse_tree__error_util__wrapper_arg_1 = ((MR_Box) (parse_tree__error_util__conv0_HeadVar__1_1));
#line 5431 "parse_tree.error_util.c"
  }
#line 5433 "parse_tree.error_util.c"
}

#line 684 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__684__1_1_p_0(
#line 684 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_21)
#line 684 "error_util.m"
{
#line 684 "error_util.m"
  {
#line 684 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__ModeReportControl_9;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__Phase_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 1)));
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 0)));
#line 684 "error_util.m"
    MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_21, (MR_Integer) 2)));

#line 707 "error_util.m"
#line 707 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Phase_31)) {
#line 707 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 707 "error_util.m"
      case (MR_Integer) 0:
#line 707 "error_util.m"
#line 707 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__Phase_31)) {
#line 707 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 707 "error_util.m"
          case (MR_Integer) 0:
#line 707 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 1:
#line 708 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 2:
#line 709 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 3:
#line 710 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 4:
#line 711 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 5:
#line 712 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 6:
#line 713 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 7:
#line 715 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 8:
#line 716 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 9:
#line 717 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 10:
#line 719 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 11:
#line 720 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 12:
#line 721 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 13:
#line 722 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 14:
#line 723 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
          case (MR_Integer) 15:
#line 724 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "error_util.m"
            break;
#line 707 "error_util.m"
        }
#line 707 "error_util.m"
        break;
#line 707 "error_util.m"
      case (MR_Integer) 1:
#line 714 "error_util.m"
        {
#line 714 "error_util.m"
          MR_Word parse_tree__error_util__Control_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 714 "error_util.m"
          {
#line 714 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 714 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_34));
#line 714 "error_util.m"
          }
#line 714 "error_util.m"
        }
#line 707 "error_util.m"
        break;
#line 707 "error_util.m"
      case (MR_Integer) 2:
#line 718 "error_util.m"
        {
#line 718 "error_util.m"
          MR_Word parse_tree__error_util__Control_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Phase_31, (MR_Integer) 0)));

#line 718 "error_util.m"
          {
#line 718 "error_util.m"
            parse_tree__error_util__ModeReportControl_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "error_util.m"
            MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, 0) = ((MR_Box) (parse_tree__error_util__Control_35));
#line 718 "error_util.m"
          }
#line 718 "error_util.m"
        }
#line 707 "error_util.m"
        break;
#line 707 "error_util.m"
    }
#line 686 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__ModeReportControl_9)) == (MR_mktag((MR_Integer) 1)));
#line 686 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 686 "error_util.m"
      {
#line 686 "error_util.m"
        parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__ModeReportControl_9, (MR_Integer) 0)));
#line 686 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_22_22 == (MR_Integer) 1);
#line 686 "error_util.m"
      }
#line 684 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 684 "error_util.m"
  }
#line 684 "error_util.m"
}

#line 1450 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____word_0_0(
#line 1450 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1450 "error_util.m"
{
#line 1450 "error_util.m"
  {
#line 1450 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1450 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_28 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1450 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_29 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1450 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_28 == parse_tree__error_util__CastY_29);
#line 1450 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 5653 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1450 "error_util.m"
    else
#line 1450 "error_util.m"
#line 1450 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1450 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
        case (MR_Integer) 0:
#line 1450 "error_util.m"
#line 1450 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1450 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
            case (MR_Integer) 0:
#line 1450 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1450 "error_util.m"
              break;
#line 1450 "error_util.m"
            case (MR_Integer) 1:
#line 5677 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
              break;
#line 1450 "error_util.m"
            case (MR_Integer) 2:
#line 5683 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
              break;
#line 1450 "error_util.m"
            case (MR_Integer) 3:
#line 5689 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
              break;
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 1:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1450 "error_util.m"
#line 1450 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1450 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
              case (MR_Integer) 0:
#line 5711 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 1:
#line 1450 "error_util.m"
                {
#line 1450 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_33_33, parse_tree__error_util__V_5_5);
#line 1450 "error_util.m"
                    return;
                  }
#line 1450 "error_util.m"
                }
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 2:
#line 5735 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 3:
#line 5741 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
            }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 2:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1450 "error_util.m"
#line 1450 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1450 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
              case (MR_Integer) 0:
#line 5765 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 1:
#line 5771 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 2:
#line 1450 "error_util.m"
                {
#line 1450 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_34_34, parse_tree__error_util__V_14_14);
#line 1450 "error_util.m"
                    return;
                  }
#line 1450 "error_util.m"
                }
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 3:
#line 5795 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
            }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 3:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1450 "error_util.m"
#line 1450 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1450 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
              case (MR_Integer) 0:
#line 5819 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 1:
#line 5825 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 2:
#line 5831 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
              case (MR_Integer) 3:
#line 1450 "error_util.m"
                {
#line 1450 "error_util.m"
                  MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1450 "error_util.m"
                  {
#line 1450 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_35_35, parse_tree__error_util__V_23_23);
#line 1450 "error_util.m"
                    return;
                  }
#line 1450 "error_util.m"
                }
#line 1450 "error_util.m"
                break;
#line 1450 "error_util.m"
            }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
      }
#line 1450 "error_util.m"
  }
#line 1450 "error_util.m"
}

#line 1450 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____word_0_0(
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1450 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1450 "error_util.m"
{
#line 1450 "error_util.m"
  {
#line 1450 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1450 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_11 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1450 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1450 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_11 == parse_tree__error_util__CastY_12);
#line 1450 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1450 "error_util.m"
    else
#line 1450 "error_util.m"
#line 1450 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1450 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1450 "error_util.m"
        case (MR_Integer) 0:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1450 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1450 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_10 == parse_tree__error_util__CastX_9);
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 1:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1450 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1450 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
              {
#line 1450 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5929 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1450 "error_util.m"
              }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 2:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1450 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1450 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
              {
#line 1450 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5954 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1450 "error_util.m"
              }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
        case (MR_Integer) 3:
#line 1450 "error_util.m"
          {
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1450 "error_util.m"
            MR_String parse_tree__error_util__V_8_8;

#line 1450 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1450 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1450 "error_util.m"
              {
#line 1450 "error_util.m"
                parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 5979 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 1450 "error_util.m"
              }
#line 1450 "error_util.m"
          }
#line 1450 "error_util.m"
          break;
#line 1450 "error_util.m"
      }
#line 1450 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1450 "error_util.m"
  }
#line 1450 "error_util.m"
}

#line 165 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____verbose_always_or_once_0_0(
#line 165 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 165 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 165 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 165 "error_util.m"
{
#line 165 "error_util.m"
  {
#line 165 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 165 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 165 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 165 "error_util.m"
    {
#line 165 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 165 "error_util.m"
      return;
    }
#line 165 "error_util.m"
  }
#line 165 "error_util.m"
}

#line 165 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____verbose_always_or_once_0_0(
#line 165 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 165 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 165 "error_util.m"
{
#line 6037 "parse_tree.error_util.c"
  {
#line 6039 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6042 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6044 "parse_tree.error_util.c"
  }
#line 165 "error_util.m"
}

#line 1557 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____plain_or_prefix_0_0(
#line 1557 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1557 "error_util.m"
{
#line 1557 "error_util.m"
  {
#line 1557 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1557 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1557 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_17 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1557 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_16 == parse_tree__error_util__CastY_17);
#line 1557 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6073 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1557 "error_util.m"
    else
#line 1557 "error_util.m"
#line 1557 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 1557 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "error_util.m"
        case (MR_Integer) 0:
#line 1557 "error_util.m"
#line 1557 "error_util.m"
          switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1557 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "error_util.m"
            case (MR_Integer) 0:
#line 1557 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1557 "error_util.m"
              break;
#line 1557 "error_util.m"
            case (MR_Integer) 1:
#line 6097 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1557 "error_util.m"
              break;
#line 1557 "error_util.m"
            case (MR_Integer) 2:
#line 6103 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1557 "error_util.m"
              break;
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
        case (MR_Integer) 1:
#line 1557 "error_util.m"
          {
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1557 "error_util.m"
#line 1557 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1557 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "error_util.m"
              case (MR_Integer) 0:
#line 6125 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
              case (MR_Integer) 1:
#line 1557 "error_util.m"
                {
#line 1557 "error_util.m"
                  MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1557 "error_util.m"
                  {
#line 1557 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_20_20, parse_tree__error_util__V_5_5);
#line 1557 "error_util.m"
                    return;
                  }
#line 1557 "error_util.m"
                }
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
              case (MR_Integer) 2:
#line 6149 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
            }
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
        case (MR_Integer) 2:
#line 1557 "error_util.m"
          {
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 1557 "error_util.m"
#line 1557 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 1557 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "error_util.m"
              case (MR_Integer) 0:
#line 6173 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
              case (MR_Integer) 1:
#line 6179 "parse_tree.error_util.c"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
              case (MR_Integer) 2:
#line 1557 "error_util.m"
                {
#line 1557 "error_util.m"
                  MR_String parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 1557 "error_util.m"
                  {
#line 1557 "error_util.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_21_21, parse_tree__error_util__V_12_12);
#line 1557 "error_util.m"
                    return;
                  }
#line 1557 "error_util.m"
                }
#line 1557 "error_util.m"
                break;
#line 1557 "error_util.m"
            }
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
      }
#line 1557 "error_util.m"
  }
#line 1557 "error_util.m"
}

#line 1557 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____plain_or_prefix_0_0(
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1557 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1557 "error_util.m"
{
#line 1557 "error_util.m"
  {
#line 1557 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1557 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1557 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1557 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1557 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1557 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1557 "error_util.m"
    else
#line 1557 "error_util.m"
#line 1557 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 1557 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1557 "error_util.m"
        case (MR_Integer) 0:
#line 1557 "error_util.m"
          {
#line 1557 "error_util.m"
            MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1557 "error_util.m"
            MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1557 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_8 == parse_tree__error_util__CastX_7);
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
        case (MR_Integer) 1:
#line 1557 "error_util.m"
          {
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_4_4;

#line 1557 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1557 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1557 "error_util.m"
              {
#line 1557 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6277 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_3_3, parse_tree__error_util__V_4_4) == 0);
#line 1557 "error_util.m"
              }
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
        case (MR_Integer) 2:
#line 1557 "error_util.m"
          {
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1557 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 1557 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1557 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1557 "error_util.m"
              {
#line 1557 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6302 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 1557 "error_util.m"
              }
#line 1557 "error_util.m"
          }
#line 1557 "error_util.m"
          break;
#line 1557 "error_util.m"
      }
#line 1557 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1557 "error_util.m"
  }
#line 1557 "error_util.m"
}

#line 1432 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____paragraph_0_0(
#line 1432 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1432 "error_util.m"
{
#line 1432 "error_util.m"
  {
#line 1432 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1432 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_12 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1432 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_13 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1432 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_12 == parse_tree__error_util__CastY_13);
#line 1432 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6343 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1432 "error_util.m"
    else
#line 1432 "error_util.m"
      {
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;

#line 1432 "error_util.m"
        {
#line 1432 "error_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], &parse_tree__error_util__V_10_10, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_7_7)));
        }
#line 6369 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == (MR_Integer) 0);
#line 1432 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1432 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1432 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_10_10;
#line 1432 "error_util.m"
        else
#line 1432 "error_util.m"
          {
#line 1432 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11;

#line 1432 "error_util.m"
            {
#line 1432 "error_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_11_11, parse_tree__error_util__V_5_5, parse_tree__error_util__V_8_8);
            }
#line 6389 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == (MR_Integer) 0);
#line 1432 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1432 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1432 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_11_11;
#line 1432 "error_util.m"
            else
#line 1432 "error_util.m"
              {
#line 1432 "error_util.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9);
#line 1432 "error_util.m"
                return;
              }
#line 1432 "error_util.m"
          }
#line 1432 "error_util.m"
      }
#line 1432 "error_util.m"
  }
#line 1432 "error_util.m"
}

#line 1432 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____paragraph_0_0(
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1432 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1432 "error_util.m"
{
#line 1432 "error_util.m"
  {
#line 1432 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1432 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1432 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1432 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1432 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1432 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1432 "error_util.m"
    else
#line 1432 "error_util.m"
      {
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1432 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1432 "error_util.m"
        MR_Integer parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));

#line 6456 "parse_tree.error_util.c"
        {
#line 6458 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_6_6)));
        }
#line 1432 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1432 "error_util.m"
          {
#line 6465 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 == parse_tree__error_util__V_7_7);
#line 1432 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6469 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 1432 "error_util.m"
          }
#line 1432 "error_util.m"
      }
#line 1432 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1432 "error_util.m"
  }
#line 1432 "error_util.m"
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
#line 6523 "parse_tree.error_util.c"
  {
#line 6525 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6528 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6530 "parse_tree.error_util.c"
  }
#line 104 "error_util.m"
}

#line 149 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____maybe_treat_as_first_0_0(
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
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 149 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 149 "error_util.m"
    {
#line 149 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 149 "error_util.m"
      return;
    }
#line 149 "error_util.m"
  }
#line 149 "error_util.m"
}

#line 149 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_treat_as_first_0_0(
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 149 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 149 "error_util.m"
{
#line 6576 "parse_tree.error_util.c"
  {
#line 6578 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6581 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6583 "parse_tree.error_util.c"
  }
#line 149 "error_util.m"
}

#line 931 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_printed_something_0_0(
#line 931 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 931 "error_util.m"
{
#line 931 "error_util.m"
  {
#line 931 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 931 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 931 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 931 "error_util.m"
    {
#line 931 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 931 "error_util.m"
      return;
    }
#line 931 "error_util.m"
  }
#line 931 "error_util.m"
}

#line 931 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_printed_something_0_0(
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 931 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 931 "error_util.m"
{
#line 6629 "parse_tree.error_util.c"
  {
#line 6631 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6634 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6636 "parse_tree.error_util.c"
  }
#line 931 "error_util.m"
}

#line 935 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_lower_next_initial_0_0(
#line 935 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 935 "error_util.m"
{
#line 935 "error_util.m"
  {
#line 935 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 935 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 935 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 935 "error_util.m"
    {
#line 935 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 935 "error_util.m"
      return;
    }
#line 935 "error_util.m"
  }
#line 935 "error_util.m"
}

#line 935 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_lower_next_initial_0_0(
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 935 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 935 "error_util.m"
{
#line 6682 "parse_tree.error_util.c"
  {
#line 6684 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6687 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6689 "parse_tree.error_util.c"
  }
#line 935 "error_util.m"
}

#line 1067 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____maybe_first_in_msg_0_0(
#line 1067 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1067 "error_util.m"
{
#line 1067 "error_util.m"
  {
#line 1067 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1067 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar1_4 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1067 "error_util.m"
    MR_Integer parse_tree__error_util__Cast_HeadVar2_5 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1067 "error_util.m"
    {
#line 1067 "error_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Cast_HeadVar1_4, parse_tree__error_util__Cast_HeadVar2_5);
#line 1067 "error_util.m"
      return;
    }
#line 1067 "error_util.m"
  }
#line 1067 "error_util.m"
}

#line 1067 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____maybe_first_in_msg_0_0(
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_1,
#line 1067 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1067 "error_util.m"
{
#line 6735 "parse_tree.error_util.c"
  {
#line 6737 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 6740 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 6742 "parse_tree.error_util.c"
  }
#line 1067 "error_util.m"
}

#line 386 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_components_0_0(
#line 386 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 386 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 386 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 386 "error_util.m"
{
#line 386 "error_util.m"
  {
#line 386 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 386 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 386 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 386 "error_util.m"
    {
#line 386 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 386 "error_util.m"
      return;
    }
#line 386 "error_util.m"
  }
#line 386 "error_util.m"
}

#line 386 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_components_0_0(
#line 386 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 386 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 386 "error_util.m"
{
#line 386 "error_util.m"
  {
#line 386 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 386 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 386 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 386 "error_util.m"
    {
#line 386 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 386 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 386 "error_util.m"
  }
#line 386 "error_util.m"
}

#line 287 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____format_component_0_0(
#line 287 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 287 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 287 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 287 "error_util.m"
{
#line 287 "error_util.m"
  {
#line 287 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 287 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_45 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 287 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_46 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 287 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_45 == parse_tree__error_util__CastY_46);
#line 287 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 6833 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 287 "error_util.m"
    else
#line 287 "error_util.m"
      {
#line 287 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4;
#line 287 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5;

#line 287 "error_util.m"
        {
#line 287 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__2_2, &parse_tree__error_util__V_4_4);
        }
#line 287 "error_util.m"
        {
#line 287 "error_util.m"
          parse_tree__error_util____Index____format_component_0_0(parse_tree__error_util__HeadVar__3_3, &parse_tree__error_util__V_5_5);
        }
#line 287 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 < parse_tree__error_util__V_5_5);
#line 287 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 6858 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 287 "error_util.m"
        else
#line 287 "error_util.m"
          {
#line 287 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 287 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 6868 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 287 "error_util.m"
            else
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 287 "error_util.m"
#line 287 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 287 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
                  case (MR_Integer) 0:
#line 287 "error_util.m"
#line 287 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 287 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
                      case (MR_Integer) 0:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 1:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 2:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                    }
#line 287 "error_util.m"
                    break;
#line 287 "error_util.m"
                  case (MR_Integer) 1:
#line 287 "error_util.m"
                    {
#line 287 "error_util.m"
                      MR_Integer parse_tree__error_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "error_util.m"
                      MR_Integer parse_tree__error_util__V_8_8;

#line 287 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 287 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          parse_tree__error_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 287 "error_util.m"
                          {
#line 287 "error_util.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8);
                          }
#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                    }
#line 287 "error_util.m"
                    break;
#line 287 "error_util.m"
                  case (MR_Integer) 2:
#line 287 "error_util.m"
                    {
#line 287 "error_util.m"
                      MR_String parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 287 "error_util.m"
                      MR_String parse_tree__error_util__V_10_10;

#line 287 "error_util.m"
                      parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 287 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          parse_tree__error_util__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 287 "error_util.m"
                          {
#line 287 "error_util.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_9_9, parse_tree__error_util__V_10_10);
                          }
#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                    }
#line 287 "error_util.m"
                    break;
#line 287 "error_util.m"
                  case (MR_Integer) 3:
#line 287 "error_util.m"
#line 287 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 287 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
                      case (MR_Integer) 0:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_12_12;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_11_11, parse_tree__error_util__V_12_12);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 1:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_14_14;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_13_13, parse_tree__error_util__V_14_14);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 2:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_16_16;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 3:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_18_18;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 4:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_20_20;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 5:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_22_22;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 6:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_24_24;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 7:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_26_26;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 8:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_28_28;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                parse_tree__prog_data____Compare____sym_name_and_arity_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 9:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_30_30;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                parse_tree__prog_data____Compare____cons_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 10:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_32_32;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                parse_tree__prog_data____Compare____mer_type_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_31_31, parse_tree__error_util__V_32_32);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 11:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_34_34;
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_66_66;
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_67_67;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              parse_tree__error_util__V_66_66 = (MR_Integer) parse_tree__error_util__V_33_33;
#line 287 "error_util.m"
                              parse_tree__error_util__V_67_67 = (MR_Integer) parse_tree__error_util__V_34_34;
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_66_66, parse_tree__error_util__V_67_67);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 12:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Word parse_tree__error_util__V_36_36;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                parse_tree__prog_data____Compare____simple_call_id_0_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 13:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_38_38;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 14:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_String parse_tree__error_util__V_40_40;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_39_39, parse_tree__error_util__V_40_40);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 15:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_42_42;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_41_41, parse_tree__error_util__V_42_42);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                      case (MR_Integer) 16:
#line 287 "error_util.m"
                        {
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 287 "error_util.m"
                          MR_Integer parse_tree__error_util__V_44_44;

#line 287 "error_util.m"
                          parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 287 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                            {
#line 287 "error_util.m"
                              parse_tree__error_util__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 287 "error_util.m"
                              {
#line 287 "error_util.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_6_6, parse_tree__error_util__V_43_43, parse_tree__error_util__V_44_44);
                              }
#line 287 "error_util.m"
                              parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
                            }
#line 287 "error_util.m"
                        }
#line 287 "error_util.m"
                        break;
#line 287 "error_util.m"
                    }
#line 287 "error_util.m"
                    break;
#line 287 "error_util.m"
                }
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_6_6;
#line 287 "error_util.m"
                else
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 287 "error_util.m"
                    return;
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
          }
#line 287 "error_util.m"
      }
#line 287 "error_util.m"
  }
#line 287 "error_util.m"
}

#line 287 "error_util.m"
void MR_CALL 
parse_tree__error_util____Index____format_component_0_0(
#line 287 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 287 "error_util.m"
  MR_Integer * parse_tree__error_util__HeadVar__2_2)
#line 287 "error_util.m"
{
#line 287 "error_util.m"
  {
#line 287 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 287 "error_util.m"
#line 287 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 287 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
      case (MR_Integer) 0:
#line 287 "error_util.m"
#line 287 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 287 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
          case (MR_Integer) 0:
#line 7572 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 1:
#line 7578 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 18;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 2:
#line 7584 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 20;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
        }
#line 287 "error_util.m"
        break;
#line 287 "error_util.m"
      case (MR_Integer) 1:
#line 7594 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 287 "error_util.m"
        break;
#line 287 "error_util.m"
      case (MR_Integer) 2:
#line 7600 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 287 "error_util.m"
        break;
#line 287 "error_util.m"
      case (MR_Integer) 3:
#line 287 "error_util.m"
#line 287 "error_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 287 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
          case (MR_Integer) 0:
#line 7613 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 1:
#line 7619 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 2:
#line 7625 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 3:
#line 7631 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 4:
#line 7637 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 5:
#line 7643 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 6:
#line 7649 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 7:
#line 7655 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 8:
#line 7661 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 9:
#line 7667 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 10:
#line 7673 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 11:
#line 7679 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 12:
#line 7685 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 13:
#line 7691 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 14:
#line 7697 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 15:
#line 7703 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 19;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
          case (MR_Integer) 16:
#line 7709 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 21;
#line 287 "error_util.m"
            break;
#line 287 "error_util.m"
        }
#line 287 "error_util.m"
        break;
#line 287 "error_util.m"
    }
#line 287 "error_util.m"
  }
#line 287 "error_util.m"
}

#line 287 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____format_component_0_0(
#line 287 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 287 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 287 "error_util.m"
{
#line 287 "error_util.m"
  {
#line 287 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 287 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_47 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 287 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_48 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 287 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_47 == parse_tree__error_util__CastY_48);
#line 287 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 287 "error_util.m"
    else
#line 287 "error_util.m"
#line 287 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 287 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
        case (MR_Integer) 0:
#line 287 "error_util.m"
#line 287 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 287 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
            case (MR_Integer) 0:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_13 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_14 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_14 == parse_tree__error_util__CastX_13);
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 1:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_40 == parse_tree__error_util__CastX_39);
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 2:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_43 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_44 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_44 == parse_tree__error_util__CastX_43);
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
          }
#line 287 "error_util.m"
          break;
#line 287 "error_util.m"
        case (MR_Integer) 1:
#line 287 "error_util.m"
          {
#line 287 "error_util.m"
            MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "error_util.m"
            MR_Integer parse_tree__error_util__V_4_4;

#line 287 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 287 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7828 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_4_4);
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
          }
#line 287 "error_util.m"
          break;
#line 287 "error_util.m"
        case (MR_Integer) 2:
#line 287 "error_util.m"
          {
#line 287 "error_util.m"
            MR_String parse_tree__error_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "error_util.m"
            MR_String parse_tree__error_util__V_6_6;

#line 287 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 287 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                parse_tree__error_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 7853 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_5_5, parse_tree__error_util__V_6_6) == 0);
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
          }
#line 287 "error_util.m"
          break;
#line 287 "error_util.m"
        case (MR_Integer) 3:
#line 287 "error_util.m"
#line 287 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 287 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 287 "error_util.m"
            case (MR_Integer) 0:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_8_8;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7885 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_7_7, parse_tree__error_util__V_8_8) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 1:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_10_10;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7910 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_10_10);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 2:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_12_12;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7935 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_12_12);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 3:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_16_16;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7960 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_15_15, parse_tree__error_util__V_16_16) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 4:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_18_18;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 7985 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_17_17, parse_tree__error_util__V_18_18) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 5:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_20_20;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8010 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 6:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_22_22;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8035 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_21_21, parse_tree__error_util__V_22_22) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 7:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8060 "parse_tree.error_util.c"
                    {
#line 8062 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__error_util__V_23_23, parse_tree__error_util__V_24_24);
                    }
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 8:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8088 "parse_tree.error_util.c"
                    {
#line 8090 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____sym_name_and_arity_0_0(parse_tree__error_util__V_25_25, parse_tree__error_util__V_26_26);
                    }
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 9:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8116 "parse_tree.error_util.c"
                    {
#line 8118 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(parse_tree__error_util__V_27_27, parse_tree__error_util__V_28_28);
                    }
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 10:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8144 "parse_tree.error_util.c"
                    {
#line 8146 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__error_util__V_29_29, parse_tree__error_util__V_30_30);
                    }
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 11:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8172 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == parse_tree__error_util__V_32_32);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 12:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Word parse_tree__error_util__V_34_34;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8197 "parse_tree.error_util.c"
                    {
#line 8199 "parse_tree.error_util.c"
                      return parse_tree__error_util__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(parse_tree__error_util__V_33_33, parse_tree__error_util__V_34_34);
                    }
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 13:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_36_36;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8225 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_35_35, parse_tree__error_util__V_36_36) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 14:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_String parse_tree__error_util__V_38_38;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8250 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__V_37_37, parse_tree__error_util__V_38_38) == 0);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 15:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_42_42;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8275 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_41_41 == parse_tree__error_util__V_42_42);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
            case (MR_Integer) 16:
#line 287 "error_util.m"
              {
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46;

#line 287 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 287 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 287 "error_util.m"
                  {
#line 287 "error_util.m"
                    parse_tree__error_util__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 8300 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_45_45 == parse_tree__error_util__V_46_46);
#line 287 "error_util.m"
                  }
#line 287 "error_util.m"
              }
#line 287 "error_util.m"
              break;
#line 287 "error_util.m"
          }
#line 287 "error_util.m"
          break;
#line 287 "error_util.m"
      }
#line 287 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 287 "error_util.m"
  }
#line 287 "error_util.m"
}

#line 679 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_spec_accumulator_0_0(
#line 679 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 679 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 679 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 679 "error_util.m"
{
#line 679 "error_util.m"
  {
#line 679 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 679 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 679 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 679 "error_util.m"
      return;
    }
#line 679 "error_util.m"
  }
#line 679 "error_util.m"
}

#line 679 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_spec_accumulator_0_0(
#line 679 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 679 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 679 "error_util.m"
{
#line 679 "error_util.m"
  {
#line 679 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 679 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 679 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 679 "error_util.m"
    {
#line 679 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[11], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 679 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 679 "error_util.m"
  }
#line 679 "error_util.m"
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
#line 8407 "parse_tree.error_util.c"
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
#line 8433 "parse_tree.error_util.c"
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
#line 8453 "parse_tree.error_util.c"
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
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[9], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_6_6)), ((MR_Box) (parse_tree__error_util__V_9_9)));
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

#line 8526 "parse_tree.error_util.c"
        {
#line 8528 "parse_tree.error_util.c"
          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_6_6);
        }
#line 67 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
          {
#line 8535 "parse_tree.error_util.c"
            {
#line 8537 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_phase_0_0(parse_tree__error_util__V_4_4, parse_tree__error_util__V_7_7);
            }
#line 67 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 67 "error_util.m"
              {
#line 8544 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_11_11 = (MR_Word) &parse_tree__error_util_scalar_common_1[9];
#line 8546 "parse_tree.error_util.c"
                {
#line 8548 "parse_tree.error_util.c"
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
#line 8588 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
    else
#line 74 "error_util.m"
#line 74 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 74 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
        case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 74 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
            case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                    case (MR_Integer) 0:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 1:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 2:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                  }
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
                case (MR_Integer) 1:
#line 8642 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
              }
#line 74 "error_util.m"
              break;
#line 74 "error_util.m"
            case (MR_Integer) 1:
#line 74 "error_util.m"
#line 74 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                    case (MR_Integer) 0:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 1:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 2:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                  }
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
                case (MR_Integer) 1:
#line 8688 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
              }
#line 74 "error_util.m"
              break;
#line 74 "error_util.m"
            case (MR_Integer) 2:
#line 74 "error_util.m"
#line 74 "error_util.m"
              switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
                  switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                    case (MR_Integer) 0:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 1:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                    case (MR_Integer) 2:
#line 74 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "error_util.m"
                      break;
#line 74 "error_util.m"
                  }
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
                case (MR_Integer) 1:
#line 8734 "parse_tree.error_util.c"
                  *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "error_util.m"
                  break;
#line 74 "error_util.m"
              }
#line 74 "error_util.m"
              break;
#line 74 "error_util.m"
          }
#line 74 "error_util.m"
          break;
#line 74 "error_util.m"
        case (MR_Integer) 1:
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
#line 74 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
              case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__HeadVar__3_3)) {
#line 74 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
                  case (MR_Integer) 0:
#line 8773 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 1:
#line 8779 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                  case (MR_Integer) 2:
#line 8785 "parse_tree.error_util.c"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "error_util.m"
                    break;
#line 74 "error_util.m"
                }
#line 74 "error_util.m"
                break;
#line 74 "error_util.m"
              case (MR_Integer) 1:
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
#line 8817 "parse_tree.error_util.c"
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
#line 8841 "parse_tree.error_util.c"
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
#line 8861 "parse_tree.error_util.c"
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
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[8], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_45_45)), ((MR_Box) (parse_tree__error_util__V_35_35)));
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
                break;
#line 74 "error_util.m"
            }
#line 74 "error_util.m"
          }
#line 74 "error_util.m"
          break;
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
#line 74 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 74 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
        case (MR_Integer) 0:
#line 74 "error_util.m"
#line 74 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 74 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 74 "error_util.m"
            case (MR_Integer) 0:
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
              break;
#line 74 "error_util.m"
            case (MR_Integer) 1:
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
              break;
#line 74 "error_util.m"
            case (MR_Integer) 2:
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
              break;
#line 74 "error_util.m"
          }
#line 74 "error_util.m"
          break;
#line 74 "error_util.m"
        case (MR_Integer) 1:
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
#line 9027 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 74 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                  {
#line 9033 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_10_10 == parse_tree__error_util__V_14_14);
#line 74 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                      {
#line 9039 "parse_tree.error_util.c"
                        {
#line 9041 "parse_tree.error_util.c"
                          parse_tree__error_util__succeeded = parse_tree__error_util____Unify____error_severity_0_0(parse_tree__error_util__V_11_11, parse_tree__error_util__V_15_15);
                        }
#line 74 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 74 "error_util.m"
                          {
#line 9048 "parse_tree.error_util.c"
                            parse_tree__error_util__TypeInfo_19_19 = (MR_Word) &parse_tree__error_util_scalar_common_1[8];
#line 9050 "parse_tree.error_util.c"
                            {
#line 9052 "parse_tree.error_util.c"
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
          break;
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
#line 9100 "parse_tree.error_util.c"
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
#line 9125 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "error_util.m"
        else
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_4_4 > parse_tree__error_util__V_5_5);
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 9135 "parse_tree.error_util.c"
              *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "error_util.m"
            else
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Word parse_tree__error_util__V_6_6;

#line 108 "error_util.m"
#line 108 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 108 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
                  case (MR_Integer) 0:
#line 108 "error_util.m"
#line 108 "error_util.m"
                    switch (MR_unmkbody(parse_tree__error_util__HeadVar__2_2)) {
#line 108 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
                      case (MR_Integer) 0:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 1:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 2:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 3:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 4:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 5:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 6:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 7:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 8:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 9:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 10:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 11:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 12:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 13:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 14:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                      case (MR_Integer) 15:
#line 108 "error_util.m"
                        {
#line 108 "error_util.m"
                          parse_tree__error_util__V_6_6 = (MR_Integer) 0;
#line 108 "error_util.m"
                          parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
                        }
#line 108 "error_util.m"
                        break;
#line 108 "error_util.m"
                    }
#line 108 "error_util.m"
                    break;
#line 108 "error_util.m"
                  case (MR_Integer) 1:
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
                    break;
#line 108 "error_util.m"
                  case (MR_Integer) 2:
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
                    break;
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
#line 108 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 108 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
      case (MR_Integer) 0:
#line 108 "error_util.m"
#line 108 "error_util.m"
        switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 108 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
          case (MR_Integer) 0:
#line 9482 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 0;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 1:
#line 9488 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 1;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 2:
#line 9494 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 2;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 3:
#line 9500 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 4:
#line 9506 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 4;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 5:
#line 9512 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 5;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 6:
#line 9518 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 6;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 7:
#line 9524 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 8;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 8:
#line 9530 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 9;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 9:
#line 9536 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 10;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 10:
#line 9542 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 12;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 11:
#line 9548 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 13;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 12:
#line 9554 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 14;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 13:
#line 9560 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 15;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 14:
#line 9566 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 16;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
          case (MR_Integer) 15:
#line 9572 "parse_tree.error_util.c"
            *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 17;
#line 108 "error_util.m"
            break;
#line 108 "error_util.m"
        }
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 1:
#line 9582 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 7;
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
      case (MR_Integer) 2:
#line 9588 "parse_tree.error_util.c"
        *parse_tree__error_util__HeadVar__2_2 = (MR_Integer) 11;
#line 108 "error_util.m"
        break;
#line 108 "error_util.m"
    }
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
    MR_Integer parse_tree__error_util__CastX_39 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_40 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_39 == parse_tree__error_util__CastY_40);
#line 108 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 108 "error_util.m"
    else
#line 108 "error_util.m"
#line 108 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 108 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
        case (MR_Integer) 0:
#line 108 "error_util.m"
#line 108 "error_util.m"
          switch (MR_unmkbody(parse_tree__error_util__HeadVar__1_1)) {
#line 108 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 108 "error_util.m"
            case (MR_Integer) 0:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 1:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 2:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 3:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 4:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 5:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 6:
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_16 == parse_tree__error_util__CastX_15);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
            case (MR_Integer) 7:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 8:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 9:
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_23 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_24 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_24 == parse_tree__error_util__CastX_23);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
            case (MR_Integer) 10:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 11:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 12:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 13:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 14:
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
              break;
#line 108 "error_util.m"
            case (MR_Integer) 15:
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastX_37 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 108 "error_util.m"
                MR_Integer parse_tree__error_util__CastY_38 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 108 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__CastY_38 == parse_tree__error_util__CastX_37);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
              break;
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
          break;
#line 108 "error_util.m"
        case (MR_Integer) 1:
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_18_18;

#line 108 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9898 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_17_17 == parse_tree__error_util__V_18_18);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
          break;
#line 108 "error_util.m"
        case (MR_Integer) 2:
#line 108 "error_util.m"
          {
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26;

#line 108 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 108 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 108 "error_util.m"
              {
#line 108 "error_util.m"
                parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 9923 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_25_25 == parse_tree__error_util__V_26_26);
#line 108 "error_util.m"
              }
#line 108 "error_util.m"
          }
#line 108 "error_util.m"
          break;
#line 108 "error_util.m"
      }
#line 108 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 108 "error_util.m"
  }
#line 108 "error_util.m"
}

#line 171 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_component_0_0(
#line 171 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 171 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 171 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 171 "error_util.m"
{
#line 171 "error_util.m"
  {
#line 171 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 171 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_98 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 171 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_99 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 171 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_98 == parse_tree__error_util__CastY_99);
#line 171 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 171 "error_util.m"
    else
#line 171 "error_util.m"
#line 171 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) {
#line 171 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
        case (MR_Integer) 0:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 171 "error_util.m"
#line 171 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 171 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
              case (MR_Integer) 0:
#line 171 "error_util.m"
                {
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));

#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_121_121)), ((MR_Box) (parse_tree__error_util__V_5_5)));
#line 171 "error_util.m"
                    return;
                  }
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 1:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 2:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 171 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                  case (MR_Integer) 0:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 1:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
            }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 1:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_123_123 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_124_124 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);

#line 171 "error_util.m"
#line 171 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 171 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
              case (MR_Integer) 0:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 1:
#line 171 "error_util.m"
                {
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_28_28;
#line 171 "error_util.m"
                  MR_Integer parse_tree__error_util__V_131_131 = (MR_Integer) parse_tree__error_util__V_124_124;
#line 171 "error_util.m"
                  MR_Integer parse_tree__error_util__V_132_132 = (MR_Integer) parse_tree__error_util__V_25_25;

#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_28_28, parse_tree__error_util__V_131_131, parse_tree__error_util__V_132_132);
                  }
#line 171 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_28_28 == (MR_Integer) 0);
#line 171 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 171 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_28_28;
#line 171 "error_util.m"
                  else
#line 171 "error_util.m"
                    {
#line 171 "error_util.m"
                      MR_Word parse_tree__error_util__V_29_29;
#line 171 "error_util.m"
                      MR_Integer parse_tree__error_util__V_133_133 = (MR_Integer) parse_tree__error_util__V_123_123;
#line 171 "error_util.m"
                      MR_Integer parse_tree__error_util__V_134_134 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 171 "error_util.m"
                      {
#line 171 "error_util.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_29_29, parse_tree__error_util__V_133_133, parse_tree__error_util__V_134_134);
                      }
#line 171 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 171 "error_util.m"
                      parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 171 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 171 "error_util.m"
                      else
#line 171 "error_util.m"
                        {
#line 171 "error_util.m"
                          {
#line 171 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_122_122)), ((MR_Box) (parse_tree__error_util__V_27_27)));
#line 171 "error_util.m"
                            return;
                          }
#line 171 "error_util.m"
                        }
#line 171 "error_util.m"
                    }
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 2:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 171 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                  case (MR_Integer) 0:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 1:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
            }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 2:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 171 "error_util.m"
#line 171 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 171 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
              case (MR_Integer) 0:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 1:
#line 171 "error_util.m"
                *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 2:
#line 171 "error_util.m"
                {
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "error_util.m"
                  MR_Word parse_tree__error_util__V_56_56;
#line 171 "error_util.m"
                  MR_Integer parse_tree__error_util__V_135_135 = (MR_Integer) parse_tree__error_util__V_130_130;
#line 171 "error_util.m"
                  MR_Integer parse_tree__error_util__V_136_136 = (MR_Integer) parse_tree__error_util__V_54_54;

#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_56_56, parse_tree__error_util__V_135_135, parse_tree__error_util__V_136_136);
                  }
#line 171 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__V_56_56 == (MR_Integer) 0);
#line 171 "error_util.m"
                  parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 171 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_56_56;
#line 171 "error_util.m"
                  else
#line 171 "error_util.m"
                    {
#line 171 "error_util.m"
                      {
#line 171 "error_util.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_129_129)), ((MR_Box) (parse_tree__error_util__V_55_55)));
#line 171 "error_util.m"
                        return;
                      }
#line 171 "error_util.m"
                    }
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
              case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 171 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                  case (MR_Integer) 0:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 1:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
                break;
#line 171 "error_util.m"
            }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) {
#line 171 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
            case (MR_Integer) 0:
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 171 "error_util.m"
#line 171 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 171 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                  case (MR_Integer) 0:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 1:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 2:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 171 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                      case (MR_Integer) 0:
#line 171 "error_util.m"
                        {
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__V_80_80;

#line 171 "error_util.m"
                          {
#line 171 "error_util.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], &parse_tree__error_util__V_80_80, ((MR_Box) (parse_tree__error_util__V_128_128)), ((MR_Box) (parse_tree__error_util__V_78_78)));
                          }
#line 171 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__V_80_80 == (MR_Integer) 0);
#line 171 "error_util.m"
                          parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 171 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                            *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_80_80;
#line 171 "error_util.m"
                          else
#line 171 "error_util.m"
                            {
#line 171 "error_util.m"
                              {
#line 171 "error_util.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_127_127)), ((MR_Box) (parse_tree__error_util__V_79_79)));
#line 171 "error_util.m"
                                return;
                              }
#line 171 "error_util.m"
                            }
#line 171 "error_util.m"
                        }
#line 171 "error_util.m"
                        break;
#line 171 "error_util.m"
                      case (MR_Integer) 1:
#line 171 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 171 "error_util.m"
                        break;
#line 171 "error_util.m"
                    }
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
              break;
#line 171 "error_util.m"
            case (MR_Integer) 1:
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
                MR_Box parse_tree__error_util__V_125_125 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));

#line 171 "error_util.m"
#line 171 "error_util.m"
                switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) {
#line 171 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                  case (MR_Integer) 0:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 1:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 2:
#line 171 "error_util.m"
                    *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                  case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)))) {
#line 171 "error_util.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
                      case (MR_Integer) 0:
#line 171 "error_util.m"
                        *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 171 "error_util.m"
                        break;
#line 171 "error_util.m"
                      case (MR_Integer) 1:
#line 171 "error_util.m"
                        {
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_103_103;
#line 171 "error_util.m"
                          MR_Word parse_tree__error_util__TypeInfo_104_104;
#line 171 "error_util.m"
                          MR_Box parse_tree__error_util__V_97_97 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2));

#line 10435 "parse_tree.error_util.c"
                          {
#line 10437 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__V_126_126, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_103_103);
                          }
#line 10440 "parse_tree.error_util.c"
                          {
#line 10442 "parse_tree.error_util.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_101, (MR_Integer) 1, &parse_tree__error_util__TypeInfo_104_104);
                          }
#line 171 "error_util.m"
                          {
#line 171 "error_util.m"
                            mercury__private_builtin__typed_compare_3_p_0(parse_tree__error_util__TypeInfo_103_103, parse_tree__error_util__TypeInfo_104_104, parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__V_125_125, parse_tree__error_util__V_97_97);
#line 171 "error_util.m"
                            return;
                          }
#line 171 "error_util.m"
                        }
#line 171 "error_util.m"
                        break;
#line 171 "error_util.m"
                    }
#line 171 "error_util.m"
                    break;
#line 171 "error_util.m"
                }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
              break;
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
      }
#line 171 "error_util.m"
  }
#line 171 "error_util.m"
}

#line 171 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_component_0_0(
#line 171 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 171 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 171 "error_util.m"
{
#line 171 "error_util.m"
  {
#line 171 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 171 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_21 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 171 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_22 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 171 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_21 == parse_tree__error_util__CastY_22);
#line 171 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 171 "error_util.m"
    else
#line 171 "error_util.m"
#line 171 "error_util.m"
      switch (MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) {
#line 171 "error_util.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
        case (MR_Integer) 0:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_28_28;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_4_4;

#line 171 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 171 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 10527 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_28_28 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 171 "error_util.m"
                {
#line 171 "error_util.m"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_28_28, ((MR_Box) (parse_tree__error_util__V_3_3)), ((MR_Box) (parse_tree__error_util__V_4_4)));
                }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 1:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_29_29;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_9_9;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_10_10;

#line 171 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 171 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                parse_tree__error_util__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 171 "error_util.m"
                parse_tree__error_util__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 171 "error_util.m"
                parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_5_5 == parse_tree__error_util__V_8_8);
#line 171 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_6_6 == parse_tree__error_util__V_9_9);
#line 171 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                      {
#line 10583 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_29_29 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 171 "error_util.m"
                        {
#line 171 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_29_29, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_10_10)));
                        }
#line 171 "error_util.m"
                      }
#line 171 "error_util.m"
                  }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 2:
#line 171 "error_util.m"
          {
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__TypeInfo_32_32;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;
#line 171 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14;

#line 171 "error_util.m"
            parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 171 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "error_util.m"
                parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_11_11 == parse_tree__error_util__V_13_13);
#line 171 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                  {
#line 10631 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_32_32 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 171 "error_util.m"
                    {
#line 171 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_32_32, ((MR_Box) (parse_tree__error_util__V_12_12)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                    }
#line 171 "error_util.m"
                  }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
        case (MR_Integer) 3:
#line 171 "error_util.m"
#line 171 "error_util.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)))) {
#line 171 "error_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 171 "error_util.m"
            case (MR_Integer) 0:
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_30_30;
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_31_31;
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_17_17;
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__V_18_18;

#line 171 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 171 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    parse_tree__error_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
                    parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 10680 "parse_tree.error_util.c"
                    parse_tree__error_util__TypeInfo_30_30 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 171 "error_util.m"
                    {
#line 171 "error_util.m"
                      parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_30_30, ((MR_Box) (parse_tree__error_util__V_15_15)), ((MR_Box) (parse_tree__error_util__V_17_17)));
                    }
#line 171 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                      {
#line 10691 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_31_31 = (MR_Word) &parse_tree__error_util_scalar_common_1[0];
#line 171 "error_util.m"
                        {
#line 171 "error_util.m"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_31_31, ((MR_Box) (parse_tree__error_util__V_16_16)), ((MR_Box) (parse_tree__error_util__V_18_18)));
                        }
#line 171 "error_util.m"
                      }
#line 171 "error_util.m"
                  }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
              break;
#line 171 "error_util.m"
            case (MR_Integer) 1:
#line 171 "error_util.m"
              {
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_24;
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_26_26;
#line 171 "error_util.m"
                MR_Word parse_tree__error_util__TypeInfo_27_27;
#line 171 "error_util.m"
                MR_Box parse_tree__error_util__V_19_19 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2));
#line 171 "error_util.m"
                MR_Box parse_tree__error_util__V_20_20;
#line 171 "error_util.m"
                MR_Integer parse_tree__error_util__PolyConst1_25;

#line 171 "error_util.m"
                parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 171 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 171 "error_util.m"
                  {
#line 171 "error_util.m"
                    parse_tree__error_util__TypeClassInfo_for_print_anything_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "error_util.m"
                    parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2));
#line 10735 "parse_tree.error_util.c"
                    parse_tree__error_util__PolyConst1_25 = (MR_Integer) 1;
#line 10737 "parse_tree.error_util.c"
                    {
#line 10739 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_23, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_26_26);
                    }
#line 10742 "parse_tree.error_util.c"
                    {
#line 10744 "parse_tree.error_util.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(parse_tree__error_util__TypeClassInfo_for_print_anything_24, parse_tree__error_util__PolyConst1_25, &parse_tree__error_util__TypeInfo_27_27);
                    }
#line 171 "error_util.m"
                    {
#line 171 "error_util.m"
                      return parse_tree__error_util__succeeded = mercury__private_builtin__typed_unify_2_p_0(parse_tree__error_util__TypeInfo_26_26, parse_tree__error_util__TypeInfo_27_27, parse_tree__error_util__V_19_19, parse_tree__error_util__V_20_20);
                    }
#line 171 "error_util.m"
                  }
#line 171 "error_util.m"
              }
#line 171 "error_util.m"
              break;
#line 171 "error_util.m"
          }
#line 171 "error_util.m"
          break;
#line 171 "error_util.m"
      }
#line 171 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 171 "error_util.m"
  }
#line 171 "error_util.m"
}

#line 153 "error_util.m"
void MR_CALL 
parse_tree__error_util____Compare____error_msg_0_0(
#line 153 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 153 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 153 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 153 "error_util.m"
{
#line 153 "error_util.m"
  {
#line 153 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 153 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_32 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 153 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_33 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 153 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_32 == parse_tree__error_util__CastY_33);
#line 153 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 10795 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "error_util.m"
    else
#line 153 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 153 "error_util.m"
      {
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "error_util.m"
        MR_Integer parse_tree__error_util__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 153 "error_util.m"
          {
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "error_util.m"
            MR_Integer parse_tree__error_util__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 2)));
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 3)));
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_29_29;

#line 153 "error_util.m"
            {
#line 153 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__V_29_29, ((MR_Box) (parse_tree__error_util__V_43_43)), ((MR_Box) (parse_tree__error_util__V_25_25)));
            }
#line 10832 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_29_29 == (MR_Integer) 0);
#line 153 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 153 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_29_29;
#line 153 "error_util.m"
            else
#line 153 "error_util.m"
              {
#line 153 "error_util.m"
                MR_Word parse_tree__error_util__V_30_30;
#line 153 "error_util.m"
                MR_Integer parse_tree__error_util__V_46_46 = (MR_Integer) parse_tree__error_util__V_42_42;
#line 153 "error_util.m"
                MR_Integer parse_tree__error_util__V_47_47 = (MR_Integer) parse_tree__error_util__V_26_26;

#line 153 "error_util.m"
                {
#line 153 "error_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_30_30, parse_tree__error_util__V_46_46, parse_tree__error_util__V_47_47);
                }
#line 10856 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_30_30 == (MR_Integer) 0);
#line 153 "error_util.m"
                parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 153 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
                  *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_30_30;
#line 153 "error_util.m"
                else
#line 153 "error_util.m"
                  {
#line 153 "error_util.m"
                    MR_Word parse_tree__error_util__V_31_31;

#line 153 "error_util.m"
                    {
#line 153 "error_util.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_31_31, parse_tree__error_util__V_41_41, parse_tree__error_util__V_27_27);
                    }
#line 10876 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_31_31 == (MR_Integer) 0);
#line 153 "error_util.m"
                    parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 153 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
                      *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_31_31;
#line 153 "error_util.m"
                    else
#line 153 "error_util.m"
                      {
#line 153 "error_util.m"
                        {
#line 153 "error_util.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_40_40)), ((MR_Box) (parse_tree__error_util__V_28_28)));
#line 153 "error_util.m"
                          return;
                        }
#line 153 "error_util.m"
                      }
#line 153 "error_util.m"
                  }
#line 153 "error_util.m"
              }
#line 153 "error_util.m"
          }
#line 153 "error_util.m"
        else
#line 10905 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "error_util.m"
      }
#line 153 "error_util.m"
    else
#line 153 "error_util.m"
      {
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "error_util.m"
        if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 10920 "parse_tree.error_util.c"
          *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "error_util.m"
        else
#line 153 "error_util.m"
          {
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 153 "error_util.m"
            {
#line 153 "error_util.m"
              mercury__term____Compare____context_0_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_45_45, parse_tree__error_util__V_6_6);
            }
#line 10938 "parse_tree.error_util.c"
            parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 153 "error_util.m"
            parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 153 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
              *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 153 "error_util.m"
            else
#line 153 "error_util.m"
              {
#line 153 "error_util.m"
                {
#line 153 "error_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[7], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_44_44)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 153 "error_util.m"
                  return;
                }
#line 153 "error_util.m"
              }
#line 153 "error_util.m"
          }
#line 153 "error_util.m"
      }
#line 153 "error_util.m"
  }
#line 153 "error_util.m"
}

#line 153 "error_util.m"
MR_bool MR_CALL 
parse_tree__error_util____Unify____error_msg_0_0(
#line 153 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 153 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 153 "error_util.m"
{
#line 153 "error_util.m"
  {
#line 153 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 153 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_15 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 153 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_16 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 153 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_15 == parse_tree__error_util__CastY_16);
#line 153 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 153 "error_util.m"
    else
#line 153 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 153 "error_util.m"
      {
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_17_17;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_18_18;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "error_util.m"
        MR_Integer parse_tree__error_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_12_12;
#line 153 "error_util.m"
        MR_Integer parse_tree__error_util__V_13_13;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_14_14;

#line 153 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
          {
#line 153 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "error_util.m"
            parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "error_util.m"
            parse_tree__error_util__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "error_util.m"
            parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 3)));
#line 11033 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_17_17 = (MR_Word) &parse_tree__error_util_scalar_common_1[3];
#line 11035 "parse_tree.error_util.c"
            {
#line 11037 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_17_17, ((MR_Box) (parse_tree__error_util__V_7_7)), ((MR_Box) (parse_tree__error_util__V_11_11)));
            }
#line 153 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
              {
#line 11044 "parse_tree.error_util.c"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == parse_tree__error_util__V_12_12);
#line 153 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
                  {
#line 11050 "parse_tree.error_util.c"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__V_9_9 == parse_tree__error_util__V_13_13);
#line 153 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
                      {
#line 11056 "parse_tree.error_util.c"
                        parse_tree__error_util__TypeInfo_18_18 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11058 "parse_tree.error_util.c"
                        {
#line 11060 "parse_tree.error_util.c"
                          return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_18_18, ((MR_Box) (parse_tree__error_util__V_10_10)), ((MR_Box) (parse_tree__error_util__V_14_14)));
                        }
#line 153 "error_util.m"
                      }
#line 153 "error_util.m"
                  }
#line 153 "error_util.m"
              }
#line 153 "error_util.m"
          }
#line 153 "error_util.m"
      }
#line 153 "error_util.m"
    else
#line 153 "error_util.m"
      {
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_20_20;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5;
#line 153 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 153 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 153 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
          {
#line 153 "error_util.m"
            parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "error_util.m"
            parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 11098 "parse_tree.error_util.c"
            {
#line 11100 "parse_tree.error_util.c"
              parse_tree__error_util__succeeded = mercury__term____Unify____context_0_0(parse_tree__error_util__V_3_3, parse_tree__error_util__V_5_5);
            }
#line 153 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 153 "error_util.m"
              {
#line 11107 "parse_tree.error_util.c"
                parse_tree__error_util__TypeInfo_20_20 = (MR_Word) &parse_tree__error_util_scalar_common_1[7];
#line 11109 "parse_tree.error_util.c"
                {
#line 11111 "parse_tree.error_util.c"
                  return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_20_20, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
                }
#line 153 "error_util.m"
              }
#line 153 "error_util.m"
          }
#line 153 "error_util.m"
      }
#line 153 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 153 "error_util.m"
  }
#line 153 "error_util.m"
}

#line 1707 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____error_line_0_0(
#line 1707 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 1707 "error_util.m"
{
#line 1707 "error_util.m"
  {
#line 1707 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1707 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_9 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;
#line 1707 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_10 = (MR_Integer) parse_tree__error_util__HeadVar__3_3;

#line 1707 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_9 == parse_tree__error_util__CastY_10);
#line 1707 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 11151 "parse_tree.error_util.c"
      *parse_tree__error_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1707 "error_util.m"
    else
#line 1707 "error_util.m"
      {
#line 1707 "error_util.m"
        MR_Integer parse_tree__error_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1707 "error_util.m"
        MR_Integer parse_tree__error_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1707 "error_util.m"
        {
#line 1707 "error_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__error_util__V_8_8, parse_tree__error_util__V_4_4, parse_tree__error_util__V_6_6);
        }
#line 11173 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_8_8 == (MR_Integer) 0);
#line 1707 "error_util.m"
        parse_tree__error_util__succeeded = !(parse_tree__error_util__succeeded);
#line 1707 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1707 "error_util.m"
          *parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__V_8_8;
#line 1707 "error_util.m"
        else
#line 1707 "error_util.m"
          {
#line 1707 "error_util.m"
            {
#line 1707 "error_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[6], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__V_5_5)), ((MR_Box) (parse_tree__error_util__V_7_7)));
#line 1707 "error_util.m"
              return;
            }
#line 1707 "error_util.m"
          }
#line 1707 "error_util.m"
      }
#line 1707 "error_util.m"
  }
#line 1707 "error_util.m"
}

#line 1707 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____error_line_0_0(
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1707 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1707 "error_util.m"
{
#line 1707 "error_util.m"
  {
#line 1707 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1707 "error_util.m"
    MR_Integer parse_tree__error_util__CastX_7 = (MR_Integer) parse_tree__error_util__HeadVar__1_1;
#line 1707 "error_util.m"
    MR_Integer parse_tree__error_util__CastY_8 = (MR_Integer) parse_tree__error_util__HeadVar__2_2;

#line 1707 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__CastX_7 == parse_tree__error_util__CastY_8);
#line 1707 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1707 "error_util.m"
      parse_tree__error_util__succeeded = MR_TRUE;
#line 1707 "error_util.m"
    else
#line 1707 "error_util.m"
      {
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__TypeInfo_9_9;
#line 1707 "error_util.m"
        MR_Integer parse_tree__error_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1707 "error_util.m"
        MR_Integer parse_tree__error_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1707 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));

#line 11240 "parse_tree.error_util.c"
        parse_tree__error_util__succeeded = (parse_tree__error_util__V_3_3 == parse_tree__error_util__V_5_5);
#line 1707 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1707 "error_util.m"
          {
#line 11246 "parse_tree.error_util.c"
            parse_tree__error_util__TypeInfo_9_9 = (MR_Word) &parse_tree__error_util_scalar_common_1[6];
#line 11248 "parse_tree.error_util.c"
            {
#line 11250 "parse_tree.error_util.c"
              return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0(parse_tree__error_util__TypeInfo_9_9, ((MR_Box) (parse_tree__error_util__V_4_4)), ((MR_Box) (parse_tree__error_util__V_6_6)));
            }
#line 1707 "error_util.m"
          }
#line 1707 "error_util.m"
      }
#line 1707 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 1707 "error_util.m"
  }
#line 1707 "error_util.m"
}

#line 939 "error_util.m"
static void MR_CALL 
parse_tree__error_util____Compare____already_printed_verbose_0_0(
#line 939 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__1_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3)
#line 939 "error_util.m"
{
#line 939 "error_util.m"
  {
#line 939 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 939 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_4 = parse_tree__error_util__HeadVar__2_2;
#line 939 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_5 = parse_tree__error_util__HeadVar__3_3;

#line 939 "error_util.m"
    {
#line 939 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], parse_tree__error_util__HeadVar__1_1, ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_5)));
#line 939 "error_util.m"
      return;
    }
#line 939 "error_util.m"
  }
#line 939 "error_util.m"
}

#line 939 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util____Unify____already_printed_verbose_0_0(
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 939 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 939 "error_util.m"
{
#line 939 "error_util.m"
  {
#line 939 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 939 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar1_3 = parse_tree__error_util__HeadVar__1_1;
#line 939 "error_util.m"
    MR_Word parse_tree__error_util__Cast_HeadVar2_4 = parse_tree__error_util__HeadVar__2_2;

#line 939 "error_util.m"
    {
#line 939 "error_util.m"
      return parse_tree__error_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[1], ((MR_Box) (parse_tree__error_util__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__error_util__Cast_HeadVar2_4)));
    }
#line 939 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 939 "error_util.m"
  }
#line 939 "error_util.m"
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
#line 11367 "parse_tree.error_util.c"
  {
#line 11369 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__HeadVar__2_1 == parse_tree__error_util__HeadVar__2_2);

#line 11372 "parse_tree.error_util.c"
    return parse_tree__error_util__succeeded;
#line 11374 "parse_tree.error_util.c"
  }
#line 99 "error_util.m"
}

#line 1797 "error_util.m"
static void MR_CALL 
parse_tree__error_util__get_later_words_6_p_0(
#line 1797 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1797 "error_util.m"
  MR_Integer parse_tree__error_util__OldLen_2,
#line 1797 "error_util.m"
  MR_Integer parse_tree__error_util__Avail_3,
#line 1797 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__4_4,
#line 1797 "error_util.m"
  MR_Word * parse_tree__error_util__Line_5,
#line 1797 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__6_6)
#line 1797 "error_util.m"
{
#line 1800 "error_util.m"
  while (MR_TRUE)
#line 1800 "error_util.m"
    {
#line 1800 "error_util.m"
      /* tailcall optimized into a loop */
#line 1800 "error_util.m"
      {
#line 1800 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1800 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1800 "error_util.m"
          {
#line 1800 "error_util.m"
            *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1800 "error_util.m"
            *parse_tree__error_util__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1800 "error_util.m"
          }
#line 1800 "error_util.m"
        else
#line 1801 "error_util.m"
          {
#line 1801 "error_util.m"
            MR_String parse_tree__error_util__Word_10 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1801 "error_util.m"
            MR_Word parse_tree__error_util__Words_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1801 "error_util.m"
            MR_Integer parse_tree__error_util__WordLen_17;
#line 1801 "error_util.m"
            MR_Integer parse_tree__error_util__NewLen_18;
#line 1801 "error_util.m"
            MR_Integer parse_tree__error_util__V_20_20;

#line 1802 "error_util.m"
            {
#line 1802 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__Word_10, &parse_tree__error_util__WordLen_17);
            }
#line 1803 "error_util.m"
            parse_tree__error_util__V_20_20 = (parse_tree__error_util__OldLen_2 + (MR_Integer) 1);
#line 1803 "error_util.m"
            parse_tree__error_util__NewLen_18 = (parse_tree__error_util__V_20_20 + parse_tree__error_util__WordLen_17);
#line 1804 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__NewLen_18 <= parse_tree__error_util__Avail_3);
#line 1807 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1805 "error_util.m"
              {
#line 1805 "error_util.m"
                MR_Word parse_tree__error_util__Line1_19;
#line 1805 "error_util.m"
                MR_Word parse_tree__error_util__V_22_22;

#line 1805 "error_util.m"
                {
#line 1805 "error_util.m"
                  parse_tree__error_util__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (parse_tree__error_util__Word_10));
#line 1805 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1805 "error_util.m"
                }
#line 1805 "error_util.m"
                {
#line 1805 "error_util.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__error_util__HeadVar__4_4, parse_tree__error_util__V_22_22, &parse_tree__error_util__Line1_19);
                }
#line 1806 "error_util.m"
                /* direct tailcall eliminated */
#line 1806 "error_util.m"
                {
#line 1806 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_11;
#line 1806 "error_util.m"
                  MR_Integer parse_tree__error_util__OldLen__tmp_copy_2 = parse_tree__error_util__NewLen_18;
#line 1806 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__4__tmp_copy_4 = parse_tree__error_util__Line1_19;

#line 1806 "error_util.m"
                  parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__4__tmp_copy_4;
#line 1806 "error_util.m"
                  parse_tree__error_util__OldLen_2 = parse_tree__error_util__OldLen__tmp_copy_2;
#line 1806 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1806 "error_util.m"
                }
#line 1806 "error_util.m"
                continue;
#line 1805 "error_util.m"
              }
#line 1807 "error_util.m"
            else
#line 1808 "error_util.m"
              {
#line 1808 "error_util.m"
                *parse_tree__error_util__Line_5 = parse_tree__error_util__HeadVar__4_4;
#line 1809 "error_util.m"
                *parse_tree__error_util__HeadVar__6_6 = parse_tree__error_util__HeadVar__1_1;
#line 1808 "error_util.m"
              }
#line 1801 "error_util.m"
          }
#line 1800 "error_util.m"
      }
#line 1800 "error_util.m"
      break;
#line 1800 "error_util.m"
    }
#line 1797 "error_util.m"
}

#line 1772 "error_util.m"
static void MR_CALL 
parse_tree__error_util__group_nonfirst_line_words_4_p_0(
#line 1772 "error_util.m"
  MR_Word parse_tree__error_util__Words_5,
#line 1772 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_6,
#line 1772 "error_util.m"
  MR_Integer parse_tree__error_util__Max_7,
#line 1772 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_8)
#line 1772 "error_util.m"
{
#line 1777 "error_util.m"
  {
#line 1777 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1777 "error_util.m"
    if ((parse_tree__error_util__Words_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1778 "error_util.m"
      *parse_tree__error_util__Lines_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1777 "error_util.m"
    else
#line 1780 "error_util.m"
      {
#line 1780 "error_util.m"
        MR_String parse_tree__error_util__FirstWord_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 0)));
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__LaterWords_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_5, (MR_Integer) 1)));
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__LineWords_11;
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__RestWords_12;
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__Line_13;
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__RestLines_14;
#line 1780 "error_util.m"
        MR_Integer parse_tree__error_util__FirstWordLen_21;
#line 1780 "error_util.m"
        MR_Integer parse_tree__error_util__Avail_22;
#line 1780 "error_util.m"
        MR_Integer parse_tree__error_util__V_23_23;
#line 1780 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25;

#line 1792 "error_util.m"
        {
#line 1792 "error_util.m"
          mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_9, &parse_tree__error_util__FirstWordLen_21);
        }
#line 1793 "error_util.m"
        parse_tree__error_util__V_23_23 = (parse_tree__error_util__Indent_6 * (MR_Integer) 2);
#line 1793 "error_util.m"
        parse_tree__error_util__Avail_22 = (parse_tree__error_util__Max_7 - parse_tree__error_util__V_23_23);
#line 1794 "error_util.m"
        {
#line 1794 "error_util.m"
          parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_9));
#line 1794 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1794 "error_util.m"
        }
#line 1794 "error_util.m"
        {
#line 1794 "error_util.m"
          parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_10, parse_tree__error_util__FirstWordLen_21, parse_tree__error_util__Avail_22, parse_tree__error_util__V_25_25, &parse_tree__error_util__LineWords_11, &parse_tree__error_util__RestWords_12);
        }
#line 1783 "error_util.m"
        {
#line 1783 "error_util.m"
          parse_tree__error_util__Line_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1783 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 0) = ((MR_Box) (parse_tree__error_util__Indent_6));
#line 1783 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_13, 1) = ((MR_Box) (parse_tree__error_util__LineWords_11));
#line 1783 "error_util.m"
        }
#line 1784 "error_util.m"
        {
#line 1784 "error_util.m"
          parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_12, parse_tree__error_util__Indent_6, parse_tree__error_util__Max_7, &parse_tree__error_util__RestLines_14);
        }
#line 1785 "error_util.m"
        {
#line 1785 "error_util.m"
          MR_Word base;
#line 1785 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1785 "error_util.m"
          *parse_tree__error_util__Lines_8 = base;
#line 1785 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__Line_13));
#line 1785 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__RestLines_14));
#line 1785 "error_util.m"
        }
#line 1780 "error_util.m"
      }
#line 1777 "error_util.m"
  }
#line 1772 "error_util.m"
}

#line 1724 "error_util.m"
static void MR_CALL 
parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_6,
#line 1724 "error_util.m"
  MR_Integer parse_tree__error_util__CurIndent_7,
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__Paras_8,
#line 1724 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMax_9,
#line 1724 "error_util.m"
  MR_Word * parse_tree__error_util__Lines_10)
#line 1724 "error_util.m"
{
#line 1730 "error_util.m"
  {
#line 1730 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1730 "error_util.m"
    if ((parse_tree__error_util__Paras_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1731 "error_util.m"
      *parse_tree__error_util__Lines_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1730 "error_util.m"
    else
#line 1733 "error_util.m"
      {
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_35_35;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__FirstPara_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 0)));
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__LaterParas_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Paras_8, (MR_Integer) 1)));
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaWords_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 0)));
#line 1733 "error_util.m"
        MR_Integer parse_tree__error_util__NumBlankLines_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 1)));
#line 1733 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndentDelta_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__FirstPara_11, (MR_Integer) 2)));
#line 1733 "error_util.m"
        MR_Integer parse_tree__error_util__RestIndent_16;
#line 1733 "error_util.m"
        MR_Integer parse_tree__error_util__NextIndent_17;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__BlankLine_18;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaBlankLines_19;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__NextTreatAsFirst_20;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__FirstParaLines_21;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__LaterParaLines_29;
#line 1733 "error_util.m"
        MR_Word parse_tree__error_util__V_34_34;

#line 1738 "error_util.m"
#line 1738 "error_util.m"
        switch (parse_tree__error_util__TreatAsFirst_6) {
#line 1738 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1738 "error_util.m"
          case (MR_Integer) 1:
#line 1740 "error_util.m"
            parse_tree__error_util__RestIndent_16 = parse_tree__error_util__CurIndent_7;
#line 1738 "error_util.m"
            break;
#line 1738 "error_util.m"
          case (MR_Integer) 0:
#line 1736 "error_util.m"
            {
#line 1737 "error_util.m"
              parse_tree__error_util__RestIndent_16 = (parse_tree__error_util__CurIndent_7 + (MR_Integer) 1);
#line 1736 "error_util.m"
            }
#line 1738 "error_util.m"
            break;
#line 1738 "error_util.m"
        }
#line 1742 "error_util.m"
        parse_tree__error_util__NextIndent_17 = (parse_tree__error_util__RestIndent_16 + parse_tree__error_util__FirstIndentDelta_15);
#line 1744 "error_util.m"
        {
#line 1744 "error_util.m"
          parse_tree__error_util__BlankLine_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1744 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1744 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__BlankLine_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1744 "error_util.m"
        }
#line 11710 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_line_0;
#line 1745 "error_util.m"
        {
#line 1745 "error_util.m"
          mercury__list__duplicate_3_p_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__NumBlankLines_14, ((MR_Box) (parse_tree__error_util__BlankLine_18)), &parse_tree__error_util__FirstParaBlankLines_19);
        }
#line 1750 "error_util.m"
        if ((parse_tree__error_util__FirstParaWords_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1747 "error_util.m"
          {
#line 1748 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = parse_tree__error_util__TreatAsFirst_6;
#line 1749 "error_util.m"
            parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1747 "error_util.m"
          }
#line 1750 "error_util.m"
        else
#line 1751 "error_util.m"
          {
#line 1751 "error_util.m"
            MR_String parse_tree__error_util__FirstWord_22 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 0)));
#line 1751 "error_util.m"
            MR_Word parse_tree__error_util__LaterWords_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaWords_13, (MR_Integer) 1)));

#line 1752 "error_util.m"
            parse_tree__error_util__NextTreatAsFirst_20 = (MR_Integer) 1;
#line 1762 "error_util.m"
            if ((parse_tree__error_util__MaybeMax_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1763 "error_util.m"
              {
#line 1763 "error_util.m"
                MR_Word parse_tree__error_util__V_32_32;

#line 1764 "error_util.m"
                {
#line 1764 "error_util.m"
                  parse_tree__error_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1764 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1764 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__V_32_32, 1) = ((MR_Box) (parse_tree__error_util__FirstParaWords_13));
#line 1764 "error_util.m"
                }
#line 1764 "error_util.m"
                {
#line 1764 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1764 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1764 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1764 "error_util.m"
                }
#line 1763 "error_util.m"
              }
#line 1762 "error_util.m"
            else
#line 1754 "error_util.m"
              {
#line 1754 "error_util.m"
                MR_Integer parse_tree__error_util__Max_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_9, (MR_Integer) 0)));
#line 1754 "error_util.m"
                MR_Word parse_tree__error_util__LineWords_25;
#line 1754 "error_util.m"
                MR_Word parse_tree__error_util__RestWords_26;
#line 1754 "error_util.m"
                MR_Word parse_tree__error_util__CurLine_27;
#line 1754 "error_util.m"
                MR_Word parse_tree__error_util__FirstParaRestLines_28;
#line 1754 "error_util.m"
                MR_Integer parse_tree__error_util__FirstWordLen_42;
#line 1754 "error_util.m"
                MR_Integer parse_tree__error_util__Avail_43;
#line 1754 "error_util.m"
                MR_Integer parse_tree__error_util__V_44_44;
#line 1754 "error_util.m"
                MR_Word parse_tree__error_util__V_46_46;

#line 1792 "error_util.m"
                {
#line 1792 "error_util.m"
                  mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FirstWord_22, &parse_tree__error_util__FirstWordLen_42);
                }
#line 1793 "error_util.m"
                parse_tree__error_util__V_44_44 = (parse_tree__error_util__CurIndent_7 * (MR_Integer) 2);
#line 1793 "error_util.m"
                parse_tree__error_util__Avail_43 = (parse_tree__error_util__Max_24 - parse_tree__error_util__V_44_44);
#line 1794 "error_util.m"
                {
#line 1794 "error_util.m"
                  parse_tree__error_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1794 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 0) = ((MR_Box) (parse_tree__error_util__FirstWord_22));
#line 1794 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1794 "error_util.m"
                }
#line 1794 "error_util.m"
                {
#line 1794 "error_util.m"
                  parse_tree__error_util__get_later_words_6_p_0(parse_tree__error_util__LaterWords_23, parse_tree__error_util__FirstWordLen_42, parse_tree__error_util__Avail_43, parse_tree__error_util__V_46_46, &parse_tree__error_util__LineWords_25, &parse_tree__error_util__RestWords_26);
                }
#line 1757 "error_util.m"
                {
#line 1757 "error_util.m"
                  parse_tree__error_util__CurLine_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1757 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 0) = ((MR_Box) (parse_tree__error_util__CurIndent_7));
#line 1757 "error_util.m"
                  MR_hl_field(MR_mktag(0), parse_tree__error_util__CurLine_27, 1) = ((MR_Box) (parse_tree__error_util__LineWords_25));
#line 1757 "error_util.m"
                }
#line 1759 "error_util.m"
                {
#line 1759 "error_util.m"
                  parse_tree__error_util__group_nonfirst_line_words_4_p_0(parse_tree__error_util__RestWords_26, parse_tree__error_util__RestIndent_16, parse_tree__error_util__Max_24, &parse_tree__error_util__FirstParaRestLines_28);
                }
#line 1761 "error_util.m"
                {
#line 1761 "error_util.m"
                  parse_tree__error_util__FirstParaLines_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1761 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 0) = ((MR_Box) (parse_tree__error_util__CurLine_27));
#line 1761 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__FirstParaLines_21, 1) = ((MR_Box) (parse_tree__error_util__FirstParaRestLines_28));
#line 1761 "error_util.m"
                }
#line 1754 "error_util.m"
              }
#line 1751 "error_util.m"
          }
#line 1767 "error_util.m"
        {
#line 1767 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__NextTreatAsFirst_20, parse_tree__error_util__NextIndent_17, parse_tree__error_util__LaterParas_12, parse_tree__error_util__MaybeMax_9, &parse_tree__error_util__LaterParaLines_29);
        }
#line 1769 "error_util.m"
        {
#line 1769 "error_util.m"
          parse_tree__error_util__V_34_34 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaBlankLines_19, parse_tree__error_util__LaterParaLines_29);
        }
#line 1769 "error_util.m"
        {
#line 1769 "error_util.m"
          *parse_tree__error_util__Lines_10 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_35_35, parse_tree__error_util__FirstParaLines_21, parse_tree__error_util__V_34_34);
        }
#line 1733 "error_util.m"
      }
#line 1730 "error_util.m"
  }
#line 1724 "error_util.m"
}

#line 1692 "error_util.m"
static void MR_CALL 
parse_tree__error_util__find_word_end_3_p_0(
#line 1692 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1692 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1692 "error_util.m"
  MR_Integer * parse_tree__error_util__WordEnd_6)
#line 1692 "error_util.m"
{
#line 1701 "error_util.m"
  while (MR_TRUE)
#line 1701 "error_util.m"
    {
#line 1701 "error_util.m"
      /* tailcall optimized into a loop */
#line 1701 "error_util.m"
      {
#line 1701 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1701 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1701 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1695 "error_util.m"
        {
#line 1695 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1701 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1698 "error_util.m"
          {
#line 1696 "error_util.m"
            {
#line 1696 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1698 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1697 "error_util.m"
              *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1698 "error_util.m"
            else
#line 1699 "error_util.m"
              {
#line 1699 "error_util.m"
                /* direct tailcall eliminated */
#line 1699 "error_util.m"
                {
#line 1699 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1699 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1699 "error_util.m"
                }
#line 1699 "error_util.m"
                continue;
#line 1699 "error_util.m"
              }
#line 1698 "error_util.m"
          }
#line 1701 "error_util.m"
        else
#line 1702 "error_util.m"
          *parse_tree__error_util__WordEnd_6 = parse_tree__error_util__Cur_5;
#line 1701 "error_util.m"
      }
#line 1701 "error_util.m"
      break;
#line 1701 "error_util.m"
    }
#line 1692 "error_util.m"
}

#line 1682 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__find_word_start_3_p_0(
#line 1682 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1682 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_5,
#line 1682 "error_util.m"
  MR_Integer * parse_tree__error_util__WordStart_6)
#line 1682 "error_util.m"
{
#line 1684 "error_util.m"
  while (MR_TRUE)
#line 1684 "error_util.m"
    {
#line 1684 "error_util.m"
      /* tailcall optimized into a loop */
#line 1684 "error_util.m"
      {
#line 1684 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1684 "error_util.m"
        MR_Integer parse_tree__error_util__Next_7;
#line 1684 "error_util.m"
        MR_Char parse_tree__error_util__Char_8;

#line 1685 "error_util.m"
        {
#line 1685 "error_util.m"
          parse_tree__error_util__succeeded = mercury__string__unsafe_index_next_4_p_0(parse_tree__error_util__String_4, parse_tree__error_util__Cur_5, &parse_tree__error_util__Next_7, &parse_tree__error_util__Char_8);
        }
#line 1684 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1684 "error_util.m"
          {
#line 1686 "error_util.m"
            {
#line 1686 "error_util.m"
              parse_tree__error_util__succeeded = mercury__char__is_whitespace_1_p_0(parse_tree__error_util__Char_8);
            }
#line 1688 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1687 "error_util.m"
              {
#line 1687 "error_util.m"
                /* direct tailcall eliminated */
#line 1687 "error_util.m"
                {
#line 1687 "error_util.m"
                  MR_Integer parse_tree__error_util__Cur__tmp_copy_5 = parse_tree__error_util__Next_7;

#line 1687 "error_util.m"
                  parse_tree__error_util__Cur_5 = parse_tree__error_util__Cur__tmp_copy_5;
#line 1687 "error_util.m"
                }
#line 1687 "error_util.m"
                continue;
#line 1687 "error_util.m"
              }
#line 1688 "error_util.m"
            else
#line 1689 "error_util.m"
              {
#line 1689 "error_util.m"
                *parse_tree__error_util__WordStart_6 = parse_tree__error_util__Cur_5;
#line 1689 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1689 "error_util.m"
              }
#line 1684 "error_util.m"
          }
#line 1684 "error_util.m"
        return parse_tree__error_util__succeeded;
#line 1684 "error_util.m"
      }
#line 1684 "error_util.m"
      break;
#line 1684 "error_util.m"
    }
#line 1682 "error_util.m"
}

#line 1669 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_from_4_p_0(
#line 1669 "error_util.m"
  MR_String parse_tree__error_util__String_5,
#line 1669 "error_util.m"
  MR_Integer parse_tree__error_util__Cur_6,
#line 1669 "error_util.m"
  MR_Word parse_tree__error_util__Words0_7,
#line 1669 "error_util.m"
  MR_Word * parse_tree__error_util__Words_8)
#line 1669 "error_util.m"
{
#line 1678 "error_util.m"
  while (MR_TRUE)
#line 1678 "error_util.m"
    {
#line 1678 "error_util.m"
      /* tailcall optimized into a loop */
#line 1678 "error_util.m"
      {
#line 1678 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1678 "error_util.m"
        MR_Integer parse_tree__error_util__Start_9;

#line 1673 "error_util.m"
        {
#line 1673 "error_util.m"
          parse_tree__error_util__succeeded = parse_tree__error_util__find_word_start_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Cur_6, &parse_tree__error_util__Start_9);
        }
#line 1678 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1674 "error_util.m"
          {
#line 1674 "error_util.m"
            MR_Integer parse_tree__error_util__End_10;
#line 1674 "error_util.m"
            MR_String parse_tree__error_util__WordStr_11;
#line 1674 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12;
#line 1674 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1674 "error_util.m"
            {
#line 1674 "error_util.m"
              parse_tree__error_util__find_word_end_3_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, &parse_tree__error_util__End_10);
            }
#line 1675 "error_util.m"
            {
#line 1675 "error_util.m"
              mercury__string__between_4_p_0(parse_tree__error_util__String_5, parse_tree__error_util__Start_9, parse_tree__error_util__End_10, &parse_tree__error_util__WordStr_11);
            }
#line 1676 "error_util.m"
            {
#line 1676 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1676 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__WordStr_11));
#line 1676 "error_util.m"
            }
#line 1676 "error_util.m"
            {
#line 1676 "error_util.m"
              parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1676 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1676 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__Words0_7));
#line 1676 "error_util.m"
            }
#line 1676 "error_util.m"
            /* direct tailcall eliminated */
#line 1676 "error_util.m"
            {
#line 1676 "error_util.m"
              MR_Integer parse_tree__error_util__Cur__tmp_copy_6 = parse_tree__error_util__End_10;
#line 1676 "error_util.m"
              MR_Word parse_tree__error_util__Words0__tmp_copy_7 = parse_tree__error_util__V_12_12;

#line 1676 "error_util.m"
              parse_tree__error_util__Words0_7 = parse_tree__error_util__Words0__tmp_copy_7;
#line 1676 "error_util.m"
              parse_tree__error_util__Cur_6 = parse_tree__error_util__Cur__tmp_copy_6;
#line 1676 "error_util.m"
            }
#line 1676 "error_util.m"
            continue;
#line 1674 "error_util.m"
          }
#line 1678 "error_util.m"
        else
#line 1679 "error_util.m"
          *parse_tree__error_util__Words_8 = parse_tree__error_util__Words0_7;
#line 1678 "error_util.m"
      }
#line 1678 "error_util.m"
      break;
#line 1678 "error_util.m"
    }
#line 1669 "error_util.m"
}

#line 1664 "error_util.m"
static void MR_CALL 
parse_tree__error_util__break_into_words_3_p_0(
#line 1664 "error_util.m"
  MR_String parse_tree__error_util__String_4,
#line 1664 "error_util.m"
  MR_Word parse_tree__error_util__Words0_5,
#line 1664 "error_util.m"
  MR_Word * parse_tree__error_util__Words_6)
#line 1664 "error_util.m"
{
#line 1666 "error_util.m"
  {
#line 1666 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1667 "error_util.m"
    {
#line 1667 "error_util.m"
      parse_tree__error_util__break_into_words_from_4_p_0(parse_tree__error_util__String_4, (MR_Integer) 0, parse_tree__error_util__Words0_5, parse_tree__error_util__Words_6);
#line 1667 "error_util.m"
      return;
    }
#line 1666 "error_util.m"
  }
#line 1664 "error_util.m"
}

#line 1659 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(
#line 1659 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1659 "error_util.m"
{
#line 1661 "error_util.m"
  {
#line 1661 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1661 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1661 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__V_6_6;
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__V_9_9;
#line 1661 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1662 "error_util.m"
    {
#line 1662 "error_util.m"
      parse_tree__error_util__V_6_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_6_6, (MR_String) "\'");
    }
#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_12_12);
    }
#line 1662 "error_util.m"
    {
#line 1662 "error_util.m"
      parse_tree__error_util__V_9_9 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1662 "error_util.m"
    {
#line 1662 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_9_9);
    }
#line 1662 "error_util.m"
    {
#line 1662 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_5_5, parse_tree__error_util__V_7_7);
    }
#line 1661 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1661 "error_util.m"
  }
#line 1659 "error_util.m"
}

#line 1654 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__sym_name_to_word_1_f_0(
#line 1654 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 1654 "error_util.m"
{
#line 1656 "error_util.m"
  {
#line 1656 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1656 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1656 "error_util.m"
    MR_String parse_tree__error_util__V_4_4;
#line 1656 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1657 "error_util.m"
    {
#line 1657 "error_util.m"
      parse_tree__error_util__V_4_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      parse_tree__error_util__V_7_7 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_4_4, (MR_String) "\'");
    }
#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_7_7);
    }
#line 1656 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1656 "error_util.m"
  }
#line 1654 "error_util.m"
}

#line 1613 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__join_prefixes_1_f_0(
#line 1613 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1613 "error_util.m"
{
#line 1615 "error_util.m"
  {
#line 1615 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1615 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1615 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1615 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1615 "error_util.m"
    else
#line 1616 "error_util.m"
      {
#line 1616 "error_util.m"
        MR_Word parse_tree__error_util__Head_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1616 "error_util.m"
        MR_Word parse_tree__error_util__Tail_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1616 "error_util.m"
        MR_Word parse_tree__error_util__TailStrings_6;

#line 1617 "error_util.m"
        {
#line 1617 "error_util.m"
          parse_tree__error_util__TailStrings_6 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__Tail_4);
        }
#line 1621 "error_util.m"
#line 1621 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Head_3)) {
#line 1621 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1621 "error_util.m"
          case (MR_Integer) 0:
#line 1635 "error_util.m"
            if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1634 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailStrings_6;
#line 1635 "error_util.m"
            else
#line 1636 "error_util.m"
              {
#line 1636 "error_util.m"
                MR_String parse_tree__error_util__FirstTailString_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1636 "error_util.m"
                MR_Word parse_tree__error_util__LaterTailStrings_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1636 "error_util.m"
                MR_String parse_tree__error_util__V_13_13;
#line 1650 "error_util.m"
                MR_Char parse_tree__error_util__First_17;
#line 1650 "error_util.m"
                MR_String parse_tree__error_util__Rest_18;

#line 1645 "error_util.m"
                {
#line 1645 "error_util.m"
                  parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__FirstTailString_11, &parse_tree__error_util__First_17, &parse_tree__error_util__Rest_18);
                }
#line 1645 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1646 "error_util.m"
                  {
#line 1646 "error_util.m"
                    parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_17);
                  }
#line 1650 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1648 "error_util.m"
                  {
#line 1648 "error_util.m"
                    MR_Char parse_tree__error_util__LoweredFirst_19;

#line 1648 "error_util.m"
                    {
#line 1648 "error_util.m"
                      mercury__char__to_lower_2_p_0(parse_tree__error_util__First_17, &parse_tree__error_util__LoweredFirst_19);
                    }
#line 1649 "error_util.m"
                    {
#line 1649 "error_util.m"
                      mercury__string__first_char_3_p_4(&parse_tree__error_util__V_13_13, parse_tree__error_util__LoweredFirst_19, parse_tree__error_util__Rest_18);
                    }
#line 1648 "error_util.m"
                  }
#line 1650 "error_util.m"
                else
#line 1651 "error_util.m"
                  parse_tree__error_util__V_13_13 = parse_tree__error_util__FirstTailString_11;
#line 1637 "error_util.m"
                {
#line 1637 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1637 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1637 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__LaterTailStrings_12));
#line 1637 "error_util.m"
                }
#line 1636 "error_util.m"
              }
#line 1621 "error_util.m"
            break;
#line 1621 "error_util.m"
          case (MR_Integer) 1:
#line 1619 "error_util.m"
            {
#line 1619 "error_util.m"
              MR_String parse_tree__error_util__String_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1620 "error_util.m"
              {
#line 1620 "error_util.m"
                parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1620 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__String_7));
#line 1620 "error_util.m"
                MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1620 "error_util.m"
              }
#line 1619 "error_util.m"
            }
#line 1621 "error_util.m"
            break;
#line 1621 "error_util.m"
          case (MR_Integer) 2:
#line 1622 "error_util.m"
            {
#line 1622 "error_util.m"
              MR_String parse_tree__error_util__Prefix_8 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Head_3, (MR_Integer) 0)));

#line 1626 "error_util.m"
              if ((parse_tree__error_util__TailStrings_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1628 "error_util.m"
                {
#line 1628 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1628 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Prefix_8));
#line 1628 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailStrings_6));
#line 1628 "error_util.m"
                }
#line 1626 "error_util.m"
              else
#line 1624 "error_util.m"
                {
#line 1624 "error_util.m"
                  MR_String parse_tree__error_util__First_9 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 0)));
#line 1624 "error_util.m"
                  MR_Word parse_tree__error_util__Later_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__TailStrings_6, (MR_Integer) 1)));
#line 1624 "error_util.m"
                  MR_String parse_tree__error_util__V_14_14;

#line 1625 "error_util.m"
                  {
#line 1625 "error_util.m"
                    parse_tree__error_util__V_14_14 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_8, parse_tree__error_util__First_9);
                  }
#line 1625 "error_util.m"
                  {
#line 1625 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1625 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1625 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Later_10));
#line 1625 "error_util.m"
                  }
#line 1624 "error_util.m"
                }
#line 1622 "error_util.m"
            }
#line 1621 "error_util.m"
            break;
#line 1621 "error_util.m"
        }
#line 1616 "error_util.m"
      }
#line 1615 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1615 "error_util.m"
  }
#line 1613 "error_util.m"
}

#line 1568 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(
#line 1568 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1568 "error_util.m"
{
#line 1570 "error_util.m"
  while (MR_TRUE)
#line 1570 "error_util.m"
    {
#line 1570 "error_util.m"
      /* tailcall optimized into a loop */
#line 1570 "error_util.m"
      {
#line 1570 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1570 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1570 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1570 "error_util.m"
        else
#line 1571 "error_util.m"
          {
#line 1571 "error_util.m"
            MR_Word parse_tree__error_util__Word_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1571 "error_util.m"
            MR_Word parse_tree__error_util__Words_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1575 "error_util.m"
#line 1575 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Word_3)) {
#line 1575 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1575 "error_util.m"
              case (MR_Integer) 0:
#line 1576 "error_util.m"
                {
#line 1576 "error_util.m"
                  MR_Word parse_tree__error_util__V_32_32;

#line 1577 "error_util.m"
                  {
#line 1577 "error_util.m"
                    parse_tree__error_util__V_32_32 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1577 "error_util.m"
                  {
#line 1577 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1577 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1577 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1577 "error_util.m"
                  }
#line 1576 "error_util.m"
                }
#line 1575 "error_util.m"
                break;
#line 1575 "error_util.m"
              case (MR_Integer) 1:
#line 1573 "error_util.m"
                {
#line 1573 "error_util.m"
                  MR_String parse_tree__error_util__String_6 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1573 "error_util.m"
                  MR_Word parse_tree__error_util__V_33_33;
#line 1573 "error_util.m"
                  MR_Word parse_tree__error_util__V_34_34;

#line 1574 "error_util.m"
                  {
#line 1574 "error_util.m"
                    parse_tree__error_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_33_33, 0) = ((MR_Box) (parse_tree__error_util__String_6));
#line 1574 "error_util.m"
                  }
#line 1574 "error_util.m"
                  {
#line 1574 "error_util.m"
                    parse_tree__error_util__V_34_34 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1574 "error_util.m"
                  {
#line 1574 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1574 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1574 "error_util.m"
                  }
#line 1573 "error_util.m"
                }
#line 1575 "error_util.m"
                break;
#line 1575 "error_util.m"
              case (MR_Integer) 2:
#line 1579 "error_util.m"
                {
#line 1579 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_7 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Word_3, (MR_Integer) 0)));
#line 1579 "error_util.m"
                  MR_Word parse_tree__error_util__V_29_29;
#line 1579 "error_util.m"
                  MR_Word parse_tree__error_util__V_30_30;

#line 1580 "error_util.m"
                  {
#line 1580 "error_util.m"
                    parse_tree__error_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "error_util.m"
                    MR_hl_field(MR_mktag(2), parse_tree__error_util__V_29_29, 0) = ((MR_Box) (parse_tree__error_util__Prefix_7));
#line 1580 "error_util.m"
                  }
#line 1580 "error_util.m"
                  {
#line 1580 "error_util.m"
                    parse_tree__error_util__V_30_30 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__Words_4);
                  }
#line 1580 "error_util.m"
                  {
#line 1580 "error_util.m"
                    parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_29_29));
#line 1580 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_30_30));
#line 1580 "error_util.m"
                  }
#line 1579 "error_util.m"
                }
#line 1575 "error_util.m"
                break;
#line 1575 "error_util.m"
              case (MR_Integer) 3:
#line 1582 "error_util.m"
                {
#line 1582 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_8 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Word_3, (MR_Integer) 0)));

#line 1586 "error_util.m"
                  if ((parse_tree__error_util__Words_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1584 "error_util.m"
                    {
#line 1584 "error_util.m"
                      MR_Word parse_tree__error_util__V_27_27;

#line 1585 "error_util.m"
                      {
#line 1585 "error_util.m"
                        parse_tree__error_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__Suffix_8));
#line 1585 "error_util.m"
                      }
#line 1585 "error_util.m"
                      {
#line 1585 "error_util.m"
                        parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1585 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1585 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1585 "error_util.m"
                      }
#line 1584 "error_util.m"
                    }
#line 1586 "error_util.m"
                  else
#line 1586 "error_util.m"
                    {
#line 1586 "error_util.m"
                      MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 1)));
#line 1586 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Words_4, (MR_Integer) 0)));

#line 1586 "error_util.m"
#line 1586 "error_util.m"
                      switch (MR_tag((MR_Word) parse_tree__error_util__V_45_45)) {
#line 1586 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1586 "error_util.m"
                        case (MR_Integer) 0:
#line 1591 "error_util.m"
                          {
#line 1591 "error_util.m"
                            MR_Word parse_tree__error_util__NewWords_10;
#line 1591 "error_util.m"
                            MR_Word parse_tree__error_util__V_21_21;
#line 1591 "error_util.m"
                            MR_String parse_tree__error_util__V_22_22;
#line 1650 "error_util.m"
                            MR_Char parse_tree__error_util__First_48;
#line 1650 "error_util.m"
                            MR_String parse_tree__error_util__Rest_49;

#line 1645 "error_util.m"
                            {
#line 1645 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__Suffix_8, &parse_tree__error_util__First_48, &parse_tree__error_util__Rest_49);
                            }
#line 1645 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1646 "error_util.m"
                              {
#line 1646 "error_util.m"
                                parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_48);
                              }
#line 1650 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1648 "error_util.m"
                              {
#line 1648 "error_util.m"
                                MR_Char parse_tree__error_util__LoweredFirst_50;

#line 1648 "error_util.m"
                                {
#line 1648 "error_util.m"
                                  mercury__char__to_lower_2_p_0(parse_tree__error_util__First_48, &parse_tree__error_util__LoweredFirst_50);
                                }
#line 1649 "error_util.m"
                                {
#line 1649 "error_util.m"
                                  mercury__string__first_char_3_p_4(&parse_tree__error_util__V_22_22, parse_tree__error_util__LoweredFirst_50, parse_tree__error_util__Rest_49);
                                }
#line 1648 "error_util.m"
                              }
#line 1650 "error_util.m"
                            else
#line 1651 "error_util.m"
                              parse_tree__error_util__V_22_22 = parse_tree__error_util__Suffix_8;
#line 1596 "error_util.m"
                            {
#line 1596 "error_util.m"
                              parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_22_22));
#line 1596 "error_util.m"
                            }
#line 1596 "error_util.m"
                            {
#line 1596 "error_util.m"
                              parse_tree__error_util__NewWords_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1596 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 0) = ((MR_Box) (parse_tree__error_util__V_21_21));
#line 1596 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWords_10, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1596 "error_util.m"
                            }
#line 1597 "error_util.m"
                            /* direct tailcall eliminated */
#line 1597 "error_util.m"
                            {
#line 1597 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__NewWords_10;

#line 1597 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1597 "error_util.m"
                            }
#line 1597 "error_util.m"
                            continue;
#line 1591 "error_util.m"
                          }
#line 1586 "error_util.m"
                          break;
#line 1586 "error_util.m"
                        case (MR_Integer) 1:
#line 1587 "error_util.m"
                          {
#line 1587 "error_util.m"
                            MR_Word parse_tree__error_util__V_24_24;
#line 1587 "error_util.m"
                            MR_String parse_tree__error_util__V_25_25;
#line 1587 "error_util.m"
                            MR_Word parse_tree__error_util__V_26_26;
#line 1587 "error_util.m"
                            MR_String parse_tree__error_util__String_35 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1588 "error_util.m"
                            {
#line 1588 "error_util.m"
                              parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__String_35, parse_tree__error_util__Suffix_8);
                            }
#line 1588 "error_util.m"
                            {
#line 1588 "error_util.m"
                              parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1588 "error_util.m"
                            }
#line 1589 "error_util.m"
                            {
#line 1589 "error_util.m"
                              parse_tree__error_util__V_26_26 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1589 "error_util.m"
                            {
#line 1589 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1589 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_26_26));
#line 1589 "error_util.m"
                            }
#line 1587 "error_util.m"
                          }
#line 1586 "error_util.m"
                          break;
#line 1586 "error_util.m"
                        case (MR_Integer) 2:
#line 1599 "error_util.m"
                          {
#line 1599 "error_util.m"
                            MR_Word parse_tree__error_util__V_17_17;
#line 1599 "error_util.m"
                            MR_String parse_tree__error_util__V_18_18;
#line 1599 "error_util.m"
                            MR_Word parse_tree__error_util__V_19_19;
#line 1599 "error_util.m"
                            MR_String parse_tree__error_util__Prefix_37 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__V_45_45, (MR_Integer) 0)));

#line 1604 "error_util.m"
                            {
#line 1604 "error_util.m"
                              parse_tree__error_util__V_18_18 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_37, parse_tree__error_util__Suffix_8);
                            }
#line 1604 "error_util.m"
                            {
#line 1604 "error_util.m"
                              parse_tree__error_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_17_17, 0) = ((MR_Box) (parse_tree__error_util__V_18_18));
#line 1604 "error_util.m"
                            }
#line 1605 "error_util.m"
                            {
#line 1605 "error_util.m"
                              parse_tree__error_util__V_19_19 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__V_44_44);
                            }
#line 1605 "error_util.m"
                            {
#line 1605 "error_util.m"
                              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1605 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_17_17));
#line 1605 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_19_19));
#line 1605 "error_util.m"
                            }
#line 1599 "error_util.m"
                          }
#line 1586 "error_util.m"
                          break;
#line 1586 "error_util.m"
                        case (MR_Integer) 3:
#line 1607 "error_util.m"
                          {
#line 1607 "error_util.m"
                            MR_String parse_tree__error_util__MoreSuffix_11 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_45_45, (MR_Integer) 0)));
#line 1607 "error_util.m"
                            MR_Word parse_tree__error_util__V_13_13;
#line 1607 "error_util.m"
                            MR_Word parse_tree__error_util__V_14_14;
#line 1607 "error_util.m"
                            MR_String parse_tree__error_util__V_15_15;

#line 1609 "error_util.m"
                            {
#line 1609 "error_util.m"
                              parse_tree__error_util__V_15_15 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__MoreSuffix_11, parse_tree__error_util__Suffix_8);
                            }
#line 1609 "error_util.m"
                            {
#line 1609 "error_util.m"
                              parse_tree__error_util__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "error_util.m"
                              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_14_14, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1609 "error_util.m"
                            }
#line 1609 "error_util.m"
                            {
#line 1609 "error_util.m"
                              parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_14_14));
#line 1609 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (parse_tree__error_util__V_44_44));
#line 1609 "error_util.m"
                            }
#line 1608 "error_util.m"
                            /* direct tailcall eliminated */
#line 1608 "error_util.m"
                            {
#line 1608 "error_util.m"
                              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__V_13_13;

#line 1608 "error_util.m"
                              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1608 "error_util.m"
                            }
#line 1608 "error_util.m"
                            continue;
#line 1607 "error_util.m"
                          }
#line 1586 "error_util.m"
                          break;
#line 1586 "error_util.m"
                      }
#line 1586 "error_util.m"
                    }
#line 1582 "error_util.m"
                }
#line 1575 "error_util.m"
                break;
#line 1575 "error_util.m"
            }
#line 1571 "error_util.m"
          }
#line 1570 "error_util.m"
        return parse_tree__error_util__HeadVar__2_2;
#line 1570 "error_util.m"
      }
#line 1570 "error_util.m"
      break;
#line 1570 "error_util.m"
    }
#line 1568 "error_util.m"
}

#line 1562 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__rev_words_to_strings_1_f_0(
#line 1562 "error_util.m"
  MR_Word parse_tree__error_util__RevWords_3)
#line 1562 "error_util.m"
{
#line 1564 "error_util.m"
  {
#line 1564 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1564 "error_util.m"
    MR_Word parse_tree__error_util__Strings_4;
#line 1564 "error_util.m"
    MR_Word parse_tree__error_util__PorPs_5;
#line 1564 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;

#line 1565 "error_util.m"
    {
#line 1565 "error_util.m"
      parse_tree__error_util__V_6_6 = parse_tree__error_util__rev_words_to_rev_plain_or_prefix_1_f_0(parse_tree__error_util__RevWords_3);
    }
#line 1565 "error_util.m"
    {
#line 1565 "error_util.m"
      parse_tree__error_util__PorPs_5 = mercury__list__reverse_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_plain_or_prefix_0, parse_tree__error_util__V_6_6);
    }
#line 1566 "error_util.m"
    {
#line 1566 "error_util.m"
      return parse_tree__error_util__Strings_4 = parse_tree__error_util__join_prefixes_1_f_0(parse_tree__error_util__PorPs_5);
    }
#line 1564 "error_util.m"
    return parse_tree__error_util__Strings_4;
#line 1564 "error_util.m"
  }
#line 1562 "error_util.m"
}

#line 1456 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0(
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__RevWords0_3,
#line 1456 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0_4,
#line 1456 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Paras_5)
#line 1456 "error_util.m"
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
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "error_util.m"
          {
#line 1460 "error_util.m"
            MR_Word parse_tree__error_util__Strings_9;
#line 1460 "error_util.m"
            MR_Word parse_tree__error_util__V_13_13;

#line 1461 "error_util.m"
            {
#line 1461 "error_util.m"
              parse_tree__error_util__Strings_9 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
            }
#line 1462 "error_util.m"
            {
#line 1462 "error_util.m"
              parse_tree__error_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__Strings_9));
#line 1462 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1462 "error_util.m"
              MR_hl_field(MR_mktag(0), parse_tree__error_util__V_13_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1462 "error_util.m"
            }
#line 1462 "error_util.m"
            {
#line 1462 "error_util.m"
              *parse_tree__error_util__STATE_VARIABLE_Paras_5 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_13_13)));
            }
#line 1460 "error_util.m"
          }
#line 1460 "error_util.m"
        else
#line 1464 "error_util.m"
          {
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__Component_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__Components_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__RevWords1_22;
#line 1464 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1468 "error_util.m"
#line 1468 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_17)) {
#line 1468 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1468 "error_util.m"
              case (MR_Integer) 0:
#line 1468 "error_util.m"
#line 1468 "error_util.m"
                switch (MR_unmkbody(parse_tree__error_util__Component_17)) {
#line 1468 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1468 "error_util.m"
                  case (MR_Integer) 0:
#line 1484 "error_util.m"
                    {
#line 1488 "error_util.m"
#line 1488 "error_util.m"
                      switch (parse_tree__error_util__FirstInMsg_1) {
#line 1488 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1488 "error_util.m"
                        case (MR_Integer) 0:
#line 1487 "error_util.m"
                          parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1488 "error_util.m"
                          break;
#line 1488 "error_util.m"
                        case (MR_Integer) 1:
#line 1489 "error_util.m"
                          {
#line 1490 "error_util.m"
                            {
#line 1490 "error_util.m"
                              parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1490 "error_util.m"
                              MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1490 "error_util.m"
                            }
#line 1489 "error_util.m"
                          }
#line 1488 "error_util.m"
                          break;
#line 1488 "error_util.m"
                      }
#line 1484 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1484 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 1:
#line 1534 "error_util.m"
                    {
#line 1534 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_38;
#line 1534 "error_util.m"
                      MR_Word parse_tree__error_util__V_52_52;

#line 1535 "error_util.m"
                      {
#line 1535 "error_util.m"
                        parse_tree__error_util__Strings_38 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 0) = ((MR_Box) (parse_tree__error_util__Strings_38));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1536 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_52_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1536 "error_util.m"
                      }
#line 1536 "error_util.m"
                      {
#line 1536 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_52_52)));
                      }
#line 1537 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1534 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 2:
#line 1544 "error_util.m"
                    {
#line 1544 "error_util.m"
                      MR_Word parse_tree__error_util__V_45_45;
#line 1544 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_93;

#line 1545 "error_util.m"
                      {
#line 1545 "error_util.m"
                        parse_tree__error_util__Strings_93 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1546 "error_util.m"
                      {
#line 1546 "error_util.m"
                        parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1546 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (parse_tree__error_util__Strings_93));
#line 1546 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1546 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1546 "error_util.m"
                      }
#line 1546 "error_util.m"
                      {
#line 1546 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_45_45)));
                      }
#line 1547 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1544 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                }
#line 1468 "error_util.m"
                break;
#line 1468 "error_util.m"
              case (MR_Integer) 1:
#line 1551 "error_util.m"
                {
#line 1552 "error_util.m"
                  parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1551 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1551 "error_util.m"
                }
#line 1468 "error_util.m"
                break;
#line 1468 "error_util.m"
              case (MR_Integer) 2:
#line 1472 "error_util.m"
                {
#line 1472 "error_util.m"
                  MR_String parse_tree__error_util__Word_23 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_17, (MR_Integer) 0)));
#line 1472 "error_util.m"
                  MR_Word parse_tree__error_util__V_76_76;

#line 1473 "error_util.m"
                  {
#line 1473 "error_util.m"
                    parse_tree__error_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__V_76_76, 0) = ((MR_Box) (parse_tree__error_util__Word_23));
#line 1473 "error_util.m"
                  }
#line 1473 "error_util.m"
                  {
#line 1473 "error_util.m"
                    parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_76_76));
#line 1473 "error_util.m"
                    MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1473 "error_util.m"
                  }
#line 1472 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1472 "error_util.m"
                }
#line 1468 "error_util.m"
                break;
#line 1468 "error_util.m"
              case (MR_Integer) 3:
#line 1468 "error_util.m"
#line 1468 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 0)))) {
#line 1468 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1468 "error_util.m"
                  case (MR_Integer) 0:
#line 1475 "error_util.m"
                    {
#line 1475 "error_util.m"
                      MR_Word parse_tree__error_util__V_74_74;
#line 1475 "error_util.m"
                      MR_String parse_tree__error_util__V_75_75;
#line 1475 "error_util.m"
                      MR_String parse_tree__error_util__Word_81 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1476 "error_util.m"
                      {
#line 1476 "error_util.m"
                        parse_tree__error_util__V_75_75 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Word_81);
                      }
#line 1476 "error_util.m"
                      {
#line 1476 "error_util.m"
                        parse_tree__error_util__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_74_74, 0) = ((MR_Box) (parse_tree__error_util__V_75_75));
#line 1476 "error_util.m"
                      }
#line 1476 "error_util.m"
                      {
#line 1476 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_74_74));
#line 1476 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1476 "error_util.m"
                      }
#line 1475 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1475 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 1:
#line 1478 "error_util.m"
                    {
#line 1478 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1478 "error_util.m"
                      MR_Word parse_tree__error_util__V_72_72;
#line 1478 "error_util.m"
                      MR_String parse_tree__error_util__V_73_73;

#line 1479 "error_util.m"
                      {
#line 1479 "error_util.m"
                        parse_tree__error_util__V_73_73 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_24);
                      }
#line 1479 "error_util.m"
                      {
#line 1479 "error_util.m"
                        parse_tree__error_util__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_72_72, 0) = ((MR_Box) (parse_tree__error_util__V_73_73));
#line 1479 "error_util.m"
                      }
#line 1479 "error_util.m"
                      {
#line 1479 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_72_72));
#line 1479 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1479 "error_util.m"
                      }
#line 1478 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1478 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 2:
#line 1481 "error_util.m"
                    {
#line 1481 "error_util.m"
                      MR_Word parse_tree__error_util__V_70_70;
#line 1481 "error_util.m"
                      MR_String parse_tree__error_util__V_71_71;
#line 1481 "error_util.m"
                      MR_Integer parse_tree__error_util__Int_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1482 "error_util.m"
                      {
#line 1482 "error_util.m"
                        parse_tree__error_util__V_71_71 = parse_tree__error_util__nth_fixed_str_1_f_0(parse_tree__error_util__Int_82);
                      }
#line 1482 "error_util.m"
                      {
#line 1482 "error_util.m"
                        parse_tree__error_util__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_70_70, 0) = ((MR_Box) (parse_tree__error_util__V_71_71));
#line 1482 "error_util.m"
                      }
#line 1482 "error_util.m"
                      {
#line 1482 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_70_70));
#line 1482 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1482 "error_util.m"
                      }
#line 1481 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1481 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 3:
#line 1493 "error_util.m"
                    {
#line 1493 "error_util.m"
                      MR_Word parse_tree__error_util__V_68_68;
#line 1493 "error_util.m"
                      MR_String parse_tree__error_util__Word_83 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1494 "error_util.m"
                      {
#line 1494 "error_util.m"
                        parse_tree__error_util__V_68_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "error_util.m"
                        MR_hl_field(MR_mktag(2), parse_tree__error_util__V_68_68, 0) = ((MR_Box) (parse_tree__error_util__Word_83));
#line 1494 "error_util.m"
                      }
#line 1494 "error_util.m"
                      {
#line 1494 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_68_68));
#line 1494 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1494 "error_util.m"
                      }
#line 1493 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1493 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 4:
#line 1496 "error_util.m"
                    {
#line 1496 "error_util.m"
                      MR_Word parse_tree__error_util__V_67_67;
#line 1496 "error_util.m"
                      MR_String parse_tree__error_util__Word_84 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1497 "error_util.m"
                      {
#line 1497 "error_util.m"
                        parse_tree__error_util__V_67_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "error_util.m"
                        MR_hl_field(MR_mktag(3), parse_tree__error_util__V_67_67, 0) = ((MR_Box) (parse_tree__error_util__Word_84));
#line 1497 "error_util.m"
                      }
#line 1497 "error_util.m"
                      {
#line 1497 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_67_67));
#line 1497 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1497 "error_util.m"
                      }
#line 1496 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1496 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 5:
#line 1466 "error_util.m"
                    {
#line 1466 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1467 "error_util.m"
                      {
#line 1467 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_21, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1466 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1466 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 6:
#line 1469 "error_util.m"
                    {
#line 1469 "error_util.m"
                      MR_String parse_tree__error_util__V_77_77;
#line 1469 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_80 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));

#line 1470 "error_util.m"
                      {
#line 1470 "error_util.m"
                        parse_tree__error_util__V_77_77 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__WordsStr_80);
                      }
#line 1470 "error_util.m"
                      {
#line 1470 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__V_77_77, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1469 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1469 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 7:
#line 1499 "error_util.m"
                    {
#line 1499 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1499 "error_util.m"
                      MR_Word parse_tree__error_util__V_65_65;
#line 1499 "error_util.m"
                      MR_String parse_tree__error_util__V_66_66;

#line 1500 "error_util.m"
                      {
#line 1500 "error_util.m"
                        parse_tree__error_util__V_66_66 = parse_tree__error_util__sym_name_to_word_1_f_0(parse_tree__error_util__SymName_25);
                      }
#line 1500 "error_util.m"
                      {
#line 1500 "error_util.m"
                        parse_tree__error_util__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_65_65, 0) = ((MR_Box) (parse_tree__error_util__V_66_66));
#line 1500 "error_util.m"
                      }
#line 1500 "error_util.m"
                      {
#line 1500 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_65_65));
#line 1500 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1500 "error_util.m"
                      }
#line 1499 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1499 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 8:
#line 1502 "error_util.m"
                    {
#line 1502 "error_util.m"
                      MR_Word parse_tree__error_util__SymNameAndArity_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1502 "error_util.m"
                      MR_Word parse_tree__error_util__V_64_64;
#line 1502 "error_util.m"
                      MR_String parse_tree__error_util__Word_85;

#line 1503 "error_util.m"
                      {
#line 1503 "error_util.m"
                        parse_tree__error_util__Word_85 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymNameAndArity_26);
                      }
#line 1504 "error_util.m"
                      {
#line 1504 "error_util.m"
                        parse_tree__error_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_64_64, 0) = ((MR_Box) (parse_tree__error_util__Word_85));
#line 1504 "error_util.m"
                      }
#line 1504 "error_util.m"
                      {
#line 1504 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_64_64));
#line 1504 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1504 "error_util.m"
                      }
#line 1502 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1502 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 9:
#line 1506 "error_util.m"
                    {
#line 1506 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1506 "error_util.m"
                      MR_Word parse_tree__error_util__ConsId_28;
#line 1506 "error_util.m"
                      MR_Word parse_tree__error_util__V_63_63;
#line 1506 "error_util.m"
                      MR_String parse_tree__error_util__Word_86;

#line 1507 "error_util.m"
                      {
#line 1507 "error_util.m"
                        parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_27, &parse_tree__error_util__ConsId_28);
                      }
#line 1508 "error_util.m"
                      {
#line 1508 "error_util.m"
                        parse_tree__error_util__Word_86 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_28);
                      }
#line 1509 "error_util.m"
                      {
#line 1509 "error_util.m"
                        parse_tree__error_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_63_63, 0) = ((MR_Box) (parse_tree__error_util__Word_86));
#line 1509 "error_util.m"
                      }
#line 1509 "error_util.m"
                      {
#line 1509 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1509 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_63_63));
#line 1509 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1509 "error_util.m"
                      }
#line 1506 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1506 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 10:
#line 1511 "error_util.m"
                    {
#line 1511 "error_util.m"
                      MR_Word parse_tree__error_util__Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1511 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtor_30;
#line 1511 "error_util.m"
                      MR_Word parse_tree__error_util__TypeCtorName_31;
#line 1511 "error_util.m"
                      MR_Integer parse_tree__error_util__TypeCtorArity_32;
#line 1511 "error_util.m"
                      MR_Word parse_tree__error_util__NewWord_33;
#line 1511 "error_util.m"
                      MR_String parse_tree__error_util__V_62_62;
#line 1511 "error_util.m"
                      MR_Word parse_tree__error_util__SymName_87;

#line 1512 "error_util.m"
                      {
#line 1512 "error_util.m"
                        parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_29, &parse_tree__error_util__TypeCtor_30);
                      }
#line 1513 "error_util.m"
                      parse_tree__error_util__TypeCtorName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 0)));
#line 1513 "error_util.m"
                      parse_tree__error_util__TypeCtorArity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_30, (MR_Integer) 1)));
#line 1514 "error_util.m"
                      {
#line 1514 "error_util.m"
                        parse_tree__error_util__SymName_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_31));
#line 1514 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_87, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_32));
#line 1514 "error_util.m"
                      }
#line 1515 "error_util.m"
                      {
#line 1515 "error_util.m"
                        parse_tree__error_util__V_62_62 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_87);
                      }
#line 1515 "error_util.m"
                      {
#line 1515 "error_util.m"
                        parse_tree__error_util__NewWord_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__NewWord_33, 0) = ((MR_Box) (parse_tree__error_util__V_62_62));
#line 1515 "error_util.m"
                      }
#line 1516 "error_util.m"
                      {
#line 1516 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1516 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__NewWord_33));
#line 1516 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1516 "error_util.m"
                      }
#line 1511 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1511 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 11:
#line 1518 "error_util.m"
                    {
#line 1518 "error_util.m"
                      MR_Word parse_tree__error_util__PredOrFunc_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1518 "error_util.m"
                      MR_Word parse_tree__error_util__V_61_61;
#line 1518 "error_util.m"
                      MR_String parse_tree__error_util__Word_88;

#line 1821 "error_util.m"
#line 1821 "error_util.m"
                      switch (parse_tree__error_util__PredOrFunc_34) {
#line 1821 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1821 "error_util.m"
                        case (MR_Integer) 1:
#line 1822 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "function";
#line 1821 "error_util.m"
                          break;
#line 1821 "error_util.m"
                        case (MR_Integer) 0:
#line 1821 "error_util.m"
                          parse_tree__error_util__Word_88 = (MR_String) "predicate";
#line 1821 "error_util.m"
                          break;
#line 1821 "error_util.m"
                      }
#line 1520 "error_util.m"
                      {
#line 1520 "error_util.m"
                        parse_tree__error_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_61_61, 0) = ((MR_Box) (parse_tree__error_util__Word_88));
#line 1520 "error_util.m"
                      }
#line 1520 "error_util.m"
                      {
#line 1520 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_61_61));
#line 1520 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1520 "error_util.m"
                      }
#line 1518 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1518 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 12:
#line 1522 "error_util.m"
                    {
#line 1522 "error_util.m"
                      MR_Word parse_tree__error_util__SimpleCallId_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1522 "error_util.m"
                      MR_String parse_tree__error_util__WordsStr_89;

#line 1523 "error_util.m"
                      {
#line 1523 "error_util.m"
                        parse_tree__error_util__WordsStr_89 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_35);
                      }
#line 1524 "error_util.m"
                      {
#line 1524 "error_util.m"
                        parse_tree__error_util__break_into_words_3_p_0(parse_tree__error_util__WordsStr_89, parse_tree__error_util__RevWords0_3, &parse_tree__error_util__RevWords1_22);
                      }
#line 1522 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1522 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 13:
#line 1526 "error_util.m"
                    {
#line 1526 "error_util.m"
                      MR_String parse_tree__error_util__DeclName_36 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1526 "error_util.m"
                      MR_String parse_tree__error_util__V_58_58;
#line 1526 "error_util.m"
                      MR_Word parse_tree__error_util__V_60_60;
#line 1526 "error_util.m"
                      MR_String parse_tree__error_util__Word_90;

#line 1527 "error_util.m"
                      {
#line 1527 "error_util.m"
                        parse_tree__error_util__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__DeclName_36);
                      }
#line 1527 "error_util.m"
                      {
#line 1527 "error_util.m"
                        parse_tree__error_util__Word_90 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_58_58);
                      }
#line 1528 "error_util.m"
                      {
#line 1528 "error_util.m"
                        parse_tree__error_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_60_60, 0) = ((MR_Box) (parse_tree__error_util__Word_90));
#line 1528 "error_util.m"
                      }
#line 1528 "error_util.m"
                      {
#line 1528 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_60_60));
#line 1528 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1528 "error_util.m"
                      }
#line 1526 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1526 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 14:
#line 1530 "error_util.m"
                    {
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__PragmaName_37 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__V_55_55;
#line 1530 "error_util.m"
                      MR_Word parse_tree__error_util__V_57_57;
#line 1530 "error_util.m"
                      MR_String parse_tree__error_util__Word_91;

#line 1531 "error_util.m"
                      {
#line 1531 "error_util.m"
                        parse_tree__error_util__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_37);
                      }
#line 1531 "error_util.m"
                      {
#line 1531 "error_util.m"
                        parse_tree__error_util__Word_91 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__V_55_55);
                      }
#line 1532 "error_util.m"
                      {
#line 1532 "error_util.m"
                        parse_tree__error_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__V_57_57, 0) = ((MR_Box) (parse_tree__error_util__Word_91));
#line 1532 "error_util.m"
                      }
#line 1532 "error_util.m"
                      {
#line 1532 "error_util.m"
                        parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 0) = ((MR_Box) (parse_tree__error_util__V_57_57));
#line 1532 "error_util.m"
                        MR_hl_field(MR_mktag(1), parse_tree__error_util__RevWords1_22, 1) = ((MR_Box) (parse_tree__error_util__RevWords0_3));
#line 1532 "error_util.m"
                      }
#line 1530 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1530 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 15:
#line 1539 "error_util.m"
                    {
#line 1539 "error_util.m"
                      MR_Integer parse_tree__error_util__IndentDelta_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_17, (MR_Integer) 1)));
#line 1539 "error_util.m"
                      MR_Word parse_tree__error_util__V_49_49;
#line 1539 "error_util.m"
                      MR_Word parse_tree__error_util__Strings_92;

#line 1540 "error_util.m"
                      {
#line 1540 "error_util.m"
                        parse_tree__error_util__Strings_92 = parse_tree__error_util__rev_words_to_strings_1_f_0(parse_tree__error_util__RevWords0_3);
                      }
#line 1541 "error_util.m"
                      {
#line 1541 "error_util.m"
                        parse_tree__error_util__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1541 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 0) = ((MR_Box) (parse_tree__error_util__Strings_92));
#line 1541 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1541 "error_util.m"
                        MR_hl_field(MR_mktag(0), parse_tree__error_util__V_49_49, 2) = ((MR_Box) (parse_tree__error_util__IndentDelta_39));
#line 1541 "error_util.m"
                      }
#line 1541 "error_util.m"
                      {
#line 1541 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0, parse_tree__error_util__STATE_VARIABLE_Paras_0_4, ((MR_Box) (parse_tree__error_util__V_49_49)));
                      }
#line 1542 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                  case (MR_Integer) 16:
#line 1551 "error_util.m"
                    {
#line 1552 "error_util.m"
                      parse_tree__error_util__RevWords1_22 = parse_tree__error_util__RevWords0_3;
#line 1551 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_Paras_51_51 = parse_tree__error_util__STATE_VARIABLE_Paras_0_4;
#line 1551 "error_util.m"
                    }
#line 1468 "error_util.m"
                    break;
#line 1468 "error_util.m"
                }
#line 1468 "error_util.m"
                break;
#line 1468 "error_util.m"
            }
#line 1554 "error_util.m"
            /* direct tailcall eliminated */
#line 1554 "error_util.m"
            {
#line 1554 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Components_18;
#line 1554 "error_util.m"
              MR_Word parse_tree__error_util__RevWords0__tmp_copy_3 = parse_tree__error_util__RevWords1_22;
#line 1554 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_Paras_51_51;

#line 1554 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_Paras_0_4 = parse_tree__error_util__STATE_VARIABLE_Paras_0__tmp_copy_4;
#line 1554 "error_util.m"
              parse_tree__error_util__RevWords0_3 = parse_tree__error_util__RevWords0__tmp_copy_3;
#line 1554 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 1554 "error_util.m"
              parse_tree__error_util__FirstInMsg_1 = (MR_Integer) 1;
#line 1554 "error_util.m"
            }
#line 1554 "error_util.m"
            continue;
#line 1464 "error_util.m"
          }
#line 1460 "error_util.m"
      }
#line 1460 "error_util.m"
      break;
#line 1460 "error_util.m"
    }
#line 1456 "error_util.m"
}

#line 1419 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__join_string_and_tail_3_f_0(
#line 1419 "error_util.m"
  MR_String parse_tree__error_util__Word_5,
#line 1419 "error_util.m"
  MR_Word parse_tree__error_util__Components_6,
#line 1419 "error_util.m"
  MR_String parse_tree__error_util__TailStr_7)
#line 1419 "error_util.m"
{
#line 1424 "error_util.m"
  {
#line 1424 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (strcmp(parse_tree__error_util__TailStr_7, (MR_String) "") == 0);
#line 1424 "error_util.m"
    MR_String parse_tree__error_util__Str_8;

#line 1424 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1423 "error_util.m"
      parse_tree__error_util__Str_8 = parse_tree__error_util__Word_5;
#line 1424 "error_util.m"
    else
#line 1426 "error_util.m"
      {
#line 1424 "error_util.m"
        MR_Word parse_tree__error_util__V_11_11;
#line 1424 "error_util.m"
        MR_Word parse_tree__error_util__V_10_10;
#line 1424 "error_util.m"
        MR_String parse_tree__error_util__V_9_9;

#line 1424 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_6)) == (MR_mktag((MR_Integer) 1)));
#line 1424 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1424 "error_util.m"
          {
#line 1424 "error_util.m"
            parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 0)));
#line 1424 "error_util.m"
            parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_6, (MR_Integer) 1)));
#line 1424 "error_util.m"
            parse_tree__error_util__succeeded = ((((MR_tag((MR_Word) parse_tree__error_util__V_11_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1424 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1424 "error_util.m"
              parse_tree__error_util__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, (MR_Integer) 1)));
#line 1424 "error_util.m"
          }
#line 1426 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1425 "error_util.m"
          {
#line 1425 "error_util.m"
            return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__TailStr_7);
          }
#line 1426 "error_util.m"
        else
#line 1427 "error_util.m"
          {
#line 1427 "error_util.m"
            MR_String parse_tree__error_util__V_12_12;

#line 1427 "error_util.m"
            {
#line 1427 "error_util.m"
              parse_tree__error_util__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__error_util__TailStr_7);
            }
#line 1427 "error_util.m"
            {
#line 1427 "error_util.m"
              return parse_tree__error_util__Str_8 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_5, parse_tree__error_util__V_12_12);
            }
#line 1427 "error_util.m"
          }
#line 1426 "error_util.m"
      }
#line 1424 "error_util.m"
    return parse_tree__error_util__Str_8;
#line 1424 "error_util.m"
  }
#line 1419 "error_util.m"
}

#line 1382 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__nth_fixed_str_1_f_0(
#line 1382 "error_util.m"
  MR_Integer parse_tree__error_util__N_3)
#line 1382 "error_util.m"
{
#line 1387 "error_util.m"
  {
#line 1387 "error_util.m"
    MR_bool parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 1);
#line 1387 "error_util.m"
    MR_String parse_tree__error_util__Str_4;

#line 1387 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
      parse_tree__error_util__Str_4 = (MR_String) "first";
#line 1387 "error_util.m"
    else
#line 1389 "error_util.m"
      {
#line 1387 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 2);
#line 1389 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1388 "error_util.m"
          parse_tree__error_util__Str_4 = (MR_String) "second";
#line 1389 "error_util.m"
        else
#line 1391 "error_util.m"
          {
#line 1389 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 3);
#line 1391 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1390 "error_util.m"
              parse_tree__error_util__Str_4 = (MR_String) "third";
#line 1391 "error_util.m"
            else
#line 1393 "error_util.m"
              {
#line 1391 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 4);
#line 1393 "error_util.m"
                if (parse_tree__error_util__succeeded)
#line 1392 "error_util.m"
                  parse_tree__error_util__Str_4 = (MR_String) "fourth";
#line 1393 "error_util.m"
                else
#line 1395 "error_util.m"
                  {
#line 1393 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 5);
#line 1395 "error_util.m"
                    if (parse_tree__error_util__succeeded)
#line 1394 "error_util.m"
                      parse_tree__error_util__Str_4 = (MR_String) "fifth";
#line 1395 "error_util.m"
                    else
#line 1397 "error_util.m"
                      {
#line 1395 "error_util.m"
                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 6);
#line 1397 "error_util.m"
                        if (parse_tree__error_util__succeeded)
#line 1396 "error_util.m"
                          parse_tree__error_util__Str_4 = (MR_String) "sixth";
#line 1397 "error_util.m"
                        else
#line 1399 "error_util.m"
                          {
#line 1397 "error_util.m"
                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 7);
#line 1399 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1398 "error_util.m"
                              parse_tree__error_util__Str_4 = (MR_String) "seventh";
#line 1399 "error_util.m"
                            else
#line 1401 "error_util.m"
                              {
#line 1399 "error_util.m"
                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 8);
#line 1401 "error_util.m"
                                if (parse_tree__error_util__succeeded)
#line 1400 "error_util.m"
                                  parse_tree__error_util__Str_4 = (MR_String) "eighth";
#line 1401 "error_util.m"
                                else
#line 1403 "error_util.m"
                                  {
#line 1401 "error_util.m"
                                    parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 9);
#line 1403 "error_util.m"
                                    if (parse_tree__error_util__succeeded)
#line 1402 "error_util.m"
                                      parse_tree__error_util__Str_4 = (MR_String) "ninth";
#line 1403 "error_util.m"
                                    else
#line 1405 "error_util.m"
                                      {
#line 1403 "error_util.m"
                                        parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 == (MR_Integer) 10);
#line 1405 "error_util.m"
                                        if (parse_tree__error_util__succeeded)
#line 1404 "error_util.m"
                                          parse_tree__error_util__Str_4 = (MR_String) "tenth";
#line 1405 "error_util.m"
                                        else
#line 1408 "error_util.m"
                                          {
#line 1408 "error_util.m"
                                            MR_String parse_tree__error_util__NStr_5;
#line 1408 "error_util.m"
                                            MR_Integer parse_tree__error_util__LastDigit_6;

#line 1408 "error_util.m"
                                            {
#line 1408 "error_util.m"
                                              parse_tree__error_util__NStr_5 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__N_3);
                                            }
#line 1409 "error_util.m"
                                            {
#line 1409 "error_util.m"
                                              parse_tree__error_util__LastDigit_6 = mercury__int__mod_2_f_0(parse_tree__error_util__N_3, (MR_Integer) 10);
                                            }
#line 1410 "error_util.m"
                                            parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1410 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1410 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 2);
#line 1412 "error_util.m"
                                            if (parse_tree__error_util__succeeded)
#line 1411 "error_util.m"
                                              {
#line 1411 "error_util.m"
                                                {
#line 1411 "error_util.m"
                                                  return parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "nd");
                                                }
#line 1411 "error_util.m"
                                              }
#line 1412 "error_util.m"
                                            else
#line 1414 "error_util.m"
                                              {
#line 1412 "error_util.m"
                                                parse_tree__error_util__succeeded = (parse_tree__error_util__N_3 > (MR_Integer) 20);
#line 1412 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1412 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_6 == (MR_Integer) 3);
#line 1414 "error_util.m"
                                                if (parse_tree__error_util__succeeded)
#line 1413 "error_util.m"
                                                  {
#line 1413 "error_util.m"
                                                    {
#line 1413 "error_util.m"
                                                      return parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "rd");
                                                    }
#line 1413 "error_util.m"
                                                  }
#line 1414 "error_util.m"
                                                else
#line 1415 "error_util.m"
                                                  {
#line 1415 "error_util.m"
                                                    {
#line 1415 "error_util.m"
                                                      return parse_tree__error_util__Str_4 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_5, (MR_String) "th");
                                                    }
#line 1415 "error_util.m"
                                                  }
#line 1414 "error_util.m"
                                              }
#line 1408 "error_util.m"
                                          }
#line 1405 "error_util.m"
                                      }
#line 1403 "error_util.m"
                                  }
#line 1401 "error_util.m"
                              }
#line 1399 "error_util.m"
                          }
#line 1397 "error_util.m"
                      }
#line 1395 "error_util.m"
                  }
#line 1393 "error_util.m"
              }
#line 1391 "error_util.m"
          }
#line 1389 "error_util.m"
      }
#line 1387 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1387 "error_util.m"
  }
#line 1382 "error_util.m"
}

#line 1290 "error_util.m"
static MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_2_2_f_0(
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__FirstInMsg_1,
#line 1290 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 1290 "error_util.m"
{
#line 1293 "error_util.m"
  {
#line 1293 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1293 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__3_3;

#line 1293 "error_util.m"
    if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_String) "";
#line 1293 "error_util.m"
    else
#line 1294 "error_util.m"
      {
#line 1294 "error_util.m"
        MR_Word parse_tree__error_util__Component_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1294 "error_util.m"
        MR_Word parse_tree__error_util__Components_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1294 "error_util.m"
        MR_String parse_tree__error_util__TailStr_9;

#line 1295 "error_util.m"
        {
#line 1295 "error_util.m"
          parse_tree__error_util__TailStr_9 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 1, parse_tree__error_util__Components_7);
        }
#line 1299 "error_util.m"
#line 1299 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 1299 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1299 "error_util.m"
          case (MR_Integer) 0:
#line 1299 "error_util.m"
#line 1299 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Component_6)) {
#line 1299 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1299 "error_util.m"
              case (MR_Integer) 0:
#line 1319 "error_util.m"
#line 1319 "error_util.m"
                switch (parse_tree__error_util__FirstInMsg_1) {
#line 1319 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1319 "error_util.m"
                  case (MR_Integer) 0:
#line 1318 "error_util.m"
                    parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1319 "error_util.m"
                    break;
#line 1319 "error_util.m"
                  case (MR_Integer) 1:
#line 1650 "error_util.m"
                    {
#line 1650 "error_util.m"
                      MR_Char parse_tree__error_util__First_60;
#line 1650 "error_util.m"
                      MR_String parse_tree__error_util__Rest_61;

#line 1645 "error_util.m"
                      {
#line 1645 "error_util.m"
                        parse_tree__error_util__succeeded = mercury__string__first_char_3_p_3(parse_tree__error_util__TailStr_9, &parse_tree__error_util__First_60, &parse_tree__error_util__Rest_61);
                      }
#line 1645 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1646 "error_util.m"
                        {
#line 1646 "error_util.m"
                          parse_tree__error_util__succeeded = mercury__char__is_upper_1_p_0(parse_tree__error_util__First_60);
                        }
#line 1650 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1648 "error_util.m"
                        {
#line 1648 "error_util.m"
                          MR_Char parse_tree__error_util__LoweredFirst_62;

#line 1648 "error_util.m"
                          {
#line 1648 "error_util.m"
                            mercury__char__to_lower_2_p_0(parse_tree__error_util__First_60, &parse_tree__error_util__LoweredFirst_62);
                          }
#line 1649 "error_util.m"
                          {
#line 1649 "error_util.m"
                            mercury__string__first_char_3_p_4(&parse_tree__error_util__HeadVar__3_3, parse_tree__error_util__LoweredFirst_62, parse_tree__error_util__Rest_61);
                          }
#line 1648 "error_util.m"
                        }
#line 1650 "error_util.m"
                      else
#line 1651 "error_util.m"
                        parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1650 "error_util.m"
                    }
#line 1319 "error_util.m"
                    break;
#line 1319 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 1:
#line 1366 "error_util.m"
                {
#line 1367 "error_util.m"
                  {
#line 1367 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1366 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 2:
#line 1373 "error_util.m"
                {
#line 1374 "error_util.m"
                  {
#line 1374 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n\n", parse_tree__error_util__TailStr_9);
                  }
#line 1373 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
            }
#line 1299 "error_util.m"
            break;
#line 1299 "error_util.m"
          case (MR_Integer) 1:
#line 1379 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1299 "error_util.m"
            break;
#line 1299 "error_util.m"
          case (MR_Integer) 2:
#line 1303 "error_util.m"
            {
#line 1303 "error_util.m"
              MR_String parse_tree__error_util__Word_11 = ((MR_String) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_6, (MR_Integer) 0)));

#line 1304 "error_util.m"
              {
#line 1304 "error_util.m"
                return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_11, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
              }
#line 1303 "error_util.m"
            }
#line 1299 "error_util.m"
            break;
#line 1299 "error_util.m"
          case (MR_Integer) 3:
#line 1299 "error_util.m"
#line 1299 "error_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 0)))) {
#line 1299 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1299 "error_util.m"
              case (MR_Integer) 0:
#line 1306 "error_util.m"
                {
#line 1306 "error_util.m"
                  MR_String parse_tree__error_util__V_40_40;
#line 1306 "error_util.m"
                  MR_String parse_tree__error_util__Word_43 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1306 "error_util.m"
                  MR_String parse_tree__error_util__V_79_79;

#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_79_79 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Word_43, (MR_String) "\'");
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_79_79);
                  }
#line 1307 "error_util.m"
                  {
#line 1307 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_40_40, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1306 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 1:
#line 1309 "error_util.m"
                {
#line 1309 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1309 "error_util.m"
                  MR_String parse_tree__error_util__V_39_39;

#line 1310 "error_util.m"
                  {
#line 1310 "error_util.m"
                    parse_tree__error_util__V_39_39 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_12);
                  }
#line 1310 "error_util.m"
                  {
#line 1310 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_39_39, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1309 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 2:
#line 1312 "error_util.m"
                {
#line 1312 "error_util.m"
                  MR_String parse_tree__error_util__V_38_38;
#line 1312 "error_util.m"
                  MR_Integer parse_tree__error_util__Int_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1385 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 1);
#line 1387 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 1386 "error_util.m"
                    parse_tree__error_util__V_38_38 = (MR_String) "first";
#line 1387 "error_util.m"
                  else
#line 1389 "error_util.m"
                    {
#line 1387 "error_util.m"
                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 2);
#line 1389 "error_util.m"
                      if (parse_tree__error_util__succeeded)
#line 1388 "error_util.m"
                        parse_tree__error_util__V_38_38 = (MR_String) "second";
#line 1389 "error_util.m"
                      else
#line 1391 "error_util.m"
                        {
#line 1389 "error_util.m"
                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 3);
#line 1391 "error_util.m"
                          if (parse_tree__error_util__succeeded)
#line 1390 "error_util.m"
                            parse_tree__error_util__V_38_38 = (MR_String) "third";
#line 1391 "error_util.m"
                          else
#line 1393 "error_util.m"
                            {
#line 1391 "error_util.m"
                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 4);
#line 1393 "error_util.m"
                              if (parse_tree__error_util__succeeded)
#line 1392 "error_util.m"
                                parse_tree__error_util__V_38_38 = (MR_String) "fourth";
#line 1393 "error_util.m"
                              else
#line 1395 "error_util.m"
                                {
#line 1393 "error_util.m"
                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 5);
#line 1395 "error_util.m"
                                  if (parse_tree__error_util__succeeded)
#line 1394 "error_util.m"
                                    parse_tree__error_util__V_38_38 = (MR_String) "fifth";
#line 1395 "error_util.m"
                                  else
#line 1397 "error_util.m"
                                    {
#line 1395 "error_util.m"
                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 6);
#line 1397 "error_util.m"
                                      if (parse_tree__error_util__succeeded)
#line 1396 "error_util.m"
                                        parse_tree__error_util__V_38_38 = (MR_String) "sixth";
#line 1397 "error_util.m"
                                      else
#line 1399 "error_util.m"
                                        {
#line 1397 "error_util.m"
                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 7);
#line 1399 "error_util.m"
                                          if (parse_tree__error_util__succeeded)
#line 1398 "error_util.m"
                                            parse_tree__error_util__V_38_38 = (MR_String) "seventh";
#line 1399 "error_util.m"
                                          else
#line 1401 "error_util.m"
                                            {
#line 1399 "error_util.m"
                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 8);
#line 1401 "error_util.m"
                                              if (parse_tree__error_util__succeeded)
#line 1400 "error_util.m"
                                                parse_tree__error_util__V_38_38 = (MR_String) "eighth";
#line 1401 "error_util.m"
                                              else
#line 1403 "error_util.m"
                                                {
#line 1401 "error_util.m"
                                                  parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 9);
#line 1403 "error_util.m"
                                                  if (parse_tree__error_util__succeeded)
#line 1402 "error_util.m"
                                                    parse_tree__error_util__V_38_38 = (MR_String) "ninth";
#line 1403 "error_util.m"
                                                  else
#line 1405 "error_util.m"
                                                    {
#line 1403 "error_util.m"
                                                      parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 == (MR_Integer) 10);
#line 1405 "error_util.m"
                                                      if (parse_tree__error_util__succeeded)
#line 1404 "error_util.m"
                                                        parse_tree__error_util__V_38_38 = (MR_String) "tenth";
#line 1405 "error_util.m"
                                                      else
#line 1408 "error_util.m"
                                                        {
#line 1408 "error_util.m"
                                                          MR_String parse_tree__error_util__NStr_65;
#line 1408 "error_util.m"
                                                          MR_Integer parse_tree__error_util__LastDigit_66;

#line 1408 "error_util.m"
                                                          {
#line 1408 "error_util.m"
                                                            parse_tree__error_util__NStr_65 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Int_44);
                                                          }
#line 1409 "error_util.m"
                                                          {
#line 1409 "error_util.m"
                                                            parse_tree__error_util__LastDigit_66 = mercury__int__mod_2_f_0(parse_tree__error_util__Int_44, (MR_Integer) 10);
                                                          }
#line 1410 "error_util.m"
                                                          parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1410 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1410 "error_util.m"
                                                            parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 2);
#line 1412 "error_util.m"
                                                          if (parse_tree__error_util__succeeded)
#line 1411 "error_util.m"
                                                            {
#line 1411 "error_util.m"
                                                              {
#line 1411 "error_util.m"
                                                                parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "nd");
                                                              }
#line 1411 "error_util.m"
                                                            }
#line 1412 "error_util.m"
                                                          else
#line 1414 "error_util.m"
                                                            {
#line 1412 "error_util.m"
                                                              parse_tree__error_util__succeeded = (parse_tree__error_util__Int_44 > (MR_Integer) 20);
#line 1412 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1412 "error_util.m"
                                                                parse_tree__error_util__succeeded = (parse_tree__error_util__LastDigit_66 == (MR_Integer) 3);
#line 1414 "error_util.m"
                                                              if (parse_tree__error_util__succeeded)
#line 1413 "error_util.m"
                                                                {
#line 1413 "error_util.m"
                                                                  {
#line 1413 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "rd");
                                                                  }
#line 1413 "error_util.m"
                                                                }
#line 1414 "error_util.m"
                                                              else
#line 1415 "error_util.m"
                                                                {
#line 1415 "error_util.m"
                                                                  {
#line 1415 "error_util.m"
                                                                    parse_tree__error_util__V_38_38 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__NStr_65, (MR_String) "th");
                                                                  }
#line 1415 "error_util.m"
                                                                }
#line 1414 "error_util.m"
                                                            }
#line 1408 "error_util.m"
                                                        }
#line 1405 "error_util.m"
                                                    }
#line 1403 "error_util.m"
                                                }
#line 1401 "error_util.m"
                                            }
#line 1399 "error_util.m"
                                        }
#line 1397 "error_util.m"
                                    }
#line 1395 "error_util.m"
                                }
#line 1393 "error_util.m"
                            }
#line 1391 "error_util.m"
                        }
#line 1389 "error_util.m"
                    }
#line 1313 "error_util.m"
                  {
#line 1313 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_38_38, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1312 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 3:
#line 1324 "error_util.m"
                {
#line 1324 "error_util.m"
                  MR_String parse_tree__error_util__Prefix_13 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1325 "error_util.m"
                  {
#line 1325 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Prefix_13, parse_tree__error_util__TailStr_9);
                  }
#line 1324 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 4:
#line 1327 "error_util.m"
                {
#line 1327 "error_util.m"
                  MR_String parse_tree__error_util__Suffix_14 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1328 "error_util.m"
                  {
#line 1328 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Suffix_14, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1327 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 5:
#line 1297 "error_util.m"
                {
#line 1297 "error_util.m"
                  MR_String parse_tree__error_util__Words_10 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1298 "error_util.m"
                  {
#line 1298 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Words_10, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1297 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 6:
#line 1300 "error_util.m"
                {
#line 1300 "error_util.m"
                  MR_String parse_tree__error_util__V_41_41;
#line 1300 "error_util.m"
                  MR_String parse_tree__error_util__Words_42 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));

#line 1301 "error_util.m"
                  {
#line 1301 "error_util.m"
                    parse_tree__error_util__V_41_41 = parse_tree__error_util__add_quotes_1_f_0(parse_tree__error_util__Words_42);
                  }
#line 1301 "error_util.m"
                  {
#line 1301 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__V_41_41, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1300 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 7:
#line 1330 "error_util.m"
                {
#line 1330 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1330 "error_util.m"
                  MR_String parse_tree__error_util__Word_45;
#line 1330 "error_util.m"
                  MR_String parse_tree__error_util__V_82_82;
#line 1330 "error_util.m"
                  MR_String parse_tree__error_util__V_85_85;

#line 1657 "error_util.m"
                  {
#line 1657 "error_util.m"
                    parse_tree__error_util__V_82_82 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_15);
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_85_85 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_82_82, (MR_String) "\'");
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__Word_45 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_85_85);
                  }
#line 1332 "error_util.m"
                  {
#line 1332 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_45, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1330 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 8:
#line 1334 "error_util.m"
                {
#line 1334 "error_util.m"
                  MR_Word parse_tree__error_util__SymNameAndArity_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__Word_46;
#line 1334 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 0)));
#line 1334 "error_util.m"
                  MR_Integer parse_tree__error_util__Arity_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SymNameAndArity_16, (MR_Integer) 1)));
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_89_89;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_90_90;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_91_91;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_93_93;
#line 1334 "error_util.m"
                  MR_String parse_tree__error_util__V_96_96;

#line 1662 "error_util.m"
                  {
#line 1662 "error_util.m"
                    parse_tree__error_util__V_90_90 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_87);
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_96_96 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_90_90, (MR_String) "\'");
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_96_96);
                  }
#line 1662 "error_util.m"
                  {
#line 1662 "error_util.m"
                    parse_tree__error_util__V_93_93 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_88);
                  }
#line 1662 "error_util.m"
                  {
#line 1662 "error_util.m"
                    parse_tree__error_util__V_91_91 = mercury__string__f_43_43_2_f_0((MR_String) "/", parse_tree__error_util__V_93_93);
                  }
#line 1662 "error_util.m"
                  {
#line 1662 "error_util.m"
                    parse_tree__error_util__Word_46 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_89_89, parse_tree__error_util__V_91_91);
                  }
#line 1336 "error_util.m"
                  {
#line 1336 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_46, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1334 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 9:
#line 1338 "error_util.m"
                {
#line 1338 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1338 "error_util.m"
                  MR_Word parse_tree__error_util__ConsId_18;
#line 1338 "error_util.m"
                  MR_String parse_tree__error_util__Word_47;

#line 1339 "error_util.m"
                  {
#line 1339 "error_util.m"
                    parse_tree__prog_util__strip_builtin_qualifier_from_cons_id_2_p_0(parse_tree__error_util__ConsId0_17, &parse_tree__error_util__ConsId_18);
                  }
#line 1340 "error_util.m"
                  {
#line 1340 "error_util.m"
                    parse_tree__error_util__Word_47 = parse_tree__prog_out__maybe_quoted_cons_id_and_arity_to_string_1_f_0(parse_tree__error_util__ConsId_18);
                  }
#line 1341 "error_util.m"
                  {
#line 1341 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_47, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1338 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 10:
#line 1359 "error_util.m"
                {
#line 1359 "error_util.m"
                  MR_Word parse_tree__error_util__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1359 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtor_24;
#line 1359 "error_util.m"
                  MR_Word parse_tree__error_util__TypeCtorName_25;
#line 1359 "error_util.m"
                  MR_Integer parse_tree__error_util__TypeCtorArity_26;
#line 1359 "error_util.m"
                  MR_String parse_tree__error_util__Word_52;
#line 1359 "error_util.m"
                  MR_Word parse_tree__error_util__SymName_53;

#line 1360 "error_util.m"
                  {
#line 1360 "error_util.m"
                    parse_tree__prog_type__type_to_ctor_det_2_p_0(parse_tree__error_util__Type_23, &parse_tree__error_util__TypeCtor_24);
                  }
#line 1361 "error_util.m"
                  parse_tree__error_util__TypeCtorName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 0)));
#line 1361 "error_util.m"
                  parse_tree__error_util__TypeCtorArity_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeCtor_24, (MR_Integer) 1)));
#line 1362 "error_util.m"
                  {
#line 1362 "error_util.m"
                    parse_tree__error_util__SymName_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 0) = ((MR_Box) (parse_tree__error_util__TypeCtorName_25));
#line 1362 "error_util.m"
                    MR_hl_field(MR_mktag(0), parse_tree__error_util__SymName_53, 1) = ((MR_Box) (parse_tree__error_util__TypeCtorArity_26));
#line 1362 "error_util.m"
                  }
#line 1363 "error_util.m"
                  {
#line 1363 "error_util.m"
                    parse_tree__error_util__Word_52 = parse_tree__error_util__sym_name_and_arity_to_word_1_f_0(parse_tree__error_util__SymName_53);
                  }
#line 1364 "error_util.m"
                  {
#line 1364 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_52, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1359 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 11:
#line 1343 "error_util.m"
                {
#line 1343 "error_util.m"
                  MR_Word parse_tree__error_util__PredOrFunc_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1343 "error_util.m"
                  MR_String parse_tree__error_util__Word_48;

#line 1821 "error_util.m"
#line 1821 "error_util.m"
                  switch (parse_tree__error_util__PredOrFunc_19) {
#line 1821 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1821 "error_util.m"
                    case (MR_Integer) 1:
#line 1822 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "function";
#line 1821 "error_util.m"
                      break;
#line 1821 "error_util.m"
                    case (MR_Integer) 0:
#line 1821 "error_util.m"
                      parse_tree__error_util__Word_48 = (MR_String) "predicate";
#line 1821 "error_util.m"
                      break;
#line 1821 "error_util.m"
                  }
#line 1345 "error_util.m"
                  {
#line 1345 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_48, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1343 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 12:
#line 1347 "error_util.m"
                {
#line 1347 "error_util.m"
                  MR_Word parse_tree__error_util__SimpleCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1347 "error_util.m"
                  MR_String parse_tree__error_util__Word_49;

#line 1348 "error_util.m"
                  {
#line 1348 "error_util.m"
                    parse_tree__error_util__Word_49 = parse_tree__prog_out__simple_call_id_to_string_1_f_0(parse_tree__error_util__SimpleCallId_20);
                  }
#line 1349 "error_util.m"
                  {
#line 1349 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_49, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1347 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 13:
#line 1351 "error_util.m"
                {
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__Decl_21 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__V_36_36;
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__Word_50;
#line 1351 "error_util.m"
                  MR_String parse_tree__error_util__V_56_56;

#line 1352 "error_util.m"
                  {
#line 1352 "error_util.m"
                    parse_tree__error_util__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) ":- ", parse_tree__error_util__Decl_21);
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_56_56 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_36_36, (MR_String) "\'");
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__Word_50 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_56_56);
                  }
#line 1353 "error_util.m"
                  {
#line 1353 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_50, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1351 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 14:
#line 1355 "error_util.m"
                {
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__PragmaName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__V_34_34;
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__Word_51;
#line 1355 "error_util.m"
                  MR_String parse_tree__error_util__V_75_75;

#line 1356 "error_util.m"
                  {
#line 1356 "error_util.m"
                    parse_tree__error_util__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ":- pragma ", parse_tree__error_util__PragmaName_22);
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__V_75_75 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_34_34, (MR_String) "\'");
                  }
#line 1824 "error_util.m"
                  {
#line 1824 "error_util.m"
                    parse_tree__error_util__Word_51 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_75_75);
                  }
#line 1357 "error_util.m"
                  {
#line 1357 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__join_string_and_tail_3_f_0(parse_tree__error_util__Word_51, parse_tree__error_util__Components_7, parse_tree__error_util__TailStr_9);
                  }
#line 1355 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 15:
#line 1369 "error_util.m"
                {
#line 1371 "error_util.m"
                  {
#line 1371 "error_util.m"
                    return parse_tree__error_util__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\n", parse_tree__error_util__TailStr_9);
                  }
#line 1369 "error_util.m"
                }
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
              case (MR_Integer) 16:
#line 1379 "error_util.m"
                parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__TailStr_9;
#line 1299 "error_util.m"
                break;
#line 1299 "error_util.m"
            }
#line 1299 "error_util.m"
            break;
#line 1299 "error_util.m"
        }
#line 1294 "error_util.m"
      }
#line 1293 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1293 "error_util.m"
  }
#line 1290 "error_util.m"
}

#line 1279 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_line_rest_3_p_0(
#line 1279 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 1279 "error_util.m"
{
#line 1281 "error_util.m"
  while (MR_TRUE)
#line 1281 "error_util.m"
    {
#line 1281 "error_util.m"
      /* tailcall optimized into a loop */
#line 1281 "error_util.m"
      {
#line 1281 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1281 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1281 "error_util.m"
          {
#line 1281 "error_util.m"
          }
#line 1281 "error_util.m"
        else
#line 1282 "error_util.m"
          {
#line 1282 "error_util.m"
            MR_String parse_tree__error_util__Word_7 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1282 "error_util.m"
            MR_Word parse_tree__error_util__Words_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));

#line 1283 "error_util.m"
            {
#line 1283 "error_util.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 1284 "error_util.m"
            {
#line 1284 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__Word_7);
            }
#line 1285 "error_util.m"
            /* direct tailcall eliminated */
#line 1285 "error_util.m"
            {
#line 1285 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Words_8;

#line 1285 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1285 "error_util.m"
            }
#line 1285 "error_util.m"
            continue;
#line 1282 "error_util.m"
          }
#line 1281 "error_util.m"
      }
#line 1281 "error_util.m"
      break;
#line 1281 "error_util.m"
    }
#line 1279 "error_util.m"
}

#line 1252 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_lines_5_p_0(
#line 1252 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1252 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 1252 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_3)
#line 1252 "error_util.m"
{
#line 1255 "error_util.m"
  while (MR_TRUE)
#line 1255 "error_util.m"
    {
#line 1255 "error_util.m"
      /* tailcall optimized into a loop */
#line 1255 "error_util.m"
      {
#line 1255 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 1255 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "error_util.m"
          {
#line 1255 "error_util.m"
          }
#line 1255 "error_util.m"
        else
#line 1256 "error_util.m"
          {
#line 1256 "error_util.m"
            MR_Word parse_tree__error_util__Line_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1256 "error_util.m"
            MR_Word parse_tree__error_util__Lines_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1256 "error_util.m"
            MR_Integer parse_tree__error_util__LineIndent_17;
#line 1256 "error_util.m"
            MR_Word parse_tree__error_util__LineWords_18;
#line 1256 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_19;
#line 1256 "error_util.m"
            MR_String parse_tree__error_util__IndentStr_20;
#line 1256 "error_util.m"
            MR_Integer parse_tree__error_util__V_24_24;

#line 1260 "error_util.m"
            if ((parse_tree__error_util__MaybeContext_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1261 "error_util.m"
              {
#line 1261 "error_util.m"
              }
#line 1260 "error_util.m"
            else
#line 1258 "error_util.m"
              {
#line 1258 "error_util.m"
                MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_2, (MR_Integer) 0)));

#line 1259 "error_util.m"
                {
#line 1259 "error_util.m"
                  parse_tree__prog_out__write_context_3_p_0(parse_tree__error_util__Context_16);
                }
#line 1258 "error_util.m"
              }
#line 1263 "error_util.m"
            parse_tree__error_util__LineIndent_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 0)));
#line 1263 "error_util.m"
            parse_tree__error_util__LineWords_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Line_11, (MR_Integer) 1)));
#line 1264 "error_util.m"
            parse_tree__error_util__V_24_24 = (parse_tree__error_util__LineIndent_17 * (MR_Integer) 2);
#line 1264 "error_util.m"
            parse_tree__error_util__Indent_19 = (parse_tree__error_util__FixedIndent_3 + parse_tree__error_util__V_24_24);
#line 1265 "error_util.m"
            {
#line 1265 "error_util.m"
              mercury__string__pad_left_4_p_0((MR_String) "", (MR_Char) 32, parse_tree__error_util__Indent_19, &parse_tree__error_util__IndentStr_20);
            }
#line 1266 "error_util.m"
            {
#line 1266 "error_util.m"
              mercury__io__write_string_3_p_0(parse_tree__error_util__IndentStr_20);
            }
#line 1272 "error_util.m"
            if ((parse_tree__error_util__LineWords_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1272 "error_util.m"
              {
#line 1273 "error_util.m"
                {
#line 1273 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1272 "error_util.m"
              }
#line 1272 "error_util.m"
            else
#line 1274 "error_util.m"
              {
#line 1274 "error_util.m"
                MR_String parse_tree__error_util__Word_36 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 0)));
#line 1274 "error_util.m"
                MR_Word parse_tree__error_util__Words_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__LineWords_18, (MR_Integer) 1)));

#line 1275 "error_util.m"
                {
#line 1275 "error_util.m"
                  mercury__io__write_string_3_p_0(parse_tree__error_util__Word_36);
                }
#line 1276 "error_util.m"
                {
#line 1276 "error_util.m"
                  parse_tree__error_util__write_line_rest_3_p_0(parse_tree__error_util__Words_37);
                }
#line 1277 "error_util.m"
                {
#line 1277 "error_util.m"
                  mercury__io__write_char_3_p_0((MR_Char) 10);
                }
#line 1274 "error_util.m"
              }
#line 1268 "error_util.m"
            /* direct tailcall eliminated */
#line 1268 "error_util.m"
            {
#line 1268 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Lines_12;

#line 1268 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1268 "error_util.m"
            }
#line 1268 "error_util.m"
            continue;
#line 1256 "error_util.m"
          }
#line 1255 "error_util.m"
      }
#line 1255 "error_util.m"
      break;
#line 1255 "error_util.m"
    }
#line 1252 "error_util.m"
}

#line 1224 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__line_number_is_in_a_range_2_f_0(
#line 1224 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1224 "error_util.m"
  MR_Integer parse_tree__error_util__LineNumber_2)
#line 1224 "error_util.m"
{
#line 1226 "error_util.m"
  while (MR_TRUE)
#line 1226 "error_util.m"
    {
#line 1226 "error_util.m"
      /* tailcall optimized into a loop */
#line 1226 "error_util.m"
      {
#line 1226 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 1226 "error_util.m"
        MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1226 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1226 "error_util.m"
          parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 1226 "error_util.m"
        else
#line 1227 "error_util.m"
          {
#line 1227 "error_util.m"
            MR_Word parse_tree__error_util__Range_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1227 "error_util.m"
            MR_Word parse_tree__error_util__Ranges_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1227 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMin_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 0)));
#line 1227 "error_util.m"
            MR_Word parse_tree__error_util__MaybeMax_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Range_5, (MR_Integer) 1)));

#line 1232 "error_util.m"
            if ((parse_tree__error_util__MaybeMin_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1232 "error_util.m"
            else
#line 1233 "error_util.m"
              {
#line 1233 "error_util.m"
                MR_Integer parse_tree__error_util__Min_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMin_9, (MR_Integer) 0)));

#line 1234 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__Min_11 <= parse_tree__error_util__LineNumber_2);
#line 1233 "error_util.m"
              }
#line 1235 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1238 "error_util.m"
              {
#line 1238 "error_util.m"
                if ((parse_tree__error_util__MaybeMax_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "error_util.m"
                  parse_tree__error_util__succeeded = MR_TRUE;
#line 1238 "error_util.m"
                else
#line 1239 "error_util.m"
                  {
#line 1239 "error_util.m"
                    MR_Integer parse_tree__error_util__Max_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMax_10, (MR_Integer) 0)));

#line 1240 "error_util.m"
                    parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumber_2 <= parse_tree__error_util__Max_12);
#line 1239 "error_util.m"
                  }
#line 1238 "error_util.m"
              }
#line 1244 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1243 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 1244 "error_util.m"
            else
#line 1245 "error_util.m"
              {
#line 1245 "error_util.m"
                /* direct tailcall eliminated */
#line 1245 "error_util.m"
                {
#line 1245 "error_util.m"
                  MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Ranges_6;

#line 1245 "error_util.m"
                  parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1245 "error_util.m"
                }
#line 1245 "error_util.m"
                continue;
#line 1245 "error_util.m"
              }
#line 1227 "error_util.m"
          }
#line 1226 "error_util.m"
        return parse_tree__error_util__HeadVar__3_3;
#line 1226 "error_util.m"
      }
#line 1226 "error_util.m"
      break;
#line 1226 "error_util.m"
    }
#line 1224 "error_util.m"
}

#line 1158 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_params_8_p_0(
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_9,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_10,
#line 1158 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_11,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__MaybeMaxWidth_12,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__LimitErrorContextsMap_13,
#line 1158 "error_util.m"
  MR_Word parse_tree__error_util__Components_14)
#line 1158 "error_util.m"
{
#line 1164 "error_util.m"
  {
#line 1164 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1164 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextLength_20;

#line 1200 "error_util.m"
    if ((parse_tree__error_util__MaybeContext_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "error_util.m"
      {
#line 1202 "error_util.m"
        parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[4]);
#line 1201 "error_util.m"
      }
#line 1200 "error_util.m"
    else
#line 1173 "error_util.m"
      {
#line 1173 "error_util.m"
        MR_Word parse_tree__error_util__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_10, (MR_Integer) 0)));
#line 1173 "error_util.m"
        MR_String parse_tree__error_util__FileName_17;
#line 1173 "error_util.m"
        MR_Integer parse_tree__error_util__LineNumber_18;

#line 1174 "error_util.m"
        {
#line 1174 "error_util.m"
          mercury__term__context_file_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__FileName_17);
        }
#line 1175 "error_util.m"
        {
#line 1175 "error_util.m"
          mercury__term__context_line_2_p_0(parse_tree__error_util__Context_16, &parse_tree__error_util__LineNumber_18);
        }
#line 1178 "error_util.m"
        {
#line 1178 "error_util.m"
          MR_Word parse_tree__error_util__LineNumberRanges_19;
#line 1178 "error_util.m"
          MR_Word parse_tree__error_util__V_37_37;
#line 1178 "error_util.m"
          MR_Box parse_tree__error_util__conv0_LineNumberRanges_19;

#line 1178 "error_util.m"
          {
#line 1178 "error_util.m"
            parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) (parse_tree__error_util__FileName_17)), &parse_tree__error_util__conv0_LineNumberRanges_19);
          }
#line 1178 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
            {
#line 1178 "error_util.m"
              parse_tree__error_util__LineNumberRanges_19 = ((MR_Word) parse_tree__error_util__conv0_LineNumberRanges_19);
#line 1178 "error_util.m"
              parse_tree__error_util__succeeded = MR_TRUE;
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 1178 "error_util.m"
            {
#line 1179 "error_util.m"
              {
#line 1179 "error_util.m"
                parse_tree__error_util__V_37_37 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_19, parse_tree__error_util__LineNumber_18);
              }
#line 1179 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__V_37_37 == (MR_Integer) 0);
#line 1178 "error_util.m"
            }
#line 1178 "error_util.m"
        }
#line 1180 "error_util.m"
        if (!(parse_tree__error_util__succeeded))
#line 1182 "error_util.m"
          {
#line 1182 "error_util.m"
            MR_Word parse_tree__error_util__V_36_36;
#line 1182 "error_util.m"
            MR_Word parse_tree__error_util__LineNumberRanges_48;
#line 1182 "error_util.m"
            MR_Box parse_tree__error_util__conv1_LineNumberRanges_48;

#line 1182 "error_util.m"
            {
#line 1182 "error_util.m"
              parse_tree__error_util__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2], parse_tree__error_util__LimitErrorContextsMap_13, ((MR_Box) ((MR_String) "")), &parse_tree__error_util__conv1_LineNumberRanges_48);
            }
#line 1182 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1182 "error_util.m"
              {
#line 1182 "error_util.m"
                parse_tree__error_util__LineNumberRanges_48 = ((MR_Word) parse_tree__error_util__conv1_LineNumberRanges_48);
#line 1182 "error_util.m"
                parse_tree__error_util__succeeded = MR_TRUE;
#line 1182 "error_util.m"
              }
#line 1182 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1182 "error_util.m"
              {
#line 1183 "error_util.m"
                {
#line 1183 "error_util.m"
                  parse_tree__error_util__V_36_36 = parse_tree__error_util__line_number_is_in_a_range_2_f_0(parse_tree__error_util__LineNumberRanges_48, parse_tree__error_util__LineNumber_18);
                }
#line 1183 "error_util.m"
                parse_tree__error_util__succeeded = (parse_tree__error_util__V_36_36 == (MR_Integer) 0);
#line 1182 "error_util.m"
              }
#line 1182 "error_util.m"
          }
#line 1188 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1186 "error_util.m"
          {
#line 1186 "error_util.m"
            {
#line 1186 "error_util.m"
              libs__globals__io_set_some_errors_were_context_limited_3_p_0((MR_Integer) 1);
            }
#line 1187 "error_util.m"
            parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "error_util.m"
          }
#line 1188 "error_util.m"
        else
#line 1189 "error_util.m"
          {
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__FileNameLength_21;
#line 1189 "error_util.m"
            MR_String parse_tree__error_util__LineNumberStr_22;
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength0_23;
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__LineNumberStrLength_24;
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__V_41_41;
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__V_42_42;
#line 1189 "error_util.m"
            MR_Integer parse_tree__error_util__V_43_43;

#line 1189 "error_util.m"
            {
#line 1189 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__FileName_17, &parse_tree__error_util__FileNameLength_21);
            }
#line 1190 "error_util.m"
            {
#line 1190 "error_util.m"
              mercury__string__int_to_string_2_p_0(parse_tree__error_util__LineNumber_18, &parse_tree__error_util__LineNumberStr_22);
            }
#line 1191 "error_util.m"
            {
#line 1191 "error_util.m"
              mercury__string__count_codepoints_2_p_0(parse_tree__error_util__LineNumberStr_22, &parse_tree__error_util__LineNumberStrLength0_23);
            }
#line 1192 "error_util.m"
            parse_tree__error_util__succeeded = (parse_tree__error_util__LineNumberStrLength0_23 < (MR_Integer) 3);
#line 1194 "error_util.m"
            if (parse_tree__error_util__succeeded)
#line 1193 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = (MR_Integer) 3;
#line 1194 "error_util.m"
            else
#line 1195 "error_util.m"
              parse_tree__error_util__LineNumberStrLength_24 = parse_tree__error_util__LineNumberStrLength0_23;
#line 1198 "error_util.m"
            parse_tree__error_util__V_43_43 = (parse_tree__error_util__FileNameLength_21 + (MR_Integer) 1);
#line 1198 "error_util.m"
            parse_tree__error_util__V_42_42 = (parse_tree__error_util__V_43_43 + parse_tree__error_util__LineNumberStrLength_24);
#line 1198 "error_util.m"
            parse_tree__error_util__V_41_41 = (parse_tree__error_util__V_42_42 + (MR_Integer) 2);
#line 1198 "error_util.m"
            {
#line 1198 "error_util.m"
              parse_tree__error_util__MaybeContextLength_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, 0) = ((MR_Box) (parse_tree__error_util__V_41_41));
#line 1198 "error_util.m"
            }
#line 1189 "error_util.m"
          }
#line 1173 "error_util.m"
      }
#line 1207 "error_util.m"
    if ((parse_tree__error_util__MaybeContextLength_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "error_util.m"
      {
#line 1205 "error_util.m"
      }
#line 1207 "error_util.m"
    else
#line 1208 "error_util.m"
      {
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_9_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_paragraph_0;
#line 1208 "error_util.m"
        MR_Integer parse_tree__error_util__ContextLength_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextLength_20, (MR_Integer) 0)));
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__Paragraphs_26;
#line 1208 "error_util.m"
        MR_Integer parse_tree__error_util__FirstIndent_27;
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__MaybeRemain_30;
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__Lines_31;
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__ParasCord_55;
#line 1208 "error_util.m"
        MR_Word parse_tree__error_util__V_58_58;

#line 1447 "error_util.m"
        {
#line 1447 "error_util.m"
          parse_tree__error_util__V_58_58 = mercury__cord__empty_0_f_0(parse_tree__error_util__TypeCtorInfo_9_59);
        }
#line 1446 "error_util.m"
        {
#line 1446 "error_util.m"
          parse_tree__error_util__convert_components_to_paragraphs_acc_5_p_0((MR_Integer) 0, parse_tree__error_util__Components_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__error_util__V_58_58, &parse_tree__error_util__ParasCord_55);
        }
#line 1448 "error_util.m"
        {
#line 1448 "error_util.m"
          parse_tree__error_util__Paragraphs_26 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_9_59, parse_tree__error_util__ParasCord_55);
        }
#line 1210 "error_util.m"
        parse_tree__error_util__succeeded = (parse_tree__error_util__TreatAsFirst_9 == (MR_Integer) 0);
#line 1210 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1210 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 0;
#line 1210 "error_util.m"
        else
#line 1210 "error_util.m"
          parse_tree__error_util__FirstIndent_27 = (MR_Integer) 1;
#line 1215 "error_util.m"
        if ((parse_tree__error_util__MaybeMaxWidth_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "error_util.m"
          parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "error_util.m"
        else
#line 1212 "error_util.m"
          {
#line 1212 "error_util.m"
            MR_Integer parse_tree__error_util__MaxWidth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeMaxWidth_12, (MR_Integer) 0)));
#line 1212 "error_util.m"
            MR_Integer parse_tree__error_util__Remain_29;
#line 1212 "error_util.m"
            MR_Integer parse_tree__error_util__V_46_46 = (parse_tree__error_util__ContextLength_25 + parse_tree__error_util__FixedIndent_11);

#line 1213 "error_util.m"
            parse_tree__error_util__Remain_29 = (parse_tree__error_util__MaxWidth_28 - parse_tree__error_util__V_46_46);
#line 1214 "error_util.m"
            {
#line 1214 "error_util.m"
              parse_tree__error_util__MaybeRemain_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeRemain_30, 0) = ((MR_Box) (parse_tree__error_util__Remain_29));
#line 1214 "error_util.m"
            }
#line 1212 "error_util.m"
          }
#line 1219 "error_util.m"
        {
#line 1219 "error_util.m"
          parse_tree__error_util__divide_paragraphs_into_lines_5_p_0(parse_tree__error_util__TreatAsFirst_9, parse_tree__error_util__FirstIndent_27, parse_tree__error_util__Paragraphs_26, parse_tree__error_util__MaybeRemain_30, &parse_tree__error_util__Lines_31);
        }
#line 1221 "error_util.m"
        {
#line 1221 "error_util.m"
          parse_tree__error_util__write_lines_5_p_0(parse_tree__error_util__Lines_31, parse_tree__error_util__MaybeContext_10, parse_tree__error_util__FixedIndent_11);
#line 1221 "error_util.m"
          return;
        }
#line 1208 "error_util.m"
      }
#line 1164 "error_util.m"
  }
#line 1158 "error_util.m"
}

#line 1146 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_pieces_7_p_0(
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__TreatAsFirst_8,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_9,
#line 1146 "error_util.m"
  MR_Integer parse_tree__error_util__FixedIndent_10,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 1146 "error_util.m"
  MR_Word parse_tree__error_util__Components_12)
#line 1146 "error_util.m"
{
#line 1151 "error_util.m"
  {
#line 1151 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1151 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_14;
#line 1151 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_15;

#line 1152 "error_util.m"
    {
#line 1152 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_11, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_14);
    }
#line 1154 "error_util.m"
    {
#line 1154 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_11, &parse_tree__error_util__LimitErrorContextsMap_15);
    }
#line 1155 "error_util.m"
    {
#line 1155 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0(parse_tree__error_util__TreatAsFirst_8, parse_tree__error_util__MaybeContext_9, parse_tree__error_util__FixedIndent_10, parse_tree__error_util__MaybeMaxWidth_14, parse_tree__error_util__LimitErrorContextsMap_15, parse_tree__error_util__Components_12);
#line 1155 "error_util.m"
      return;
    }
#line 1151 "error_util.m"
  }
#line 1146 "error_util.m"
}

#line 1129 "error_util.m"
static void MR_CALL 
parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(
#line 1129 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 1129 "error_util.m"
  MR_Word * parse_tree__error_util__HeadVar__2_2)
#line 1129 "error_util.m"
{
#line 1132 "error_util.m"
  {
#line 1132 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 1132 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1132 "error_util.m"
      *parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1132 "error_util.m"
    else
#line 1133 "error_util.m"
      {
#line 1133 "error_util.m"
        MR_String parse_tree__error_util__Line_3 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1133 "error_util.m"
        MR_Word parse_tree__error_util__Lines_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1133 "error_util.m"
        MR_Word parse_tree__error_util__TailPieces_6;
#line 1133 "error_util.m"
        MR_Word parse_tree__error_util__V_7_7;
#line 1133 "error_util.m"
        MR_Word parse_tree__error_util__V_8_8;

#line 1134 "error_util.m"
        {
#line 1134 "error_util.m"
          parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__Lines_4, &parse_tree__error_util__TailPieces_6);
        }
#line 1135 "error_util.m"
        {
#line 1135 "error_util.m"
          parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(3), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__Line_3));
#line 1135 "error_util.m"
        }
#line 1135 "error_util.m"
        {
#line 1135 "error_util.m"
          parse_tree__error_util__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__V_8_8, 1) = ((MR_Box) (parse_tree__error_util__TailPieces_6));
#line 1135 "error_util.m"
        }
#line 1135 "error_util.m"
        {
#line 1135 "error_util.m"
          MR_Word base;
#line 1135 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "error_util.m"
          *parse_tree__error_util__HeadVar__2_2 = base;
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1135 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1135 "error_util.m"
        }
#line 1133 "error_util.m"
      }
#line 1132 "error_util.m"
  }
#line 1129 "error_util.m"
}

#line 973 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_msg_components_12_p_0(
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_2,
#line 973 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_3,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_First_0_5,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_First_6,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_8,
#line 973 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9,
#line 973 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10)
#line 973 "error_util.m"
{
#line 980 "error_util.m"
  while (MR_TRUE)
#line 980 "error_util.m"
    {
#line 980 "error_util.m"
      /* tailcall optimized into a loop */
#line 980 "error_util.m"
      {
#line 980 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 980 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "error_util.m"
          {
#line 981 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_10 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 980 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_8 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 980 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_First_6 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 980 "error_util.m"
          }
#line 980 "error_util.m"
        else
#line 983 "error_util.m"
          {
#line 983 "error_util.m"
            MR_Word parse_tree__error_util__Component_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "error_util.m"
            MR_Word parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;
#line 983 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 983 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;

#line 990 "error_util.m"
#line 990 "error_util.m"
            switch (MR_tag((MR_Word) parse_tree__error_util__Component_28)) {
#line 990 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 990 "error_util.m"
              case (MR_Integer) 0:
#line 985 "error_util.m"
                {
#line 985 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Component_28, (MR_Integer) 0)));

#line 986 "error_util.m"
                  {
#line 986 "error_util.m"
                    parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_37);
                  }
#line 988 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 989 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 985 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 985 "error_util.m"
                }
#line 990 "error_util.m"
                break;
#line 990 "error_util.m"
              case (MR_Integer) 1:
#line 991 "error_util.m"
                {
#line 991 "error_util.m"
                  MR_Word parse_tree__error_util__Option_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 991 "error_util.m"
                  MR_Word parse_tree__error_util__RequiredValue_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 991 "error_util.m"
                  MR_Word parse_tree__error_util__EmbeddedComponents_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 991 "error_util.m"
                  MR_Word parse_tree__error_util__OptionValue_41;

#line 992 "error_util.m"
                  {
#line 992 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_38, &parse_tree__error_util__OptionValue_41);
                  }
#line 993 "error_util.m"
                  parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_41 == parse_tree__error_util__RequiredValue_39);
#line 996 "error_util.m"
                  if (parse_tree__error_util__succeeded)
#line 994 "error_util.m"
                    {
#line 994 "error_util.m"
                      parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__EmbeddedComponents_40, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__STATE_VARIABLE_First_0_5, &parse_tree__error_util__STATE_VARIABLE_First_80_80, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                    }
#line 996 "error_util.m"
                  else
#line 997 "error_util.m"
                    {
#line 997 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 997 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 997 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 997 "error_util.m"
                    }
#line 991 "error_util.m"
                }
#line 990 "error_util.m"
                break;
#line 990 "error_util.m"
              case (MR_Integer) 2:
#line 1000 "error_util.m"
                {
#line 1000 "error_util.m"
                  MR_Word parse_tree__error_util__AlwaysOrOnce_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 0)));
#line 1000 "error_util.m"
                  MR_Word parse_tree__error_util__VerboseErrors_43;
#line 1000 "error_util.m"
                  MR_Word parse_tree__error_util__ComponentPieces_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__error_util__Component_28, (MR_Integer) 1)));

#line 1001 "error_util.m"
                  {
#line 1001 "error_util.m"
                    libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_43);
                  }
#line 1024 "error_util.m"
#line 1024 "error_util.m"
                  switch (parse_tree__error_util__VerboseErrors_43) {
#line 1024 "error_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1024 "error_util.m"
                    case (MR_Integer) 0:
#line 1025 "error_util.m"
                      {
#line 1026 "error_util.m"
                        {
#line 1026 "error_util.m"
                          libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                        }
#line 1025 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1025 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1025 "error_util.m"
                        parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1025 "error_util.m"
                      }
#line 1024 "error_util.m"
                      break;
#line 1024 "error_util.m"
                    case (MR_Integer) 1:
#line 1010 "error_util.m"
#line 1010 "error_util.m"
                      switch (parse_tree__error_util__AlwaysOrOnce_42) {
#line 1010 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "error_util.m"
                        case (MR_Integer) 0:
#line 1005 "error_util.m"
                          {
#line 1006 "error_util.m"
                            {
#line 1006 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                            }
#line 1008 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1009 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1005 "error_util.m"
                            parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1005 "error_util.m"
                          }
#line 1010 "error_util.m"
                          break;
#line 1010 "error_util.m"
                        case (MR_Integer) 1:
#line 1016 "error_util.m"
                          {
#line 1013 "error_util.m"
                            {
#line 1013 "error_util.m"
                              parse_tree__error_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, ((MR_Box) (parse_tree__error_util__ComponentPieces_86)));
                            }
#line 1016 "error_util.m"
                            if (parse_tree__error_util__succeeded)
#line 1015 "error_util.m"
                              {
#line 1015 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1015 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7;
#line 1015 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = parse_tree__error_util__STATE_VARIABLE_First_0_5;
#line 1015 "error_util.m"
                              }
#line 1016 "error_util.m"
                            else
#line 1018 "error_util.m"
                              {
#line 1017 "error_util.m"
                                {
#line 1017 "error_util.m"
                                  parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__ComponentPieces_86);
                                }
#line 1019 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1020 "error_util.m"
                                parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1021 "error_util.m"
                                {
#line 1021 "error_util.m"
                                  mercury__set__insert_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[0], ((MR_Box) (parse_tree__error_util__ComponentPieces_86)), parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77);
                                }
#line 1018 "error_util.m"
                              }
#line 1016 "error_util.m"
                          }
#line 1010 "error_util.m"
                          break;
#line 1010 "error_util.m"
                      }
#line 1024 "error_util.m"
                      break;
#line 1024 "error_util.m"
                  }
#line 1000 "error_util.m"
                }
#line 990 "error_util.m"
                break;
#line 990 "error_util.m"
              case (MR_Integer) 3:
#line 990 "error_util.m"
#line 990 "error_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 0)))) {
#line 990 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 990 "error_util.m"
                  case (MR_Integer) 0:
#line 1029 "error_util.m"
                    {
#line 1029 "error_util.m"
                      MR_Word parse_tree__error_util__VerbosePieces_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1029 "error_util.m"
                      MR_Word parse_tree__error_util__NonVerbosePieces_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2)));
#line 1029 "error_util.m"
                      MR_Word parse_tree__error_util__VerboseErrors_87;

#line 1030 "error_util.m"
                      {
#line 1030 "error_util.m"
                        libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, (MR_Integer) 47, &parse_tree__error_util__VerboseErrors_87);
                      }
#line 1035 "error_util.m"
#line 1035 "error_util.m"
                      switch (parse_tree__error_util__VerboseErrors_87) {
#line 1035 "error_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1035 "error_util.m"
                        case (MR_Integer) 0:
#line 1036 "error_util.m"
                          {
#line 1037 "error_util.m"
                            {
#line 1037 "error_util.m"
                              parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__NonVerbosePieces_45);
                            }
#line 1039 "error_util.m"
                            {
#line 1039 "error_util.m"
                              libs__globals__io_set_extra_error_info_3_p_0((MR_Integer) 1);
                            }
#line 1036 "error_util.m"
                          }
#line 1035 "error_util.m"
                          break;
#line 1035 "error_util.m"
                        case (MR_Integer) 1:
#line 1033 "error_util.m"
                          {
#line 1033 "error_util.m"
                            parse_tree__error_util__do_write_error_pieces_7_p_0(parse_tree__error_util__STATE_VARIABLE_First_0_5, parse_tree__error_util__MaybeContext_2, parse_tree__error_util__Indent_3, parse_tree__error_util__Globals_4, parse_tree__error_util__VerbosePieces_44);
                          }
#line 1035 "error_util.m"
                          break;
#line 1035 "error_util.m"
                      }
#line 1041 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1042 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1029 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1029 "error_util.m"
                    }
#line 990 "error_util.m"
                    break;
#line 990 "error_util.m"
                  case (MR_Integer) 1:
#line 1044 "error_util.m"
                    {
#line 1044 "error_util.m"
                      MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 1)));
#line 1044 "error_util.m"
                      MR_Box parse_tree__error_util__Anything_46 = (MR_hl_field(MR_mktag(3), parse_tree__error_util__Component_28, (MR_Integer) 2));
#line 16097 "parse_tree.error_util.c"
                      void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_90, (MR_Integer) 0)), (MR_Integer) 5)));
#line 16099 "parse_tree.error_util.c"
                      MR_Box parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79;

#line 16102 "parse_tree.error_util.c"
                      {
#line 16104 "parse_tree.error_util.c"
                        parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_90), parse_tree__error_util__Anything_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_STATE_VARIABLE_IO_79_79);
                      }
#line 1046 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_First_80_80 = (MR_Integer) 1;
#line 1047 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81 = (MR_Integer) 0;
#line 1044 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9;
#line 1044 "error_util.m"
                    }
#line 990 "error_util.m"
                    break;
#line 990 "error_util.m"
                }
#line 990 "error_util.m"
                break;
#line 990 "error_util.m"
            }
#line 1049 "error_util.m"
            /* direct tailcall eliminated */
#line 1049 "error_util.m"
            {
#line 1049 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Components_29;
#line 1049 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5 = parse_tree__error_util__STATE_VARIABLE_First_80_80;
#line 1049 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_81_81;
#line 1049 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_77_77;

#line 1049 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_9 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_9;
#line 1049 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_7 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_7;
#line 1049 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_First_0_5 = parse_tree__error_util__STATE_VARIABLE_First_0__tmp_copy_5;
#line 1049 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 1049 "error_util.m"
            }
#line 1049 "error_util.m"
            continue;
#line 983 "error_util.m"
          }
#line 980 "error_util.m"
      }
#line 980 "error_util.m"
      break;
#line 980 "error_util.m"
    }
#line 973 "error_util.m"
}

#line 941 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_msgs_9_p_0(
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__3_3,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4,
#line 941 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_PrintedSome_5,
#line 941 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6,
#line 941 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7)
#line 941 "error_util.m"
{
#line 947 "error_util.m"
  while (MR_TRUE)
#line 947 "error_util.m"
    {
#line 947 "error_util.m"
      /* tailcall optimized into a loop */
#line 947 "error_util.m"
      {
#line 947 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 947 "error_util.m"
        if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "error_util.m"
          {
#line 948 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_7 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6;
#line 947 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_PrintedSome_5 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4;
#line 947 "error_util.m"
          }
#line 947 "error_util.m"
        else
#line 950 "error_util.m"
          {
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__Msg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__Msgs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__Components_29;
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__MaybeContext_30;
#line 950 "error_util.m"
            MR_Integer parse_tree__error_util__ExtraIndentLevel_32;
#line 950 "error_util.m"
            MR_Integer parse_tree__error_util__Indent_33;
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_41_41;
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 950 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 16224 "parse_tree.error_util.c"
            if (((MR_tag((MR_Word) parse_tree__error_util__Msg_21)) == (MR_mktag((MR_Integer) 1))))
#line 16226 "parse_tree.error_util.c"
              {
#line 16228 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__TreatAsFirst_31;

#line 957 "error_util.m"
                parse_tree__error_util__MaybeContext_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 0)));
#line 957 "error_util.m"
                parse_tree__error_util__TreatAsFirst_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 957 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 2)));
#line 957 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_21, (MR_Integer) 3)));
#line 963 "error_util.m"
#line 963 "error_util.m"
                switch (parse_tree__error_util__TreatAsFirst_31) {
#line 963 "error_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 963 "error_util.m"
                  case (MR_Integer) 1:
#line 964 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 963 "error_util.m"
                    break;
#line 963 "error_util.m"
                  case (MR_Integer) 0:
#line 962 "error_util.m"
                    parse_tree__error_util__STATE_VARIABLE_First_41_41 = (MR_Integer) 0;
#line 963 "error_util.m"
                    break;
#line 963 "error_util.m"
                }
#line 16258 "parse_tree.error_util.c"
              }
#line 16260 "parse_tree.error_util.c"
            else
#line 16262 "parse_tree.error_util.c"
              {
#line 16264 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__SimpleContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 0)));

#line 952 "error_util.m"
                parse_tree__error_util__Components_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_21, (MR_Integer) 1)));
#line 953 "error_util.m"
                {
#line 953 "error_util.m"
                  parse_tree__error_util__MaybeContext_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_30, 0) = ((MR_Box) (parse_tree__error_util__SimpleContext_28));
#line 953 "error_util.m"
                }
#line 955 "error_util.m"
                parse_tree__error_util__ExtraIndentLevel_32 = (MR_Integer) 0;
#line 964 "error_util.m"
                parse_tree__error_util__STATE_VARIABLE_First_41_41 = parse_tree__error_util__HeadVar__3_3;
#line 16281 "parse_tree.error_util.c"
              }
#line 967 "error_util.m"
            parse_tree__error_util__Indent_33 = (parse_tree__error_util__ExtraIndentLevel_32 * (MR_Integer) 2);
#line 968 "error_util.m"
            {
#line 968 "error_util.m"
              parse_tree__error_util__write_msg_components_12_p_0(parse_tree__error_util__Components_29, parse_tree__error_util__MaybeContext_30, parse_tree__error_util__Indent_33, parse_tree__error_util__HeadVar__2_2, parse_tree__error_util__STATE_VARIABLE_First_41_41, &parse_tree__error_util__STATE_VARIABLE_First_43_43, parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4, &parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6, &parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45);
            }
#line 970 "error_util.m"
            /* direct tailcall eliminated */
#line 970 "error_util.m"
            {
#line 970 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__1__tmp_copy_1 = parse_tree__error_util__Msgs_22;
#line 970 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__3__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_First_43_43;
#line 970 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_44_44;
#line 970 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_45_45;

#line 970 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_6 = parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0__tmp_copy_6;
#line 970 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_PrintedSome_0_4 = parse_tree__error_util__STATE_VARIABLE_PrintedSome_0__tmp_copy_4;
#line 970 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = parse_tree__error_util__HeadVar__3__tmp_copy_3;
#line 970 "error_util.m"
              parse_tree__error_util__HeadVar__1_1 = parse_tree__error_util__HeadVar__1__tmp_copy_1;
#line 970 "error_util.m"
            }
#line 970 "error_util.m"
            continue;
#line 950 "error_util.m"
          }
#line 947 "error_util.m"
      }
#line 947 "error_util.m"
      break;
#line 947 "error_util.m"
    }
#line 941 "error_util.m"
}

#line 889 "error_util.m"
static void MR_CALL 
parse_tree__error_util__do_write_error_spec_10_p_0(
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__Globals_11,
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__Spec_12,
#line 889 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23,
#line 889 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_24,
#line 889 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25,
#line 889 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_26,
#line 889 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27,
#line 889 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28)
#line 889 "error_util.m"
{
#line 895 "error_util.m"
  {
#line 895 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 895 "error_util.m"
    MR_Word parse_tree__error_util__Severity_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 0)));
#line 895 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 2)));
#line 895 "error_util.m"
    MR_Word parse_tree__error_util__PrintedSome_20;
#line 895 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActual_21;
#line 896 "error_util.m"
    MR_Word parse_tree__error_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_12, (MR_Integer) 1)));

#line 897 "error_util.m"
    {
#line 897 "error_util.m"
      parse_tree__error_util__do_write_error_msgs_9_p_0(parse_tree__error_util__Msgs_19, parse_tree__error_util__Globals_11, (MR_Integer) 0, (MR_Integer) 1, &parse_tree__error_util__PrintedSome_20, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_0_27, parse_tree__error_util__STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 899 "error_util.m"
    {
#line 899 "error_util.m"
      parse_tree__error_util__MaybeActual_21 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_11, parse_tree__error_util__Severity_17);
    }
#line 910 "error_util.m"
#line 910 "error_util.m"
    switch (parse_tree__error_util__PrintedSome_20) {
#line 910 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 910 "error_util.m"
      case (MR_Integer) 1:
#line 901 "error_util.m"
        {
#line 901 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 901 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 901 "error_util.m"
        }
#line 910 "error_util.m"
        break;
#line 910 "error_util.m"
      case (MR_Integer) 0:
#line 925 "error_util.m"
        if ((parse_tree__error_util__MaybeActual_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 926 "error_util.m"
          {
#line 927 "error_util.m"
            {
#line 927 "error_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "predicate \140parse_tree.error_util.do_write_error_spec\'/10", (MR_String) "MaybeActual is no");
#line 927 "error_util.m"
              return;
            }
#line 926 "error_util.m"
          }
#line 925 "error_util.m"
        else
#line 913 "error_util.m"
          {
#line 913 "error_util.m"
            MR_Word parse_tree__error_util__Actual_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActual_21, (MR_Integer) 0)));

#line 918 "error_util.m"
#line 918 "error_util.m"
            switch (parse_tree__error_util__Actual_22) {
#line 918 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 918 "error_util.m"
              case (MR_Integer) 0:
#line 915 "error_util.m"
                {
#line 916 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25 + (MR_Integer) 1);
#line 917 "error_util.m"
                  {
#line 917 "error_util.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  }
#line 915 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 915 "error_util.m"
                }
#line 918 "error_util.m"
                break;
#line 918 "error_util.m"
              case (MR_Integer) 2:
#line 923 "error_util.m"
                {
#line 923 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23;
#line 923 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 923 "error_util.m"
                }
#line 918 "error_util.m"
                break;
#line 918 "error_util.m"
              case (MR_Integer) 1:
#line 919 "error_util.m"
                {
#line 920 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumWarnings_24 = (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_23 + (MR_Integer) 1);
#line 921 "error_util.m"
                  {
#line 921 "error_util.m"
                    libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_11);
                  }
#line 919 "error_util.m"
                  *parse_tree__error_util__STATE_VARIABLE_NumErrors_26 = parse_tree__error_util__STATE_VARIABLE_NumErrors_0_25;
#line 919 "error_util.m"
                }
#line 918 "error_util.m"
                break;
#line 918 "error_util.m"
            }
#line 913 "error_util.m"
          }
#line 910 "error_util.m"
        break;
#line 910 "error_util.m"
    }
#line 895 "error_util.m"
  }
#line 889 "error_util.m"
}

#line 836 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_specs_3_p_0(
#line 836 "error_util.m"
  MR_Word parse_tree__error_util__SpecA_4,
#line 836 "error_util.m"
  MR_Word parse_tree__error_util__SpecB_5,
#line 836 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 836 "error_util.m"
{
#line 839 "error_util.m"
  {
#line 839 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 839 "error_util.m"
    MR_Word parse_tree__error_util__MsgsA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 2)));
#line 839 "error_util.m"
    MR_Word parse_tree__error_util__MsgsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 2)));
#line 839 "error_util.m"
    MR_Word parse_tree__error_util__ContextsA_13;
#line 839 "error_util.m"
    MR_Word parse_tree__error_util__ContextsB_14;
#line 839 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_15;
#line 840 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 0)));
#line 840 "error_util.m"
    MR_Word parse_tree__error_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecA_4, (MR_Integer) 1)));
#line 841 "error_util.m"
    MR_Word parse_tree__error_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 0)));
#line 841 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__SpecB_5, (MR_Integer) 1)));

#line 842 "error_util.m"
    {
#line 842 "error_util.m"
      parse_tree__error_util__ContextsA_13 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsA_9);
    }
#line 843 "error_util.m"
    {
#line 843 "error_util.m"
      parse_tree__error_util__ContextsB_14 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__MsgsB_12);
    }
#line 844 "error_util.m"
    {
#line 844 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[5], &parse_tree__error_util__ContextResult_15, ((MR_Box) (parse_tree__error_util__ContextsA_13)), ((MR_Box) (parse_tree__error_util__ContextsB_14)));
    }
#line 845 "error_util.m"
    parse_tree__error_util__succeeded = (parse_tree__error_util__ContextResult_15 == (MR_Integer) 0);
#line 847 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 846 "error_util.m"
      {
#line 846 "error_util.m"
        parse_tree__error_util____Compare____error_spec_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__SpecA_4, parse_tree__error_util__SpecB_5);
#line 846 "error_util.m"
        return;
      }
#line 847 "error_util.m"
    else
#line 848 "error_util.m"
      *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_15;
#line 839 "error_util.m"
  }
#line 836 "error_util.m"
}

#line 801 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__Component_6,
#line 801 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18,
#line 801 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_ComponentCord_19)
#line 801 "error_util.m"
{
#line 807 "error_util.m"
  {
#line 807 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 807 "error_util.m"
#line 807 "error_util.m"
    switch (MR_tag((MR_Word) parse_tree__error_util__Component_6)) {
#line 807 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 807 "error_util.m"
      case (MR_Integer) 0:
#line 807 "error_util.m"
      case (MR_Integer) 2:
#line 832 "error_util.m"
        {
#line 833 "error_util.m"
          {
#line 833 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 832 "error_util.m"
        }
#line 807 "error_util.m"
        break;
#line 807 "error_util.m"
      case (MR_Integer) 1:
#line 807 "error_util.m"
        {
#line 807 "error_util.m"
          MR_Word parse_tree__error_util__Option_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) & (MR_Integer) 1023);
#line 807 "error_util.m"
          MR_Word parse_tree__error_util__RequiredValue_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 0)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
#line 807 "error_util.m"
          MR_Word parse_tree__error_util__EmbeddedComponents_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Component_6, (MR_Integer) 1)));
#line 807 "error_util.m"
          MR_Word parse_tree__error_util__OptionValue_11;

#line 812 "error_util.m"
          {
#line 812 "error_util.m"
            libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_5, parse_tree__error_util__Option_8, &parse_tree__error_util__OptionValue_11);
          }
#line 813 "error_util.m"
          parse_tree__error_util__succeeded = (parse_tree__error_util__OptionValue_11 == parse_tree__error_util__RequiredValue_9);
#line 816 "error_util.m"
          if (parse_tree__error_util__succeeded)
#line 814 "error_util.m"
            {
#line 814 "error_util.m"
              MR_Word parse_tree__error_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 814 "error_util.m"
              MR_Word parse_tree__error_util__V_22_22;

#line 815 "error_util.m"
              {
#line 815 "error_util.m"
                parse_tree__error_util__V_22_22 = mercury__cord__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__EmbeddedComponents_10);
              }
#line 815 "error_util.m"
              {
#line 815 "error_util.m"
                *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_23_23, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, parse_tree__error_util__V_22_22);
              }
#line 814 "error_util.m"
            }
#line 816 "error_util.m"
          else
#line 816 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18;
#line 807 "error_util.m"
        }
#line 807 "error_util.m"
        break;
#line 807 "error_util.m"
      case (MR_Integer) 3:
#line 832 "error_util.m"
        {
#line 833 "error_util.m"
          {
#line 833 "error_util.m"
            *parse_tree__error_util__STATE_VARIABLE_ComponentCord_19 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0, parse_tree__error_util__STATE_VARIABLE_ComponentCord_0_18, ((MR_Box) (parse_tree__error_util__Component_6)));
          }
#line 832 "error_util.m"
        }
#line 807 "error_util.m"
        break;
#line 807 "error_util.m"
    }
#line 807 "error_util.m"
  }
#line 801 "error_util.m"
}

#line 793 "error_util.m"
static void MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1(
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 793 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 793 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 793 "error_util.m"
{
#line 793 "error_util.m"
  {
#line 793 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 793 "error_util.m"
    MR_Word parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19;

#line 793 "error_util.m"
    {
#line 793 "error_util.m"
      parse_tree__error_util__remove_conditionals_in_msg_component_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19);
    }
#line 793 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_STATE_VARIABLE_ComponentCord_19));
#line 793 "error_util.m"
  }
#line 793 "error_util.m"
}

#line 779 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_msg_3_p_0(
#line 779 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 779 "error_util.m"
  MR_Word parse_tree__error_util__Msg0_5,
#line 779 "error_util.m"
  MR_Word * parse_tree__error_util__Msg_6)
#line 779 "error_util.m"
{
#line 782 "error_util.m"
  {
#line 782 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_21_21;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__Components0_8;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContext_9;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__TreatAsFirst_10;
#line 782 "error_util.m"
    MR_Integer parse_tree__error_util__ExtraIndent_11;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__ComponentCord_12;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__Components_13;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 782 "error_util.m"
    MR_Word parse_tree__error_util__V_17_17;
#line 793 "error_util.m"
    MR_Box parse_tree__error_util__conv1_ComponentCord_12;
#line 799 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;
#line 799 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;

#line 789 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__Msg0_5)) == (MR_mktag((MR_Integer) 1))))
#line 790 "error_util.m"
      {
#line 790 "error_util.m"
        parse_tree__error_util__MaybeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));
#line 790 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 790 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 2)));
#line 790 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg0_5, (MR_Integer) 3)));
#line 790 "error_util.m"
      }
#line 789 "error_util.m"
    else
#line 785 "error_util.m"
      {
#line 785 "error_util.m"
        MR_Word parse_tree__error_util__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 0)));

#line 785 "error_util.m"
        parse_tree__error_util__Components0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg0_5, (MR_Integer) 1)));
#line 786 "error_util.m"
        {
#line 786 "error_util.m"
          parse_tree__error_util__MaybeContext_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContext_9, 0) = ((MR_Box) (parse_tree__error_util__Context_7));
#line 786 "error_util.m"
        }
#line 787 "error_util.m"
        parse_tree__error_util__TreatAsFirst_10 = (MR_Integer) 1;
#line 788 "error_util.m"
        parse_tree__error_util__ExtraIndent_11 = (MR_Integer) 0;
#line 785 "error_util.m"
      }
#line 16760 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_21_21 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_component_0;
#line 793 "error_util.m"
    {
#line 793 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 793 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_7[0]));
#line 793 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_msg_3_p_0_1));
#line 793 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 793 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 793 "error_util.m"
    }
#line 794 "error_util.m"
    {
#line 794 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__cord__init_0_f_0(parse_tree__error_util__TypeCtorInfo_21_21);
    }
#line 793 "error_util.m"
    {
#line 793 "error_util.m"
      mercury__list__foldl_4_p_0(parse_tree__error_util__TypeCtorInfo_21_21, (MR_Word) &parse_tree__error_util_scalar_common_1[4], parse_tree__error_util__V_16_16, parse_tree__error_util__Components0_8, ((MR_Box) (parse_tree__error_util__V_17_17)), &parse_tree__error_util__conv1_ComponentCord_12);
    }
#line 793 "error_util.m"
    parse_tree__error_util__ComponentCord_12 = ((MR_Word) parse_tree__error_util__conv1_ComponentCord_12);
#line 795 "error_util.m"
    {
#line 795 "error_util.m"
      parse_tree__error_util__Components_13 = mercury__cord__list_1_f_0(parse_tree__error_util__TypeCtorInfo_21_21, parse_tree__error_util__ComponentCord_12);
    }
#line 799 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Components_13)) == (MR_mktag((MR_Integer) 1)));
#line 799 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 799 "error_util.m"
      {
#line 799 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 0)));
#line 799 "error_util.m"
        parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_13, (MR_Integer) 1)));
#line 796 "error_util.m"
        {
#line 796 "error_util.m"
          MR_Word base;
#line 796 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 796 "error_util.m"
          *parse_tree__error_util__Msg_6 = base;
#line 796 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__MaybeContext_9));
#line 796 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__error_util__TreatAsFirst_10));
#line 796 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__error_util__ExtraIndent_11));
#line 796 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__error_util__Components_13));
#line 796 "error_util.m"
        }
#line 796 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 799 "error_util.m"
      }
#line 782 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 782 "error_util.m"
  }
#line 779 "error_util.m"
}

#line 758 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1(
#line 758 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 758 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 758 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 758 "error_util.m"
{
#line 758 "error_util.m"
  {
#line 758 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 758 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 758 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Msg_6;

#line 758 "error_util.m"
    {
#line 758 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_msg_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Msg_6);
    }
#line 758 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 758 "error_util.m"
      {
#line 758 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Msg_6));
#line 758 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 758 "error_util.m"
      }
#line 758 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 758 "error_util.m"
  }
#line 758 "error_util.m"
}

#line 752 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__remove_conditionals_in_spec_3_p_0(
#line 752 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 752 "error_util.m"
  MR_Word parse_tree__error_util__Spec0_5,
#line 752 "error_util.m"
  MR_Word * parse_tree__error_util__Spec_6)
#line 752 "error_util.m"
{
#line 755 "error_util.m"
  {
#line 755 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_19_19;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__Severity0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 0)));
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__Phase_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 1)));
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__Msgs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec0_5, (MR_Integer) 2)));
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__MaybeActualSeverity_10;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__Msgs_11;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__ActualSeverity_12;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__Severity_15;
#line 755 "error_util.m"
    MR_Word parse_tree__error_util__V_16_16;
#line 761 "error_util.m"
    MR_Word parse_tree__error_util__V_13_13;
#line 761 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 757 "error_util.m"
    {
#line 757 "error_util.m"
      parse_tree__error_util__MaybeActualSeverity_10 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Severity0_7);
    }
#line 16917 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0;
#line 758 "error_util.m"
    {
#line 758 "error_util.m"
      parse_tree__error_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[3]));
#line 758 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__remove_conditionals_in_spec_3_p_0_1));
#line 758 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_16_16, 3) = ((MR_Box) (parse_tree__error_util__Globals_4));
#line 758 "error_util.m"
    }
#line 758 "error_util.m"
    {
#line 758 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__TypeCtorInfo_19_19, parse_tree__error_util__V_16_16, parse_tree__error_util__Msgs0_9, &parse_tree__error_util__Msgs_11);
    }
#line 761 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Msgs_11)) == (MR_mktag((MR_Integer) 1)));
#line 761 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 761 "error_util.m"
      {
#line 761 "error_util.m"
        parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 0)));
#line 761 "error_util.m"
        parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msgs_11, (MR_Integer) 1)));
#line 760 "error_util.m"
        parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__MaybeActualSeverity_10)) == (MR_mktag((MR_Integer) 1)));
#line 760 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 760 "error_util.m"
          {
#line 760 "error_util.m"
            parse_tree__error_util__ActualSeverity_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeActualSeverity_10, (MR_Integer) 0)));
#line 766 "error_util.m"
#line 766 "error_util.m"
            switch (parse_tree__error_util__ActualSeverity_12) {
#line 766 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 766 "error_util.m"
              case (MR_Integer) 0:
#line 765 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "error_util.m"
                break;
#line 766 "error_util.m"
              case (MR_Integer) 2:
#line 771 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 766 "error_util.m"
                break;
#line 766 "error_util.m"
              case (MR_Integer) 1:
#line 768 "error_util.m"
                parse_tree__error_util__Severity_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 766 "error_util.m"
                break;
#line 766 "error_util.m"
            }
#line 773 "error_util.m"
            {
#line 773 "error_util.m"
              MR_Word base;
#line 773 "error_util.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 773 "error_util.m"
              *parse_tree__error_util__Spec_6 = base;
#line 773 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__error_util__Severity_15));
#line 773 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__error_util__Phase_8));
#line 773 "error_util.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__error_util__Msgs_11));
#line 773 "error_util.m"
            }
#line 773 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 760 "error_util.m"
          }
#line 761 "error_util.m"
      }
#line 755 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 755 "error_util.m"
  }
#line 752 "error_util.m"
}

#line 646 "error_util.m"
static void MR_CALL 
parse_tree__error_util__compare_error_msgs_3_p_0(
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__MsgA_4,
#line 646 "error_util.m"
  MR_Word parse_tree__error_util__MsgB_5,
#line 646 "error_util.m"
  MR_Word * parse_tree__error_util__Result_6)
#line 646 "error_util.m"
{
#line 649 "error_util.m"
  {
#line 649 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 649 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextA_7;
#line 649 "error_util.m"
    MR_Word parse_tree__error_util__MaybeContextB_8;
#line 649 "error_util.m"
    MR_Word parse_tree__error_util__ContextResult_9;

#line 667 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgA_4)) == (MR_mktag((MR_Integer) 1))))
#line 667 "error_util.m"
      {
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 670 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 3)));
#line 670 "error_util.m"
        MR_Integer parse_tree__error_util__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 2)));
#line 670 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 667 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "error_util.m"
        else
#line 671 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = parse_tree__error_util__V_28_28;
#line 667 "error_util.m"
      }
#line 667 "error_util.m"
    else
#line 667 "error_util.m"
      {
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 0)));
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgA_4, (MR_Integer) 1)));

#line 668 "error_util.m"
        {
#line 668 "error_util.m"
          parse_tree__error_util__MaybeContextA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextA_7, 0) = ((MR_Box) (parse_tree__error_util__Context_14));
#line 668 "error_util.m"
        }
#line 667 "error_util.m"
      }
#line 667 "error_util.m"
    if (((MR_tag((MR_Word) parse_tree__error_util__MsgB_5)) == (MR_mktag((MR_Integer) 1))))
#line 667 "error_util.m"
      {
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 670 "error_util.m"
        MR_Word parse_tree__error_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 3)));
#line 670 "error_util.m"
        MR_Integer parse_tree__error_util__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 2)));
#line 670 "error_util.m"
        MR_Word parse_tree__error_util__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 667 "error_util.m"
        if ((parse_tree__error_util__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 674 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 667 "error_util.m"
        else
#line 671 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = parse_tree__error_util__V_45_45;
#line 667 "error_util.m"
      }
#line 667 "error_util.m"
    else
#line 667 "error_util.m"
      {
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 0)));
#line 667 "error_util.m"
        MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__MsgB_5, (MR_Integer) 1)));

#line 668 "error_util.m"
        {
#line 668 "error_util.m"
          parse_tree__error_util__MaybeContextB_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeContextB_8, 0) = ((MR_Box) (parse_tree__error_util__Context_31));
#line 668 "error_util.m"
        }
#line 667 "error_util.m"
      }
#line 652 "error_util.m"
    {
#line 652 "error_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__error_util_scalar_common_1[3], &parse_tree__error_util__ContextResult_9, ((MR_Box) (parse_tree__error_util__MaybeContextA_7)), ((MR_Box) (parse_tree__error_util__MaybeContextB_8)));
    }
#line 656 "error_util.m"
#line 656 "error_util.m"
    switch (parse_tree__error_util__ContextResult_9) {
#line 656 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 656 "error_util.m"
      case (MR_Integer) 1:
#line 656 "error_util.m"
      case (MR_Integer) 2:
#line 660 "error_util.m"
        *parse_tree__error_util__Result_6 = parse_tree__error_util__ContextResult_9;
#line 656 "error_util.m"
        break;
#line 656 "error_util.m"
      case (MR_Integer) 0:
#line 655 "error_util.m"
        {
#line 655 "error_util.m"
          parse_tree__error_util____Compare____error_msg_0_0(parse_tree__error_util__Result_6, parse_tree__error_util__MsgA_4, parse_tree__error_util__MsgB_5);
#line 655 "error_util.m"
          return;
        }
#line 656 "error_util.m"
        break;
#line 656 "error_util.m"
    }
#line 649 "error_util.m"
  }
#line 646 "error_util.m"
}

#line 632 "error_util.m"
static MR_Word MR_CALL 
parse_tree__error_util__project_msgs_contexts_1_f_0(
#line 632 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 632 "error_util.m"
{
#line 634 "error_util.m"
  {
#line 634 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 634 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 634 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "error_util.m"
    else
#line 635 "error_util.m"
      {
#line 635 "error_util.m"
        MR_Word parse_tree__error_util__Msg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "error_util.m"
        MR_Word parse_tree__error_util__Msgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "error_util.m"
        MR_Word parse_tree__error_util__TailContexts_6;

#line 636 "error_util.m"
        {
#line 636 "error_util.m"
          parse_tree__error_util__TailContexts_6 = parse_tree__error_util__project_msgs_contexts_1_f_0(parse_tree__error_util__Msgs_4);
        }
#line 17186 "parse_tree.error_util.c"
        if (((MR_tag((MR_Word) parse_tree__error_util__Msg_3)) == (MR_mktag((MR_Integer) 1))))
#line 17188 "parse_tree.error_util.c"
          {
#line 17190 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 670 "error_util.m"
            MR_Word parse_tree__error_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 3)));
#line 670 "error_util.m"
            MR_Integer parse_tree__error_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 2)));
#line 670 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 17199 "parse_tree.error_util.c"
            if ((parse_tree__error_util__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__TailContexts_6;
#line 17203 "parse_tree.error_util.c"
            else
#line 17205 "parse_tree.error_util.c"
              {
#line 17207 "parse_tree.error_util.c"
                MR_Word parse_tree__error_util__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, (MR_Integer) 0)));

#line 640 "error_util.m"
                {
#line 640 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 640 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 640 "error_util.m"
                }
#line 17220 "parse_tree.error_util.c"
              }
#line 17222 "parse_tree.error_util.c"
          }
#line 17224 "parse_tree.error_util.c"
        else
#line 17226 "parse_tree.error_util.c"
          {
#line 17228 "parse_tree.error_util.c"
            MR_Word parse_tree__error_util__Context_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 0)));
#line 667 "error_util.m"
            MR_Word parse_tree__error_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Msg_3, (MR_Integer) 1)));

#line 640 "error_util.m"
            {
#line 640 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__Context_28));
#line 640 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__TailContexts_6));
#line 640 "error_util.m"
            }
#line 17243 "parse_tree.error_util.c"
          }
#line 635 "error_util.m"
      }
#line 634 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 634 "error_util.m"
  }
#line 632 "error_util.m"
}

#line 571 "error_util.m"
static void MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_4_p_0(
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2,
#line 571 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3,
#line 571 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4)
#line 571 "error_util.m"
{
#line 574 "error_util.m"
  while (MR_TRUE)
#line 574 "error_util.m"
    {
#line 574 "error_util.m"
      /* tailcall optimized into a loop */
#line 574 "error_util.m"
      {
#line 574 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;

#line 574 "error_util.m"
        if ((parse_tree__error_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 574 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeWorst_4 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 574 "error_util.m"
        else
#line 575 "error_util.m"
          {
#line 575 "error_util.m"
            MR_Word parse_tree__error_util__Spec_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 0)));
#line 575 "error_util.m"
            MR_Word parse_tree__error_util__Specs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "error_util.m"
            MR_Word parse_tree__error_util__Severity_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 0)));
#line 575 "error_util.m"
            MR_Word parse_tree__error_util__MaybeThis_16;
#line 575 "error_util.m"
            MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;
#line 576 "error_util.m"
            MR_Word parse_tree__error_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 1)));
#line 576 "error_util.m"
            MR_Word parse_tree__error_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__Spec_10, (MR_Integer) 2)));

#line 577 "error_util.m"
            {
#line 577 "error_util.m"
              parse_tree__error_util__MaybeThis_16 = parse_tree__error_util__actual_error_severity_2_f_0(parse_tree__error_util__HeadVar__1_1, parse_tree__error_util__Severity_13);
            }
#line 581 "error_util.m"
            if ((parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__MaybeThis_16;
#line 581 "error_util.m"
            else
#line 581 "error_util.m"
              {
#line 581 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3, (MR_Integer) 0)));

#line 581 "error_util.m"
                if ((parse_tree__error_util__MaybeThis_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "error_util.m"
                  parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3;
#line 581 "error_util.m"
                else
#line 585 "error_util.m"
                  {
#line 585 "error_util.m"
                    MR_Word parse_tree__error_util__This_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeThis_16, (MR_Integer) 0)));
#line 585 "error_util.m"
                    MR_Word parse_tree__error_util__V_23_23;

#line 587 "error_util.m"
                    {
#line 587 "error_util.m"
                      parse_tree__error_util__V_23_23 = parse_tree__error_util__worst_severity_2_f_0(parse_tree__error_util__V_26_26, parse_tree__error_util__This_19);
                    }
#line 587 "error_util.m"
                    {
#line 587 "error_util.m"
                      parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "error_util.m"
                      MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_23_23));
#line 587 "error_util.m"
                    }
#line 585 "error_util.m"
                  }
#line 581 "error_util.m"
              }
#line 589 "error_util.m"
            /* direct tailcall eliminated */
#line 589 "error_util.m"
            {
#line 589 "error_util.m"
              MR_Word parse_tree__error_util__HeadVar__2__tmp_copy_2 = parse_tree__error_util__Specs_11;
#line 589 "error_util.m"
              MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_24_24;

#line 589 "error_util.m"
              parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0_3 = parse_tree__error_util__STATE_VARIABLE_MaybeWorst_0__tmp_copy_3;
#line 589 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__HeadVar__2__tmp_copy_2;
#line 589 "error_util.m"
            }
#line 589 "error_util.m"
            continue;
#line 575 "error_util.m"
          }
#line 574 "error_util.m"
      }
#line 574 "error_util.m"
      break;
#line 574 "error_util.m"
    }
#line 571 "error_util.m"
}

#line 498 "error_util.m"
void MR_CALL 
parse_tree__error_util__unable_to_open_file_4_p_0(
#line 498 "error_util.m"
  MR_String parse_tree__error_util__FileName_5,
#line 498 "error_util.m"
  MR_Word parse_tree__error_util__IOErr_6)
#line 498 "error_util.m"
{
#line 1847 "error_util.m"
  {
#line 1847 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1847 "error_util.m"
    MR_Word parse_tree__error_util__StdErr_8;
#line 1847 "error_util.m"
    MR_String parse_tree__error_util__V_17_17;

#line 1848 "error_util.m"
    {
#line 1848 "error_util.m"
      mercury__io__stderr_stream_3_p_0(&parse_tree__error_util__StdErr_8);
    }
#line 1849 "error_util.m"
    {
#line 1849 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "Unable to open file: \'");
    }
#line 1850 "error_util.m"
    {
#line 1850 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__FileName_5);
    }
#line 1851 "error_util.m"
    {
#line 1851 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, (MR_String) "\' because\n");
    }
#line 1852 "error_util.m"
    {
#line 1852 "error_util.m"
      parse_tree__error_util__V_17_17 = mercury__io__error_message_1_f_0(parse_tree__error_util__IOErr_6);
    }
#line 1852 "error_util.m"
    {
#line 1852 "error_util.m"
      mercury__io__write_string_4_p_0(parse_tree__error_util__StdErr_8, parse_tree__error_util__V_17_17);
    }
#line 1853 "error_util.m"
    {
#line 1853 "error_util.m"
      mercury__io__nl_3_p_0(parse_tree__error_util__StdErr_8);
    }
#line 1855 "error_util.m"
    {
#line 1855 "error_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 1855 "error_util.m"
      return;
    }
#line 1847 "error_util.m"
  }
#line 498 "error_util.m"
}

#line 490 "error_util.m"
void MR_CALL 
parse_tree__error_util__report_warning_6_p_0(
#line 490 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 490 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 490 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 490 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 490 "error_util.m"
{
#line 1841 "error_util.m"
  {
#line 1841 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1841 "error_util.m"
    MR_Word parse_tree__error_util__V_24_24;
#line 1841 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_34;
#line 1841 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_35;

#line 1842 "error_util.m"
    {
#line 1842 "error_util.m"
      libs__compiler_util__record_warning_3_p_0(parse_tree__error_util__Globals_7);
    }
#line 1138 "error_util.m"
    {
#line 1138 "error_util.m"
      parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1138 "error_util.m"
    }
#line 1152 "error_util.m"
    {
#line 1152 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_34);
    }
#line 1154 "error_util.m"
    {
#line 1154 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_35);
    }
#line 1155 "error_util.m"
    {
#line 1155 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_24_24, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_34, parse_tree__error_util__LimitErrorContextsMap_35, parse_tree__error_util__Components_10);
#line 1155 "error_util.m"
      return;
    }
#line 1841 "error_util.m"
  }
#line 490 "error_util.m"
}

#line 485 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__capitalize_1_f_0(
#line 485 "error_util.m"
  MR_String parse_tree__error_util__Str0_3)
#line 485 "error_util.m"
{
#line 1826 "error_util.m"
  {
#line 1826 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1826 "error_util.m"
    MR_String parse_tree__error_util__Str_4;
#line 1826 "error_util.m"
    MR_Word parse_tree__error_util__Chars0_5;
#line 1835 "error_util.m"
    MR_Word parse_tree__error_util__TailChars_7;
#line 1835 "error_util.m"
    MR_Char parse_tree__error_util__Char_8;
#line 1829 "error_util.m"
    MR_Char parse_tree__error_util__Char0_6;

#line 1827 "error_util.m"
    {
#line 1827 "error_util.m"
      parse_tree__error_util__Chars0_5 = mercury__string__to_char_list_1_f_0(parse_tree__error_util__Str0_3);
    }
#line 1829 "error_util.m"
    parse_tree__error_util__succeeded = ((MR_tag((MR_Word) parse_tree__error_util__Chars0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1829 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1829 "error_util.m"
      {
#line 1829 "error_util.m"
        parse_tree__error_util__Char0_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 0)));
#line 1829 "error_util.m"
        parse_tree__error_util__TailChars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars0_5, (MR_Integer) 1)));
#line 1830 "error_util.m"
        {
#line 1830 "error_util.m"
          parse_tree__error_util__succeeded = mercury__char__is_lower_1_p_0(parse_tree__error_util__Char0_6);
        }
#line 1829 "error_util.m"
        if (parse_tree__error_util__succeeded)
#line 1829 "error_util.m"
          {
#line 1831 "error_util.m"
            {
#line 1831 "error_util.m"
              parse_tree__error_util__Char_8 = mercury__char__to_upper_1_f_0(parse_tree__error_util__Char0_6);
            }
#line 1831 "error_util.m"
            parse_tree__error_util__succeeded = MR_TRUE;
#line 1829 "error_util.m"
          }
#line 1829 "error_util.m"
      }
#line 1835 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 1833 "error_util.m"
      {
#line 1833 "error_util.m"
        MR_Word parse_tree__error_util__Chars_9;

#line 1833 "error_util.m"
        {
#line 1833 "error_util.m"
          parse_tree__error_util__Chars_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1833 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 0) = ((MR_Box) (MR_Word) (parse_tree__error_util__Char_8));
#line 1833 "error_util.m"
          MR_hl_field(MR_mktag(1), parse_tree__error_util__Chars_9, 1) = ((MR_Box) (parse_tree__error_util__TailChars_7));
#line 1833 "error_util.m"
        }
#line 1834 "error_util.m"
        {
#line 1834 "error_util.m"
          return parse_tree__error_util__Str_4 = mercury__string__from_char_list_1_f_0(parse_tree__error_util__Chars_9);
        }
#line 1833 "error_util.m"
      }
#line 1835 "error_util.m"
    else
#line 1836 "error_util.m"
      parse_tree__error_util__Str_4 = parse_tree__error_util__Str0_3;
#line 1826 "error_util.m"
    return parse_tree__error_util__Str_4;
#line 1826 "error_util.m"
  }
#line 485 "error_util.m"
}

#line 480 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__add_quotes_1_f_0(
#line 480 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 480 "error_util.m"
{
#line 1824 "error_util.m"
  {
#line 1824 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1824 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1824 "error_util.m"
    MR_String parse_tree__error_util__V_5_5;

#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      parse_tree__error_util__V_5_5 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__Str_3, (MR_String) "\'");
    }
#line 1824 "error_util.m"
    {
#line 1824 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\140", parse_tree__error_util__V_5_5);
    }
#line 1824 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1824 "error_util.m"
  }
#line 480 "error_util.m"
}

#line 476 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__pred_or_func_to_string_1_f_0(
#line 476 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 476 "error_util.m"
{
#line 1821 "error_util.m"
  {
#line 1821 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1821 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1821 "error_util.m"
#line 1821 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 1821 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1821 "error_util.m"
      case (MR_Integer) 1:
#line 1822 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "function";
#line 1821 "error_util.m"
        break;
#line 1821 "error_util.m"
      case (MR_Integer) 0:
#line 1821 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "predicate";
#line 1821 "error_util.m"
        break;
#line 1821 "error_util.m"
    }
#line 1821 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1821 "error_util.m"
  }
#line 476 "error_util.m"
}

#line 474 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_and_arity_1_f_0(
#line 474 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 474 "error_util.m"
{
#line 1814 "error_util.m"
  {
#line 1814 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1814 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1814 "error_util.m"
    MR_Word parse_tree__error_util__SymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1814 "error_util.m"
    MR_Integer parse_tree__error_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1814 "error_util.m"
    MR_Word parse_tree__error_util__V_5_5;
#line 1814 "error_util.m"
    MR_Word parse_tree__error_util__V_7_7;
#line 1814 "error_util.m"
    MR_String parse_tree__error_util__V_8_8;
#line 1814 "error_util.m"
    MR_Word parse_tree__error_util__V_9_9;
#line 1814 "error_util.m"
    MR_Word parse_tree__error_util__V_11_11;
#line 1814 "error_util.m"
    MR_String parse_tree__error_util__V_12_12;

#line 1815 "error_util.m"
    {
#line 1815 "error_util.m"
      parse_tree__error_util__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1816 "error_util.m"
    {
#line 1816 "error_util.m"
      parse_tree__error_util__V_12_12 = mercury__string__int_to_string_1_f_0(parse_tree__error_util__Arity_4);
    }
#line 1816 "error_util.m"
    {
#line 1816 "error_util.m"
      parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1816 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1816 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19])));
#line 1816 "error_util.m"
    }
#line 1815 "error_util.m"
    {
#line 1815 "error_util.m"
      parse_tree__error_util__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 0) = ((MR_Box) ((MR_String) "/"));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_9_9, 1) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1815 "error_util.m"
    }
#line 1815 "error_util.m"
    {
#line 1815 "error_util.m"
      parse_tree__error_util__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 0) = ((MR_Box) (parse_tree__error_util__V_8_8));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_7_7, 1) = ((MR_Box) (parse_tree__error_util__V_9_9));
#line 1815 "error_util.m"
    }
#line 1815 "error_util.m"
    {
#line 1815 "error_util.m"
      parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1815 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1815 "error_util.m"
    }
#line 1815 "error_util.m"
    {
#line 1815 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_5_5);
    }
#line 1814 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1814 "error_util.m"
  }
#line 474 "error_util.m"
}

#line 472 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__describe_sym_name_1_f_0(
#line 472 "error_util.m"
  MR_Word parse_tree__error_util__SymName_3)
#line 472 "error_util.m"
{
#line 1818 "error_util.m"
  {
#line 1818 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1818 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_4_4;
#line 1818 "error_util.m"
    MR_Word parse_tree__error_util__V_6_6;
#line 1818 "error_util.m"
    MR_String parse_tree__error_util__V_7_7;

#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_7_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__error_util__SymName_3);
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 0) = ((MR_Box) (parse_tree__error_util__V_7_7));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[19])));
#line 1819 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      parse_tree__error_util__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 0) = ((MR_Box) ((MR_String) "\140"));
#line 1819 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_4_4, 1) = ((MR_Box) (parse_tree__error_util__V_6_6));
#line 1819 "error_util.m"
    }
#line 1819 "error_util.m"
    {
#line 1819 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = mercury__string__append_list_1_f_0(parse_tree__error_util__V_4_4);
    }
#line 1818 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1818 "error_util.m"
  }
#line 472 "error_util.m"
}

#line 468 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__error_pieces_to_string_1_f_0(
#line 468 "error_util.m"
  MR_Word parse_tree__error_util__Components_3)
#line 468 "error_util.m"
{
#line 1287 "error_util.m"
  {
#line 1287 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1287 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1288 "error_util.m"
    {
#line 1288 "error_util.m"
      return parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__error_pieces_to_string_2_2_f_0((MR_Integer) 0, parse_tree__error_util__Components_3);
    }
#line 1287 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1287 "error_util.m"
  }
#line 468 "error_util.m"
}

#line 464 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_maybe_with_context_6_p_0(
#line 464 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 464 "error_util.m"
  MR_Word parse_tree__error_util__MaybeContext_8,
#line 464 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 464 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 464 "error_util.m"
{
#line 1142 "error_util.m"
  {
#line 1142 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1142 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_24;
#line 1142 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_25;

#line 1152 "error_util.m"
    {
#line 1152 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_24);
    }
#line 1154 "error_util.m"
    {
#line 1154 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_25);
    }
#line 1155 "error_util.m"
    {
#line 1155 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__MaybeContext_8, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_24, parse_tree__error_util__LimitErrorContextsMap_25, parse_tree__error_util__Components_10);
#line 1155 "error_util.m"
      return;
    }
#line 1142 "error_util.m"
  }
#line 464 "error_util.m"
}

#line 461 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_6_p_0(
#line 461 "error_util.m"
  MR_Word parse_tree__error_util__Globals_7,
#line 461 "error_util.m"
  MR_Word parse_tree__error_util__Context_8,
#line 461 "error_util.m"
  MR_Integer parse_tree__error_util__Indent_9,
#line 461 "error_util.m"
  MR_Word parse_tree__error_util__Components_10)
#line 461 "error_util.m"
{
#line 1137 "error_util.m"
  {
#line 1137 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1137 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1137 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_25;
#line 1137 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_26;

#line 1138 "error_util.m"
    {
#line 1138 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__Context_8));
#line 1138 "error_util.m"
    }
#line 1152 "error_util.m"
    {
#line 1152 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_7, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_25);
    }
#line 1154 "error_util.m"
    {
#line 1154 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_7, &parse_tree__error_util__LimitErrorContextsMap_26);
    }
#line 1155 "error_util.m"
    {
#line 1155 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, parse_tree__error_util__V_15_15, parse_tree__error_util__Indent_9, parse_tree__error_util__MaybeMaxWidth_25, parse_tree__error_util__LimitErrorContextsMap_26, parse_tree__error_util__Components_10);
#line 1155 "error_util.m"
      return;
    }
#line 1137 "error_util.m"
  }
#line 461 "error_util.m"
}

#line 453 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_plain_with_progname_4_p_0(
#line 453 "error_util.m"
  MR_String parse_tree__error_util__ProgName_5,
#line 453 "error_util.m"
  MR_String parse_tree__error_util__Msg_6)
#line 453 "error_util.m"
{
#line 1121 "error_util.m"
  {
#line 1121 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsg_9;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__LinesInMsgPieces_10;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__Components_11;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 1121 "error_util.m"
    MR_String parse_tree__error_util__V_16_16;
#line 1121 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;

#line 1123 "error_util.m"
    {
#line 1123 "error_util.m"
      parse_tree__error_util__LinesInMsg_9 = mercury__string__split_at_char_2_f_0((MR_Char) 10, parse_tree__error_util__Msg_6);
    }
#line 1124 "error_util.m"
    {
#line 1124 "error_util.m"
      parse_tree__error_util__convert_lines_in_msg_to_pieces_2_p_0(parse_tree__error_util__LinesInMsg_9, &parse_tree__error_util__LinesInMsgPieces_10);
    }
#line 1125 "error_util.m"
    {
#line 1125 "error_util.m"
      parse_tree__error_util__V_16_16 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__ProgName_5, (MR_String) ":");
    }
#line 1125 "error_util.m"
    {
#line 1125 "error_util.m"
      parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "error_util.m"
      MR_hl_field(MR_mktag(2), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1125 "error_util.m"
    }
#line 1125 "error_util.m"
    {
#line 1125 "error_util.m"
      parse_tree__error_util__Components_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 0) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1125 "error_util.m"
      MR_hl_field(MR_mktag(1), parse_tree__error_util__Components_11, 1) = ((MR_Box) (parse_tree__error_util__LinesInMsgPieces_10));
#line 1125 "error_util.m"
    }
#line 1127 "error_util.m"
    {
#line 1127 "error_util.m"
      parse_tree__error_util__V_22_22 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &parse_tree__error_util_scalar_common_1[2]);
    }
#line 1126 "error_util.m"
    {
#line 1126 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[3]), parse_tree__error_util__V_22_22, parse_tree__error_util__Components_11);
#line 1126 "error_util.m"
      return;
    }
#line 1121 "error_util.m"
  }
#line 453 "error_util.m"
}

#line 445 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_pieces_plain_4_p_0(
#line 445 "error_util.m"
  MR_Word parse_tree__error_util__Globals_5,
#line 445 "error_util.m"
  MR_Word parse_tree__error_util__Components_6)
#line 445 "error_util.m"
{
#line 1117 "error_util.m"
  {
#line 1117 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1117 "error_util.m"
    MR_Word parse_tree__error_util__MaybeMaxWidth_22;
#line 1117 "error_util.m"
    MR_Word parse_tree__error_util__LimitErrorContextsMap_23;

#line 1152 "error_util.m"
    {
#line 1152 "error_util.m"
      libs__globals__lookup_maybe_int_option_3_p_0(parse_tree__error_util__Globals_5, (MR_Integer) 142, &parse_tree__error_util__MaybeMaxWidth_22);
    }
#line 1154 "error_util.m"
    {
#line 1154 "error_util.m"
      libs__globals__get_limit_error_contexts_map_2_p_0(parse_tree__error_util__Globals_5, &parse_tree__error_util__LimitErrorContextsMap_23);
    }
#line 1155 "error_util.m"
    {
#line 1155 "error_util.m"
      parse_tree__error_util__do_write_error_pieces_params_8_p_0((MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, parse_tree__error_util__MaybeMaxWidth_22, parse_tree__error_util__LimitErrorContextsMap_23, parse_tree__error_util__Components_6);
#line 1155 "error_util.m"
      return;
    }
#line 1117 "error_util.m"
  }
#line 445 "error_util.m"
}

#line 435 "error_util.m"
MR_String MR_CALL 
parse_tree__error_util__is_or_are_1_f_0(
#line 435 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_12,
#line 435 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 435 "error_util.m"
{
#line 1112 "error_util.m"
  {
#line 1112 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1112 "error_util.m"
    MR_String parse_tree__error_util__HeadVar__2_2;

#line 1112 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1112 "error_util.m"
      {
#line 1112 "error_util.m"
        parse_tree__error_util__HeadVar__2_2 = (MR_String) "";
#line 1113 "error_util.m"
        {
#line 1113 "error_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.error_util", (MR_String) "function \140parse_tree.error_util.is_or_are\'/1", (MR_String) "[]");
        }
#line 1112 "error_util.m"
      }
#line 1112 "error_util.m"
    else
#line 1112 "error_util.m"
      {
#line 1112 "error_util.m"
        MR_Word parse_tree__error_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1114 "error_util.m"
        MR_Box parse_tree__error_util__V_14_14 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1112 "error_util.m"
        if ((parse_tree__error_util__V_13_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "is";
#line 1112 "error_util.m"
        else
#line 1115 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = (MR_String) "are";
#line 1112 "error_util.m"
      }
#line 1112 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1112 "error_util.m"
  }
#line 435 "error_util.m"
}

#line 430 "error_util.m"
MR_Box MR_CALL 
parse_tree__error_util__choose_number_3_f_0(
#line 430 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_T_17,
#line 430 "error_util.m"
  MR_Word parse_tree__error_util__TypeInfo_for_U_18,
#line 430 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 430 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__2_2,
#line 430 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__3_3)
#line 430 "error_util.m"
{
#line 1108 "error_util.m"
  {
#line 1108 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1108 "error_util.m"
    MR_Box parse_tree__error_util__HeadVar__4_4;

#line 1108 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "error_util.m"
      parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1108 "error_util.m"
    else
#line 1108 "error_util.m"
      {
#line 1108 "error_util.m"
        MR_Word parse_tree__error_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1109 "error_util.m"
        MR_Box parse_tree__error_util__V_20_20 = (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0));

#line 1108 "error_util.m"
        if ((parse_tree__error_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__2_2;
#line 1108 "error_util.m"
        else
#line 1110 "error_util.m"
          parse_tree__error_util__HeadVar__4_4 = parse_tree__error_util__HeadVar__3_3;
#line 1108 "error_util.m"
      }
#line 1108 "error_util.m"
    return parse_tree__error_util__HeadVar__4_4;
#line 1108 "error_util.m"
  }
#line 430 "error_util.m"
}

#line 422 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_line_pieces_2_f_0(
#line 422 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 422 "error_util.m"
  MR_Word parse_tree__error_util__Final_2)
#line 422 "error_util.m"
{
#line 1102 "error_util.m"
  {
#line 1102 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1102 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 1102 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "error_util.m"
      parse_tree__error_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1102 "error_util.m"
    else
#line 1102 "error_util.m"
      {
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "error_util.m"
        MR_Word parse_tree__error_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1102 "error_util.m"
        if ((parse_tree__error_util__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "error_util.m"
          {
#line 1103 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1103 "error_util.m"
            MR_Word parse_tree__error_util__V_8_8;

#line 1103 "error_util.m"
            {
#line 1103 "error_util.m"
              parse_tree__error_util__V_8_8 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__Final_2, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[12]));
            }
#line 1103 "error_util.m"
            {
#line 1103 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_26_26, parse_tree__error_util__V_29_29, parse_tree__error_util__V_8_8);
            }
#line 1103 "error_util.m"
          }
#line 1102 "error_util.m"
        else
#line 1104 "error_util.m"
          {
#line 1104 "error_util.m"
            MR_Word parse_tree__error_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1104 "error_util.m"
            MR_Word parse_tree__error_util__V_17_17;
#line 1104 "error_util.m"
            MR_Word parse_tree__error_util__V_24_24;

#line 1106 "error_util.m"
            {
#line 1106 "error_util.m"
              parse_tree__error_util__V_24_24 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(parse_tree__error_util__V_28_28, parse_tree__error_util__Final_2);
            }
#line 1106 "error_util.m"
            {
#line 1106 "error_util.m"
              parse_tree__error_util__V_17_17 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[14]), parse_tree__error_util__V_24_24);
            }
#line 1105 "error_util.m"
            {
#line 1105 "error_util.m"
              parse_tree__error_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_27_27, parse_tree__error_util__V_29_29, parse_tree__error_util__V_17_17);
            }
#line 1104 "error_util.m"
          }
#line 1102 "error_util.m"
      }
#line 1102 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 1102 "error_util.m"
  }
#line 422 "error_util.m"
}

#line 411 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_list_to_pieces_1_f_0(
#line 411 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 411 "error_util.m"
{
#line 1095 "error_util.m"
  {
#line 1095 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1095 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1095 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1095 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1095 "error_util.m"
    else
#line 1095 "error_util.m"
      {
#line 1095 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1095 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1095 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1096 "error_util.m"
          {
#line 1096 "error_util.m"
            {
#line 1096 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1096 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1096 "error_util.m"
            }
#line 1096 "error_util.m"
          }
#line 1095 "error_util.m"
        else
#line 1095 "error_util.m"
          {
#line 1095 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1095 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1095 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1097 "error_util.m"
              {
#line 1097 "error_util.m"
                MR_Word parse_tree__error_util__V_10_10;
#line 1097 "error_util.m"
                MR_Word parse_tree__error_util__V_13_13;

#line 1097 "error_util.m"
                {
#line 1097 "error_util.m"
                  parse_tree__error_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1097 "error_util.m"
                }
#line 1097 "error_util.m"
                {
#line 1097 "error_util.m"
                  parse_tree__error_util__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_10_10, 1) = ((MR_Box) (parse_tree__error_util__V_13_13));
#line 1097 "error_util.m"
                }
#line 1097 "error_util.m"
                {
#line 1097 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1097 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_10_10));
#line 1097 "error_util.m"
                }
#line 1097 "error_util.m"
              }
#line 1095 "error_util.m"
            else
#line 1098 "error_util.m"
              {
#line 1098 "error_util.m"
                MR_Word parse_tree__error_util__V_21_21;
#line 1098 "error_util.m"
                MR_Word parse_tree__error_util__V_26_26;

#line 1099 "error_util.m"
                {
#line 1099 "error_util.m"
                  parse_tree__error_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1099 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1099 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18])));
#line 1099 "error_util.m"
                }
#line 1100 "error_util.m"
                {
#line 1100 "error_util.m"
                  parse_tree__error_util__V_26_26 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1100 "error_util.m"
                {
#line 1100 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__error_util__V_21_21, parse_tree__error_util__V_26_26);
                }
#line 1098 "error_util.m"
              }
#line 1095 "error_util.m"
          }
#line 1095 "error_util.m"
      }
#line 1095 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1095 "error_util.m"
  }
#line 411 "error_util.m"
}

#line 405 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__component_lists_to_pieces_1_f_0(
#line 405 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 405 "error_util.m"
{
#line 1087 "error_util.m"
  {
#line 1087 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1087 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1087 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1087 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1087 "error_util.m"
    else
#line 1087 "error_util.m"
      {
#line 1087 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1087 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1087 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1088 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = parse_tree__error_util__V_31_31;
#line 1087 "error_util.m"
        else
#line 1087 "error_util.m"
          {
#line 1087 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1087 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1087 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1089 "error_util.m"
              {
#line 1089 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1089 "error_util.m"
                MR_Word parse_tree__error_util__V_9_9;

#line 1090 "error_util.m"
                {
#line 1090 "error_util.m"
                  parse_tree__error_util__V_9_9 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[17]), parse_tree__error_util__V_33_33);
                }
#line 1090 "error_util.m"
                {
#line 1090 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_28_28, parse_tree__error_util__V_31_31, parse_tree__error_util__V_9_9);
                }
#line 1089 "error_util.m"
              }
#line 1087 "error_util.m"
            else
#line 1091 "error_util.m"
              {
#line 1091 "error_util.m"
                MR_Word parse_tree__error_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1091 "error_util.m"
                MR_Word parse_tree__error_util__V_20_20;
#line 1091 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;

#line 1093 "error_util.m"
                {
#line 1093 "error_util.m"
                  parse_tree__error_util__V_25_25 = parse_tree__error_util__component_lists_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1093 "error_util.m"
                {
#line 1093 "error_util.m"
                  parse_tree__error_util__V_20_20 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_1[18]), parse_tree__error_util__V_25_25);
                }
#line 1092 "error_util.m"
                {
#line 1092 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(parse_tree__error_util__TypeCtorInfo_29_29, parse_tree__error_util__V_31_31, parse_tree__error_util__V_20_20);
                }
#line 1091 "error_util.m"
              }
#line 1087 "error_util.m"
          }
#line 1087 "error_util.m"
      }
#line 1087 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1087 "error_util.m"
  }
#line 405 "error_util.m"
}

#line 399 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_quoted_pieces_1_f_0(
#line 399 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 399 "error_util.m"
{
#line 1079 "error_util.m"
  {
#line 1079 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1079 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1079 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1079 "error_util.m"
    else
#line 1079 "error_util.m"
      {
#line 1079 "error_util.m"
        MR_Word parse_tree__error_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1079 "error_util.m"
        MR_String parse_tree__error_util__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1079 "error_util.m"
        if ((parse_tree__error_util__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "error_util.m"
          {
#line 1080 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1080 "error_util.m"
            {
#line 1080 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1080 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1080 "error_util.m"
            }
#line 1080 "error_util.m"
            {
#line 1080 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1080 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1080 "error_util.m"
            }
#line 1080 "error_util.m"
          }
#line 1079 "error_util.m"
        else
#line 1079 "error_util.m"
          {
#line 1079 "error_util.m"
            MR_Word parse_tree__error_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 1)));
#line 1079 "error_util.m"
            MR_String parse_tree__error_util__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_31_31, (MR_Integer) 0)));

#line 1079 "error_util.m"
            if ((parse_tree__error_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "error_util.m"
              {
#line 1081 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1081 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1081 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1081 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1082 "error_util.m"
                {
#line 1082 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_11_11, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1082 "error_util.m"
                }
#line 1082 "error_util.m"
                {
#line 1082 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_16_16, 1) = ((MR_Box) (parse_tree__error_util__V_34_34));
#line 1082 "error_util.m"
                }
#line 1082 "error_util.m"
                {
#line 1082 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "error_util.m"
                }
#line 1082 "error_util.m"
                {
#line 1082 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1082 "error_util.m"
                }
#line 1082 "error_util.m"
                {
#line 1082 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1082 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1082 "error_util.m"
                }
#line 1081 "error_util.m"
              }
#line 1079 "error_util.m"
            else
#line 1083 "error_util.m"
              {
#line 1083 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1083 "error_util.m"
                MR_Word parse_tree__error_util__V_25_25;
#line 1083 "error_util.m"
                MR_Word parse_tree__error_util__V_28_28;

#line 1084 "error_util.m"
                {
#line 1084 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(3), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__V_32_32));
#line 1084 "error_util.m"
                }
#line 1085 "error_util.m"
                {
#line 1085 "error_util.m"
                  parse_tree__error_util__V_28_28 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(parse_tree__error_util__V_31_31);
                }
#line 1084 "error_util.m"
                {
#line 1084 "error_util.m"
                  parse_tree__error_util__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[16])));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_25_25, 1) = ((MR_Box) (parse_tree__error_util__V_28_28));
#line 1084 "error_util.m"
                }
#line 1084 "error_util.m"
                {
#line 1084 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1084 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1084 "error_util.m"
                }
#line 1083 "error_util.m"
              }
#line 1079 "error_util.m"
          }
#line 1079 "error_util.m"
      }
#line 1079 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1079 "error_util.m"
  }
#line 399 "error_util.m"
}

#line 395 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__list_to_pieces_1_f_0(
#line 395 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 395 "error_util.m"
{
#line 1073 "error_util.m"
  {
#line 1073 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1073 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1073 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "error_util.m"
    else
#line 1073 "error_util.m"
      {
#line 1073 "error_util.m"
        MR_Word parse_tree__error_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1073 "error_util.m"
        MR_String parse_tree__error_util__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1073 "error_util.m"
        if ((parse_tree__error_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1074 "error_util.m"
          {
#line 1074 "error_util.m"
            MR_Word parse_tree__error_util__V_5_5;

#line 1074 "error_util.m"
            {
#line 1074 "error_util.m"
              parse_tree__error_util__V_5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1074 "error_util.m"
              MR_hl_field(MR_mktag(3), parse_tree__error_util__V_5_5, 1) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1074 "error_util.m"
            }
#line 1074 "error_util.m"
            {
#line 1074 "error_util.m"
              parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_5_5));
#line 1074 "error_util.m"
              MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1074 "error_util.m"
            }
#line 1074 "error_util.m"
          }
#line 1073 "error_util.m"
        else
#line 1073 "error_util.m"
          {
#line 1073 "error_util.m"
            MR_Word parse_tree__error_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 1)));
#line 1073 "error_util.m"
            MR_String parse_tree__error_util__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__error_util__V_30_30, (MR_Integer) 0)));

#line 1073 "error_util.m"
            if ((parse_tree__error_util__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1075 "error_util.m"
              {
#line 1075 "error_util.m"
                MR_Word parse_tree__error_util__V_11_11;
#line 1075 "error_util.m"
                MR_Word parse_tree__error_util__V_12_12;
#line 1075 "error_util.m"
                MR_Word parse_tree__error_util__V_15_15;
#line 1075 "error_util.m"
                MR_Word parse_tree__error_util__V_16_16;

#line 1075 "error_util.m"
                {
#line 1075 "error_util.m"
                  parse_tree__error_util__V_11_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_11_11, 0) = ((MR_Box) (parse_tree__error_util__V_31_31));
#line 1075 "error_util.m"
                }
#line 1075 "error_util.m"
                {
#line 1075 "error_util.m"
                  parse_tree__error_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_16_16, 0) = ((MR_Box) (parse_tree__error_util__V_33_33));
#line 1075 "error_util.m"
                }
#line 1075 "error_util.m"
                {
#line 1075 "error_util.m"
                  parse_tree__error_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 0) = ((MR_Box) (parse_tree__error_util__V_16_16));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1075 "error_util.m"
                }
#line 1075 "error_util.m"
                {
#line 1075 "error_util.m"
                  parse_tree__error_util__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__error_util_scalar_common_1[15])));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__V_12_12, 1) = ((MR_Box) (parse_tree__error_util__V_15_15));
#line 1075 "error_util.m"
                }
#line 1075 "error_util.m"
                {
#line 1075 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_11_11));
#line 1075 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_12_12));
#line 1075 "error_util.m"
                }
#line 1075 "error_util.m"
              }
#line 1073 "error_util.m"
            else
#line 1076 "error_util.m"
              {
#line 1076 "error_util.m"
                MR_Word parse_tree__error_util__V_24_24;
#line 1076 "error_util.m"
                MR_String parse_tree__error_util__V_25_25;
#line 1076 "error_util.m"
                MR_Word parse_tree__error_util__V_27_27;

#line 1077 "error_util.m"
                {
#line 1077 "error_util.m"
                  parse_tree__error_util__V_25_25 = mercury__string__f_43_43_2_f_0(parse_tree__error_util__V_31_31, (MR_String) ",");
                }
#line 1077 "error_util.m"
                {
#line 1077 "error_util.m"
                  parse_tree__error_util__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "error_util.m"
                  MR_hl_field(MR_mktag(2), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__V_25_25));
#line 1077 "error_util.m"
                }
#line 1077 "error_util.m"
                {
#line 1077 "error_util.m"
                  parse_tree__error_util__V_27_27 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__error_util__V_30_30);
                }
#line 1077 "error_util.m"
                {
#line 1077 "error_util.m"
                  parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 1077 "error_util.m"
                  MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 1077 "error_util.m"
                }
#line 1076 "error_util.m"
              }
#line 1073 "error_util.m"
          }
#line 1073 "error_util.m"
      }
#line 1073 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1073 "error_util.m"
  }
#line 395 "error_util.m"
}

#line 390 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__string_to_words_piece_1_f_0(
#line 390 "error_util.m"
  MR_String parse_tree__error_util__Str_3)
#line 390 "error_util.m"
{
#line 1071 "error_util.m"
  {
#line 1071 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 1071 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 1071 "error_util.m"
    {
#line 1071 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1071 "error_util.m"
      MR_hl_field(MR_mktag(3), parse_tree__error_util__HeadVar__2_2, 1) = ((MR_Box) (parse_tree__error_util__Str_3));
#line 1071 "error_util.m"
    }
#line 1071 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 1071 "error_util.m"
  }
#line 390 "error_util.m"
}

#line 886 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_3(
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_4,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_5,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_6,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_7,
#line 886 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_8,
#line 886 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_9)
#line 886 "error_util.m"
{
#line 886 "error_util.m"
  {
#line 886 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 886 "error_util.m"
    MR_Integer parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24;
#line 886 "error_util.m"
    MR_Integer parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26;
#line 886 "error_util.m"
    MR_Word parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28;

#line 886 "error_util.m"
    {
#line 886 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Integer) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24, ((MR_Integer) parse_tree__error_util__wrapper_arg_4), &parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26, ((MR_Word) parse_tree__error_util__wrapper_arg_6), &parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28);
    }
#line 886 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv4_STATE_VARIABLE_NumWarnings_24));
#line 886 "error_util.m"
    *parse_tree__error_util__wrapper_arg_5 = ((MR_Box) (parse_tree__error_util__conv3_STATE_VARIABLE_NumErrors_26));
#line 886 "error_util.m"
    *parse_tree__error_util__wrapper_arg_7 = ((MR_Box) (parse_tree__error_util__conv2_STATE_VARIABLE_AlreadyPrintedVerbose_28));
#line 886 "error_util.m"
  }
#line 886 "error_util.m"
}

#line 750 "error_util.m"
static void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_2(
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 750 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 750 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 750 "error_util.m"
{
#line 750 "error_util.m"
  {
#line 750 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 750 "error_util.m"
    MR_Word parse_tree__error_util__conv1_Result_6;

#line 750 "error_util.m"
    {
#line 750 "error_util.m"
      parse_tree__error_util__compare_error_specs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv1_Result_6);
    }
#line 750 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv1_Result_6));
#line 750 "error_util.m"
  }
#line 750 "error_util.m"
}

#line 749 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0_1(
#line 749 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 749 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 749 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_2)
#line 749 "error_util.m"
{
#line 749 "error_util.m"
  {
#line 749 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 749 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 749 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Spec_6;

#line 749 "error_util.m"
    {
#line 749 "error_util.m"
      parse_tree__error_util__succeeded = parse_tree__error_util__remove_conditionals_in_spec_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__error_util__wrapper_arg_1), &parse_tree__error_util__conv0_Spec_6);
    }
#line 749 "error_util.m"
    if (parse_tree__error_util__succeeded)
#line 749 "error_util.m"
      {
#line 749 "error_util.m"
        *parse_tree__error_util__wrapper_arg_2 = ((MR_Box) (parse_tree__error_util__conv0_Spec_6));
#line 749 "error_util.m"
        parse_tree__error_util__succeeded = MR_TRUE;
#line 749 "error_util.m"
      }
#line 749 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 749 "error_util.m"
  }
#line 749 "error_util.m"
}

#line 282 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_specs_8_p_0(
#line 282 "error_util.m"
  MR_Word parse_tree__error_util__Specs0_9,
#line 282 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 282 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16,
#line 282 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_17,
#line 282 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18,
#line 282 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_19)
#line 282 "error_util.m"
{
#line 884 "error_util.m"
  {
#line 884 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_38_38;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_14_51;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__Specs_14;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__V_22_22;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__V_25_25;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__V_45_45;
#line 884 "error_util.m"
    MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_9_46;
#line 886 "error_util.m"
    MR_Word parse_tree__error_util__V_15_15;
#line 886 "error_util.m"
    MR_Box parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17;
#line 886 "error_util.m"
    MR_Box parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19;
#line 886 "error_util.m"
    MR_Box parse_tree__error_util__conv6_V_15_15;
#line 886 "error_util.m"
    MR_Box parse_tree__error_util__conv5_STATE_VARIABLE_IO_21;

#line 749 "error_util.m"
    {
#line 749 "error_util.m"
      parse_tree__error_util__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 749 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_4[1]));
#line 749 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_1));
#line 749 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 749 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_45_45, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 749 "error_util.m"
    }
#line 19066 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_14_51 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 749 "error_util.m"
    {
#line 749 "error_util.m"
      mercury__list__filter_map_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__TypeCtorInfo_14_51, parse_tree__error_util__V_45_45, parse_tree__error_util__Specs0_9, &parse_tree__error_util__STATE_VARIABLE_Specs_9_46);
    }
#line 750 "error_util.m"
    {
#line 750 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0(parse_tree__error_util__TypeCtorInfo_14_51, (MR_Word) &parse_tree__error_util_scalar_common_2[3], parse_tree__error_util__STATE_VARIABLE_Specs_9_46, &parse_tree__error_util__Specs_14);
    }
#line 886 "error_util.m"
    {
#line 886 "error_util.m"
      parse_tree__error_util__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 886 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 0) = ((MR_Box) (&parse_tree__error_util_scalar_common_6[0]));
#line 886 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 1) = ((MR_Box) (parse_tree__error_util__write_error_specs_8_p_0_3));
#line 886 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 886 "error_util.m"
      MR_hl_field(MR_mktag(0), parse_tree__error_util__V_22_22, 3) = ((MR_Box) (parse_tree__error_util__Globals_10));
#line 886 "error_util.m"
    }
#line 887 "error_util.m"
    {
#line 887 "error_util.m"
      parse_tree__error_util__V_25_25 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 19097 "parse_tree.error_util.c"
    parse_tree__error_util__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 886 "error_util.m"
    {
#line 886 "error_util.m"
      mercury__list__foldl4_10_p_2((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__error_util__TypeCtorInfo_38_38, parse_tree__error_util__TypeCtorInfo_38_38, (MR_Word) &parse_tree__error_util_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__error_util__V_22_22, parse_tree__error_util__Specs_14, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_16)), &parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17, ((MR_Box) (parse_tree__error_util__STATE_VARIABLE_NumErrors_0_18)), &parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19, ((MR_Box) (parse_tree__error_util__V_25_25)), &parse_tree__error_util__conv6_V_15_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv5_STATE_VARIABLE_IO_21);
    }
#line 886 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumWarnings_17 = ((MR_Integer) parse_tree__error_util__conv8_STATE_VARIABLE_NumWarnings_17);
#line 886 "error_util.m"
    *parse_tree__error_util__STATE_VARIABLE_NumErrors_19 = ((MR_Integer) parse_tree__error_util__conv7_STATE_VARIABLE_NumErrors_19);
#line 886 "error_util.m"
    parse_tree__error_util__V_15_15 = ((MR_Word) parse_tree__error_util__conv6_V_15_15);
#line 884 "error_util.m"
  }
#line 282 "error_util.m"
}

#line 280 "error_util.m"
void MR_CALL 
parse_tree__error_util__write_error_spec_8_p_0(
#line 280 "error_util.m"
  MR_Word parse_tree__error_util__Spec_9,
#line 280 "error_util.m"
  MR_Word parse_tree__error_util__Globals_10,
#line 280 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15,
#line 280 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumWarnings_16,
#line 280 "error_util.m"
  MR_Integer parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17,
#line 280 "error_util.m"
  MR_Integer * parse_tree__error_util__STATE_VARIABLE_NumErrors_18)
#line 280 "error_util.m"
{
#line 880 "error_util.m"
  {
#line 880 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 880 "error_util.m"
    MR_Word parse_tree__error_util__V_23_23;
#line 881 "error_util.m"
    MR_Word parse_tree__error_util__V_14_14;

#line 882 "error_util.m"
    {
#line 882 "error_util.m"
      parse_tree__error_util__V_23_23 = mercury__set__init_0_f_0((MR_Word) &parse_tree__error_util_scalar_common_1[0]);
    }
#line 881 "error_util.m"
    {
#line 881 "error_util.m"
      parse_tree__error_util__do_write_error_spec_10_p_0(parse_tree__error_util__Globals_10, parse_tree__error_util__Spec_9, parse_tree__error_util__STATE_VARIABLE_NumWarnings_0_15, parse_tree__error_util__STATE_VARIABLE_NumWarnings_16, parse_tree__error_util__STATE_VARIABLE_NumErrors_0_17, parse_tree__error_util__STATE_VARIABLE_NumErrors_18, parse_tree__error_util__V_23_23, &parse_tree__error_util__V_14_14);
    }
#line 880 "error_util.m"
  }
#line 280 "error_util.m"
}

#line 257 "error_util.m"
void MR_CALL 
parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(
#line 257 "error_util.m"
  MR_Word parse_tree__error_util__Verbose_7,
#line 257 "error_util.m"
  MR_Word parse_tree__error_util__Globals_8,
#line 257 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_Specs_0_13,
#line 257 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_Specs_14)
#line 257 "error_util.m"
{
#line 857 "error_util.m"
  {
#line 857 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 857 "error_util.m"
#line 857 "error_util.m"
    switch (parse_tree__error_util__Verbose_7) {
#line 857 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 857 "error_util.m"
      case (MR_Integer) 0:
#line 857 "error_util.m"
        *parse_tree__error_util__STATE_VARIABLE_Specs_14 = parse_tree__error_util__STATE_VARIABLE_Specs_0_13;
#line 857 "error_util.m"
        break;
#line 857 "error_util.m"
      case (MR_Integer) 1:
#line 859 "error_util.m"
        {
#line 861 "error_util.m"
          MR_Integer parse_tree__error_util___NumWarnings_11;
#line 861 "error_util.m"
          MR_Integer parse_tree__error_util___NumErrors_12;

#line 861 "error_util.m"
          {
#line 861 "error_util.m"
            parse_tree__error_util__write_error_specs_8_p_0(parse_tree__error_util__STATE_VARIABLE_Specs_0_13, parse_tree__error_util__Globals_8, (MR_Integer) 0, &parse_tree__error_util___NumWarnings_11, (MR_Integer) 0, &parse_tree__error_util___NumErrors_12);
          }
#line 863 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_Specs_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "error_util.m"
        }
#line 857 "error_util.m"
        break;
#line 857 "error_util.m"
    }
#line 857 "error_util.m"
  }
#line 257 "error_util.m"
}

#line 252 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__error_spec_accumulator_to_list_1_f_0(
#line 252 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1)
#line 252 "error_util.m"
{
#line 700 "error_util.m"
  {
#line 700 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 700 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__2_2;

#line 700 "error_util.m"
    if ((parse_tree__error_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "error_util.m"
      parse_tree__error_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "error_util.m"
    else
#line 701 "error_util.m"
      {
#line 701 "error_util.m"
        MR_Word parse_tree__error_util__TypeCtorInfo_7_7;
#line 701 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_3;
#line 701 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_4;
#line 701 "error_util.m"
        MR_Word parse_tree__error_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__HeadVar__1_1, (MR_Integer) 0)));
#line 701 "error_util.m"
        MR_Word parse_tree__error_util__V_6_6;

#line 701 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 0)));
#line 701 "error_util.m"
        parse_tree__error_util__AllModeSpecSet_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_5_5, (MR_Integer) 1)));
#line 19249 "parse_tree.error_util.c"
        parse_tree__error_util__TypeCtorInfo_7_7 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 702 "error_util.m"
        {
#line 702 "error_util.m"
          parse_tree__error_util__V_6_6 = mercury__set__union_2_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__AnyModeSpecSet_3, parse_tree__error_util__AllModeSpecSet_4);
        }
#line 702 "error_util.m"
        {
#line 702 "error_util.m"
          parse_tree__error_util__HeadVar__2_2 = mercury__set__to_sorted_list_1_f_0(parse_tree__error_util__TypeCtorInfo_7_7, parse_tree__error_util__V_6_6);
        }
#line 701 "error_util.m"
      }
#line 700 "error_util.m"
    return parse_tree__error_util__HeadVar__2_2;
#line 700 "error_util.m"
  }
#line 252 "error_util.m"
}

#line 684 "error_util.m"
static MR_bool MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0_1(
#line 684 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 684 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1)
#line 684 "error_util.m"
{
#line 684 "error_util.m"
  {
#line 684 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 684 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;

#line 684 "error_util.m"
    {
#line 684 "error_util.m"
      return parse_tree__error_util__succeeded = parse_tree__error_util__IntroducedFrom__pred__accumulate_error_specs_for_proc__684__1_1_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1));
    }
#line 684 "error_util.m"
    return parse_tree__error_util__succeeded;
#line 684 "error_util.m"
  }
#line 684 "error_util.m"
}

#line 249 "error_util.m"
void MR_CALL 
parse_tree__error_util__accumulate_error_specs_for_proc_3_p_0(
#line 249 "error_util.m"
  MR_Word parse_tree__error_util__ProcSpecs_4,
#line 249 "error_util.m"
  MR_Word parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18,
#line 249 "error_util.m"
  MR_Word * parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19)
#line 249 "error_util.m"
{
#line 683 "error_util.m"
  {
#line 683 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 683 "error_util.m"
    MR_Word parse_tree__error_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 683 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecs_10;
#line 683 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecs_11;
#line 683 "error_util.m"
    MR_Word parse_tree__error_util__ProcAnyModeSpecSet_12;
#line 683 "error_util.m"
    MR_Word parse_tree__error_util__ProcAllModeSpecSet_13;

#line 684 "error_util.m"
    {
#line 684 "error_util.m"
      mercury__list__filter_4_p_0(parse_tree__error_util__TypeCtorInfo_33_33, (MR_Word) &parse_tree__error_util_scalar_common_2[2], parse_tree__error_util__ProcSpecs_4, &parse_tree__error_util__ProcAllModeSpecs_10, &parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 688 "error_util.m"
    {
#line 688 "error_util.m"
      parse_tree__error_util__ProcAnyModeSpecSet_12 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAnyModeSpecs_11);
    }
#line 689 "error_util.m"
    {
#line 689 "error_util.m"
      parse_tree__error_util__ProcAllModeSpecSet_13 = mercury__set__from_list_1_f_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__ProcAllModeSpecs_10);
    }
#line 695 "error_util.m"
    if ((parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "error_util.m"
      {
#line 696 "error_util.m"
        MR_Word parse_tree__error_util__V_24_24;

#line 697 "error_util.m"
        {
#line 697 "error_util.m"
          parse_tree__error_util__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 0) = ((MR_Box) (parse_tree__error_util__ProcAnyModeSpecSet_12));
#line 697 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_24_24, 1) = ((MR_Box) (parse_tree__error_util__ProcAllModeSpecSet_13));
#line 697 "error_util.m"
        }
#line 697 "error_util.m"
        {
#line 697 "error_util.m"
          MR_Word base;
#line 697 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 697 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_24_24));
#line 697 "error_util.m"
        }
#line 696 "error_util.m"
      }
#line 695 "error_util.m"
    else
#line 691 "error_util.m"
      {
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet0_14;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet0_15;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AnyModeSpecSet_16;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__AllModeSpecSet_17;
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_0_18, (MR_Integer) 0)));
#line 691 "error_util.m"
        MR_Word parse_tree__error_util__V_27_27;

#line 691 "error_util.m"
        parse_tree__error_util__AnyModeSpecSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 0)));
#line 691 "error_util.m"
        parse_tree__error_util__AllModeSpecSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__error_util__V_25_25, (MR_Integer) 1)));
#line 692 "error_util.m"
        {
#line 692 "error_util.m"
          mercury__set__union_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AnyModeSpecSet0_14, parse_tree__error_util__ProcAnyModeSpecSet_12, &parse_tree__error_util__AnyModeSpecSet_16);
        }
#line 693 "error_util.m"
        {
#line 693 "error_util.m"
          mercury__set__intersect_3_p_0(parse_tree__error_util__TypeCtorInfo_33_33, parse_tree__error_util__AllModeSpecSet0_15, parse_tree__error_util__ProcAllModeSpecSet_13, &parse_tree__error_util__AllModeSpecSet_17);
        }
#line 694 "error_util.m"
        {
#line 694 "error_util.m"
          parse_tree__error_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 0) = ((MR_Box) (parse_tree__error_util__AnyModeSpecSet_16));
#line 694 "error_util.m"
          MR_hl_field(MR_mktag(0), parse_tree__error_util__V_27_27, 1) = ((MR_Box) (parse_tree__error_util__AllModeSpecSet_17));
#line 694 "error_util.m"
        }
#line 694 "error_util.m"
        {
#line 694 "error_util.m"
          MR_Word base;
#line 694 "error_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 694 "error_util.m"
          *parse_tree__error_util__STATE_VARIABLE_MaybeSpecs_19 = base;
#line 694 "error_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__error_util__V_27_27));
#line 694 "error_util.m"
        }
#line 691 "error_util.m"
      }
#line 683 "error_util.m"
  }
#line 249 "error_util.m"
}

#line 247 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__init_error_spec_accumulator_0_f_0(void)
#line 247 "error_util.m"
{
#line 681 "error_util.m"
  {
#line 681 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 681 "error_util.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 681 "error_util.m"
  }
#line 247 "error_util.m"
}

#line 630 "error_util.m"
static void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0_1(
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__closure_arg,
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_1,
#line 630 "error_util.m"
  MR_Box parse_tree__error_util__wrapper_arg_2,
#line 630 "error_util.m"
  MR_Box * parse_tree__error_util__wrapper_arg_3)
#line 630 "error_util.m"
{
#line 630 "error_util.m"
  {
#line 630 "error_util.m"
    MR_Box parse_tree__error_util__closure = parse_tree__error_util__closure_arg;
#line 630 "error_util.m"
    MR_Word parse_tree__error_util__conv0_Result_6;

#line 630 "error_util.m"
    {
#line 630 "error_util.m"
      parse_tree__error_util__compare_error_msgs_3_p_0(((MR_Word) parse_tree__error_util__wrapper_arg_1), ((MR_Word) parse_tree__error_util__wrapper_arg_2), &parse_tree__error_util__conv0_Result_6);
    }
#line 630 "error_util.m"
    *parse_tree__error_util__wrapper_arg_3 = ((MR_Box) (parse_tree__error_util__conv0_Result_6));
#line 630 "error_util.m"
  }
#line 630 "error_util.m"
}

#line 236 "error_util.m"
void MR_CALL 
parse_tree__error_util__sort_error_msgs_2_p_0(
#line 236 "error_util.m"
  MR_Word parse_tree__error_util__Msgs0_3,
#line 236 "error_util.m"
  MR_Word * parse_tree__error_util__Msgs_4)
#line 236 "error_util.m"
{
#line 629 "error_util.m"
  {
#line 629 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;

#line 630 "error_util.m"
    {
#line 630 "error_util.m"
      mercury__list__sort_and_remove_dups_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, (MR_Word) &parse_tree__error_util_scalar_common_2[1], parse_tree__error_util__Msgs0_3, parse_tree__error_util__Msgs_4);
#line 630 "error_util.m"
      return;
    }
#line 629 "error_util.m"
  }
#line 236 "error_util.m"
}

#line 232 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_and_or_warnings_2_f_0(
#line 232 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 232 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 232 "error_util.m"
{
#line 609 "error_util.m"
  {
#line 609 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 609 "error_util.m"
    MR_Word parse_tree__error_util__ErrorsOrWarnings_6;
#line 609 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 569 "error_util.m"
    {
#line 569 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 614 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "error_util.m"
      parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 614 "error_util.m"
    else
#line 615 "error_util.m"
      {
#line 615 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 621 "error_util.m"
#line 621 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 621 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 621 "error_util.m"
          case (MR_Integer) 0:
#line 621 "error_util.m"
          case (MR_Integer) 1:
#line 620 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 1;
#line 621 "error_util.m"
            break;
#line 621 "error_util.m"
          case (MR_Integer) 2:
#line 623 "error_util.m"
            parse_tree__error_util__ErrorsOrWarnings_6 = (MR_Integer) 0;
#line 621 "error_util.m"
            break;
#line 621 "error_util.m"
        }
#line 615 "error_util.m"
      }
#line 609 "error_util.m"
    return parse_tree__error_util__ErrorsOrWarnings_6;
#line 609 "error_util.m"
  }
#line 232 "error_util.m"
}

#line 227 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__contains_errors_2_f_0(
#line 227 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 227 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 227 "error_util.m"
{
#line 591 "error_util.m"
  {
#line 591 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 591 "error_util.m"
    MR_Word parse_tree__error_util__Errors_6;
#line 591 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorstActual_7;

#line 569 "error_util.m"
    {
#line 569 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorstActual_7);
    }
#line 596 "error_util.m"
    if ((parse_tree__error_util__MaybeWorstActual_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "error_util.m"
      parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 596 "error_util.m"
    else
#line 597 "error_util.m"
      {
#line 597 "error_util.m"
        MR_Word parse_tree__error_util__WorstActual_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeWorstActual_7, (MR_Integer) 0)));

#line 601 "error_util.m"
#line 601 "error_util.m"
        switch (parse_tree__error_util__WorstActual_8) {
#line 601 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 601 "error_util.m"
          case (MR_Integer) 0:
#line 600 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 1;
#line 601 "error_util.m"
            break;
#line 601 "error_util.m"
          case (MR_Integer) 2:
#line 601 "error_util.m"
          case (MR_Integer) 1:
#line 605 "error_util.m"
            parse_tree__error_util__Errors_6 = (MR_Integer) 0;
#line 601 "error_util.m"
            break;
#line 601 "error_util.m"
        }
#line 597 "error_util.m"
      }
#line 591 "error_util.m"
    return parse_tree__error_util__Errors_6;
#line 591 "error_util.m"
  }
#line 227 "error_util.m"
}

#line 221 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_in_specs_2_f_0(
#line 221 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 221 "error_util.m"
  MR_Word parse_tree__error_util__Specs_5)
#line 221 "error_util.m"
{
#line 568 "error_util.m"
  {
#line 568 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 568 "error_util.m"
    MR_Word parse_tree__error_util__MaybeWorst_6;

#line 569 "error_util.m"
    {
#line 569 "error_util.m"
      parse_tree__error_util__worst_severity_in_specs_2_4_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Specs_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__error_util__MaybeWorst_6);
    }
#line 568 "error_util.m"
    return parse_tree__error_util__MaybeWorst_6;
#line 568 "error_util.m"
  }
#line 221 "error_util.m"
}

#line 215 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__actual_error_severity_2_f_0(
#line 215 "error_util.m"
  MR_Word parse_tree__error_util__Globals_4,
#line 215 "error_util.m"
  MR_Word parse_tree__error_util__Severity_5)
#line 215 "error_util.m"
{
#line 543 "error_util.m"
  while (MR_TRUE)
#line 543 "error_util.m"
    {
#line 543 "error_util.m"
      /* tailcall optimized into a loop */
#line 543 "error_util.m"
      {
#line 543 "error_util.m"
        MR_bool parse_tree__error_util__succeeded;
#line 543 "error_util.m"
        MR_Word parse_tree__error_util__MaybeActual_6;

#line 543 "error_util.m"
#line 543 "error_util.m"
        switch (MR_tag((MR_Word) parse_tree__error_util__Severity_5)) {
#line 543 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "error_util.m"
          case (MR_Integer) 0:
#line 543 "error_util.m"
#line 543 "error_util.m"
            switch (MR_unmkbody(parse_tree__error_util__Severity_5)) {
#line 543 "error_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 543 "error_util.m"
              case (MR_Integer) 0:
#line 543 "error_util.m"
                {
#line 544 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[0]);
#line 543 "error_util.m"
                }
#line 543 "error_util.m"
                break;
#line 543 "error_util.m"
              case (MR_Integer) 1:
#line 546 "error_util.m"
                {
#line 547 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[2]);
#line 546 "error_util.m"
                }
#line 543 "error_util.m"
                break;
#line 543 "error_util.m"
              case (MR_Integer) 2:
#line 549 "error_util.m"
                {
#line 550 "error_util.m"
                  parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__error_util_scalar_common_3[1]);
#line 549 "error_util.m"
                }
#line 543 "error_util.m"
                break;
#line 543 "error_util.m"
            }
#line 543 "error_util.m"
            break;
#line 543 "error_util.m"
          case (MR_Integer) 1:
#line 553 "error_util.m"
            {
#line 553 "error_util.m"
              MR_Word parse_tree__error_util__Option_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 0)));
#line 553 "error_util.m"
              MR_Word parse_tree__error_util__MatchValue_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 1)));
#line 553 "error_util.m"
              MR_Word parse_tree__error_util__Match_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 2)));
#line 553 "error_util.m"
              MR_Word parse_tree__error_util__MaybeNoMatch_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__Severity_5, (MR_Integer) 3)));
#line 553 "error_util.m"
              MR_Word parse_tree__error_util__Value_11;

#line 554 "error_util.m"
              {
#line 554 "error_util.m"
                libs__globals__lookup_bool_option_3_p_0(parse_tree__error_util__Globals_4, parse_tree__error_util__Option_7, &parse_tree__error_util__Value_11);
              }
#line 555 "error_util.m"
              parse_tree__error_util__succeeded = (parse_tree__error_util__Value_11 == parse_tree__error_util__MatchValue_8);
#line 557 "error_util.m"
              if (parse_tree__error_util__succeeded)
#line 556 "error_util.m"
                {
#line 556 "error_util.m"
                  /* direct tailcall eliminated */
#line 556 "error_util.m"
                  {
#line 556 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__Match_9;

#line 556 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 556 "error_util.m"
                  }
#line 556 "error_util.m"
                  continue;
#line 556 "error_util.m"
                }
#line 557 "error_util.m"
              else
#line 561 "error_util.m"
              if ((parse_tree__error_util__MaybeNoMatch_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 560 "error_util.m"
                parse_tree__error_util__MaybeActual_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 561 "error_util.m"
              else
#line 562 "error_util.m"
                {
#line 562 "error_util.m"
                  MR_Word parse_tree__error_util__NoMatch_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__error_util__MaybeNoMatch_10, (MR_Integer) 0)));

#line 563 "error_util.m"
                  /* direct tailcall eliminated */
#line 563 "error_util.m"
                  {
#line 563 "error_util.m"
                    MR_Word parse_tree__error_util__Severity__tmp_copy_5 = parse_tree__error_util__NoMatch_12;

#line 563 "error_util.m"
                    parse_tree__error_util__Severity_5 = parse_tree__error_util__Severity__tmp_copy_5;
#line 563 "error_util.m"
                  }
#line 563 "error_util.m"
                  continue;
#line 562 "error_util.m"
                }
#line 553 "error_util.m"
            }
#line 543 "error_util.m"
            break;
#line 543 "error_util.m"
        }
#line 543 "error_util.m"
        return parse_tree__error_util__MaybeActual_6;
#line 543 "error_util.m"
      }
#line 543 "error_util.m"
      break;
#line 543 "error_util.m"
    }
#line 215 "error_util.m"
}

#line 209 "error_util.m"
MR_Word MR_CALL 
parse_tree__error_util__worst_severity_2_f_0(
#line 209 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__1_1,
#line 209 "error_util.m"
  MR_Word parse_tree__error_util__HeadVar__2_2)
#line 209 "error_util.m"
{
#line 522 "error_util.m"
  {
#line 522 "error_util.m"
    MR_bool parse_tree__error_util__succeeded;
#line 522 "error_util.m"
    MR_Word parse_tree__error_util__HeadVar__3_3;

#line 522 "error_util.m"
#line 522 "error_util.m"
    switch (parse_tree__error_util__HeadVar__1_1) {
#line 522 "error_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 522 "error_util.m"
      case (MR_Integer) 0:
#line 522 "error_util.m"
#line 522 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 522 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 522 "error_util.m"
          case (MR_Integer) 0:
#line 523 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 2:
#line 527 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 1:
#line 525 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
        }
#line 522 "error_util.m"
        break;
#line 522 "error_util.m"
      case (MR_Integer) 2:
#line 522 "error_util.m"
#line 522 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 522 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 522 "error_util.m"
          case (MR_Integer) 0:
#line 535 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 2:
#line 539 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 2;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 1:
#line 537 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
        }
#line 522 "error_util.m"
        break;
#line 522 "error_util.m"
      case (MR_Integer) 1:
#line 522 "error_util.m"
#line 522 "error_util.m"
        switch (parse_tree__error_util__HeadVar__2_2) {
#line 522 "error_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 522 "error_util.m"
          case (MR_Integer) 0:
#line 529 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 0;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 2:
#line 533 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
          case (MR_Integer) 1:
#line 531 "error_util.m"
            parse_tree__error_util__HeadVar__3_3 = (MR_Integer) 1;
#line 522 "error_util.m"
            break;
#line 522 "error_util.m"
        }
#line 522 "error_util.m"
        break;
#line 522 "error_util.m"
    }
#line 522 "error_util.m"
    return parse_tree__error_util__HeadVar__3_3;
#line 522 "error_util.m"
  }
#line 209 "error_util.m"
}

#line 202 "error_util.m"
void MR_CALL 
parse_tree__error_util__print_anything_3_p_0(
#line 202 "error_util.m"
  MR_Word parse_tree__error_util__TypeClassInfo_for_print_anything_4,
#line 202 "error_util.m"
  MR_Box parse_tree__error_util__HeadVar__1_1)
#line 202 "error_util.m"
{
#line 19941 "parse_tree.error_util.c"
  {
#line 19943 "parse_tree.error_util.c"
    MR_bool parse_tree__error_util__succeeded;
#line 19945 "parse_tree.error_util.c"
    void MR_CALL (* parse_tree__error_util__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), parse_tree__error_util__TypeClassInfo_for_print_anything_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19947 "parse_tree.error_util.c"
    MR_Box parse_tree__error_util__conv1_HeadVar__3_3;

#line 19950 "parse_tree.error_util.c"
    {
#line 19952 "parse_tree.error_util.c"
      parse_tree__error_util__func_0(((MR_Box) parse_tree__error_util__TypeClassInfo_for_print_anything_4), parse_tree__error_util__HeadVar__1_1, ((MR_Box) ((MR_Integer) 0)), &parse_tree__error_util__conv1_HeadVar__3_3);
    }
#line 19955 "parse_tree.error_util.c"
  }
#line 202 "error_util.m"
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
